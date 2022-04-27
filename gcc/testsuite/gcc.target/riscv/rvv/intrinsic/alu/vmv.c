/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>


/*
** test_vmv_s_x_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf8_t 
test_vmv_s_x_i8mf8(vint8mf8_t dest, int8_t op1, size_t vl)
{
  return vmv_s_x_i8mf8(dest, op1, vl);
}

/*
** test_vmv_s_x_i8mf8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf8_t 
test_vmv_s_x_i8mf8_vl31(vint8mf8_t dest, int8_t op1)
{
  return vmv_s_x_i8mf8(dest, op1, 31);
}

/*
** test_vmv_s_x_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf4_t 
test_vmv_s_x_i8mf4(vint8mf4_t dest, int8_t op1, size_t vl)
{
  return vmv_s_x_i8mf4(dest, op1, vl);
}

/*
** test_vmv_s_x_i8mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf4_t 
test_vmv_s_x_i8mf4_vl31(vint8mf4_t dest, int8_t op1)
{
  return vmv_s_x_i8mf4(dest, op1, 31);
}

/*
** test_vmv_s_x_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf2_t 
test_vmv_s_x_i8mf2(vint8mf2_t dest, int8_t op1, size_t vl)
{
  return vmv_s_x_i8mf2(dest, op1, vl);
}

/*
** test_vmv_s_x_i8mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf2_t 
test_vmv_s_x_i8mf2_vl31(vint8mf2_t dest, int8_t op1)
{
  return vmv_s_x_i8mf2(dest, op1, 31);
}

/*
** test_vmv_s_x_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m1_t 
test_vmv_s_x_i8m1(vint8m1_t dest, int8_t op1, size_t vl)
{
  return vmv_s_x_i8m1(dest, op1, vl);
}

/*
** test_vmv_s_x_i8m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m1_t 
test_vmv_s_x_i8m1_vl31(vint8m1_t dest, int8_t op1)
{
  return vmv_s_x_i8m1(dest, op1, 31);
}

/*
** test_vmv_s_x_i8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m2_t 
test_vmv_s_x_i8m2(vint8m2_t dest, int8_t op1, size_t vl)
{
  return vmv_s_x_i8m2(dest, op1, vl);
}

/*
** test_vmv_s_x_i8m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m2_t 
test_vmv_s_x_i8m2_vl31(vint8m2_t dest, int8_t op1)
{
  return vmv_s_x_i8m2(dest, op1, 31);
}

/*
** test_vmv_s_x_i8m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m4_t 
test_vmv_s_x_i8m4(vint8m4_t dest, int8_t op1, size_t vl)
{
  return vmv_s_x_i8m4(dest, op1, vl);
}

/*
** test_vmv_s_x_i8m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m4_t 
test_vmv_s_x_i8m4_vl31(vint8m4_t dest, int8_t op1)
{
  return vmv_s_x_i8m4(dest, op1, 31);
}

/*
** test_vmv_s_x_i8m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m8_t 
test_vmv_s_x_i8m8(vint8m8_t dest, int8_t op1, size_t vl)
{
  return vmv_s_x_i8m8(dest, op1, vl);
}

/*
** test_vmv_s_x_i8m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m8_t 
test_vmv_s_x_i8m8_vl31(vint8m8_t dest, int8_t op1)
{
  return vmv_s_x_i8m8(dest, op1, 31);
}

/*
** test_vmv_s_x_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf4_t 
test_vmv_s_x_i16mf4(vint16mf4_t dest, int16_t op1, size_t vl)
{
  return vmv_s_x_i16mf4(dest, op1, vl);
}

/*
** test_vmv_s_x_i16mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf4_t 
test_vmv_s_x_i16mf4_vl31(vint16mf4_t dest, int16_t op1)
{
  return vmv_s_x_i16mf4(dest, op1, 31);
}

/*
** test_vmv_s_x_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf2_t 
test_vmv_s_x_i16mf2(vint16mf2_t dest, int16_t op1, size_t vl)
{
  return vmv_s_x_i16mf2(dest, op1, vl);
}

/*
** test_vmv_s_x_i16mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf2_t 
test_vmv_s_x_i16mf2_vl31(vint16mf2_t dest, int16_t op1)
{
  return vmv_s_x_i16mf2(dest, op1, 31);
}

/*
** test_vmv_s_x_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m1_t 
test_vmv_s_x_i16m1(vint16m1_t dest, int16_t op1, size_t vl)
{
  return vmv_s_x_i16m1(dest, op1, vl);
}

/*
** test_vmv_s_x_i16m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m1_t 
test_vmv_s_x_i16m1_vl31(vint16m1_t dest, int16_t op1)
{
  return vmv_s_x_i16m1(dest, op1, 31);
}

/*
** test_vmv_s_x_i16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m2_t 
test_vmv_s_x_i16m2(vint16m2_t dest, int16_t op1, size_t vl)
{
  return vmv_s_x_i16m2(dest, op1, vl);
}

/*
** test_vmv_s_x_i16m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m2_t 
test_vmv_s_x_i16m2_vl31(vint16m2_t dest, int16_t op1)
{
  return vmv_s_x_i16m2(dest, op1, 31);
}

/*
** test_vmv_s_x_i16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m4_t 
test_vmv_s_x_i16m4(vint16m4_t dest, int16_t op1, size_t vl)
{
  return vmv_s_x_i16m4(dest, op1, vl);
}

/*
** test_vmv_s_x_i16m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m4_t 
test_vmv_s_x_i16m4_vl31(vint16m4_t dest, int16_t op1)
{
  return vmv_s_x_i16m4(dest, op1, 31);
}

/*
** test_vmv_s_x_i16m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m8_t 
test_vmv_s_x_i16m8(vint16m8_t dest, int16_t op1, size_t vl)
{
  return vmv_s_x_i16m8(dest, op1, vl);
}

/*
** test_vmv_s_x_i16m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m8_t 
test_vmv_s_x_i16m8_vl31(vint16m8_t dest, int16_t op1)
{
  return vmv_s_x_i16m8(dest, op1, 31);
}

/*
** test_vmv_s_x_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32mf2_t 
test_vmv_s_x_i32mf2(vint32mf2_t dest, int32_t op1, size_t vl)
{
  return vmv_s_x_i32mf2(dest, op1, vl);
}

/*
** test_vmv_s_x_i32mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32mf2_t 
test_vmv_s_x_i32mf2_vl31(vint32mf2_t dest, int32_t op1)
{
  return vmv_s_x_i32mf2(dest, op1, 31);
}

/*
** test_vmv_s_x_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m1_t 
test_vmv_s_x_i32m1(vint32m1_t dest, int32_t op1, size_t vl)
{
  return vmv_s_x_i32m1(dest, op1, vl);
}

/*
** test_vmv_s_x_i32m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m1_t 
test_vmv_s_x_i32m1_vl31(vint32m1_t dest, int32_t op1)
{
  return vmv_s_x_i32m1(dest, op1, 31);
}

/*
** test_vmv_s_x_i32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m2_t 
test_vmv_s_x_i32m2(vint32m2_t dest, int32_t op1, size_t vl)
{
  return vmv_s_x_i32m2(dest, op1, vl);
}

/*
** test_vmv_s_x_i32m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m2_t 
test_vmv_s_x_i32m2_vl31(vint32m2_t dest, int32_t op1)
{
  return vmv_s_x_i32m2(dest, op1, 31);
}

/*
** test_vmv_s_x_i32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m4_t 
test_vmv_s_x_i32m4(vint32m4_t dest, int32_t op1, size_t vl)
{
  return vmv_s_x_i32m4(dest, op1, vl);
}

/*
** test_vmv_s_x_i32m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m4_t 
test_vmv_s_x_i32m4_vl31(vint32m4_t dest, int32_t op1)
{
  return vmv_s_x_i32m4(dest, op1, 31);
}

/*
** test_vmv_s_x_i32m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m8_t 
test_vmv_s_x_i32m8(vint32m8_t dest, int32_t op1, size_t vl)
{
  return vmv_s_x_i32m8(dest, op1, vl);
}

/*
** test_vmv_s_x_i32m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m8_t 
test_vmv_s_x_i32m8_vl31(vint32m8_t dest, int32_t op1)
{
  return vmv_s_x_i32m8(dest, op1, 31);
}

/*
** test_vmv_s_x_i64m1:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m1_t 
test_vmv_s_x_i64m1(vint64m1_t dest, int64_t op1, size_t vl)
{
  return vmv_s_x_i64m1(dest, op1, vl);
}

/*
** test_vmv_s_x_i64m1_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m1_t 
test_vmv_s_x_i64m1_vl31(vint64m1_t dest, int64_t op1)
{
  return vmv_s_x_i64m1(dest, op1, 31);
}

/*
** test_vmv_s_x_i64m2:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m2_t 
test_vmv_s_x_i64m2(vint64m2_t dest, int64_t op1, size_t vl)
{
  return vmv_s_x_i64m2(dest, op1, vl);
}

/*
** test_vmv_s_x_i64m2_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m2_t 
test_vmv_s_x_i64m2_vl31(vint64m2_t dest, int64_t op1)
{
  return vmv_s_x_i64m2(dest, op1, 31);
}

/*
** test_vmv_s_x_i64m4:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m4_t 
test_vmv_s_x_i64m4(vint64m4_t dest, int64_t op1, size_t vl)
{
  return vmv_s_x_i64m4(dest, op1, vl);
}

/*
** test_vmv_s_x_i64m4_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m4_t 
test_vmv_s_x_i64m4_vl31(vint64m4_t dest, int64_t op1)
{
  return vmv_s_x_i64m4(dest, op1, 31);
}

/*
** test_vmv_s_x_i64m8:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m8_t 
test_vmv_s_x_i64m8(vint64m8_t dest, int64_t op1, size_t vl)
{
  return vmv_s_x_i64m8(dest, op1, vl);
}

/*
** test_vmv_s_x_i64m8_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m8_t 
test_vmv_s_x_i64m8_vl31(vint64m8_t dest, int64_t op1)
{
  return vmv_s_x_i64m8(dest, op1, 31);
}

/*
** test_vmv_s_x_i8mf8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf8_t 
test_vmv_s_x_i8mf8_ta(int8_t op1, size_t vl)
{
  return vmv_s_x_i8mf8_ta(op1, vl);
}

/*
** test_vmv_s_x_i8mf8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf8_t 
test_vmv_s_x_i8mf8_ta_vl31(int8_t op1)
{
  return vmv_s_x_i8mf8_ta(op1, 31);
}

/*
** test_vmv_s_x_i8mf4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf4_t 
test_vmv_s_x_i8mf4_ta(int8_t op1, size_t vl)
{
  return vmv_s_x_i8mf4_ta(op1, vl);
}

/*
** test_vmv_s_x_i8mf4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf4_t 
test_vmv_s_x_i8mf4_ta_vl31(int8_t op1)
{
  return vmv_s_x_i8mf4_ta(op1, 31);
}

/*
** test_vmv_s_x_i8mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf2_t 
test_vmv_s_x_i8mf2_ta(int8_t op1, size_t vl)
{
  return vmv_s_x_i8mf2_ta(op1, vl);
}

/*
** test_vmv_s_x_i8mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf2_t 
test_vmv_s_x_i8mf2_ta_vl31(int8_t op1)
{
  return vmv_s_x_i8mf2_ta(op1, 31);
}

/*
** test_vmv_s_x_i8m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m1_t 
test_vmv_s_x_i8m1_ta(int8_t op1, size_t vl)
{
  return vmv_s_x_i8m1_ta(op1, vl);
}

/*
** test_vmv_s_x_i8m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m1_t 
test_vmv_s_x_i8m1_ta_vl31(int8_t op1)
{
  return vmv_s_x_i8m1_ta(op1, 31);
}

/*
** test_vmv_s_x_i8m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m2_t 
test_vmv_s_x_i8m2_ta(int8_t op1, size_t vl)
{
  return vmv_s_x_i8m2_ta(op1, vl);
}

/*
** test_vmv_s_x_i8m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m2_t 
test_vmv_s_x_i8m2_ta_vl31(int8_t op1)
{
  return vmv_s_x_i8m2_ta(op1, 31);
}

/*
** test_vmv_s_x_i8m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m4_t 
test_vmv_s_x_i8m4_ta(int8_t op1, size_t vl)
{
  return vmv_s_x_i8m4_ta(op1, vl);
}

/*
** test_vmv_s_x_i8m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m4_t 
test_vmv_s_x_i8m4_ta_vl31(int8_t op1)
{
  return vmv_s_x_i8m4_ta(op1, 31);
}

/*
** test_vmv_s_x_i8m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m8_t 
test_vmv_s_x_i8m8_ta(int8_t op1, size_t vl)
{
  return vmv_s_x_i8m8_ta(op1, vl);
}

/*
** test_vmv_s_x_i8m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m8_t 
test_vmv_s_x_i8m8_ta_vl31(int8_t op1)
{
  return vmv_s_x_i8m8_ta(op1, 31);
}

/*
** test_vmv_s_x_i16mf4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf4_t 
test_vmv_s_x_i16mf4_ta(int16_t op1, size_t vl)
{
  return vmv_s_x_i16mf4_ta(op1, vl);
}

/*
** test_vmv_s_x_i16mf4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf4_t 
test_vmv_s_x_i16mf4_ta_vl31(int16_t op1)
{
  return vmv_s_x_i16mf4_ta(op1, 31);
}

/*
** test_vmv_s_x_i16mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf2_t 
test_vmv_s_x_i16mf2_ta(int16_t op1, size_t vl)
{
  return vmv_s_x_i16mf2_ta(op1, vl);
}

/*
** test_vmv_s_x_i16mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf2_t 
test_vmv_s_x_i16mf2_ta_vl31(int16_t op1)
{
  return vmv_s_x_i16mf2_ta(op1, 31);
}

/*
** test_vmv_s_x_i16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m1_t 
test_vmv_s_x_i16m1_ta(int16_t op1, size_t vl)
{
  return vmv_s_x_i16m1_ta(op1, vl);
}

/*
** test_vmv_s_x_i16m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m1_t 
test_vmv_s_x_i16m1_ta_vl31(int16_t op1)
{
  return vmv_s_x_i16m1_ta(op1, 31);
}

/*
** test_vmv_s_x_i16m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m2_t 
test_vmv_s_x_i16m2_ta(int16_t op1, size_t vl)
{
  return vmv_s_x_i16m2_ta(op1, vl);
}

/*
** test_vmv_s_x_i16m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m2_t 
test_vmv_s_x_i16m2_ta_vl31(int16_t op1)
{
  return vmv_s_x_i16m2_ta(op1, 31);
}

/*
** test_vmv_s_x_i16m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m4_t 
test_vmv_s_x_i16m4_ta(int16_t op1, size_t vl)
{
  return vmv_s_x_i16m4_ta(op1, vl);
}

/*
** test_vmv_s_x_i16m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m4_t 
test_vmv_s_x_i16m4_ta_vl31(int16_t op1)
{
  return vmv_s_x_i16m4_ta(op1, 31);
}

/*
** test_vmv_s_x_i16m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m8_t 
test_vmv_s_x_i16m8_ta(int16_t op1, size_t vl)
{
  return vmv_s_x_i16m8_ta(op1, vl);
}

/*
** test_vmv_s_x_i16m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m8_t 
test_vmv_s_x_i16m8_ta_vl31(int16_t op1)
{
  return vmv_s_x_i16m8_ta(op1, 31);
}

/*
** test_vmv_s_x_i32mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32mf2_t 
test_vmv_s_x_i32mf2_ta(int32_t op1, size_t vl)
{
  return vmv_s_x_i32mf2_ta(op1, vl);
}

/*
** test_vmv_s_x_i32mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32mf2_t 
test_vmv_s_x_i32mf2_ta_vl31(int32_t op1)
{
  return vmv_s_x_i32mf2_ta(op1, 31);
}

/*
** test_vmv_s_x_i32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m1_t 
test_vmv_s_x_i32m1_ta(int32_t op1, size_t vl)
{
  return vmv_s_x_i32m1_ta(op1, vl);
}

/*
** test_vmv_s_x_i32m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m1_t 
test_vmv_s_x_i32m1_ta_vl31(int32_t op1)
{
  return vmv_s_x_i32m1_ta(op1, 31);
}

/*
** test_vmv_s_x_i32m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m2_t 
test_vmv_s_x_i32m2_ta(int32_t op1, size_t vl)
{
  return vmv_s_x_i32m2_ta(op1, vl);
}

/*
** test_vmv_s_x_i32m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m2_t 
test_vmv_s_x_i32m2_ta_vl31(int32_t op1)
{
  return vmv_s_x_i32m2_ta(op1, 31);
}

/*
** test_vmv_s_x_i32m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m4_t 
test_vmv_s_x_i32m4_ta(int32_t op1, size_t vl)
{
  return vmv_s_x_i32m4_ta(op1, vl);
}

/*
** test_vmv_s_x_i32m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m4_t 
test_vmv_s_x_i32m4_ta_vl31(int32_t op1)
{
  return vmv_s_x_i32m4_ta(op1, 31);
}

/*
** test_vmv_s_x_i32m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m8_t 
test_vmv_s_x_i32m8_ta(int32_t op1, size_t vl)
{
  return vmv_s_x_i32m8_ta(op1, vl);
}

/*
** test_vmv_s_x_i32m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m8_t 
test_vmv_s_x_i32m8_ta_vl31(int32_t op1)
{
  return vmv_s_x_i32m8_ta(op1, 31);
}

/*
** test_vmv_s_x_i64m1_ta:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m1_t 
test_vmv_s_x_i64m1_ta(int64_t op1, size_t vl)
{
  return vmv_s_x_i64m1_ta(op1, vl);
}

/*
** test_vmv_s_x_i64m1_ta_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m1_t 
test_vmv_s_x_i64m1_ta_vl31(int64_t op1)
{
  return vmv_s_x_i64m1_ta(op1, 31);
}

/*
** test_vmv_s_x_i64m2_ta:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m2_t 
test_vmv_s_x_i64m2_ta(int64_t op1, size_t vl)
{
  return vmv_s_x_i64m2_ta(op1, vl);
}

/*
** test_vmv_s_x_i64m2_ta_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m2_t 
test_vmv_s_x_i64m2_ta_vl31(int64_t op1)
{
  return vmv_s_x_i64m2_ta(op1, 31);
}

/*
** test_vmv_s_x_i64m4_ta:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m4_t 
test_vmv_s_x_i64m4_ta(int64_t op1, size_t vl)
{
  return vmv_s_x_i64m4_ta(op1, vl);
}

/*
** test_vmv_s_x_i64m4_ta_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m4_t 
test_vmv_s_x_i64m4_ta_vl31(int64_t op1)
{
  return vmv_s_x_i64m4_ta(op1, 31);
}

/*
** test_vmv_s_x_i64m8_ta:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m8_t 
test_vmv_s_x_i64m8_ta(int64_t op1, size_t vl)
{
  return vmv_s_x_i64m8_ta(op1, vl);
}

/*
** test_vmv_s_x_i64m8_ta_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m8_t 
test_vmv_s_x_i64m8_ta_vl31(int64_t op1)
{
  return vmv_s_x_i64m8_ta(op1, 31);
}

/*
** test_vmv_s_x_i8mf8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf8_t 
test_vmv_s_x_i8mf8_tu(vint8mf8_t dest, int8_t op1, size_t vl)
{
  return vmv_s_x_i8mf8_tu(dest, op1, vl);
}

/*
** test_vmv_s_x_i8mf8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf8_t 
test_vmv_s_x_i8mf8_tu_vl31(vint8mf8_t dest, int8_t op1)
{
  return vmv_s_x_i8mf8_tu(dest, op1, 31);
}

/*
** test_vmv_s_x_i8mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf4_t 
test_vmv_s_x_i8mf4_tu(vint8mf4_t dest, int8_t op1, size_t vl)
{
  return vmv_s_x_i8mf4_tu(dest, op1, vl);
}

/*
** test_vmv_s_x_i8mf4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf4_t 
test_vmv_s_x_i8mf4_tu_vl31(vint8mf4_t dest, int8_t op1)
{
  return vmv_s_x_i8mf4_tu(dest, op1, 31);
}

/*
** test_vmv_s_x_i8mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf2_t 
test_vmv_s_x_i8mf2_tu(vint8mf2_t dest, int8_t op1, size_t vl)
{
  return vmv_s_x_i8mf2_tu(dest, op1, vl);
}

/*
** test_vmv_s_x_i8mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf2_t 
test_vmv_s_x_i8mf2_tu_vl31(vint8mf2_t dest, int8_t op1)
{
  return vmv_s_x_i8mf2_tu(dest, op1, 31);
}

/*
** test_vmv_s_x_i8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m1_t 
test_vmv_s_x_i8m1_tu(vint8m1_t dest, int8_t op1, size_t vl)
{
  return vmv_s_x_i8m1_tu(dest, op1, vl);
}

/*
** test_vmv_s_x_i8m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m1_t 
test_vmv_s_x_i8m1_tu_vl31(vint8m1_t dest, int8_t op1)
{
  return vmv_s_x_i8m1_tu(dest, op1, 31);
}

/*
** test_vmv_s_x_i8m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m2_t 
test_vmv_s_x_i8m2_tu(vint8m2_t dest, int8_t op1, size_t vl)
{
  return vmv_s_x_i8m2_tu(dest, op1, vl);
}

/*
** test_vmv_s_x_i8m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m2_t 
test_vmv_s_x_i8m2_tu_vl31(vint8m2_t dest, int8_t op1)
{
  return vmv_s_x_i8m2_tu(dest, op1, 31);
}

/*
** test_vmv_s_x_i8m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m4_t 
test_vmv_s_x_i8m4_tu(vint8m4_t dest, int8_t op1, size_t vl)
{
  return vmv_s_x_i8m4_tu(dest, op1, vl);
}

/*
** test_vmv_s_x_i8m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m4_t 
test_vmv_s_x_i8m4_tu_vl31(vint8m4_t dest, int8_t op1)
{
  return vmv_s_x_i8m4_tu(dest, op1, 31);
}

/*
** test_vmv_s_x_i8m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m8_t 
test_vmv_s_x_i8m8_tu(vint8m8_t dest, int8_t op1, size_t vl)
{
  return vmv_s_x_i8m8_tu(dest, op1, vl);
}

/*
** test_vmv_s_x_i8m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m8_t 
test_vmv_s_x_i8m8_tu_vl31(vint8m8_t dest, int8_t op1)
{
  return vmv_s_x_i8m8_tu(dest, op1, 31);
}

/*
** test_vmv_s_x_i16mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf4_t 
test_vmv_s_x_i16mf4_tu(vint16mf4_t dest, int16_t op1, size_t vl)
{
  return vmv_s_x_i16mf4_tu(dest, op1, vl);
}

/*
** test_vmv_s_x_i16mf4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf4_t 
test_vmv_s_x_i16mf4_tu_vl31(vint16mf4_t dest, int16_t op1)
{
  return vmv_s_x_i16mf4_tu(dest, op1, 31);
}

/*
** test_vmv_s_x_i16mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf2_t 
test_vmv_s_x_i16mf2_tu(vint16mf2_t dest, int16_t op1, size_t vl)
{
  return vmv_s_x_i16mf2_tu(dest, op1, vl);
}

/*
** test_vmv_s_x_i16mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf2_t 
test_vmv_s_x_i16mf2_tu_vl31(vint16mf2_t dest, int16_t op1)
{
  return vmv_s_x_i16mf2_tu(dest, op1, 31);
}

/*
** test_vmv_s_x_i16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m1_t 
test_vmv_s_x_i16m1_tu(vint16m1_t dest, int16_t op1, size_t vl)
{
  return vmv_s_x_i16m1_tu(dest, op1, vl);
}

/*
** test_vmv_s_x_i16m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m1_t 
test_vmv_s_x_i16m1_tu_vl31(vint16m1_t dest, int16_t op1)
{
  return vmv_s_x_i16m1_tu(dest, op1, 31);
}

/*
** test_vmv_s_x_i16m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m2_t 
test_vmv_s_x_i16m2_tu(vint16m2_t dest, int16_t op1, size_t vl)
{
  return vmv_s_x_i16m2_tu(dest, op1, vl);
}

/*
** test_vmv_s_x_i16m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m2_t 
test_vmv_s_x_i16m2_tu_vl31(vint16m2_t dest, int16_t op1)
{
  return vmv_s_x_i16m2_tu(dest, op1, 31);
}

/*
** test_vmv_s_x_i16m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m4_t 
test_vmv_s_x_i16m4_tu(vint16m4_t dest, int16_t op1, size_t vl)
{
  return vmv_s_x_i16m4_tu(dest, op1, vl);
}

/*
** test_vmv_s_x_i16m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m4_t 
test_vmv_s_x_i16m4_tu_vl31(vint16m4_t dest, int16_t op1)
{
  return vmv_s_x_i16m4_tu(dest, op1, 31);
}

/*
** test_vmv_s_x_i16m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m8_t 
test_vmv_s_x_i16m8_tu(vint16m8_t dest, int16_t op1, size_t vl)
{
  return vmv_s_x_i16m8_tu(dest, op1, vl);
}

/*
** test_vmv_s_x_i16m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m8_t 
test_vmv_s_x_i16m8_tu_vl31(vint16m8_t dest, int16_t op1)
{
  return vmv_s_x_i16m8_tu(dest, op1, 31);
}

/*
** test_vmv_s_x_i32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32mf2_t 
test_vmv_s_x_i32mf2_tu(vint32mf2_t dest, int32_t op1, size_t vl)
{
  return vmv_s_x_i32mf2_tu(dest, op1, vl);
}

/*
** test_vmv_s_x_i32mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32mf2_t 
test_vmv_s_x_i32mf2_tu_vl31(vint32mf2_t dest, int32_t op1)
{
  return vmv_s_x_i32mf2_tu(dest, op1, 31);
}

/*
** test_vmv_s_x_i32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m1_t 
test_vmv_s_x_i32m1_tu(vint32m1_t dest, int32_t op1, size_t vl)
{
  return vmv_s_x_i32m1_tu(dest, op1, vl);
}

/*
** test_vmv_s_x_i32m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m1_t 
test_vmv_s_x_i32m1_tu_vl31(vint32m1_t dest, int32_t op1)
{
  return vmv_s_x_i32m1_tu(dest, op1, 31);
}

/*
** test_vmv_s_x_i32m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m2_t 
test_vmv_s_x_i32m2_tu(vint32m2_t dest, int32_t op1, size_t vl)
{
  return vmv_s_x_i32m2_tu(dest, op1, vl);
}

/*
** test_vmv_s_x_i32m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m2_t 
test_vmv_s_x_i32m2_tu_vl31(vint32m2_t dest, int32_t op1)
{
  return vmv_s_x_i32m2_tu(dest, op1, 31);
}

/*
** test_vmv_s_x_i32m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m4_t 
test_vmv_s_x_i32m4_tu(vint32m4_t dest, int32_t op1, size_t vl)
{
  return vmv_s_x_i32m4_tu(dest, op1, vl);
}

/*
** test_vmv_s_x_i32m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m4_t 
test_vmv_s_x_i32m4_tu_vl31(vint32m4_t dest, int32_t op1)
{
  return vmv_s_x_i32m4_tu(dest, op1, 31);
}

/*
** test_vmv_s_x_i32m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m8_t 
test_vmv_s_x_i32m8_tu(vint32m8_t dest, int32_t op1, size_t vl)
{
  return vmv_s_x_i32m8_tu(dest, op1, vl);
}

/*
** test_vmv_s_x_i32m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m8_t 
test_vmv_s_x_i32m8_tu_vl31(vint32m8_t dest, int32_t op1)
{
  return vmv_s_x_i32m8_tu(dest, op1, 31);
}

/*
** test_vmv_s_x_i64m1_tu:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m1_t 
test_vmv_s_x_i64m1_tu(vint64m1_t dest, int64_t op1, size_t vl)
{
  return vmv_s_x_i64m1_tu(dest, op1, vl);
}

/*
** test_vmv_s_x_i64m1_tu_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m1_t 
test_vmv_s_x_i64m1_tu_vl31(vint64m1_t dest, int64_t op1)
{
  return vmv_s_x_i64m1_tu(dest, op1, 31);
}

/*
** test_vmv_s_x_i64m2_tu:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m2_t 
test_vmv_s_x_i64m2_tu(vint64m2_t dest, int64_t op1, size_t vl)
{
  return vmv_s_x_i64m2_tu(dest, op1, vl);
}

/*
** test_vmv_s_x_i64m2_tu_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m2_t 
test_vmv_s_x_i64m2_tu_vl31(vint64m2_t dest, int64_t op1)
{
  return vmv_s_x_i64m2_tu(dest, op1, 31);
}

/*
** test_vmv_s_x_i64m4_tu:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m4_t 
test_vmv_s_x_i64m4_tu(vint64m4_t dest, int64_t op1, size_t vl)
{
  return vmv_s_x_i64m4_tu(dest, op1, vl);
}

/*
** test_vmv_s_x_i64m4_tu_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m4_t 
test_vmv_s_x_i64m4_tu_vl31(vint64m4_t dest, int64_t op1)
{
  return vmv_s_x_i64m4_tu(dest, op1, 31);
}

/*
** test_vmv_s_x_i64m8_tu:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m8_t 
test_vmv_s_x_i64m8_tu(vint64m8_t dest, int64_t op1, size_t vl)
{
  return vmv_s_x_i64m8_tu(dest, op1, vl);
}

/*
** test_vmv_s_x_i64m8_tu_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m8_t 
test_vmv_s_x_i64m8_tu_vl31(vint64m8_t dest, int64_t op1)
{
  return vmv_s_x_i64m8_tu(dest, op1, 31);
}

/*
** test_vmv_s_x_i8mf8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf8_t 
test_vmv_s_x_i8mf8_ta_vl32(int8_t op1)
{
  return vmv_s_x_i8mf8_ta(op1, 32);
}

/*
** test_vmv_s_x_i8mf4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf4_t 
test_vmv_s_x_i8mf4_ta_vl32(int8_t op1)
{
  return vmv_s_x_i8mf4_ta(op1, 32);
}

/*
** test_vmv_s_x_i8mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf2_t 
test_vmv_s_x_i8mf2_ta_vl32(int8_t op1)
{
  return vmv_s_x_i8mf2_ta(op1, 32);
}

/*
** test_vmv_s_x_i8m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m1_t 
test_vmv_s_x_i8m1_ta_vl32(int8_t op1)
{
  return vmv_s_x_i8m1_ta(op1, 32);
}

/*
** test_vmv_s_x_i8m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m2_t 
test_vmv_s_x_i8m2_ta_vl32(int8_t op1)
{
  return vmv_s_x_i8m2_ta(op1, 32);
}

/*
** test_vmv_s_x_i8m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m4_t 
test_vmv_s_x_i8m4_ta_vl32(int8_t op1)
{
  return vmv_s_x_i8m4_ta(op1, 32);
}

/*
** test_vmv_s_x_i8m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m8_t 
test_vmv_s_x_i8m8_ta_vl32(int8_t op1)
{
  return vmv_s_x_i8m8_ta(op1, 32);
}

/*
** test_vmv_s_x_i16mf4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf4_t 
test_vmv_s_x_i16mf4_ta_vl32(int16_t op1)
{
  return vmv_s_x_i16mf4_ta(op1, 32);
}

/*
** test_vmv_s_x_i16mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf2_t 
test_vmv_s_x_i16mf2_ta_vl32(int16_t op1)
{
  return vmv_s_x_i16mf2_ta(op1, 32);
}

/*
** test_vmv_s_x_i16m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m1_t 
test_vmv_s_x_i16m1_ta_vl32(int16_t op1)
{
  return vmv_s_x_i16m1_ta(op1, 32);
}

/*
** test_vmv_s_x_i16m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m2_t 
test_vmv_s_x_i16m2_ta_vl32(int16_t op1)
{
  return vmv_s_x_i16m2_ta(op1, 32);
}

/*
** test_vmv_s_x_i16m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m4_t 
test_vmv_s_x_i16m4_ta_vl32(int16_t op1)
{
  return vmv_s_x_i16m4_ta(op1, 32);
}

/*
** test_vmv_s_x_i16m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m8_t 
test_vmv_s_x_i16m8_ta_vl32(int16_t op1)
{
  return vmv_s_x_i16m8_ta(op1, 32);
}

/*
** test_vmv_s_x_i32mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32mf2_t 
test_vmv_s_x_i32mf2_ta_vl32(int32_t op1)
{
  return vmv_s_x_i32mf2_ta(op1, 32);
}

/*
** test_vmv_s_x_i32m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m1_t 
test_vmv_s_x_i32m1_ta_vl32(int32_t op1)
{
  return vmv_s_x_i32m1_ta(op1, 32);
}

/*
** test_vmv_s_x_i32m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m2_t 
test_vmv_s_x_i32m2_ta_vl32(int32_t op1)
{
  return vmv_s_x_i32m2_ta(op1, 32);
}

/*
** test_vmv_s_x_i32m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m4_t 
test_vmv_s_x_i32m4_ta_vl32(int32_t op1)
{
  return vmv_s_x_i32m4_ta(op1, 32);
}

/*
** test_vmv_s_x_i32m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m8_t 
test_vmv_s_x_i32m8_ta_vl32(int32_t op1)
{
  return vmv_s_x_i32m8_ta(op1, 32);
}

/*
** test_vmv_s_x_i64m1_ta_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m1_t 
test_vmv_s_x_i64m1_ta_vl32(int64_t op1)
{
  return vmv_s_x_i64m1_ta(op1, 32);
}

/*
** test_vmv_s_x_i64m2_ta_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m2_t 
test_vmv_s_x_i64m2_ta_vl32(int64_t op1)
{
  return vmv_s_x_i64m2_ta(op1, 32);
}

/*
** test_vmv_s_x_i64m4_ta_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m4_t 
test_vmv_s_x_i64m4_ta_vl32(int64_t op1)
{
  return vmv_s_x_i64m4_ta(op1, 32);
}

/*
** test_vmv_s_x_i64m8_ta_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m8_t 
test_vmv_s_x_i64m8_ta_vl32(int64_t op1)
{
  return vmv_s_x_i64m8_ta(op1, 32);
}

/*
** test_vmv_s_x_i8mf8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf8_t 
test_vmv_s_x_i8mf8_tu_vl32(vint8mf8_t dest, int8_t op1)
{
  return vmv_s_x_i8mf8_tu(dest, op1, 32);
}

/*
** test_vmv_s_x_i8mf4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf4_t 
test_vmv_s_x_i8mf4_tu_vl32(vint8mf4_t dest, int8_t op1)
{
  return vmv_s_x_i8mf4_tu(dest, op1, 32);
}

/*
** test_vmv_s_x_i8mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf2_t 
test_vmv_s_x_i8mf2_tu_vl32(vint8mf2_t dest, int8_t op1)
{
  return vmv_s_x_i8mf2_tu(dest, op1, 32);
}

/*
** test_vmv_s_x_i8m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m1_t 
test_vmv_s_x_i8m1_tu_vl32(vint8m1_t dest, int8_t op1)
{
  return vmv_s_x_i8m1_tu(dest, op1, 32);
}

/*
** test_vmv_s_x_i8m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m2_t 
test_vmv_s_x_i8m2_tu_vl32(vint8m2_t dest, int8_t op1)
{
  return vmv_s_x_i8m2_tu(dest, op1, 32);
}

/*
** test_vmv_s_x_i8m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m4_t 
test_vmv_s_x_i8m4_tu_vl32(vint8m4_t dest, int8_t op1)
{
  return vmv_s_x_i8m4_tu(dest, op1, 32);
}

/*
** test_vmv_s_x_i8m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m8_t 
test_vmv_s_x_i8m8_tu_vl32(vint8m8_t dest, int8_t op1)
{
  return vmv_s_x_i8m8_tu(dest, op1, 32);
}

/*
** test_vmv_s_x_i16mf4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf4_t 
test_vmv_s_x_i16mf4_tu_vl32(vint16mf4_t dest, int16_t op1)
{
  return vmv_s_x_i16mf4_tu(dest, op1, 32);
}

/*
** test_vmv_s_x_i16mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf2_t 
test_vmv_s_x_i16mf2_tu_vl32(vint16mf2_t dest, int16_t op1)
{
  return vmv_s_x_i16mf2_tu(dest, op1, 32);
}

/*
** test_vmv_s_x_i16m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m1_t 
test_vmv_s_x_i16m1_tu_vl32(vint16m1_t dest, int16_t op1)
{
  return vmv_s_x_i16m1_tu(dest, op1, 32);
}

/*
** test_vmv_s_x_i16m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m2_t 
test_vmv_s_x_i16m2_tu_vl32(vint16m2_t dest, int16_t op1)
{
  return vmv_s_x_i16m2_tu(dest, op1, 32);
}

/*
** test_vmv_s_x_i16m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m4_t 
test_vmv_s_x_i16m4_tu_vl32(vint16m4_t dest, int16_t op1)
{
  return vmv_s_x_i16m4_tu(dest, op1, 32);
}

/*
** test_vmv_s_x_i16m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m8_t 
test_vmv_s_x_i16m8_tu_vl32(vint16m8_t dest, int16_t op1)
{
  return vmv_s_x_i16m8_tu(dest, op1, 32);
}

/*
** test_vmv_s_x_i32mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32mf2_t 
test_vmv_s_x_i32mf2_tu_vl32(vint32mf2_t dest, int32_t op1)
{
  return vmv_s_x_i32mf2_tu(dest, op1, 32);
}

/*
** test_vmv_s_x_i32m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m1_t 
test_vmv_s_x_i32m1_tu_vl32(vint32m1_t dest, int32_t op1)
{
  return vmv_s_x_i32m1_tu(dest, op1, 32);
}

/*
** test_vmv_s_x_i32m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m2_t 
test_vmv_s_x_i32m2_tu_vl32(vint32m2_t dest, int32_t op1)
{
  return vmv_s_x_i32m2_tu(dest, op1, 32);
}

/*
** test_vmv_s_x_i32m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m4_t 
test_vmv_s_x_i32m4_tu_vl32(vint32m4_t dest, int32_t op1)
{
  return vmv_s_x_i32m4_tu(dest, op1, 32);
}

/*
** test_vmv_s_x_i32m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m8_t 
test_vmv_s_x_i32m8_tu_vl32(vint32m8_t dest, int32_t op1)
{
  return vmv_s_x_i32m8_tu(dest, op1, 32);
}

/*
** test_vmv_s_x_i64m1_tu_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m1_t 
test_vmv_s_x_i64m1_tu_vl32(vint64m1_t dest, int64_t op1)
{
  return vmv_s_x_i64m1_tu(dest, op1, 32);
}

/*
** test_vmv_s_x_i64m2_tu_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m2_t 
test_vmv_s_x_i64m2_tu_vl32(vint64m2_t dest, int64_t op1)
{
  return vmv_s_x_i64m2_tu(dest, op1, 32);
}

/*
** test_vmv_s_x_i64m4_tu_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m4_t 
test_vmv_s_x_i64m4_tu_vl32(vint64m4_t dest, int64_t op1)
{
  return vmv_s_x_i64m4_tu(dest, op1, 32);
}

/*
** test_vmv_s_x_i64m8_tu_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m8_t 
test_vmv_s_x_i64m8_tu_vl32(vint64m8_t dest, int64_t op1)
{
  return vmv_s_x_i64m8_tu(dest, op1, 32);
}

/*
** test_vmv_s_x_i8mf8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf8_t 
test_vmv_s_x_i8mf8_vl32(vint8mf8_t dest, int8_t op1)
{
  return vmv_s_x_i8mf8(dest, op1, 32);
}

/*
** test_vmv_s_x_i8mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf4_t 
test_vmv_s_x_i8mf4_vl32(vint8mf4_t dest, int8_t op1)
{
  return vmv_s_x_i8mf4(dest, op1, 32);
}

/*
** test_vmv_s_x_i8mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf2_t 
test_vmv_s_x_i8mf2_vl32(vint8mf2_t dest, int8_t op1)
{
  return vmv_s_x_i8mf2(dest, op1, 32);
}

/*
** test_vmv_s_x_i8m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m1_t 
test_vmv_s_x_i8m1_vl32(vint8m1_t dest, int8_t op1)
{
  return vmv_s_x_i8m1(dest, op1, 32);
}

/*
** test_vmv_s_x_i8m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m2_t 
test_vmv_s_x_i8m2_vl32(vint8m2_t dest, int8_t op1)
{
  return vmv_s_x_i8m2(dest, op1, 32);
}

/*
** test_vmv_s_x_i8m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m4_t 
test_vmv_s_x_i8m4_vl32(vint8m4_t dest, int8_t op1)
{
  return vmv_s_x_i8m4(dest, op1, 32);
}

/*
** test_vmv_s_x_i8m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m8_t 
test_vmv_s_x_i8m8_vl32(vint8m8_t dest, int8_t op1)
{
  return vmv_s_x_i8m8(dest, op1, 32);
}

/*
** test_vmv_s_x_i16mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf4_t 
test_vmv_s_x_i16mf4_vl32(vint16mf4_t dest, int16_t op1)
{
  return vmv_s_x_i16mf4(dest, op1, 32);
}

/*
** test_vmv_s_x_i16mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf2_t 
test_vmv_s_x_i16mf2_vl32(vint16mf2_t dest, int16_t op1)
{
  return vmv_s_x_i16mf2(dest, op1, 32);
}

/*
** test_vmv_s_x_i16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m1_t 
test_vmv_s_x_i16m1_vl32(vint16m1_t dest, int16_t op1)
{
  return vmv_s_x_i16m1(dest, op1, 32);
}

/*
** test_vmv_s_x_i16m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m2_t 
test_vmv_s_x_i16m2_vl32(vint16m2_t dest, int16_t op1)
{
  return vmv_s_x_i16m2(dest, op1, 32);
}

/*
** test_vmv_s_x_i16m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m4_t 
test_vmv_s_x_i16m4_vl32(vint16m4_t dest, int16_t op1)
{
  return vmv_s_x_i16m4(dest, op1, 32);
}

/*
** test_vmv_s_x_i16m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m8_t 
test_vmv_s_x_i16m8_vl32(vint16m8_t dest, int16_t op1)
{
  return vmv_s_x_i16m8(dest, op1, 32);
}

/*
** test_vmv_s_x_i32mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32mf2_t 
test_vmv_s_x_i32mf2_vl32(vint32mf2_t dest, int32_t op1)
{
  return vmv_s_x_i32mf2(dest, op1, 32);
}

/*
** test_vmv_s_x_i32m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m1_t 
test_vmv_s_x_i32m1_vl32(vint32m1_t dest, int32_t op1)
{
  return vmv_s_x_i32m1(dest, op1, 32);
}

/*
** test_vmv_s_x_i32m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m2_t 
test_vmv_s_x_i32m2_vl32(vint32m2_t dest, int32_t op1)
{
  return vmv_s_x_i32m2(dest, op1, 32);
}

/*
** test_vmv_s_x_i32m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m4_t 
test_vmv_s_x_i32m4_vl32(vint32m4_t dest, int32_t op1)
{
  return vmv_s_x_i32m4(dest, op1, 32);
}

/*
** test_vmv_s_x_i32m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m8_t 
test_vmv_s_x_i32m8_vl32(vint32m8_t dest, int32_t op1)
{
  return vmv_s_x_i32m8(dest, op1, 32);
}

/*
** test_vmv_s_x_i64m1_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m1_t 
test_vmv_s_x_i64m1_vl32(vint64m1_t dest, int64_t op1)
{
  return vmv_s_x_i64m1(dest, op1, 32);
}

/*
** test_vmv_s_x_i64m2_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m2_t 
test_vmv_s_x_i64m2_vl32(vint64m2_t dest, int64_t op1)
{
  return vmv_s_x_i64m2(dest, op1, 32);
}

/*
** test_vmv_s_x_i64m4_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m4_t 
test_vmv_s_x_i64m4_vl32(vint64m4_t dest, int64_t op1)
{
  return vmv_s_x_i64m4(dest, op1, 32);
}

/*
** test_vmv_s_x_i64m8_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m8_t 
test_vmv_s_x_i64m8_vl32(vint64m8_t dest, int64_t op1)
{
  return vmv_s_x_i64m8(dest, op1, 32);
}

/*
** test_vmv_s_x_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf8_t 
test_vmv_s_x_u8mf8(vuint8mf8_t dest, uint8_t op1, size_t vl)
{
  return vmv_s_x_u8mf8(dest, op1, vl);
}

/*
** test_vmv_s_x_u8mf8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf8_t 
test_vmv_s_x_u8mf8_vl31(vuint8mf8_t dest, uint8_t op1)
{
  return vmv_s_x_u8mf8(dest, op1, 31);
}

/*
** test_vmv_s_x_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf4_t 
test_vmv_s_x_u8mf4(vuint8mf4_t dest, uint8_t op1, size_t vl)
{
  return vmv_s_x_u8mf4(dest, op1, vl);
}

/*
** test_vmv_s_x_u8mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf4_t 
test_vmv_s_x_u8mf4_vl31(vuint8mf4_t dest, uint8_t op1)
{
  return vmv_s_x_u8mf4(dest, op1, 31);
}

/*
** test_vmv_s_x_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf2_t 
test_vmv_s_x_u8mf2(vuint8mf2_t dest, uint8_t op1, size_t vl)
{
  return vmv_s_x_u8mf2(dest, op1, vl);
}

/*
** test_vmv_s_x_u8mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf2_t 
test_vmv_s_x_u8mf2_vl31(vuint8mf2_t dest, uint8_t op1)
{
  return vmv_s_x_u8mf2(dest, op1, 31);
}

/*
** test_vmv_s_x_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m1_t 
test_vmv_s_x_u8m1(vuint8m1_t dest, uint8_t op1, size_t vl)
{
  return vmv_s_x_u8m1(dest, op1, vl);
}

/*
** test_vmv_s_x_u8m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m1_t 
test_vmv_s_x_u8m1_vl31(vuint8m1_t dest, uint8_t op1)
{
  return vmv_s_x_u8m1(dest, op1, 31);
}

/*
** test_vmv_s_x_u8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m2_t 
test_vmv_s_x_u8m2(vuint8m2_t dest, uint8_t op1, size_t vl)
{
  return vmv_s_x_u8m2(dest, op1, vl);
}

/*
** test_vmv_s_x_u8m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m2_t 
test_vmv_s_x_u8m2_vl31(vuint8m2_t dest, uint8_t op1)
{
  return vmv_s_x_u8m2(dest, op1, 31);
}

/*
** test_vmv_s_x_u8m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m4_t 
test_vmv_s_x_u8m4(vuint8m4_t dest, uint8_t op1, size_t vl)
{
  return vmv_s_x_u8m4(dest, op1, vl);
}

/*
** test_vmv_s_x_u8m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m4_t 
test_vmv_s_x_u8m4_vl31(vuint8m4_t dest, uint8_t op1)
{
  return vmv_s_x_u8m4(dest, op1, 31);
}

/*
** test_vmv_s_x_u8m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m8_t 
test_vmv_s_x_u8m8(vuint8m8_t dest, uint8_t op1, size_t vl)
{
  return vmv_s_x_u8m8(dest, op1, vl);
}

/*
** test_vmv_s_x_u8m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m8_t 
test_vmv_s_x_u8m8_vl31(vuint8m8_t dest, uint8_t op1)
{
  return vmv_s_x_u8m8(dest, op1, 31);
}

/*
** test_vmv_s_x_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4_t 
test_vmv_s_x_u16mf4(vuint16mf4_t dest, uint16_t op1, size_t vl)
{
  return vmv_s_x_u16mf4(dest, op1, vl);
}

/*
** test_vmv_s_x_u16mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4_t 
test_vmv_s_x_u16mf4_vl31(vuint16mf4_t dest, uint16_t op1)
{
  return vmv_s_x_u16mf4(dest, op1, 31);
}

/*
** test_vmv_s_x_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2_t 
test_vmv_s_x_u16mf2(vuint16mf2_t dest, uint16_t op1, size_t vl)
{
  return vmv_s_x_u16mf2(dest, op1, vl);
}

/*
** test_vmv_s_x_u16mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2_t 
test_vmv_s_x_u16mf2_vl31(vuint16mf2_t dest, uint16_t op1)
{
  return vmv_s_x_u16mf2(dest, op1, 31);
}

/*
** test_vmv_s_x_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1_t 
test_vmv_s_x_u16m1(vuint16m1_t dest, uint16_t op1, size_t vl)
{
  return vmv_s_x_u16m1(dest, op1, vl);
}

/*
** test_vmv_s_x_u16m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1_t 
test_vmv_s_x_u16m1_vl31(vuint16m1_t dest, uint16_t op1)
{
  return vmv_s_x_u16m1(dest, op1, 31);
}

/*
** test_vmv_s_x_u16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m2_t 
test_vmv_s_x_u16m2(vuint16m2_t dest, uint16_t op1, size_t vl)
{
  return vmv_s_x_u16m2(dest, op1, vl);
}

/*
** test_vmv_s_x_u16m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m2_t 
test_vmv_s_x_u16m2_vl31(vuint16m2_t dest, uint16_t op1)
{
  return vmv_s_x_u16m2(dest, op1, 31);
}

/*
** test_vmv_s_x_u16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m4_t 
test_vmv_s_x_u16m4(vuint16m4_t dest, uint16_t op1, size_t vl)
{
  return vmv_s_x_u16m4(dest, op1, vl);
}

/*
** test_vmv_s_x_u16m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m4_t 
test_vmv_s_x_u16m4_vl31(vuint16m4_t dest, uint16_t op1)
{
  return vmv_s_x_u16m4(dest, op1, 31);
}

/*
** test_vmv_s_x_u16m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m8_t 
test_vmv_s_x_u16m8(vuint16m8_t dest, uint16_t op1, size_t vl)
{
  return vmv_s_x_u16m8(dest, op1, vl);
}

/*
** test_vmv_s_x_u16m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m8_t 
test_vmv_s_x_u16m8_vl31(vuint16m8_t dest, uint16_t op1)
{
  return vmv_s_x_u16m8(dest, op1, 31);
}

/*
** test_vmv_s_x_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2_t 
test_vmv_s_x_u32mf2(vuint32mf2_t dest, uint32_t op1, size_t vl)
{
  return vmv_s_x_u32mf2(dest, op1, vl);
}

/*
** test_vmv_s_x_u32mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2_t 
test_vmv_s_x_u32mf2_vl31(vuint32mf2_t dest, uint32_t op1)
{
  return vmv_s_x_u32mf2(dest, op1, 31);
}

/*
** test_vmv_s_x_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1_t 
test_vmv_s_x_u32m1(vuint32m1_t dest, uint32_t op1, size_t vl)
{
  return vmv_s_x_u32m1(dest, op1, vl);
}

/*
** test_vmv_s_x_u32m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1_t 
test_vmv_s_x_u32m1_vl31(vuint32m1_t dest, uint32_t op1)
{
  return vmv_s_x_u32m1(dest, op1, 31);
}

/*
** test_vmv_s_x_u32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m2_t 
test_vmv_s_x_u32m2(vuint32m2_t dest, uint32_t op1, size_t vl)
{
  return vmv_s_x_u32m2(dest, op1, vl);
}

/*
** test_vmv_s_x_u32m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m2_t 
test_vmv_s_x_u32m2_vl31(vuint32m2_t dest, uint32_t op1)
{
  return vmv_s_x_u32m2(dest, op1, 31);
}

/*
** test_vmv_s_x_u32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m4_t 
test_vmv_s_x_u32m4(vuint32m4_t dest, uint32_t op1, size_t vl)
{
  return vmv_s_x_u32m4(dest, op1, vl);
}

/*
** test_vmv_s_x_u32m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m4_t 
test_vmv_s_x_u32m4_vl31(vuint32m4_t dest, uint32_t op1)
{
  return vmv_s_x_u32m4(dest, op1, 31);
}

/*
** test_vmv_s_x_u32m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m8_t 
test_vmv_s_x_u32m8(vuint32m8_t dest, uint32_t op1, size_t vl)
{
  return vmv_s_x_u32m8(dest, op1, vl);
}

/*
** test_vmv_s_x_u32m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m8_t 
test_vmv_s_x_u32m8_vl31(vuint32m8_t dest, uint32_t op1)
{
  return vmv_s_x_u32m8(dest, op1, 31);
}

/*
** test_vmv_s_x_u64m1:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1_t 
test_vmv_s_x_u64m1(vuint64m1_t dest, uint64_t op1, size_t vl)
{
  return vmv_s_x_u64m1(dest, op1, vl);
}

/*
** test_vmv_s_x_u64m1_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1_t 
test_vmv_s_x_u64m1_vl31(vuint64m1_t dest, uint64_t op1)
{
  return vmv_s_x_u64m1(dest, op1, 31);
}

/*
** test_vmv_s_x_u64m2:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m2_t 
test_vmv_s_x_u64m2(vuint64m2_t dest, uint64_t op1, size_t vl)
{
  return vmv_s_x_u64m2(dest, op1, vl);
}

/*
** test_vmv_s_x_u64m2_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m2_t 
test_vmv_s_x_u64m2_vl31(vuint64m2_t dest, uint64_t op1)
{
  return vmv_s_x_u64m2(dest, op1, 31);
}

/*
** test_vmv_s_x_u64m4:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m4_t 
test_vmv_s_x_u64m4(vuint64m4_t dest, uint64_t op1, size_t vl)
{
  return vmv_s_x_u64m4(dest, op1, vl);
}

/*
** test_vmv_s_x_u64m4_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m4_t 
test_vmv_s_x_u64m4_vl31(vuint64m4_t dest, uint64_t op1)
{
  return vmv_s_x_u64m4(dest, op1, 31);
}

/*
** test_vmv_s_x_u64m8:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m8_t 
test_vmv_s_x_u64m8(vuint64m8_t dest, uint64_t op1, size_t vl)
{
  return vmv_s_x_u64m8(dest, op1, vl);
}

/*
** test_vmv_s_x_u64m8_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m8_t 
test_vmv_s_x_u64m8_vl31(vuint64m8_t dest, uint64_t op1)
{
  return vmv_s_x_u64m8(dest, op1, 31);
}

/*
** test_vmv_s_x_u8mf8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf8_t 
test_vmv_s_x_u8mf8_ta(uint8_t op1, size_t vl)
{
  return vmv_s_x_u8mf8_ta(op1, vl);
}

/*
** test_vmv_s_x_u8mf8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf8_t 
test_vmv_s_x_u8mf8_ta_vl31(uint8_t op1)
{
  return vmv_s_x_u8mf8_ta(op1, 31);
}

/*
** test_vmv_s_x_u8mf4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf4_t 
test_vmv_s_x_u8mf4_ta(uint8_t op1, size_t vl)
{
  return vmv_s_x_u8mf4_ta(op1, vl);
}

/*
** test_vmv_s_x_u8mf4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf4_t 
test_vmv_s_x_u8mf4_ta_vl31(uint8_t op1)
{
  return vmv_s_x_u8mf4_ta(op1, 31);
}

/*
** test_vmv_s_x_u8mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf2_t 
test_vmv_s_x_u8mf2_ta(uint8_t op1, size_t vl)
{
  return vmv_s_x_u8mf2_ta(op1, vl);
}

/*
** test_vmv_s_x_u8mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf2_t 
test_vmv_s_x_u8mf2_ta_vl31(uint8_t op1)
{
  return vmv_s_x_u8mf2_ta(op1, 31);
}

/*
** test_vmv_s_x_u8m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m1_t 
test_vmv_s_x_u8m1_ta(uint8_t op1, size_t vl)
{
  return vmv_s_x_u8m1_ta(op1, vl);
}

/*
** test_vmv_s_x_u8m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m1_t 
test_vmv_s_x_u8m1_ta_vl31(uint8_t op1)
{
  return vmv_s_x_u8m1_ta(op1, 31);
}

/*
** test_vmv_s_x_u8m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m2_t 
test_vmv_s_x_u8m2_ta(uint8_t op1, size_t vl)
{
  return vmv_s_x_u8m2_ta(op1, vl);
}

/*
** test_vmv_s_x_u8m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m2_t 
test_vmv_s_x_u8m2_ta_vl31(uint8_t op1)
{
  return vmv_s_x_u8m2_ta(op1, 31);
}

/*
** test_vmv_s_x_u8m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m4_t 
test_vmv_s_x_u8m4_ta(uint8_t op1, size_t vl)
{
  return vmv_s_x_u8m4_ta(op1, vl);
}

/*
** test_vmv_s_x_u8m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m4_t 
test_vmv_s_x_u8m4_ta_vl31(uint8_t op1)
{
  return vmv_s_x_u8m4_ta(op1, 31);
}

/*
** test_vmv_s_x_u8m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m8_t 
test_vmv_s_x_u8m8_ta(uint8_t op1, size_t vl)
{
  return vmv_s_x_u8m8_ta(op1, vl);
}

/*
** test_vmv_s_x_u8m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m8_t 
test_vmv_s_x_u8m8_ta_vl31(uint8_t op1)
{
  return vmv_s_x_u8m8_ta(op1, 31);
}

/*
** test_vmv_s_x_u16mf4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4_t 
test_vmv_s_x_u16mf4_ta(uint16_t op1, size_t vl)
{
  return vmv_s_x_u16mf4_ta(op1, vl);
}

/*
** test_vmv_s_x_u16mf4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4_t 
test_vmv_s_x_u16mf4_ta_vl31(uint16_t op1)
{
  return vmv_s_x_u16mf4_ta(op1, 31);
}

/*
** test_vmv_s_x_u16mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2_t 
test_vmv_s_x_u16mf2_ta(uint16_t op1, size_t vl)
{
  return vmv_s_x_u16mf2_ta(op1, vl);
}

/*
** test_vmv_s_x_u16mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2_t 
test_vmv_s_x_u16mf2_ta_vl31(uint16_t op1)
{
  return vmv_s_x_u16mf2_ta(op1, 31);
}

/*
** test_vmv_s_x_u16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1_t 
test_vmv_s_x_u16m1_ta(uint16_t op1, size_t vl)
{
  return vmv_s_x_u16m1_ta(op1, vl);
}

/*
** test_vmv_s_x_u16m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1_t 
test_vmv_s_x_u16m1_ta_vl31(uint16_t op1)
{
  return vmv_s_x_u16m1_ta(op1, 31);
}

/*
** test_vmv_s_x_u16m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m2_t 
test_vmv_s_x_u16m2_ta(uint16_t op1, size_t vl)
{
  return vmv_s_x_u16m2_ta(op1, vl);
}

/*
** test_vmv_s_x_u16m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m2_t 
test_vmv_s_x_u16m2_ta_vl31(uint16_t op1)
{
  return vmv_s_x_u16m2_ta(op1, 31);
}

/*
** test_vmv_s_x_u16m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m4_t 
test_vmv_s_x_u16m4_ta(uint16_t op1, size_t vl)
{
  return vmv_s_x_u16m4_ta(op1, vl);
}

/*
** test_vmv_s_x_u16m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m4_t 
test_vmv_s_x_u16m4_ta_vl31(uint16_t op1)
{
  return vmv_s_x_u16m4_ta(op1, 31);
}

/*
** test_vmv_s_x_u16m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m8_t 
test_vmv_s_x_u16m8_ta(uint16_t op1, size_t vl)
{
  return vmv_s_x_u16m8_ta(op1, vl);
}

/*
** test_vmv_s_x_u16m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m8_t 
test_vmv_s_x_u16m8_ta_vl31(uint16_t op1)
{
  return vmv_s_x_u16m8_ta(op1, 31);
}

/*
** test_vmv_s_x_u32mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2_t 
test_vmv_s_x_u32mf2_ta(uint32_t op1, size_t vl)
{
  return vmv_s_x_u32mf2_ta(op1, vl);
}

/*
** test_vmv_s_x_u32mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2_t 
test_vmv_s_x_u32mf2_ta_vl31(uint32_t op1)
{
  return vmv_s_x_u32mf2_ta(op1, 31);
}

/*
** test_vmv_s_x_u32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1_t 
test_vmv_s_x_u32m1_ta(uint32_t op1, size_t vl)
{
  return vmv_s_x_u32m1_ta(op1, vl);
}

/*
** test_vmv_s_x_u32m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1_t 
test_vmv_s_x_u32m1_ta_vl31(uint32_t op1)
{
  return vmv_s_x_u32m1_ta(op1, 31);
}

/*
** test_vmv_s_x_u32m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m2_t 
test_vmv_s_x_u32m2_ta(uint32_t op1, size_t vl)
{
  return vmv_s_x_u32m2_ta(op1, vl);
}

/*
** test_vmv_s_x_u32m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m2_t 
test_vmv_s_x_u32m2_ta_vl31(uint32_t op1)
{
  return vmv_s_x_u32m2_ta(op1, 31);
}

/*
** test_vmv_s_x_u32m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m4_t 
test_vmv_s_x_u32m4_ta(uint32_t op1, size_t vl)
{
  return vmv_s_x_u32m4_ta(op1, vl);
}

/*
** test_vmv_s_x_u32m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m4_t 
test_vmv_s_x_u32m4_ta_vl31(uint32_t op1)
{
  return vmv_s_x_u32m4_ta(op1, 31);
}

/*
** test_vmv_s_x_u32m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m8_t 
test_vmv_s_x_u32m8_ta(uint32_t op1, size_t vl)
{
  return vmv_s_x_u32m8_ta(op1, vl);
}

/*
** test_vmv_s_x_u32m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m8_t 
test_vmv_s_x_u32m8_ta_vl31(uint32_t op1)
{
  return vmv_s_x_u32m8_ta(op1, 31);
}

/*
** test_vmv_s_x_u64m1_ta:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1_t 
test_vmv_s_x_u64m1_ta(uint64_t op1, size_t vl)
{
  return vmv_s_x_u64m1_ta(op1, vl);
}

/*
** test_vmv_s_x_u64m1_ta_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1_t 
test_vmv_s_x_u64m1_ta_vl31(uint64_t op1)
{
  return vmv_s_x_u64m1_ta(op1, 31);
}

/*
** test_vmv_s_x_u64m2_ta:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m2_t 
test_vmv_s_x_u64m2_ta(uint64_t op1, size_t vl)
{
  return vmv_s_x_u64m2_ta(op1, vl);
}

/*
** test_vmv_s_x_u64m2_ta_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m2_t 
test_vmv_s_x_u64m2_ta_vl31(uint64_t op1)
{
  return vmv_s_x_u64m2_ta(op1, 31);
}

/*
** test_vmv_s_x_u64m4_ta:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m4_t 
test_vmv_s_x_u64m4_ta(uint64_t op1, size_t vl)
{
  return vmv_s_x_u64m4_ta(op1, vl);
}

/*
** test_vmv_s_x_u64m4_ta_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m4_t 
test_vmv_s_x_u64m4_ta_vl31(uint64_t op1)
{
  return vmv_s_x_u64m4_ta(op1, 31);
}

/*
** test_vmv_s_x_u64m8_ta:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m8_t 
test_vmv_s_x_u64m8_ta(uint64_t op1, size_t vl)
{
  return vmv_s_x_u64m8_ta(op1, vl);
}

/*
** test_vmv_s_x_u64m8_ta_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m8_t 
test_vmv_s_x_u64m8_ta_vl31(uint64_t op1)
{
  return vmv_s_x_u64m8_ta(op1, 31);
}

/*
** test_vmv_s_x_u8mf8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf8_t 
test_vmv_s_x_u8mf8_tu(vuint8mf8_t dest, uint8_t op1, size_t vl)
{
  return vmv_s_x_u8mf8_tu(dest, op1, vl);
}

/*
** test_vmv_s_x_u8mf8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf8_t 
test_vmv_s_x_u8mf8_tu_vl31(vuint8mf8_t dest, uint8_t op1)
{
  return vmv_s_x_u8mf8_tu(dest, op1, 31);
}

/*
** test_vmv_s_x_u8mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf4_t 
test_vmv_s_x_u8mf4_tu(vuint8mf4_t dest, uint8_t op1, size_t vl)
{
  return vmv_s_x_u8mf4_tu(dest, op1, vl);
}

/*
** test_vmv_s_x_u8mf4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf4_t 
test_vmv_s_x_u8mf4_tu_vl31(vuint8mf4_t dest, uint8_t op1)
{
  return vmv_s_x_u8mf4_tu(dest, op1, 31);
}

/*
** test_vmv_s_x_u8mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf2_t 
test_vmv_s_x_u8mf2_tu(vuint8mf2_t dest, uint8_t op1, size_t vl)
{
  return vmv_s_x_u8mf2_tu(dest, op1, vl);
}

/*
** test_vmv_s_x_u8mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf2_t 
test_vmv_s_x_u8mf2_tu_vl31(vuint8mf2_t dest, uint8_t op1)
{
  return vmv_s_x_u8mf2_tu(dest, op1, 31);
}

/*
** test_vmv_s_x_u8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m1_t 
test_vmv_s_x_u8m1_tu(vuint8m1_t dest, uint8_t op1, size_t vl)
{
  return vmv_s_x_u8m1_tu(dest, op1, vl);
}

/*
** test_vmv_s_x_u8m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m1_t 
test_vmv_s_x_u8m1_tu_vl31(vuint8m1_t dest, uint8_t op1)
{
  return vmv_s_x_u8m1_tu(dest, op1, 31);
}

/*
** test_vmv_s_x_u8m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m2_t 
test_vmv_s_x_u8m2_tu(vuint8m2_t dest, uint8_t op1, size_t vl)
{
  return vmv_s_x_u8m2_tu(dest, op1, vl);
}

/*
** test_vmv_s_x_u8m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m2_t 
test_vmv_s_x_u8m2_tu_vl31(vuint8m2_t dest, uint8_t op1)
{
  return vmv_s_x_u8m2_tu(dest, op1, 31);
}

/*
** test_vmv_s_x_u8m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m4_t 
test_vmv_s_x_u8m4_tu(vuint8m4_t dest, uint8_t op1, size_t vl)
{
  return vmv_s_x_u8m4_tu(dest, op1, vl);
}

/*
** test_vmv_s_x_u8m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m4_t 
test_vmv_s_x_u8m4_tu_vl31(vuint8m4_t dest, uint8_t op1)
{
  return vmv_s_x_u8m4_tu(dest, op1, 31);
}

/*
** test_vmv_s_x_u8m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m8_t 
test_vmv_s_x_u8m8_tu(vuint8m8_t dest, uint8_t op1, size_t vl)
{
  return vmv_s_x_u8m8_tu(dest, op1, vl);
}

/*
** test_vmv_s_x_u8m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m8_t 
test_vmv_s_x_u8m8_tu_vl31(vuint8m8_t dest, uint8_t op1)
{
  return vmv_s_x_u8m8_tu(dest, op1, 31);
}

/*
** test_vmv_s_x_u16mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4_t 
test_vmv_s_x_u16mf4_tu(vuint16mf4_t dest, uint16_t op1, size_t vl)
{
  return vmv_s_x_u16mf4_tu(dest, op1, vl);
}

/*
** test_vmv_s_x_u16mf4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4_t 
test_vmv_s_x_u16mf4_tu_vl31(vuint16mf4_t dest, uint16_t op1)
{
  return vmv_s_x_u16mf4_tu(dest, op1, 31);
}

/*
** test_vmv_s_x_u16mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2_t 
test_vmv_s_x_u16mf2_tu(vuint16mf2_t dest, uint16_t op1, size_t vl)
{
  return vmv_s_x_u16mf2_tu(dest, op1, vl);
}

/*
** test_vmv_s_x_u16mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2_t 
test_vmv_s_x_u16mf2_tu_vl31(vuint16mf2_t dest, uint16_t op1)
{
  return vmv_s_x_u16mf2_tu(dest, op1, 31);
}

/*
** test_vmv_s_x_u16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1_t 
test_vmv_s_x_u16m1_tu(vuint16m1_t dest, uint16_t op1, size_t vl)
{
  return vmv_s_x_u16m1_tu(dest, op1, vl);
}

/*
** test_vmv_s_x_u16m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1_t 
test_vmv_s_x_u16m1_tu_vl31(vuint16m1_t dest, uint16_t op1)
{
  return vmv_s_x_u16m1_tu(dest, op1, 31);
}

/*
** test_vmv_s_x_u16m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m2_t 
test_vmv_s_x_u16m2_tu(vuint16m2_t dest, uint16_t op1, size_t vl)
{
  return vmv_s_x_u16m2_tu(dest, op1, vl);
}

/*
** test_vmv_s_x_u16m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m2_t 
test_vmv_s_x_u16m2_tu_vl31(vuint16m2_t dest, uint16_t op1)
{
  return vmv_s_x_u16m2_tu(dest, op1, 31);
}

/*
** test_vmv_s_x_u16m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m4_t 
test_vmv_s_x_u16m4_tu(vuint16m4_t dest, uint16_t op1, size_t vl)
{
  return vmv_s_x_u16m4_tu(dest, op1, vl);
}

/*
** test_vmv_s_x_u16m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m4_t 
test_vmv_s_x_u16m4_tu_vl31(vuint16m4_t dest, uint16_t op1)
{
  return vmv_s_x_u16m4_tu(dest, op1, 31);
}

/*
** test_vmv_s_x_u16m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m8_t 
test_vmv_s_x_u16m8_tu(vuint16m8_t dest, uint16_t op1, size_t vl)
{
  return vmv_s_x_u16m8_tu(dest, op1, vl);
}

/*
** test_vmv_s_x_u16m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m8_t 
test_vmv_s_x_u16m8_tu_vl31(vuint16m8_t dest, uint16_t op1)
{
  return vmv_s_x_u16m8_tu(dest, op1, 31);
}

/*
** test_vmv_s_x_u32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2_t 
test_vmv_s_x_u32mf2_tu(vuint32mf2_t dest, uint32_t op1, size_t vl)
{
  return vmv_s_x_u32mf2_tu(dest, op1, vl);
}

/*
** test_vmv_s_x_u32mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2_t 
test_vmv_s_x_u32mf2_tu_vl31(vuint32mf2_t dest, uint32_t op1)
{
  return vmv_s_x_u32mf2_tu(dest, op1, 31);
}

/*
** test_vmv_s_x_u32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1_t 
test_vmv_s_x_u32m1_tu(vuint32m1_t dest, uint32_t op1, size_t vl)
{
  return vmv_s_x_u32m1_tu(dest, op1, vl);
}

/*
** test_vmv_s_x_u32m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1_t 
test_vmv_s_x_u32m1_tu_vl31(vuint32m1_t dest, uint32_t op1)
{
  return vmv_s_x_u32m1_tu(dest, op1, 31);
}

/*
** test_vmv_s_x_u32m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m2_t 
test_vmv_s_x_u32m2_tu(vuint32m2_t dest, uint32_t op1, size_t vl)
{
  return vmv_s_x_u32m2_tu(dest, op1, vl);
}

/*
** test_vmv_s_x_u32m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m2_t 
test_vmv_s_x_u32m2_tu_vl31(vuint32m2_t dest, uint32_t op1)
{
  return vmv_s_x_u32m2_tu(dest, op1, 31);
}

/*
** test_vmv_s_x_u32m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m4_t 
test_vmv_s_x_u32m4_tu(vuint32m4_t dest, uint32_t op1, size_t vl)
{
  return vmv_s_x_u32m4_tu(dest, op1, vl);
}

/*
** test_vmv_s_x_u32m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m4_t 
test_vmv_s_x_u32m4_tu_vl31(vuint32m4_t dest, uint32_t op1)
{
  return vmv_s_x_u32m4_tu(dest, op1, 31);
}

/*
** test_vmv_s_x_u32m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m8_t 
test_vmv_s_x_u32m8_tu(vuint32m8_t dest, uint32_t op1, size_t vl)
{
  return vmv_s_x_u32m8_tu(dest, op1, vl);
}

/*
** test_vmv_s_x_u32m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m8_t 
test_vmv_s_x_u32m8_tu_vl31(vuint32m8_t dest, uint32_t op1)
{
  return vmv_s_x_u32m8_tu(dest, op1, 31);
}

/*
** test_vmv_s_x_u64m1_tu:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1_t 
test_vmv_s_x_u64m1_tu(vuint64m1_t dest, uint64_t op1, size_t vl)
{
  return vmv_s_x_u64m1_tu(dest, op1, vl);
}

/*
** test_vmv_s_x_u64m1_tu_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1_t 
test_vmv_s_x_u64m1_tu_vl31(vuint64m1_t dest, uint64_t op1)
{
  return vmv_s_x_u64m1_tu(dest, op1, 31);
}

/*
** test_vmv_s_x_u64m2_tu:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m2_t 
test_vmv_s_x_u64m2_tu(vuint64m2_t dest, uint64_t op1, size_t vl)
{
  return vmv_s_x_u64m2_tu(dest, op1, vl);
}

/*
** test_vmv_s_x_u64m2_tu_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m2_t 
test_vmv_s_x_u64m2_tu_vl31(vuint64m2_t dest, uint64_t op1)
{
  return vmv_s_x_u64m2_tu(dest, op1, 31);
}

/*
** test_vmv_s_x_u64m4_tu:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m4_t 
test_vmv_s_x_u64m4_tu(vuint64m4_t dest, uint64_t op1, size_t vl)
{
  return vmv_s_x_u64m4_tu(dest, op1, vl);
}

/*
** test_vmv_s_x_u64m4_tu_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m4_t 
test_vmv_s_x_u64m4_tu_vl31(vuint64m4_t dest, uint64_t op1)
{
  return vmv_s_x_u64m4_tu(dest, op1, 31);
}

/*
** test_vmv_s_x_u64m8_tu:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m8_t 
test_vmv_s_x_u64m8_tu(vuint64m8_t dest, uint64_t op1, size_t vl)
{
  return vmv_s_x_u64m8_tu(dest, op1, vl);
}

/*
** test_vmv_s_x_u64m8_tu_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m8_t 
test_vmv_s_x_u64m8_tu_vl31(vuint64m8_t dest, uint64_t op1)
{
  return vmv_s_x_u64m8_tu(dest, op1, 31);
}

/*
** test_vmv_s_x_u8mf8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf8_t 
test_vmv_s_x_u8mf8_ta_vl32(uint8_t op1)
{
  return vmv_s_x_u8mf8_ta(op1, 32);
}

/*
** test_vmv_s_x_u8mf4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf4_t 
test_vmv_s_x_u8mf4_ta_vl32(uint8_t op1)
{
  return vmv_s_x_u8mf4_ta(op1, 32);
}

/*
** test_vmv_s_x_u8mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf2_t 
test_vmv_s_x_u8mf2_ta_vl32(uint8_t op1)
{
  return vmv_s_x_u8mf2_ta(op1, 32);
}

/*
** test_vmv_s_x_u8m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m1_t 
test_vmv_s_x_u8m1_ta_vl32(uint8_t op1)
{
  return vmv_s_x_u8m1_ta(op1, 32);
}

/*
** test_vmv_s_x_u8m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m2_t 
test_vmv_s_x_u8m2_ta_vl32(uint8_t op1)
{
  return vmv_s_x_u8m2_ta(op1, 32);
}

/*
** test_vmv_s_x_u8m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m4_t 
test_vmv_s_x_u8m4_ta_vl32(uint8_t op1)
{
  return vmv_s_x_u8m4_ta(op1, 32);
}

/*
** test_vmv_s_x_u8m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m8_t 
test_vmv_s_x_u8m8_ta_vl32(uint8_t op1)
{
  return vmv_s_x_u8m8_ta(op1, 32);
}

/*
** test_vmv_s_x_u16mf4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4_t 
test_vmv_s_x_u16mf4_ta_vl32(uint16_t op1)
{
  return vmv_s_x_u16mf4_ta(op1, 32);
}

/*
** test_vmv_s_x_u16mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2_t 
test_vmv_s_x_u16mf2_ta_vl32(uint16_t op1)
{
  return vmv_s_x_u16mf2_ta(op1, 32);
}

/*
** test_vmv_s_x_u16m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1_t 
test_vmv_s_x_u16m1_ta_vl32(uint16_t op1)
{
  return vmv_s_x_u16m1_ta(op1, 32);
}

/*
** test_vmv_s_x_u16m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m2_t 
test_vmv_s_x_u16m2_ta_vl32(uint16_t op1)
{
  return vmv_s_x_u16m2_ta(op1, 32);
}

/*
** test_vmv_s_x_u16m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m4_t 
test_vmv_s_x_u16m4_ta_vl32(uint16_t op1)
{
  return vmv_s_x_u16m4_ta(op1, 32);
}

/*
** test_vmv_s_x_u16m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m8_t 
test_vmv_s_x_u16m8_ta_vl32(uint16_t op1)
{
  return vmv_s_x_u16m8_ta(op1, 32);
}

/*
** test_vmv_s_x_u32mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2_t 
test_vmv_s_x_u32mf2_ta_vl32(uint32_t op1)
{
  return vmv_s_x_u32mf2_ta(op1, 32);
}

/*
** test_vmv_s_x_u32m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1_t 
test_vmv_s_x_u32m1_ta_vl32(uint32_t op1)
{
  return vmv_s_x_u32m1_ta(op1, 32);
}

/*
** test_vmv_s_x_u32m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m2_t 
test_vmv_s_x_u32m2_ta_vl32(uint32_t op1)
{
  return vmv_s_x_u32m2_ta(op1, 32);
}

/*
** test_vmv_s_x_u32m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m4_t 
test_vmv_s_x_u32m4_ta_vl32(uint32_t op1)
{
  return vmv_s_x_u32m4_ta(op1, 32);
}

/*
** test_vmv_s_x_u32m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m8_t 
test_vmv_s_x_u32m8_ta_vl32(uint32_t op1)
{
  return vmv_s_x_u32m8_ta(op1, 32);
}

/*
** test_vmv_s_x_u64m1_ta_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1_t 
test_vmv_s_x_u64m1_ta_vl32(uint64_t op1)
{
  return vmv_s_x_u64m1_ta(op1, 32);
}

/*
** test_vmv_s_x_u64m2_ta_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m2_t 
test_vmv_s_x_u64m2_ta_vl32(uint64_t op1)
{
  return vmv_s_x_u64m2_ta(op1, 32);
}

/*
** test_vmv_s_x_u64m4_ta_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m4_t 
test_vmv_s_x_u64m4_ta_vl32(uint64_t op1)
{
  return vmv_s_x_u64m4_ta(op1, 32);
}

/*
** test_vmv_s_x_u64m8_ta_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m8_t 
test_vmv_s_x_u64m8_ta_vl32(uint64_t op1)
{
  return vmv_s_x_u64m8_ta(op1, 32);
}

/*
** test_vmv_s_x_u8mf8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf8_t 
test_vmv_s_x_u8mf8_tu_vl32(vuint8mf8_t dest, uint8_t op1)
{
  return vmv_s_x_u8mf8_tu(dest, op1, 32);
}

/*
** test_vmv_s_x_u8mf4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf4_t 
test_vmv_s_x_u8mf4_tu_vl32(vuint8mf4_t dest, uint8_t op1)
{
  return vmv_s_x_u8mf4_tu(dest, op1, 32);
}

/*
** test_vmv_s_x_u8mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf2_t 
test_vmv_s_x_u8mf2_tu_vl32(vuint8mf2_t dest, uint8_t op1)
{
  return vmv_s_x_u8mf2_tu(dest, op1, 32);
}

/*
** test_vmv_s_x_u8m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m1_t 
test_vmv_s_x_u8m1_tu_vl32(vuint8m1_t dest, uint8_t op1)
{
  return vmv_s_x_u8m1_tu(dest, op1, 32);
}

/*
** test_vmv_s_x_u8m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m2_t 
test_vmv_s_x_u8m2_tu_vl32(vuint8m2_t dest, uint8_t op1)
{
  return vmv_s_x_u8m2_tu(dest, op1, 32);
}

/*
** test_vmv_s_x_u8m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m4_t 
test_vmv_s_x_u8m4_tu_vl32(vuint8m4_t dest, uint8_t op1)
{
  return vmv_s_x_u8m4_tu(dest, op1, 32);
}

/*
** test_vmv_s_x_u8m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m8_t 
test_vmv_s_x_u8m8_tu_vl32(vuint8m8_t dest, uint8_t op1)
{
  return vmv_s_x_u8m8_tu(dest, op1, 32);
}

/*
** test_vmv_s_x_u16mf4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4_t 
test_vmv_s_x_u16mf4_tu_vl32(vuint16mf4_t dest, uint16_t op1)
{
  return vmv_s_x_u16mf4_tu(dest, op1, 32);
}

/*
** test_vmv_s_x_u16mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2_t 
test_vmv_s_x_u16mf2_tu_vl32(vuint16mf2_t dest, uint16_t op1)
{
  return vmv_s_x_u16mf2_tu(dest, op1, 32);
}

/*
** test_vmv_s_x_u16m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1_t 
test_vmv_s_x_u16m1_tu_vl32(vuint16m1_t dest, uint16_t op1)
{
  return vmv_s_x_u16m1_tu(dest, op1, 32);
}

/*
** test_vmv_s_x_u16m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m2_t 
test_vmv_s_x_u16m2_tu_vl32(vuint16m2_t dest, uint16_t op1)
{
  return vmv_s_x_u16m2_tu(dest, op1, 32);
}

/*
** test_vmv_s_x_u16m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m4_t 
test_vmv_s_x_u16m4_tu_vl32(vuint16m4_t dest, uint16_t op1)
{
  return vmv_s_x_u16m4_tu(dest, op1, 32);
}

/*
** test_vmv_s_x_u16m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m8_t 
test_vmv_s_x_u16m8_tu_vl32(vuint16m8_t dest, uint16_t op1)
{
  return vmv_s_x_u16m8_tu(dest, op1, 32);
}

/*
** test_vmv_s_x_u32mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2_t 
test_vmv_s_x_u32mf2_tu_vl32(vuint32mf2_t dest, uint32_t op1)
{
  return vmv_s_x_u32mf2_tu(dest, op1, 32);
}

/*
** test_vmv_s_x_u32m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1_t 
test_vmv_s_x_u32m1_tu_vl32(vuint32m1_t dest, uint32_t op1)
{
  return vmv_s_x_u32m1_tu(dest, op1, 32);
}

/*
** test_vmv_s_x_u32m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m2_t 
test_vmv_s_x_u32m2_tu_vl32(vuint32m2_t dest, uint32_t op1)
{
  return vmv_s_x_u32m2_tu(dest, op1, 32);
}

/*
** test_vmv_s_x_u32m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m4_t 
test_vmv_s_x_u32m4_tu_vl32(vuint32m4_t dest, uint32_t op1)
{
  return vmv_s_x_u32m4_tu(dest, op1, 32);
}

/*
** test_vmv_s_x_u32m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m8_t 
test_vmv_s_x_u32m8_tu_vl32(vuint32m8_t dest, uint32_t op1)
{
  return vmv_s_x_u32m8_tu(dest, op1, 32);
}

/*
** test_vmv_s_x_u64m1_tu_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1_t 
test_vmv_s_x_u64m1_tu_vl32(vuint64m1_t dest, uint64_t op1)
{
  return vmv_s_x_u64m1_tu(dest, op1, 32);
}

/*
** test_vmv_s_x_u64m2_tu_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m2_t 
test_vmv_s_x_u64m2_tu_vl32(vuint64m2_t dest, uint64_t op1)
{
  return vmv_s_x_u64m2_tu(dest, op1, 32);
}

/*
** test_vmv_s_x_u64m4_tu_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m4_t 
test_vmv_s_x_u64m4_tu_vl32(vuint64m4_t dest, uint64_t op1)
{
  return vmv_s_x_u64m4_tu(dest, op1, 32);
}

/*
** test_vmv_s_x_u64m8_tu_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m8_t 
test_vmv_s_x_u64m8_tu_vl32(vuint64m8_t dest, uint64_t op1)
{
  return vmv_s_x_u64m8_tu(dest, op1, 32);
}

/*
** test_vmv_s_x_u8mf8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf8_t 
test_vmv_s_x_u8mf8_vl32(vuint8mf8_t dest, uint8_t op1)
{
  return vmv_s_x_u8mf8(dest, op1, 32);
}

/*
** test_vmv_s_x_u8mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf4_t 
test_vmv_s_x_u8mf4_vl32(vuint8mf4_t dest, uint8_t op1)
{
  return vmv_s_x_u8mf4(dest, op1, 32);
}

/*
** test_vmv_s_x_u8mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf2_t 
test_vmv_s_x_u8mf2_vl32(vuint8mf2_t dest, uint8_t op1)
{
  return vmv_s_x_u8mf2(dest, op1, 32);
}

/*
** test_vmv_s_x_u8m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m1_t 
test_vmv_s_x_u8m1_vl32(vuint8m1_t dest, uint8_t op1)
{
  return vmv_s_x_u8m1(dest, op1, 32);
}

/*
** test_vmv_s_x_u8m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m2_t 
test_vmv_s_x_u8m2_vl32(vuint8m2_t dest, uint8_t op1)
{
  return vmv_s_x_u8m2(dest, op1, 32);
}

/*
** test_vmv_s_x_u8m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m4_t 
test_vmv_s_x_u8m4_vl32(vuint8m4_t dest, uint8_t op1)
{
  return vmv_s_x_u8m4(dest, op1, 32);
}

/*
** test_vmv_s_x_u8m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m8_t 
test_vmv_s_x_u8m8_vl32(vuint8m8_t dest, uint8_t op1)
{
  return vmv_s_x_u8m8(dest, op1, 32);
}

/*
** test_vmv_s_x_u16mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4_t 
test_vmv_s_x_u16mf4_vl32(vuint16mf4_t dest, uint16_t op1)
{
  return vmv_s_x_u16mf4(dest, op1, 32);
}

/*
** test_vmv_s_x_u16mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2_t 
test_vmv_s_x_u16mf2_vl32(vuint16mf2_t dest, uint16_t op1)
{
  return vmv_s_x_u16mf2(dest, op1, 32);
}

/*
** test_vmv_s_x_u16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1_t 
test_vmv_s_x_u16m1_vl32(vuint16m1_t dest, uint16_t op1)
{
  return vmv_s_x_u16m1(dest, op1, 32);
}

/*
** test_vmv_s_x_u16m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m2_t 
test_vmv_s_x_u16m2_vl32(vuint16m2_t dest, uint16_t op1)
{
  return vmv_s_x_u16m2(dest, op1, 32);
}

/*
** test_vmv_s_x_u16m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m4_t 
test_vmv_s_x_u16m4_vl32(vuint16m4_t dest, uint16_t op1)
{
  return vmv_s_x_u16m4(dest, op1, 32);
}

/*
** test_vmv_s_x_u16m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m8_t 
test_vmv_s_x_u16m8_vl32(vuint16m8_t dest, uint16_t op1)
{
  return vmv_s_x_u16m8(dest, op1, 32);
}

/*
** test_vmv_s_x_u32mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2_t 
test_vmv_s_x_u32mf2_vl32(vuint32mf2_t dest, uint32_t op1)
{
  return vmv_s_x_u32mf2(dest, op1, 32);
}

/*
** test_vmv_s_x_u32m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1_t 
test_vmv_s_x_u32m1_vl32(vuint32m1_t dest, uint32_t op1)
{
  return vmv_s_x_u32m1(dest, op1, 32);
}

/*
** test_vmv_s_x_u32m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m2_t 
test_vmv_s_x_u32m2_vl32(vuint32m2_t dest, uint32_t op1)
{
  return vmv_s_x_u32m2(dest, op1, 32);
}

/*
** test_vmv_s_x_u32m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m4_t 
test_vmv_s_x_u32m4_vl32(vuint32m4_t dest, uint32_t op1)
{
  return vmv_s_x_u32m4(dest, op1, 32);
}

/*
** test_vmv_s_x_u32m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m8_t 
test_vmv_s_x_u32m8_vl32(vuint32m8_t dest, uint32_t op1)
{
  return vmv_s_x_u32m8(dest, op1, 32);
}

/*
** test_vmv_s_x_u64m1_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1_t 
test_vmv_s_x_u64m1_vl32(vuint64m1_t dest, uint64_t op1)
{
  return vmv_s_x_u64m1(dest, op1, 32);
}

/*
** test_vmv_s_x_u64m2_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m2_t 
test_vmv_s_x_u64m2_vl32(vuint64m2_t dest, uint64_t op1)
{
  return vmv_s_x_u64m2(dest, op1, 32);
}

/*
** test_vmv_s_x_u64m4_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m4_t 
test_vmv_s_x_u64m4_vl32(vuint64m4_t dest, uint64_t op1)
{
  return vmv_s_x_u64m4(dest, op1, 32);
}

/*
** test_vmv_s_x_u64m8_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.s\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m8_t 
test_vmv_s_x_u64m8_vl32(vuint64m8_t dest, uint64_t op1)
{
  return vmv_s_x_u64m8(dest, op1, 32);
}

/*
** test_vmv_v_x_i8mf8_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint8mf8_t 
test_vmv_v_x_i8mf8_m16(size_t vl)
{
  return vmv_v_x_i8mf8(-16, vl);
}

/*
** test_vmv_v_x_i8mf8_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint8mf8_t 
test_vmv_v_x_i8mf8_15(size_t vl)
{
  return vmv_v_x_i8mf8(15, vl);
}

/*
** test_vmv_v_x_i8mf8_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint8mf8_t 
test_vmv_v_x_i8mf8_vl31_m16(size_t vl)
{
  return vmv_v_x_i8mf8(-16, 31);
}

/*
** test_vmv_v_x_i8mf8_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint8mf8_t 
test_vmv_v_x_i8mf8_vl31_15(size_t vl)
{
  return vmv_v_x_i8mf8(15, 31);
}

/*
** test_vmv_v_x_i8mf4_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint8mf4_t 
test_vmv_v_x_i8mf4_m16(size_t vl)
{
  return vmv_v_x_i8mf4(-16, vl);
}

/*
** test_vmv_v_x_i8mf4_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint8mf4_t 
test_vmv_v_x_i8mf4_15(size_t vl)
{
  return vmv_v_x_i8mf4(15, vl);
}

/*
** test_vmv_v_x_i8mf4_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint8mf4_t 
test_vmv_v_x_i8mf4_vl31_m16(size_t vl)
{
  return vmv_v_x_i8mf4(-16, 31);
}

/*
** test_vmv_v_x_i8mf4_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint8mf4_t 
test_vmv_v_x_i8mf4_vl31_15(size_t vl)
{
  return vmv_v_x_i8mf4(15, 31);
}

/*
** test_vmv_v_x_i8mf2_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint8mf2_t 
test_vmv_v_x_i8mf2_m16(size_t vl)
{
  return vmv_v_x_i8mf2(-16, vl);
}

/*
** test_vmv_v_x_i8mf2_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint8mf2_t 
test_vmv_v_x_i8mf2_15(size_t vl)
{
  return vmv_v_x_i8mf2(15, vl);
}

/*
** test_vmv_v_x_i8mf2_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint8mf2_t 
test_vmv_v_x_i8mf2_vl31_m16(size_t vl)
{
  return vmv_v_x_i8mf2(-16, 31);
}

/*
** test_vmv_v_x_i8mf2_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint8mf2_t 
test_vmv_v_x_i8mf2_vl31_15(size_t vl)
{
  return vmv_v_x_i8mf2(15, 31);
}

/*
** test_vmv_v_x_i8m1_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint8m1_t 
test_vmv_v_x_i8m1_m16(size_t vl)
{
  return vmv_v_x_i8m1(-16, vl);
}

/*
** test_vmv_v_x_i8m1_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint8m1_t 
test_vmv_v_x_i8m1_15(size_t vl)
{
  return vmv_v_x_i8m1(15, vl);
}

/*
** test_vmv_v_x_i8m1_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint8m1_t 
test_vmv_v_x_i8m1_vl31_m16(size_t vl)
{
  return vmv_v_x_i8m1(-16, 31);
}

/*
** test_vmv_v_x_i8m1_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint8m1_t 
test_vmv_v_x_i8m1_vl31_15(size_t vl)
{
  return vmv_v_x_i8m1(15, 31);
}

/*
** test_vmv_v_x_i8m2_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vint8m2_t 
test_vmv_v_x_i8m2_m16(size_t vl)
{
  return vmv_v_x_i8m2(-16, vl);
}

/*
** test_vmv_v_x_i8m2_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vint8m2_t 
test_vmv_v_x_i8m2_15(size_t vl)
{
  return vmv_v_x_i8m2(15, vl);
}

/*
** test_vmv_v_x_i8m2_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vint8m2_t 
test_vmv_v_x_i8m2_vl31_m16(size_t vl)
{
  return vmv_v_x_i8m2(-16, 31);
}

/*
** test_vmv_v_x_i8m2_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vint8m2_t 
test_vmv_v_x_i8m2_vl31_15(size_t vl)
{
  return vmv_v_x_i8m2(15, 31);
}

/*
** test_vmv_v_x_i8m4_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vint8m4_t 
test_vmv_v_x_i8m4_m16(size_t vl)
{
  return vmv_v_x_i8m4(-16, vl);
}

/*
** test_vmv_v_x_i8m4_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vint8m4_t 
test_vmv_v_x_i8m4_15(size_t vl)
{
  return vmv_v_x_i8m4(15, vl);
}

/*
** test_vmv_v_x_i8m4_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vint8m4_t 
test_vmv_v_x_i8m4_vl31_m16(size_t vl)
{
  return vmv_v_x_i8m4(-16, 31);
}

/*
** test_vmv_v_x_i8m4_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vint8m4_t 
test_vmv_v_x_i8m4_vl31_15(size_t vl)
{
  return vmv_v_x_i8m4(15, 31);
}

/*
** test_vmv_v_x_i8m8_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vint8m8_t 
test_vmv_v_x_i8m8_m16(size_t vl)
{
  return vmv_v_x_i8m8(-16, vl);
}

/*
** test_vmv_v_x_i8m8_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vint8m8_t 
test_vmv_v_x_i8m8_15(size_t vl)
{
  return vmv_v_x_i8m8(15, vl);
}

/*
** test_vmv_v_x_i8m8_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vint8m8_t 
test_vmv_v_x_i8m8_vl31_m16(size_t vl)
{
  return vmv_v_x_i8m8(-16, 31);
}

/*
** test_vmv_v_x_i8m8_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vint8m8_t 
test_vmv_v_x_i8m8_vl31_15(size_t vl)
{
  return vmv_v_x_i8m8(15, 31);
}

/*
** test_vmv_v_x_i16mf4_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint16mf4_t 
test_vmv_v_x_i16mf4_m16(size_t vl)
{
  return vmv_v_x_i16mf4(-16, vl);
}

/*
** test_vmv_v_x_i16mf4_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint16mf4_t 
test_vmv_v_x_i16mf4_15(size_t vl)
{
  return vmv_v_x_i16mf4(15, vl);
}

/*
** test_vmv_v_x_i16mf4_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint16mf4_t 
test_vmv_v_x_i16mf4_vl31_m16(size_t vl)
{
  return vmv_v_x_i16mf4(-16, 31);
}

/*
** test_vmv_v_x_i16mf4_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint16mf4_t 
test_vmv_v_x_i16mf4_vl31_15(size_t vl)
{
  return vmv_v_x_i16mf4(15, 31);
}

/*
** test_vmv_v_x_i16mf2_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint16mf2_t 
test_vmv_v_x_i16mf2_m16(size_t vl)
{
  return vmv_v_x_i16mf2(-16, vl);
}

/*
** test_vmv_v_x_i16mf2_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint16mf2_t 
test_vmv_v_x_i16mf2_15(size_t vl)
{
  return vmv_v_x_i16mf2(15, vl);
}

/*
** test_vmv_v_x_i16mf2_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint16mf2_t 
test_vmv_v_x_i16mf2_vl31_m16(size_t vl)
{
  return vmv_v_x_i16mf2(-16, 31);
}

/*
** test_vmv_v_x_i16mf2_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint16mf2_t 
test_vmv_v_x_i16mf2_vl31_15(size_t vl)
{
  return vmv_v_x_i16mf2(15, 31);
}

/*
** test_vmv_v_x_i16m1_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint16m1_t 
test_vmv_v_x_i16m1_m16(size_t vl)
{
  return vmv_v_x_i16m1(-16, vl);
}

/*
** test_vmv_v_x_i16m1_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint16m1_t 
test_vmv_v_x_i16m1_15(size_t vl)
{
  return vmv_v_x_i16m1(15, vl);
}

/*
** test_vmv_v_x_i16m1_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint16m1_t 
test_vmv_v_x_i16m1_vl31_m16(size_t vl)
{
  return vmv_v_x_i16m1(-16, 31);
}

/*
** test_vmv_v_x_i16m1_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint16m1_t 
test_vmv_v_x_i16m1_vl31_15(size_t vl)
{
  return vmv_v_x_i16m1(15, 31);
}

/*
** test_vmv_v_x_i16m2_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vint16m2_t 
test_vmv_v_x_i16m2_m16(size_t vl)
{
  return vmv_v_x_i16m2(-16, vl);
}

/*
** test_vmv_v_x_i16m2_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vint16m2_t 
test_vmv_v_x_i16m2_15(size_t vl)
{
  return vmv_v_x_i16m2(15, vl);
}

/*
** test_vmv_v_x_i16m2_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vint16m2_t 
test_vmv_v_x_i16m2_vl31_m16(size_t vl)
{
  return vmv_v_x_i16m2(-16, 31);
}

/*
** test_vmv_v_x_i16m2_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vint16m2_t 
test_vmv_v_x_i16m2_vl31_15(size_t vl)
{
  return vmv_v_x_i16m2(15, 31);
}

/*
** test_vmv_v_x_i16m4_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vint16m4_t 
test_vmv_v_x_i16m4_m16(size_t vl)
{
  return vmv_v_x_i16m4(-16, vl);
}

/*
** test_vmv_v_x_i16m4_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vint16m4_t 
test_vmv_v_x_i16m4_15(size_t vl)
{
  return vmv_v_x_i16m4(15, vl);
}

/*
** test_vmv_v_x_i16m4_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vint16m4_t 
test_vmv_v_x_i16m4_vl31_m16(size_t vl)
{
  return vmv_v_x_i16m4(-16, 31);
}

/*
** test_vmv_v_x_i16m4_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vint16m4_t 
test_vmv_v_x_i16m4_vl31_15(size_t vl)
{
  return vmv_v_x_i16m4(15, 31);
}

/*
** test_vmv_v_x_i16m8_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vint16m8_t 
test_vmv_v_x_i16m8_m16(size_t vl)
{
  return vmv_v_x_i16m8(-16, vl);
}

/*
** test_vmv_v_x_i16m8_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vint16m8_t 
test_vmv_v_x_i16m8_15(size_t vl)
{
  return vmv_v_x_i16m8(15, vl);
}

/*
** test_vmv_v_x_i16m8_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vint16m8_t 
test_vmv_v_x_i16m8_vl31_m16(size_t vl)
{
  return vmv_v_x_i16m8(-16, 31);
}

/*
** test_vmv_v_x_i16m8_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vint16m8_t 
test_vmv_v_x_i16m8_vl31_15(size_t vl)
{
  return vmv_v_x_i16m8(15, 31);
}

/*
** test_vmv_v_x_i32mf2_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint32mf2_t 
test_vmv_v_x_i32mf2_m16(size_t vl)
{
  return vmv_v_x_i32mf2(-16, vl);
}

/*
** test_vmv_v_x_i32mf2_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint32mf2_t 
test_vmv_v_x_i32mf2_15(size_t vl)
{
  return vmv_v_x_i32mf2(15, vl);
}

/*
** test_vmv_v_x_i32mf2_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint32mf2_t 
test_vmv_v_x_i32mf2_vl31_m16(size_t vl)
{
  return vmv_v_x_i32mf2(-16, 31);
}

/*
** test_vmv_v_x_i32mf2_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint32mf2_t 
test_vmv_v_x_i32mf2_vl31_15(size_t vl)
{
  return vmv_v_x_i32mf2(15, 31);
}

/*
** test_vmv_v_x_i32m1_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint32m1_t 
test_vmv_v_x_i32m1_m16(size_t vl)
{
  return vmv_v_x_i32m1(-16, vl);
}

/*
** test_vmv_v_x_i32m1_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint32m1_t 
test_vmv_v_x_i32m1_15(size_t vl)
{
  return vmv_v_x_i32m1(15, vl);
}

/*
** test_vmv_v_x_i32m1_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint32m1_t 
test_vmv_v_x_i32m1_vl31_m16(size_t vl)
{
  return vmv_v_x_i32m1(-16, 31);
}

/*
** test_vmv_v_x_i32m1_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint32m1_t 
test_vmv_v_x_i32m1_vl31_15(size_t vl)
{
  return vmv_v_x_i32m1(15, 31);
}

/*
** test_vmv_v_x_i32m2_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vint32m2_t 
test_vmv_v_x_i32m2_m16(size_t vl)
{
  return vmv_v_x_i32m2(-16, vl);
}

/*
** test_vmv_v_x_i32m2_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vint32m2_t 
test_vmv_v_x_i32m2_15(size_t vl)
{
  return vmv_v_x_i32m2(15, vl);
}

/*
** test_vmv_v_x_i32m2_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vint32m2_t 
test_vmv_v_x_i32m2_vl31_m16(size_t vl)
{
  return vmv_v_x_i32m2(-16, 31);
}

/*
** test_vmv_v_x_i32m2_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vint32m2_t 
test_vmv_v_x_i32m2_vl31_15(size_t vl)
{
  return vmv_v_x_i32m2(15, 31);
}

/*
** test_vmv_v_x_i32m4_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vint32m4_t 
test_vmv_v_x_i32m4_m16(size_t vl)
{
  return vmv_v_x_i32m4(-16, vl);
}

/*
** test_vmv_v_x_i32m4_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vint32m4_t 
test_vmv_v_x_i32m4_15(size_t vl)
{
  return vmv_v_x_i32m4(15, vl);
}

/*
** test_vmv_v_x_i32m4_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vint32m4_t 
test_vmv_v_x_i32m4_vl31_m16(size_t vl)
{
  return vmv_v_x_i32m4(-16, 31);
}

/*
** test_vmv_v_x_i32m4_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vint32m4_t 
test_vmv_v_x_i32m4_vl31_15(size_t vl)
{
  return vmv_v_x_i32m4(15, 31);
}

/*
** test_vmv_v_x_i32m8_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vint32m8_t 
test_vmv_v_x_i32m8_m16(size_t vl)
{
  return vmv_v_x_i32m8(-16, vl);
}

/*
** test_vmv_v_x_i32m8_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vint32m8_t 
test_vmv_v_x_i32m8_15(size_t vl)
{
  return vmv_v_x_i32m8(15, vl);
}

/*
** test_vmv_v_x_i32m8_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vint32m8_t 
test_vmv_v_x_i32m8_vl31_m16(size_t vl)
{
  return vmv_v_x_i32m8(-16, 31);
}

/*
** test_vmv_v_x_i32m8_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vint32m8_t 
test_vmv_v_x_i32m8_vl31_15(size_t vl)
{
  return vmv_v_x_i32m8(15, 31);
}

/*
** test_vmv_v_x_i64m1_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint64m1_t 
test_vmv_v_x_i64m1_m16(size_t vl)
{
  return vmv_v_x_i64m1(-16, vl);
}

/*
** test_vmv_v_x_i64m1_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint64m1_t 
test_vmv_v_x_i64m1_15(size_t vl)
{
  return vmv_v_x_i64m1(15, vl);
}

/*
** test_vmv_v_x_i64m1_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint64m1_t 
test_vmv_v_x_i64m1_vl31_m16(size_t vl)
{
  return vmv_v_x_i64m1(-16, 31);
}

/*
** test_vmv_v_x_i64m1_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint64m1_t 
test_vmv_v_x_i64m1_vl31_15(size_t vl)
{
  return vmv_v_x_i64m1(15, 31);
}

/*
** test_vmv_v_x_i64m2_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vint64m2_t 
test_vmv_v_x_i64m2_m16(size_t vl)
{
  return vmv_v_x_i64m2(-16, vl);
}

/*
** test_vmv_v_x_i64m2_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vint64m2_t 
test_vmv_v_x_i64m2_15(size_t vl)
{
  return vmv_v_x_i64m2(15, vl);
}

/*
** test_vmv_v_x_i64m2_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vint64m2_t 
test_vmv_v_x_i64m2_vl31_m16(size_t vl)
{
  return vmv_v_x_i64m2(-16, 31);
}

/*
** test_vmv_v_x_i64m2_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vint64m2_t 
test_vmv_v_x_i64m2_vl31_15(size_t vl)
{
  return vmv_v_x_i64m2(15, 31);
}

/*
** test_vmv_v_x_i64m4_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vint64m4_t 
test_vmv_v_x_i64m4_m16(size_t vl)
{
  return vmv_v_x_i64m4(-16, vl);
}

/*
** test_vmv_v_x_i64m4_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vint64m4_t 
test_vmv_v_x_i64m4_15(size_t vl)
{
  return vmv_v_x_i64m4(15, vl);
}

/*
** test_vmv_v_x_i64m4_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vint64m4_t 
test_vmv_v_x_i64m4_vl31_m16(size_t vl)
{
  return vmv_v_x_i64m4(-16, 31);
}

/*
** test_vmv_v_x_i64m4_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vint64m4_t 
test_vmv_v_x_i64m4_vl31_15(size_t vl)
{
  return vmv_v_x_i64m4(15, 31);
}

/*
** test_vmv_v_x_i64m8_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vint64m8_t 
test_vmv_v_x_i64m8_m16(size_t vl)
{
  return vmv_v_x_i64m8(-16, vl);
}

/*
** test_vmv_v_x_i64m8_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vint64m8_t 
test_vmv_v_x_i64m8_15(size_t vl)
{
  return vmv_v_x_i64m8(15, vl);
}

/*
** test_vmv_v_x_i64m8_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vint64m8_t 
test_vmv_v_x_i64m8_vl31_m16(size_t vl)
{
  return vmv_v_x_i64m8(-16, 31);
}

/*
** test_vmv_v_x_i64m8_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vint64m8_t 
test_vmv_v_x_i64m8_vl31_15(size_t vl)
{
  return vmv_v_x_i64m8(15, 31);
}

/*
** test_vmv_v_x_i8mf8_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint8mf8_t 
test_vmv_v_x_i8mf8_ta_m16(size_t vl)
{
  return vmv_v_x_i8mf8_ta(-16, vl);
}

/*
** test_vmv_v_x_i8mf8_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint8mf8_t 
test_vmv_v_x_i8mf8_ta_15(size_t vl)
{
  return vmv_v_x_i8mf8_ta(15, vl);
}

/*
** test_vmv_v_x_i8mf8_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint8mf8_t 
test_vmv_v_x_i8mf8_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_i8mf8_ta(-16, 31);
}

/*
** test_vmv_v_x_i8mf8_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint8mf8_t 
test_vmv_v_x_i8mf8_ta_vl31_15(size_t vl)
{
  return vmv_v_x_i8mf8_ta(15, 31);
}

/*
** test_vmv_v_x_i8mf4_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint8mf4_t 
test_vmv_v_x_i8mf4_ta_m16(size_t vl)
{
  return vmv_v_x_i8mf4_ta(-16, vl);
}

/*
** test_vmv_v_x_i8mf4_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint8mf4_t 
test_vmv_v_x_i8mf4_ta_15(size_t vl)
{
  return vmv_v_x_i8mf4_ta(15, vl);
}

/*
** test_vmv_v_x_i8mf4_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint8mf4_t 
test_vmv_v_x_i8mf4_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_i8mf4_ta(-16, 31);
}

/*
** test_vmv_v_x_i8mf4_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint8mf4_t 
test_vmv_v_x_i8mf4_ta_vl31_15(size_t vl)
{
  return vmv_v_x_i8mf4_ta(15, 31);
}

/*
** test_vmv_v_x_i8mf2_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint8mf2_t 
test_vmv_v_x_i8mf2_ta_m16(size_t vl)
{
  return vmv_v_x_i8mf2_ta(-16, vl);
}

/*
** test_vmv_v_x_i8mf2_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint8mf2_t 
test_vmv_v_x_i8mf2_ta_15(size_t vl)
{
  return vmv_v_x_i8mf2_ta(15, vl);
}

/*
** test_vmv_v_x_i8mf2_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint8mf2_t 
test_vmv_v_x_i8mf2_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_i8mf2_ta(-16, 31);
}

/*
** test_vmv_v_x_i8mf2_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint8mf2_t 
test_vmv_v_x_i8mf2_ta_vl31_15(size_t vl)
{
  return vmv_v_x_i8mf2_ta(15, 31);
}

/*
** test_vmv_v_x_i8m1_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint8m1_t 
test_vmv_v_x_i8m1_ta_m16(size_t vl)
{
  return vmv_v_x_i8m1_ta(-16, vl);
}

/*
** test_vmv_v_x_i8m1_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint8m1_t 
test_vmv_v_x_i8m1_ta_15(size_t vl)
{
  return vmv_v_x_i8m1_ta(15, vl);
}

/*
** test_vmv_v_x_i8m1_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint8m1_t 
test_vmv_v_x_i8m1_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_i8m1_ta(-16, 31);
}

/*
** test_vmv_v_x_i8m1_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint8m1_t 
test_vmv_v_x_i8m1_ta_vl31_15(size_t vl)
{
  return vmv_v_x_i8m1_ta(15, 31);
}

/*
** test_vmv_v_x_i8m2_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vint8m2_t 
test_vmv_v_x_i8m2_ta_m16(size_t vl)
{
  return vmv_v_x_i8m2_ta(-16, vl);
}

/*
** test_vmv_v_x_i8m2_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vint8m2_t 
test_vmv_v_x_i8m2_ta_15(size_t vl)
{
  return vmv_v_x_i8m2_ta(15, vl);
}

/*
** test_vmv_v_x_i8m2_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vint8m2_t 
test_vmv_v_x_i8m2_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_i8m2_ta(-16, 31);
}

/*
** test_vmv_v_x_i8m2_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vint8m2_t 
test_vmv_v_x_i8m2_ta_vl31_15(size_t vl)
{
  return vmv_v_x_i8m2_ta(15, 31);
}

/*
** test_vmv_v_x_i8m4_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vint8m4_t 
test_vmv_v_x_i8m4_ta_m16(size_t vl)
{
  return vmv_v_x_i8m4_ta(-16, vl);
}

/*
** test_vmv_v_x_i8m4_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vint8m4_t 
test_vmv_v_x_i8m4_ta_15(size_t vl)
{
  return vmv_v_x_i8m4_ta(15, vl);
}

/*
** test_vmv_v_x_i8m4_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vint8m4_t 
test_vmv_v_x_i8m4_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_i8m4_ta(-16, 31);
}

/*
** test_vmv_v_x_i8m4_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vint8m4_t 
test_vmv_v_x_i8m4_ta_vl31_15(size_t vl)
{
  return vmv_v_x_i8m4_ta(15, 31);
}

/*
** test_vmv_v_x_i8m8_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vint8m8_t 
test_vmv_v_x_i8m8_ta_m16(size_t vl)
{
  return vmv_v_x_i8m8_ta(-16, vl);
}

/*
** test_vmv_v_x_i8m8_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vint8m8_t 
test_vmv_v_x_i8m8_ta_15(size_t vl)
{
  return vmv_v_x_i8m8_ta(15, vl);
}

/*
** test_vmv_v_x_i8m8_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vint8m8_t 
test_vmv_v_x_i8m8_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_i8m8_ta(-16, 31);
}

/*
** test_vmv_v_x_i8m8_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vint8m8_t 
test_vmv_v_x_i8m8_ta_vl31_15(size_t vl)
{
  return vmv_v_x_i8m8_ta(15, 31);
}

/*
** test_vmv_v_x_i16mf4_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint16mf4_t 
test_vmv_v_x_i16mf4_ta_m16(size_t vl)
{
  return vmv_v_x_i16mf4_ta(-16, vl);
}

/*
** test_vmv_v_x_i16mf4_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint16mf4_t 
test_vmv_v_x_i16mf4_ta_15(size_t vl)
{
  return vmv_v_x_i16mf4_ta(15, vl);
}

/*
** test_vmv_v_x_i16mf4_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint16mf4_t 
test_vmv_v_x_i16mf4_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_i16mf4_ta(-16, 31);
}

/*
** test_vmv_v_x_i16mf4_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint16mf4_t 
test_vmv_v_x_i16mf4_ta_vl31_15(size_t vl)
{
  return vmv_v_x_i16mf4_ta(15, 31);
}

/*
** test_vmv_v_x_i16mf2_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint16mf2_t 
test_vmv_v_x_i16mf2_ta_m16(size_t vl)
{
  return vmv_v_x_i16mf2_ta(-16, vl);
}

/*
** test_vmv_v_x_i16mf2_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint16mf2_t 
test_vmv_v_x_i16mf2_ta_15(size_t vl)
{
  return vmv_v_x_i16mf2_ta(15, vl);
}

/*
** test_vmv_v_x_i16mf2_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint16mf2_t 
test_vmv_v_x_i16mf2_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_i16mf2_ta(-16, 31);
}

/*
** test_vmv_v_x_i16mf2_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint16mf2_t 
test_vmv_v_x_i16mf2_ta_vl31_15(size_t vl)
{
  return vmv_v_x_i16mf2_ta(15, 31);
}

/*
** test_vmv_v_x_i16m1_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint16m1_t 
test_vmv_v_x_i16m1_ta_m16(size_t vl)
{
  return vmv_v_x_i16m1_ta(-16, vl);
}

/*
** test_vmv_v_x_i16m1_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint16m1_t 
test_vmv_v_x_i16m1_ta_15(size_t vl)
{
  return vmv_v_x_i16m1_ta(15, vl);
}

/*
** test_vmv_v_x_i16m1_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint16m1_t 
test_vmv_v_x_i16m1_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_i16m1_ta(-16, 31);
}

/*
** test_vmv_v_x_i16m1_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint16m1_t 
test_vmv_v_x_i16m1_ta_vl31_15(size_t vl)
{
  return vmv_v_x_i16m1_ta(15, 31);
}

/*
** test_vmv_v_x_i16m2_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vint16m2_t 
test_vmv_v_x_i16m2_ta_m16(size_t vl)
{
  return vmv_v_x_i16m2_ta(-16, vl);
}

/*
** test_vmv_v_x_i16m2_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vint16m2_t 
test_vmv_v_x_i16m2_ta_15(size_t vl)
{
  return vmv_v_x_i16m2_ta(15, vl);
}

/*
** test_vmv_v_x_i16m2_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vint16m2_t 
test_vmv_v_x_i16m2_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_i16m2_ta(-16, 31);
}

/*
** test_vmv_v_x_i16m2_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vint16m2_t 
test_vmv_v_x_i16m2_ta_vl31_15(size_t vl)
{
  return vmv_v_x_i16m2_ta(15, 31);
}

/*
** test_vmv_v_x_i16m4_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vint16m4_t 
test_vmv_v_x_i16m4_ta_m16(size_t vl)
{
  return vmv_v_x_i16m4_ta(-16, vl);
}

/*
** test_vmv_v_x_i16m4_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vint16m4_t 
test_vmv_v_x_i16m4_ta_15(size_t vl)
{
  return vmv_v_x_i16m4_ta(15, vl);
}

/*
** test_vmv_v_x_i16m4_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vint16m4_t 
test_vmv_v_x_i16m4_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_i16m4_ta(-16, 31);
}

/*
** test_vmv_v_x_i16m4_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vint16m4_t 
test_vmv_v_x_i16m4_ta_vl31_15(size_t vl)
{
  return vmv_v_x_i16m4_ta(15, 31);
}

/*
** test_vmv_v_x_i16m8_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vint16m8_t 
test_vmv_v_x_i16m8_ta_m16(size_t vl)
{
  return vmv_v_x_i16m8_ta(-16, vl);
}

/*
** test_vmv_v_x_i16m8_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vint16m8_t 
test_vmv_v_x_i16m8_ta_15(size_t vl)
{
  return vmv_v_x_i16m8_ta(15, vl);
}

/*
** test_vmv_v_x_i16m8_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vint16m8_t 
test_vmv_v_x_i16m8_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_i16m8_ta(-16, 31);
}

/*
** test_vmv_v_x_i16m8_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vint16m8_t 
test_vmv_v_x_i16m8_ta_vl31_15(size_t vl)
{
  return vmv_v_x_i16m8_ta(15, 31);
}

/*
** test_vmv_v_x_i32mf2_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint32mf2_t 
test_vmv_v_x_i32mf2_ta_m16(size_t vl)
{
  return vmv_v_x_i32mf2_ta(-16, vl);
}

/*
** test_vmv_v_x_i32mf2_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint32mf2_t 
test_vmv_v_x_i32mf2_ta_15(size_t vl)
{
  return vmv_v_x_i32mf2_ta(15, vl);
}

/*
** test_vmv_v_x_i32mf2_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint32mf2_t 
test_vmv_v_x_i32mf2_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_i32mf2_ta(-16, 31);
}

/*
** test_vmv_v_x_i32mf2_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint32mf2_t 
test_vmv_v_x_i32mf2_ta_vl31_15(size_t vl)
{
  return vmv_v_x_i32mf2_ta(15, 31);
}

/*
** test_vmv_v_x_i32m1_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint32m1_t 
test_vmv_v_x_i32m1_ta_m16(size_t vl)
{
  return vmv_v_x_i32m1_ta(-16, vl);
}

/*
** test_vmv_v_x_i32m1_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint32m1_t 
test_vmv_v_x_i32m1_ta_15(size_t vl)
{
  return vmv_v_x_i32m1_ta(15, vl);
}

/*
** test_vmv_v_x_i32m1_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint32m1_t 
test_vmv_v_x_i32m1_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_i32m1_ta(-16, 31);
}

/*
** test_vmv_v_x_i32m1_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint32m1_t 
test_vmv_v_x_i32m1_ta_vl31_15(size_t vl)
{
  return vmv_v_x_i32m1_ta(15, 31);
}

/*
** test_vmv_v_x_i32m2_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vint32m2_t 
test_vmv_v_x_i32m2_ta_m16(size_t vl)
{
  return vmv_v_x_i32m2_ta(-16, vl);
}

/*
** test_vmv_v_x_i32m2_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vint32m2_t 
test_vmv_v_x_i32m2_ta_15(size_t vl)
{
  return vmv_v_x_i32m2_ta(15, vl);
}

/*
** test_vmv_v_x_i32m2_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vint32m2_t 
test_vmv_v_x_i32m2_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_i32m2_ta(-16, 31);
}

/*
** test_vmv_v_x_i32m2_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vint32m2_t 
test_vmv_v_x_i32m2_ta_vl31_15(size_t vl)
{
  return vmv_v_x_i32m2_ta(15, 31);
}

/*
** test_vmv_v_x_i32m4_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vint32m4_t 
test_vmv_v_x_i32m4_ta_m16(size_t vl)
{
  return vmv_v_x_i32m4_ta(-16, vl);
}

/*
** test_vmv_v_x_i32m4_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vint32m4_t 
test_vmv_v_x_i32m4_ta_15(size_t vl)
{
  return vmv_v_x_i32m4_ta(15, vl);
}

/*
** test_vmv_v_x_i32m4_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vint32m4_t 
test_vmv_v_x_i32m4_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_i32m4_ta(-16, 31);
}

/*
** test_vmv_v_x_i32m4_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vint32m4_t 
test_vmv_v_x_i32m4_ta_vl31_15(size_t vl)
{
  return vmv_v_x_i32m4_ta(15, 31);
}

/*
** test_vmv_v_x_i32m8_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vint32m8_t 
test_vmv_v_x_i32m8_ta_m16(size_t vl)
{
  return vmv_v_x_i32m8_ta(-16, vl);
}

/*
** test_vmv_v_x_i32m8_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vint32m8_t 
test_vmv_v_x_i32m8_ta_15(size_t vl)
{
  return vmv_v_x_i32m8_ta(15, vl);
}

/*
** test_vmv_v_x_i32m8_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vint32m8_t 
test_vmv_v_x_i32m8_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_i32m8_ta(-16, 31);
}

/*
** test_vmv_v_x_i32m8_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vint32m8_t 
test_vmv_v_x_i32m8_ta_vl31_15(size_t vl)
{
  return vmv_v_x_i32m8_ta(15, 31);
}

/*
** test_vmv_v_x_i8mf8_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint8mf8_t 
test_vmv_v_x_i8mf8_tu_m16(vint8mf8_t dest, size_t vl)
{
  return vmv_v_x_i8mf8_tu(dest, -16, vl);
}

/*
** test_vmv_v_x_i8mf8_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint8mf8_t 
test_vmv_v_x_i8mf8_tu_15(vint8mf8_t dest, size_t vl)
{
  return vmv_v_x_i8mf8_tu(dest, 15, vl);
}

/*
** test_vmv_v_x_i8mf8_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint8mf8_t 
test_vmv_v_x_i8mf8_tu_vl31_m16(vint8mf8_t dest)
{
  return vmv_v_x_i8mf8_tu(dest, -16, 31);
}

/*
** test_vmv_v_x_i8mf8_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint8mf8_t 
test_vmv_v_x_i8mf8_tu_vl31_15(vint8mf8_t dest)
{
  return vmv_v_x_i8mf8_tu(dest, 15, 31);
}

/*
** test_vmv_v_x_i8mf4_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint8mf4_t 
test_vmv_v_x_i8mf4_tu_m16(vint8mf4_t dest, size_t vl)
{
  return vmv_v_x_i8mf4_tu(dest, -16, vl);
}

/*
** test_vmv_v_x_i8mf4_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint8mf4_t 
test_vmv_v_x_i8mf4_tu_15(vint8mf4_t dest, size_t vl)
{
  return vmv_v_x_i8mf4_tu(dest, 15, vl);
}

/*
** test_vmv_v_x_i8mf4_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint8mf4_t 
test_vmv_v_x_i8mf4_tu_vl31_m16(vint8mf4_t dest)
{
  return vmv_v_x_i8mf4_tu(dest, -16, 31);
}

/*
** test_vmv_v_x_i8mf4_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint8mf4_t 
test_vmv_v_x_i8mf4_tu_vl31_15(vint8mf4_t dest)
{
  return vmv_v_x_i8mf4_tu(dest, 15, 31);
}

/*
** test_vmv_v_x_i8mf2_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint8mf2_t 
test_vmv_v_x_i8mf2_tu_m16(vint8mf2_t dest, size_t vl)
{
  return vmv_v_x_i8mf2_tu(dest, -16, vl);
}

/*
** test_vmv_v_x_i8mf2_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint8mf2_t 
test_vmv_v_x_i8mf2_tu_15(vint8mf2_t dest, size_t vl)
{
  return vmv_v_x_i8mf2_tu(dest, 15, vl);
}

/*
** test_vmv_v_x_i8mf2_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint8mf2_t 
test_vmv_v_x_i8mf2_tu_vl31_m16(vint8mf2_t dest)
{
  return vmv_v_x_i8mf2_tu(dest, -16, 31);
}

/*
** test_vmv_v_x_i8mf2_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint8mf2_t 
test_vmv_v_x_i8mf2_tu_vl31_15(vint8mf2_t dest)
{
  return vmv_v_x_i8mf2_tu(dest, 15, 31);
}

/*
** test_vmv_v_x_i8m1_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint8m1_t 
test_vmv_v_x_i8m1_tu_m16(vint8m1_t dest, size_t vl)
{
  return vmv_v_x_i8m1_tu(dest, -16, vl);
}

/*
** test_vmv_v_x_i8m1_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint8m1_t 
test_vmv_v_x_i8m1_tu_15(vint8m1_t dest, size_t vl)
{
  return vmv_v_x_i8m1_tu(dest, 15, vl);
}

/*
** test_vmv_v_x_i8m1_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint8m1_t 
test_vmv_v_x_i8m1_tu_vl31_m16(vint8m1_t dest)
{
  return vmv_v_x_i8m1_tu(dest, -16, 31);
}

/*
** test_vmv_v_x_i8m1_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint8m1_t 
test_vmv_v_x_i8m1_tu_vl31_15(vint8m1_t dest)
{
  return vmv_v_x_i8m1_tu(dest, 15, 31);
}

/*
** test_vmv_v_x_i8m2_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vint8m2_t 
test_vmv_v_x_i8m2_tu_m16(vint8m2_t dest, size_t vl)
{
  return vmv_v_x_i8m2_tu(dest, -16, vl);
}

/*
** test_vmv_v_x_i8m2_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vint8m2_t 
test_vmv_v_x_i8m2_tu_15(vint8m2_t dest, size_t vl)
{
  return vmv_v_x_i8m2_tu(dest, 15, vl);
}

/*
** test_vmv_v_x_i8m2_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vint8m2_t 
test_vmv_v_x_i8m2_tu_vl31_m16(vint8m2_t dest)
{
  return vmv_v_x_i8m2_tu(dest, -16, 31);
}

/*
** test_vmv_v_x_i8m2_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vint8m2_t 
test_vmv_v_x_i8m2_tu_vl31_15(vint8m2_t dest)
{
  return vmv_v_x_i8m2_tu(dest, 15, 31);
}

/*
** test_vmv_v_x_i8m4_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vint8m4_t 
test_vmv_v_x_i8m4_tu_m16(vint8m4_t dest, size_t vl)
{
  return vmv_v_x_i8m4_tu(dest, -16, vl);
}

/*
** test_vmv_v_x_i8m4_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vint8m4_t 
test_vmv_v_x_i8m4_tu_15(vint8m4_t dest, size_t vl)
{
  return vmv_v_x_i8m4_tu(dest, 15, vl);
}

/*
** test_vmv_v_x_i8m4_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vint8m4_t 
test_vmv_v_x_i8m4_tu_vl31_m16(vint8m4_t dest)
{
  return vmv_v_x_i8m4_tu(dest, -16, 31);
}

/*
** test_vmv_v_x_i8m4_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vint8m4_t 
test_vmv_v_x_i8m4_tu_vl31_15(vint8m4_t dest)
{
  return vmv_v_x_i8m4_tu(dest, 15, 31);
}

/*
** test_vmv_v_x_i8m8_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vint8m8_t 
test_vmv_v_x_i8m8_tu_m16(vint8m8_t dest, size_t vl)
{
  return vmv_v_x_i8m8_tu(dest, -16, vl);
}

/*
** test_vmv_v_x_i8m8_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vint8m8_t 
test_vmv_v_x_i8m8_tu_15(vint8m8_t dest, size_t vl)
{
  return vmv_v_x_i8m8_tu(dest, 15, vl);
}

/*
** test_vmv_v_x_i8m8_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vint8m8_t 
test_vmv_v_x_i8m8_tu_vl31_m16(vint8m8_t dest)
{
  return vmv_v_x_i8m8_tu(dest, -16, 31);
}

/*
** test_vmv_v_x_i8m8_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vint8m8_t 
test_vmv_v_x_i8m8_tu_vl31_15(vint8m8_t dest)
{
  return vmv_v_x_i8m8_tu(dest, 15, 31);
}

/*
** test_vmv_v_x_i16mf4_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint16mf4_t 
test_vmv_v_x_i16mf4_tu_m16(vint16mf4_t dest, size_t vl)
{
  return vmv_v_x_i16mf4_tu(dest, -16, vl);
}

/*
** test_vmv_v_x_i16mf4_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint16mf4_t 
test_vmv_v_x_i16mf4_tu_15(vint16mf4_t dest, size_t vl)
{
  return vmv_v_x_i16mf4_tu(dest, 15, vl);
}

/*
** test_vmv_v_x_i16mf4_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint16mf4_t 
test_vmv_v_x_i16mf4_tu_vl31_m16(vint16mf4_t dest)
{
  return vmv_v_x_i16mf4_tu(dest, -16, 31);
}

/*
** test_vmv_v_x_i16mf4_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint16mf4_t 
test_vmv_v_x_i16mf4_tu_vl31_15(vint16mf4_t dest)
{
  return vmv_v_x_i16mf4_tu(dest, 15, 31);
}

/*
** test_vmv_v_x_i16mf2_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint16mf2_t 
test_vmv_v_x_i16mf2_tu_m16(vint16mf2_t dest, size_t vl)
{
  return vmv_v_x_i16mf2_tu(dest, -16, vl);
}

/*
** test_vmv_v_x_i16mf2_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint16mf2_t 
test_vmv_v_x_i16mf2_tu_15(vint16mf2_t dest, size_t vl)
{
  return vmv_v_x_i16mf2_tu(dest, 15, vl);
}

/*
** test_vmv_v_x_i16mf2_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint16mf2_t 
test_vmv_v_x_i16mf2_tu_vl31_m16(vint16mf2_t dest)
{
  return vmv_v_x_i16mf2_tu(dest, -16, 31);
}

/*
** test_vmv_v_x_i16mf2_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint16mf2_t 
test_vmv_v_x_i16mf2_tu_vl31_15(vint16mf2_t dest)
{
  return vmv_v_x_i16mf2_tu(dest, 15, 31);
}

/*
** test_vmv_v_x_i16m1_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint16m1_t 
test_vmv_v_x_i16m1_tu_m16(vint16m1_t dest, size_t vl)
{
  return vmv_v_x_i16m1_tu(dest, -16, vl);
}

/*
** test_vmv_v_x_i16m1_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint16m1_t 
test_vmv_v_x_i16m1_tu_15(vint16m1_t dest, size_t vl)
{
  return vmv_v_x_i16m1_tu(dest, 15, vl);
}

/*
** test_vmv_v_x_i16m1_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint16m1_t 
test_vmv_v_x_i16m1_tu_vl31_m16(vint16m1_t dest)
{
  return vmv_v_x_i16m1_tu(dest, -16, 31);
}

/*
** test_vmv_v_x_i16m1_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint16m1_t 
test_vmv_v_x_i16m1_tu_vl31_15(vint16m1_t dest)
{
  return vmv_v_x_i16m1_tu(dest, 15, 31);
}

/*
** test_vmv_v_x_i16m2_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vint16m2_t 
test_vmv_v_x_i16m2_tu_m16(vint16m2_t dest, size_t vl)
{
  return vmv_v_x_i16m2_tu(dest, -16, vl);
}

/*
** test_vmv_v_x_i16m2_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vint16m2_t 
test_vmv_v_x_i16m2_tu_15(vint16m2_t dest, size_t vl)
{
  return vmv_v_x_i16m2_tu(dest, 15, vl);
}

/*
** test_vmv_v_x_i16m2_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vint16m2_t 
test_vmv_v_x_i16m2_tu_vl31_m16(vint16m2_t dest)
{
  return vmv_v_x_i16m2_tu(dest, -16, 31);
}

/*
** test_vmv_v_x_i16m2_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vint16m2_t 
test_vmv_v_x_i16m2_tu_vl31_15(vint16m2_t dest)
{
  return vmv_v_x_i16m2_tu(dest, 15, 31);
}

/*
** test_vmv_v_x_i16m4_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vint16m4_t 
test_vmv_v_x_i16m4_tu_m16(vint16m4_t dest, size_t vl)
{
  return vmv_v_x_i16m4_tu(dest, -16, vl);
}

/*
** test_vmv_v_x_i16m4_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vint16m4_t 
test_vmv_v_x_i16m4_tu_15(vint16m4_t dest, size_t vl)
{
  return vmv_v_x_i16m4_tu(dest, 15, vl);
}

/*
** test_vmv_v_x_i16m4_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vint16m4_t 
test_vmv_v_x_i16m4_tu_vl31_m16(vint16m4_t dest)
{
  return vmv_v_x_i16m4_tu(dest, -16, 31);
}

/*
** test_vmv_v_x_i16m4_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vint16m4_t 
test_vmv_v_x_i16m4_tu_vl31_15(vint16m4_t dest)
{
  return vmv_v_x_i16m4_tu(dest, 15, 31);
}

/*
** test_vmv_v_x_i16m8_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vint16m8_t 
test_vmv_v_x_i16m8_tu_m16(vint16m8_t dest, size_t vl)
{
  return vmv_v_x_i16m8_tu(dest, -16, vl);
}

/*
** test_vmv_v_x_i16m8_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vint16m8_t 
test_vmv_v_x_i16m8_tu_15(vint16m8_t dest, size_t vl)
{
  return vmv_v_x_i16m8_tu(dest, 15, vl);
}

/*
** test_vmv_v_x_i16m8_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vint16m8_t 
test_vmv_v_x_i16m8_tu_vl31_m16(vint16m8_t dest)
{
  return vmv_v_x_i16m8_tu(dest, -16, 31);
}

/*
** test_vmv_v_x_i16m8_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vint16m8_t 
test_vmv_v_x_i16m8_tu_vl31_15(vint16m8_t dest)
{
  return vmv_v_x_i16m8_tu(dest, 15, 31);
}

/*
** test_vmv_v_x_i32mf2_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint32mf2_t 
test_vmv_v_x_i32mf2_tu_m16(vint32mf2_t dest, size_t vl)
{
  return vmv_v_x_i32mf2_tu(dest, -16, vl);
}

/*
** test_vmv_v_x_i32mf2_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint32mf2_t 
test_vmv_v_x_i32mf2_tu_15(vint32mf2_t dest, size_t vl)
{
  return vmv_v_x_i32mf2_tu(dest, 15, vl);
}

/*
** test_vmv_v_x_i32mf2_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint32mf2_t 
test_vmv_v_x_i32mf2_tu_vl31_m16(vint32mf2_t dest)
{
  return vmv_v_x_i32mf2_tu(dest, -16, 31);
}

/*
** test_vmv_v_x_i32mf2_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint32mf2_t 
test_vmv_v_x_i32mf2_tu_vl31_15(vint32mf2_t dest)
{
  return vmv_v_x_i32mf2_tu(dest, 15, 31);
}

/*
** test_vmv_v_x_i32m1_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint32m1_t 
test_vmv_v_x_i32m1_tu_m16(vint32m1_t dest, size_t vl)
{
  return vmv_v_x_i32m1_tu(dest, -16, vl);
}

/*
** test_vmv_v_x_i32m1_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint32m1_t 
test_vmv_v_x_i32m1_tu_15(vint32m1_t dest, size_t vl)
{
  return vmv_v_x_i32m1_tu(dest, 15, vl);
}

/*
** test_vmv_v_x_i32m1_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint32m1_t 
test_vmv_v_x_i32m1_tu_vl31_m16(vint32m1_t dest)
{
  return vmv_v_x_i32m1_tu(dest, -16, 31);
}

/*
** test_vmv_v_x_i32m1_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint32m1_t 
test_vmv_v_x_i32m1_tu_vl31_15(vint32m1_t dest)
{
  return vmv_v_x_i32m1_tu(dest, 15, 31);
}

/*
** test_vmv_v_x_i32m2_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vint32m2_t 
test_vmv_v_x_i32m2_tu_m16(vint32m2_t dest, size_t vl)
{
  return vmv_v_x_i32m2_tu(dest, -16, vl);
}

/*
** test_vmv_v_x_i32m2_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vint32m2_t 
test_vmv_v_x_i32m2_tu_15(vint32m2_t dest, size_t vl)
{
  return vmv_v_x_i32m2_tu(dest, 15, vl);
}

/*
** test_vmv_v_x_i32m2_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vint32m2_t 
test_vmv_v_x_i32m2_tu_vl31_m16(vint32m2_t dest)
{
  return vmv_v_x_i32m2_tu(dest, -16, 31);
}

/*
** test_vmv_v_x_i32m2_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vint32m2_t 
test_vmv_v_x_i32m2_tu_vl31_15(vint32m2_t dest)
{
  return vmv_v_x_i32m2_tu(dest, 15, 31);
}

/*
** test_vmv_v_x_i32m4_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vint32m4_t 
test_vmv_v_x_i32m4_tu_m16(vint32m4_t dest, size_t vl)
{
  return vmv_v_x_i32m4_tu(dest, -16, vl);
}

/*
** test_vmv_v_x_i32m4_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vint32m4_t 
test_vmv_v_x_i32m4_tu_15(vint32m4_t dest, size_t vl)
{
  return vmv_v_x_i32m4_tu(dest, 15, vl);
}

/*
** test_vmv_v_x_i32m4_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vint32m4_t 
test_vmv_v_x_i32m4_tu_vl31_m16(vint32m4_t dest)
{
  return vmv_v_x_i32m4_tu(dest, -16, 31);
}

/*
** test_vmv_v_x_i32m4_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vint32m4_t 
test_vmv_v_x_i32m4_tu_vl31_15(vint32m4_t dest)
{
  return vmv_v_x_i32m4_tu(dest, 15, 31);
}

/*
** test_vmv_v_x_i32m8_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vint32m8_t 
test_vmv_v_x_i32m8_tu_m16(vint32m8_t dest, size_t vl)
{
  return vmv_v_x_i32m8_tu(dest, -16, vl);
}

/*
** test_vmv_v_x_i32m8_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vint32m8_t 
test_vmv_v_x_i32m8_tu_15(vint32m8_t dest, size_t vl)
{
  return vmv_v_x_i32m8_tu(dest, 15, vl);
}

/*
** test_vmv_v_x_i32m8_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vint32m8_t 
test_vmv_v_x_i32m8_tu_vl31_m16(vint32m8_t dest)
{
  return vmv_v_x_i32m8_tu(dest, -16, 31);
}

/*
** test_vmv_v_x_i32m8_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vint32m8_t 
test_vmv_v_x_i32m8_tu_vl31_15(vint32m8_t dest)
{
  return vmv_v_x_i32m8_tu(dest, 15, 31);
}

/*
** test_vmv_v_x_i64m1_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint64m1_t 
test_vmv_v_x_i64m1_ta_m16(size_t vl)
{
  return vmv_v_x_i64m1_ta(-16, vl);
}

/*
** test_vmv_v_x_i64m1_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint64m1_t 
test_vmv_v_x_i64m1_ta_15(size_t vl)
{
  return vmv_v_x_i64m1_ta(15, vl);
}

/*
** test_vmv_v_x_i64m1_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint64m1_t 
test_vmv_v_x_i64m1_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_i64m1_ta(-16, 31);
}

/*
** test_vmv_v_x_i64m1_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint64m1_t 
test_vmv_v_x_i64m1_ta_vl31_15(size_t vl)
{
  return vmv_v_x_i64m1_ta(15, 31);
}

/*
** test_vmv_v_x_i64m2_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vint64m2_t 
test_vmv_v_x_i64m2_ta_m16(size_t vl)
{
  return vmv_v_x_i64m2_ta(-16, vl);
}

/*
** test_vmv_v_x_i64m2_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vint64m2_t 
test_vmv_v_x_i64m2_ta_15(size_t vl)
{
  return vmv_v_x_i64m2_ta(15, vl);
}

/*
** test_vmv_v_x_i64m2_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vint64m2_t 
test_vmv_v_x_i64m2_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_i64m2_ta(-16, 31);
}

/*
** test_vmv_v_x_i64m2_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vint64m2_t 
test_vmv_v_x_i64m2_ta_vl31_15(size_t vl)
{
  return vmv_v_x_i64m2_ta(15, 31);
}

/*
** test_vmv_v_x_i64m4_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vint64m4_t 
test_vmv_v_x_i64m4_ta_m16(size_t vl)
{
  return vmv_v_x_i64m4_ta(-16, vl);
}

/*
** test_vmv_v_x_i64m4_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vint64m4_t 
test_vmv_v_x_i64m4_ta_15(size_t vl)
{
  return vmv_v_x_i64m4_ta(15, vl);
}

/*
** test_vmv_v_x_i64m4_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vint64m4_t 
test_vmv_v_x_i64m4_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_i64m4_ta(-16, 31);
}

/*
** test_vmv_v_x_i64m4_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vint64m4_t 
test_vmv_v_x_i64m4_ta_vl31_15(size_t vl)
{
  return vmv_v_x_i64m4_ta(15, 31);
}

/*
** test_vmv_v_x_i64m8_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vint64m8_t 
test_vmv_v_x_i64m8_ta_m16(size_t vl)
{
  return vmv_v_x_i64m8_ta(-16, vl);
}

/*
** test_vmv_v_x_i64m8_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vint64m8_t 
test_vmv_v_x_i64m8_ta_15(size_t vl)
{
  return vmv_v_x_i64m8_ta(15, vl);
}

/*
** test_vmv_v_x_i64m8_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vint64m8_t 
test_vmv_v_x_i64m8_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_i64m8_ta(-16, 31);
}

/*
** test_vmv_v_x_i64m8_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vint64m8_t 
test_vmv_v_x_i64m8_ta_vl31_15(size_t vl)
{
  return vmv_v_x_i64m8_ta(15, 31);
}

/*
** test_vmv_v_x_i64m1_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint64m1_t 
test_vmv_v_x_i64m1_tu_m16(vint64m1_t dest, size_t vl)
{
  return vmv_v_x_i64m1_tu(dest, -16, vl);
}

/*
** test_vmv_v_x_i64m1_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint64m1_t 
test_vmv_v_x_i64m1_tu_15(vint64m1_t dest, size_t vl)
{
  return vmv_v_x_i64m1_tu(dest, 15, vl);
}

/*
** test_vmv_v_x_i64m1_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint64m1_t 
test_vmv_v_x_i64m1_tu_vl31_m16(vint64m1_t dest)
{
  return vmv_v_x_i64m1_tu(dest, -16, 31);
}

/*
** test_vmv_v_x_i64m1_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint64m1_t 
test_vmv_v_x_i64m1_tu_vl31_15(vint64m1_t dest)
{
  return vmv_v_x_i64m1_tu(dest, 15, 31);
}

/*
** test_vmv_v_x_i64m2_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vint64m2_t 
test_vmv_v_x_i64m2_tu_m16(vint64m2_t dest, size_t vl)
{
  return vmv_v_x_i64m2_tu(dest, -16, vl);
}

/*
** test_vmv_v_x_i64m2_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vint64m2_t 
test_vmv_v_x_i64m2_tu_15(vint64m2_t dest, size_t vl)
{
  return vmv_v_x_i64m2_tu(dest, 15, vl);
}

/*
** test_vmv_v_x_i64m2_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vint64m2_t 
test_vmv_v_x_i64m2_tu_vl31_m16(vint64m2_t dest)
{
  return vmv_v_x_i64m2_tu(dest, -16, 31);
}

/*
** test_vmv_v_x_i64m2_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vint64m2_t 
test_vmv_v_x_i64m2_tu_vl31_15(vint64m2_t dest)
{
  return vmv_v_x_i64m2_tu(dest, 15, 31);
}

/*
** test_vmv_v_x_i64m4_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vint64m4_t 
test_vmv_v_x_i64m4_tu_m16(vint64m4_t dest, size_t vl)
{
  return vmv_v_x_i64m4_tu(dest, -16, vl);
}

/*
** test_vmv_v_x_i64m4_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vint64m4_t 
test_vmv_v_x_i64m4_tu_15(vint64m4_t dest, size_t vl)
{
  return vmv_v_x_i64m4_tu(dest, 15, vl);
}

/*
** test_vmv_v_x_i64m4_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vint64m4_t 
test_vmv_v_x_i64m4_tu_vl31_m16(vint64m4_t dest)
{
  return vmv_v_x_i64m4_tu(dest, -16, 31);
}

/*
** test_vmv_v_x_i64m4_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vint64m4_t 
test_vmv_v_x_i64m4_tu_vl31_15(vint64m4_t dest)
{
  return vmv_v_x_i64m4_tu(dest, 15, 31);
}

/*
** test_vmv_v_x_i64m8_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vint64m8_t 
test_vmv_v_x_i64m8_tu_m16(vint64m8_t dest, size_t vl)
{
  return vmv_v_x_i64m8_tu(dest, -16, vl);
}

/*
** test_vmv_v_x_i64m8_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vint64m8_t 
test_vmv_v_x_i64m8_tu_15(vint64m8_t dest, size_t vl)
{
  return vmv_v_x_i64m8_tu(dest, 15, vl);
}

/*
** test_vmv_v_x_i64m8_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vint64m8_t 
test_vmv_v_x_i64m8_tu_vl31_m16(vint64m8_t dest)
{
  return vmv_v_x_i64m8_tu(dest, -16, 31);
}

/*
** test_vmv_v_x_i64m8_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vint64m8_t 
test_vmv_v_x_i64m8_tu_vl31_15(vint64m8_t dest)
{
  return vmv_v_x_i64m8_tu(dest, 15, 31);
}

/*
** test_vmv_v_x_i8mf8_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint8mf8_t 
test_vmv_v_x_i8mf8_ta_vl32_m16(size_t vl)
{
  return vmv_v_x_i8mf8_ta(-16, 32);
}

/*
** test_vmv_v_x_i8mf8_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint8mf8_t 
test_vmv_v_x_i8mf8_ta_vl32_15(size_t vl)
{
  return vmv_v_x_i8mf8_ta(15, 32);
}

/*
** test_vmv_v_x_i8mf4_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint8mf4_t 
test_vmv_v_x_i8mf4_ta_vl32_m16(size_t vl)
{
  return vmv_v_x_i8mf4_ta(-16, 32);
}

/*
** test_vmv_v_x_i8mf4_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint8mf4_t 
test_vmv_v_x_i8mf4_ta_vl32_15(size_t vl)
{
  return vmv_v_x_i8mf4_ta(15, 32);
}

/*
** test_vmv_v_x_i8mf2_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint8mf2_t 
test_vmv_v_x_i8mf2_ta_vl32_m16(size_t vl)
{
  return vmv_v_x_i8mf2_ta(-16, 32);
}

/*
** test_vmv_v_x_i8mf2_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint8mf2_t 
test_vmv_v_x_i8mf2_ta_vl32_15(size_t vl)
{
  return vmv_v_x_i8mf2_ta(15, 32);
}

/*
** test_vmv_v_x_i8m1_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint8m1_t 
test_vmv_v_x_i8m1_ta_vl32_m16(size_t vl)
{
  return vmv_v_x_i8m1_ta(-16, 32);
}

/*
** test_vmv_v_x_i8m1_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint8m1_t 
test_vmv_v_x_i8m1_ta_vl32_15(size_t vl)
{
  return vmv_v_x_i8m1_ta(15, 32);
}

/*
** test_vmv_v_x_i8m2_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vint8m2_t 
test_vmv_v_x_i8m2_ta_vl32_m16(size_t vl)
{
  return vmv_v_x_i8m2_ta(-16, 32);
}

/*
** test_vmv_v_x_i8m2_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vint8m2_t 
test_vmv_v_x_i8m2_ta_vl32_15(size_t vl)
{
  return vmv_v_x_i8m2_ta(15, 32);
}

/*
** test_vmv_v_x_i8m4_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vint8m4_t 
test_vmv_v_x_i8m4_ta_vl32_m16(size_t vl)
{
  return vmv_v_x_i8m4_ta(-16, 32);
}

/*
** test_vmv_v_x_i8m4_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vint8m4_t 
test_vmv_v_x_i8m4_ta_vl32_15(size_t vl)
{
  return vmv_v_x_i8m4_ta(15, 32);
}

/*
** test_vmv_v_x_i8m8_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vint8m8_t 
test_vmv_v_x_i8m8_ta_vl32_m16(size_t vl)
{
  return vmv_v_x_i8m8_ta(-16, 32);
}

/*
** test_vmv_v_x_i8m8_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vint8m8_t 
test_vmv_v_x_i8m8_ta_vl32_15(size_t vl)
{
  return vmv_v_x_i8m8_ta(15, 32);
}

/*
** test_vmv_v_x_i16mf4_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint16mf4_t 
test_vmv_v_x_i16mf4_ta_vl32_m16(size_t vl)
{
  return vmv_v_x_i16mf4_ta(-16, 32);
}

/*
** test_vmv_v_x_i16mf4_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint16mf4_t 
test_vmv_v_x_i16mf4_ta_vl32_15(size_t vl)
{
  return vmv_v_x_i16mf4_ta(15, 32);
}

/*
** test_vmv_v_x_i16mf2_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint16mf2_t 
test_vmv_v_x_i16mf2_ta_vl32_m16(size_t vl)
{
  return vmv_v_x_i16mf2_ta(-16, 32);
}

/*
** test_vmv_v_x_i16mf2_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint16mf2_t 
test_vmv_v_x_i16mf2_ta_vl32_15(size_t vl)
{
  return vmv_v_x_i16mf2_ta(15, 32);
}

/*
** test_vmv_v_x_i16m1_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint16m1_t 
test_vmv_v_x_i16m1_ta_vl32_m16(size_t vl)
{
  return vmv_v_x_i16m1_ta(-16, 32);
}

/*
** test_vmv_v_x_i16m1_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint16m1_t 
test_vmv_v_x_i16m1_ta_vl32_15(size_t vl)
{
  return vmv_v_x_i16m1_ta(15, 32);
}

/*
** test_vmv_v_x_i16m2_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vint16m2_t 
test_vmv_v_x_i16m2_ta_vl32_m16(size_t vl)
{
  return vmv_v_x_i16m2_ta(-16, 32);
}

/*
** test_vmv_v_x_i16m2_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vint16m2_t 
test_vmv_v_x_i16m2_ta_vl32_15(size_t vl)
{
  return vmv_v_x_i16m2_ta(15, 32);
}

/*
** test_vmv_v_x_i16m4_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vint16m4_t 
test_vmv_v_x_i16m4_ta_vl32_m16(size_t vl)
{
  return vmv_v_x_i16m4_ta(-16, 32);
}

/*
** test_vmv_v_x_i16m4_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vint16m4_t 
test_vmv_v_x_i16m4_ta_vl32_15(size_t vl)
{
  return vmv_v_x_i16m4_ta(15, 32);
}

/*
** test_vmv_v_x_i16m8_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vint16m8_t 
test_vmv_v_x_i16m8_ta_vl32_m16(size_t vl)
{
  return vmv_v_x_i16m8_ta(-16, 32);
}

/*
** test_vmv_v_x_i16m8_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vint16m8_t 
test_vmv_v_x_i16m8_ta_vl32_15(size_t vl)
{
  return vmv_v_x_i16m8_ta(15, 32);
}

/*
** test_vmv_v_x_i32mf2_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint32mf2_t 
test_vmv_v_x_i32mf2_ta_vl32_m16(size_t vl)
{
  return vmv_v_x_i32mf2_ta(-16, 32);
}

/*
** test_vmv_v_x_i32mf2_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint32mf2_t 
test_vmv_v_x_i32mf2_ta_vl32_15(size_t vl)
{
  return vmv_v_x_i32mf2_ta(15, 32);
}

/*
** test_vmv_v_x_i32m1_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint32m1_t 
test_vmv_v_x_i32m1_ta_vl32_m16(size_t vl)
{
  return vmv_v_x_i32m1_ta(-16, 32);
}

/*
** test_vmv_v_x_i32m1_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint32m1_t 
test_vmv_v_x_i32m1_ta_vl32_15(size_t vl)
{
  return vmv_v_x_i32m1_ta(15, 32);
}

/*
** test_vmv_v_x_i32m2_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vint32m2_t 
test_vmv_v_x_i32m2_ta_vl32_m16(size_t vl)
{
  return vmv_v_x_i32m2_ta(-16, 32);
}

/*
** test_vmv_v_x_i32m2_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vint32m2_t 
test_vmv_v_x_i32m2_ta_vl32_15(size_t vl)
{
  return vmv_v_x_i32m2_ta(15, 32);
}

/*
** test_vmv_v_x_i32m4_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vint32m4_t 
test_vmv_v_x_i32m4_ta_vl32_m16(size_t vl)
{
  return vmv_v_x_i32m4_ta(-16, 32);
}

/*
** test_vmv_v_x_i32m4_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vint32m4_t 
test_vmv_v_x_i32m4_ta_vl32_15(size_t vl)
{
  return vmv_v_x_i32m4_ta(15, 32);
}

/*
** test_vmv_v_x_i32m8_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vint32m8_t 
test_vmv_v_x_i32m8_ta_vl32_m16(size_t vl)
{
  return vmv_v_x_i32m8_ta(-16, 32);
}

/*
** test_vmv_v_x_i32m8_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vint32m8_t 
test_vmv_v_x_i32m8_ta_vl32_15(size_t vl)
{
  return vmv_v_x_i32m8_ta(15, 32);
}

/*
** test_vmv_v_x_i8mf8_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint8mf8_t 
test_vmv_v_x_i8mf8_tu_vl32_m16(vint8mf8_t dest)
{
  return vmv_v_x_i8mf8_tu(dest, -16, 32);
}

/*
** test_vmv_v_x_i8mf8_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint8mf8_t 
test_vmv_v_x_i8mf8_tu_vl32_15(vint8mf8_t dest)
{
  return vmv_v_x_i8mf8_tu(dest, 15, 32);
}

/*
** test_vmv_v_x_i8mf4_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint8mf4_t 
test_vmv_v_x_i8mf4_tu_vl32_m16(vint8mf4_t dest)
{
  return vmv_v_x_i8mf4_tu(dest, -16, 32);
}

/*
** test_vmv_v_x_i8mf4_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint8mf4_t 
test_vmv_v_x_i8mf4_tu_vl32_15(vint8mf4_t dest)
{
  return vmv_v_x_i8mf4_tu(dest, 15, 32);
}

/*
** test_vmv_v_x_i8mf2_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint8mf2_t 
test_vmv_v_x_i8mf2_tu_vl32_m16(vint8mf2_t dest)
{
  return vmv_v_x_i8mf2_tu(dest, -16, 32);
}

/*
** test_vmv_v_x_i8mf2_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint8mf2_t 
test_vmv_v_x_i8mf2_tu_vl32_15(vint8mf2_t dest)
{
  return vmv_v_x_i8mf2_tu(dest, 15, 32);
}

/*
** test_vmv_v_x_i8m1_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint8m1_t 
test_vmv_v_x_i8m1_tu_vl32_m16(vint8m1_t dest)
{
  return vmv_v_x_i8m1_tu(dest, -16, 32);
}

/*
** test_vmv_v_x_i8m1_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint8m1_t 
test_vmv_v_x_i8m1_tu_vl32_15(vint8m1_t dest)
{
  return vmv_v_x_i8m1_tu(dest, 15, 32);
}

/*
** test_vmv_v_x_i8m2_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vint8m2_t 
test_vmv_v_x_i8m2_tu_vl32_m16(vint8m2_t dest)
{
  return vmv_v_x_i8m2_tu(dest, -16, 32);
}

/*
** test_vmv_v_x_i8m2_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vint8m2_t 
test_vmv_v_x_i8m2_tu_vl32_15(vint8m2_t dest)
{
  return vmv_v_x_i8m2_tu(dest, 15, 32);
}

/*
** test_vmv_v_x_i8m4_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vint8m4_t 
test_vmv_v_x_i8m4_tu_vl32_m16(vint8m4_t dest)
{
  return vmv_v_x_i8m4_tu(dest, -16, 32);
}

/*
** test_vmv_v_x_i8m4_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vint8m4_t 
test_vmv_v_x_i8m4_tu_vl32_15(vint8m4_t dest)
{
  return vmv_v_x_i8m4_tu(dest, 15, 32);
}

/*
** test_vmv_v_x_i8m8_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vint8m8_t 
test_vmv_v_x_i8m8_tu_vl32_m16(vint8m8_t dest)
{
  return vmv_v_x_i8m8_tu(dest, -16, 32);
}

/*
** test_vmv_v_x_i8m8_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vint8m8_t 
test_vmv_v_x_i8m8_tu_vl32_15(vint8m8_t dest)
{
  return vmv_v_x_i8m8_tu(dest, 15, 32);
}

/*
** test_vmv_v_x_i16mf4_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint16mf4_t 
test_vmv_v_x_i16mf4_tu_vl32_m16(vint16mf4_t dest)
{
  return vmv_v_x_i16mf4_tu(dest, -16, 32);
}

/*
** test_vmv_v_x_i16mf4_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint16mf4_t 
test_vmv_v_x_i16mf4_tu_vl32_15(vint16mf4_t dest)
{
  return vmv_v_x_i16mf4_tu(dest, 15, 32);
}

/*
** test_vmv_v_x_i16mf2_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint16mf2_t 
test_vmv_v_x_i16mf2_tu_vl32_m16(vint16mf2_t dest)
{
  return vmv_v_x_i16mf2_tu(dest, -16, 32);
}

/*
** test_vmv_v_x_i16mf2_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint16mf2_t 
test_vmv_v_x_i16mf2_tu_vl32_15(vint16mf2_t dest)
{
  return vmv_v_x_i16mf2_tu(dest, 15, 32);
}

/*
** test_vmv_v_x_i16m1_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint16m1_t 
test_vmv_v_x_i16m1_tu_vl32_m16(vint16m1_t dest)
{
  return vmv_v_x_i16m1_tu(dest, -16, 32);
}

/*
** test_vmv_v_x_i16m1_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint16m1_t 
test_vmv_v_x_i16m1_tu_vl32_15(vint16m1_t dest)
{
  return vmv_v_x_i16m1_tu(dest, 15, 32);
}

/*
** test_vmv_v_x_i16m2_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vint16m2_t 
test_vmv_v_x_i16m2_tu_vl32_m16(vint16m2_t dest)
{
  return vmv_v_x_i16m2_tu(dest, -16, 32);
}

/*
** test_vmv_v_x_i16m2_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vint16m2_t 
test_vmv_v_x_i16m2_tu_vl32_15(vint16m2_t dest)
{
  return vmv_v_x_i16m2_tu(dest, 15, 32);
}

/*
** test_vmv_v_x_i16m4_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vint16m4_t 
test_vmv_v_x_i16m4_tu_vl32_m16(vint16m4_t dest)
{
  return vmv_v_x_i16m4_tu(dest, -16, 32);
}

/*
** test_vmv_v_x_i16m4_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vint16m4_t 
test_vmv_v_x_i16m4_tu_vl32_15(vint16m4_t dest)
{
  return vmv_v_x_i16m4_tu(dest, 15, 32);
}

/*
** test_vmv_v_x_i16m8_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vint16m8_t 
test_vmv_v_x_i16m8_tu_vl32_m16(vint16m8_t dest)
{
  return vmv_v_x_i16m8_tu(dest, -16, 32);
}

/*
** test_vmv_v_x_i16m8_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vint16m8_t 
test_vmv_v_x_i16m8_tu_vl32_15(vint16m8_t dest)
{
  return vmv_v_x_i16m8_tu(dest, 15, 32);
}

/*
** test_vmv_v_x_i32mf2_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint32mf2_t 
test_vmv_v_x_i32mf2_tu_vl32_m16(vint32mf2_t dest)
{
  return vmv_v_x_i32mf2_tu(dest, -16, 32);
}

/*
** test_vmv_v_x_i32mf2_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint32mf2_t 
test_vmv_v_x_i32mf2_tu_vl32_15(vint32mf2_t dest)
{
  return vmv_v_x_i32mf2_tu(dest, 15, 32);
}

/*
** test_vmv_v_x_i32m1_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint32m1_t 
test_vmv_v_x_i32m1_tu_vl32_m16(vint32m1_t dest)
{
  return vmv_v_x_i32m1_tu(dest, -16, 32);
}

/*
** test_vmv_v_x_i32m1_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint32m1_t 
test_vmv_v_x_i32m1_tu_vl32_15(vint32m1_t dest)
{
  return vmv_v_x_i32m1_tu(dest, 15, 32);
}

/*
** test_vmv_v_x_i32m2_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vint32m2_t 
test_vmv_v_x_i32m2_tu_vl32_m16(vint32m2_t dest)
{
  return vmv_v_x_i32m2_tu(dest, -16, 32);
}

/*
** test_vmv_v_x_i32m2_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vint32m2_t 
test_vmv_v_x_i32m2_tu_vl32_15(vint32m2_t dest)
{
  return vmv_v_x_i32m2_tu(dest, 15, 32);
}

/*
** test_vmv_v_x_i32m4_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vint32m4_t 
test_vmv_v_x_i32m4_tu_vl32_m16(vint32m4_t dest)
{
  return vmv_v_x_i32m4_tu(dest, -16, 32);
}

/*
** test_vmv_v_x_i32m4_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vint32m4_t 
test_vmv_v_x_i32m4_tu_vl32_15(vint32m4_t dest)
{
  return vmv_v_x_i32m4_tu(dest, 15, 32);
}

/*
** test_vmv_v_x_i32m8_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vint32m8_t 
test_vmv_v_x_i32m8_tu_vl32_m16(vint32m8_t dest)
{
  return vmv_v_x_i32m8_tu(dest, -16, 32);
}

/*
** test_vmv_v_x_i32m8_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vint32m8_t 
test_vmv_v_x_i32m8_tu_vl32_15(vint32m8_t dest)
{
  return vmv_v_x_i32m8_tu(dest, 15, 32);
}

/*
** test_vmv_v_x_i64m1_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint64m1_t 
test_vmv_v_x_i64m1_ta_vl32_m16(size_t vl)
{
  return vmv_v_x_i64m1_ta(-16, 32);
}

/*
** test_vmv_v_x_i64m1_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint64m1_t 
test_vmv_v_x_i64m1_ta_vl32_15(size_t vl)
{
  return vmv_v_x_i64m1_ta(15, 32);
}

/*
** test_vmv_v_x_i64m2_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vint64m2_t 
test_vmv_v_x_i64m2_ta_vl32_m16(size_t vl)
{
  return vmv_v_x_i64m2_ta(-16, 32);
}

/*
** test_vmv_v_x_i64m2_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vint64m2_t 
test_vmv_v_x_i64m2_ta_vl32_15(size_t vl)
{
  return vmv_v_x_i64m2_ta(15, 32);
}

/*
** test_vmv_v_x_i64m4_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vint64m4_t 
test_vmv_v_x_i64m4_ta_vl32_m16(size_t vl)
{
  return vmv_v_x_i64m4_ta(-16, 32);
}

/*
** test_vmv_v_x_i64m4_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vint64m4_t 
test_vmv_v_x_i64m4_ta_vl32_15(size_t vl)
{
  return vmv_v_x_i64m4_ta(15, 32);
}

/*
** test_vmv_v_x_i64m8_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vint64m8_t 
test_vmv_v_x_i64m8_ta_vl32_m16(size_t vl)
{
  return vmv_v_x_i64m8_ta(-16, 32);
}

/*
** test_vmv_v_x_i64m8_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vint64m8_t 
test_vmv_v_x_i64m8_ta_vl32_15(size_t vl)
{
  return vmv_v_x_i64m8_ta(15, 32);
}

/*
** test_vmv_v_x_i64m1_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint64m1_t 
test_vmv_v_x_i64m1_tu_vl32_m16(vint64m1_t dest)
{
  return vmv_v_x_i64m1_tu(dest, -16, 32);
}

/*
** test_vmv_v_x_i64m1_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint64m1_t 
test_vmv_v_x_i64m1_tu_vl32_15(vint64m1_t dest)
{
  return vmv_v_x_i64m1_tu(dest, 15, 32);
}

/*
** test_vmv_v_x_i64m2_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vint64m2_t 
test_vmv_v_x_i64m2_tu_vl32_m16(vint64m2_t dest)
{
  return vmv_v_x_i64m2_tu(dest, -16, 32);
}

/*
** test_vmv_v_x_i64m2_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vint64m2_t 
test_vmv_v_x_i64m2_tu_vl32_15(vint64m2_t dest)
{
  return vmv_v_x_i64m2_tu(dest, 15, 32);
}

/*
** test_vmv_v_x_i64m4_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vint64m4_t 
test_vmv_v_x_i64m4_tu_vl32_m16(vint64m4_t dest)
{
  return vmv_v_x_i64m4_tu(dest, -16, 32);
}

/*
** test_vmv_v_x_i64m4_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vint64m4_t 
test_vmv_v_x_i64m4_tu_vl32_15(vint64m4_t dest)
{
  return vmv_v_x_i64m4_tu(dest, 15, 32);
}

/*
** test_vmv_v_x_i64m8_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vint64m8_t 
test_vmv_v_x_i64m8_tu_vl32_m16(vint64m8_t dest)
{
  return vmv_v_x_i64m8_tu(dest, -16, 32);
}

/*
** test_vmv_v_x_i64m8_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vint64m8_t 
test_vmv_v_x_i64m8_tu_vl32_15(vint64m8_t dest)
{
  return vmv_v_x_i64m8_tu(dest, 15, 32);
}

/*
** test_vmv_v_x_i8mf8_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint8mf8_t 
test_vmv_v_x_i8mf8_vl32_m16(size_t vl)
{
  return vmv_v_x_i8mf8(-16, 32);
}

/*
** test_vmv_v_x_i8mf8_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint8mf8_t 
test_vmv_v_x_i8mf8_vl32_15(size_t vl)
{
  return vmv_v_x_i8mf8(15, 32);
}

/*
** test_vmv_v_x_i8mf4_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint8mf4_t 
test_vmv_v_x_i8mf4_vl32_m16(size_t vl)
{
  return vmv_v_x_i8mf4(-16, 32);
}

/*
** test_vmv_v_x_i8mf4_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint8mf4_t 
test_vmv_v_x_i8mf4_vl32_15(size_t vl)
{
  return vmv_v_x_i8mf4(15, 32);
}

/*
** test_vmv_v_x_i8mf2_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint8mf2_t 
test_vmv_v_x_i8mf2_vl32_m16(size_t vl)
{
  return vmv_v_x_i8mf2(-16, 32);
}

/*
** test_vmv_v_x_i8mf2_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint8mf2_t 
test_vmv_v_x_i8mf2_vl32_15(size_t vl)
{
  return vmv_v_x_i8mf2(15, 32);
}

/*
** test_vmv_v_x_i8m1_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint8m1_t 
test_vmv_v_x_i8m1_vl32_m16(size_t vl)
{
  return vmv_v_x_i8m1(-16, 32);
}

/*
** test_vmv_v_x_i8m1_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint8m1_t 
test_vmv_v_x_i8m1_vl32_15(size_t vl)
{
  return vmv_v_x_i8m1(15, 32);
}

/*
** test_vmv_v_x_i8m2_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vint8m2_t 
test_vmv_v_x_i8m2_vl32_m16(size_t vl)
{
  return vmv_v_x_i8m2(-16, 32);
}

/*
** test_vmv_v_x_i8m2_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vint8m2_t 
test_vmv_v_x_i8m2_vl32_15(size_t vl)
{
  return vmv_v_x_i8m2(15, 32);
}

/*
** test_vmv_v_x_i8m4_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vint8m4_t 
test_vmv_v_x_i8m4_vl32_m16(size_t vl)
{
  return vmv_v_x_i8m4(-16, 32);
}

/*
** test_vmv_v_x_i8m4_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vint8m4_t 
test_vmv_v_x_i8m4_vl32_15(size_t vl)
{
  return vmv_v_x_i8m4(15, 32);
}

/*
** test_vmv_v_x_i8m8_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vint8m8_t 
test_vmv_v_x_i8m8_vl32_m16(size_t vl)
{
  return vmv_v_x_i8m8(-16, 32);
}

/*
** test_vmv_v_x_i8m8_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vint8m8_t 
test_vmv_v_x_i8m8_vl32_15(size_t vl)
{
  return vmv_v_x_i8m8(15, 32);
}

/*
** test_vmv_v_x_i16mf4_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint16mf4_t 
test_vmv_v_x_i16mf4_vl32_m16(size_t vl)
{
  return vmv_v_x_i16mf4(-16, 32);
}

/*
** test_vmv_v_x_i16mf4_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint16mf4_t 
test_vmv_v_x_i16mf4_vl32_15(size_t vl)
{
  return vmv_v_x_i16mf4(15, 32);
}

/*
** test_vmv_v_x_i16mf2_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint16mf2_t 
test_vmv_v_x_i16mf2_vl32_m16(size_t vl)
{
  return vmv_v_x_i16mf2(-16, 32);
}

/*
** test_vmv_v_x_i16mf2_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint16mf2_t 
test_vmv_v_x_i16mf2_vl32_15(size_t vl)
{
  return vmv_v_x_i16mf2(15, 32);
}

/*
** test_vmv_v_x_i16m1_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint16m1_t 
test_vmv_v_x_i16m1_vl32_m16(size_t vl)
{
  return vmv_v_x_i16m1(-16, 32);
}

/*
** test_vmv_v_x_i16m1_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint16m1_t 
test_vmv_v_x_i16m1_vl32_15(size_t vl)
{
  return vmv_v_x_i16m1(15, 32);
}

/*
** test_vmv_v_x_i16m2_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vint16m2_t 
test_vmv_v_x_i16m2_vl32_m16(size_t vl)
{
  return vmv_v_x_i16m2(-16, 32);
}

/*
** test_vmv_v_x_i16m2_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vint16m2_t 
test_vmv_v_x_i16m2_vl32_15(size_t vl)
{
  return vmv_v_x_i16m2(15, 32);
}

/*
** test_vmv_v_x_i16m4_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vint16m4_t 
test_vmv_v_x_i16m4_vl32_m16(size_t vl)
{
  return vmv_v_x_i16m4(-16, 32);
}

/*
** test_vmv_v_x_i16m4_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vint16m4_t 
test_vmv_v_x_i16m4_vl32_15(size_t vl)
{
  return vmv_v_x_i16m4(15, 32);
}

/*
** test_vmv_v_x_i16m8_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vint16m8_t 
test_vmv_v_x_i16m8_vl32_m16(size_t vl)
{
  return vmv_v_x_i16m8(-16, 32);
}

/*
** test_vmv_v_x_i16m8_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vint16m8_t 
test_vmv_v_x_i16m8_vl32_15(size_t vl)
{
  return vmv_v_x_i16m8(15, 32);
}

/*
** test_vmv_v_x_i32mf2_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint32mf2_t 
test_vmv_v_x_i32mf2_vl32_m16(size_t vl)
{
  return vmv_v_x_i32mf2(-16, 32);
}

/*
** test_vmv_v_x_i32mf2_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint32mf2_t 
test_vmv_v_x_i32mf2_vl32_15(size_t vl)
{
  return vmv_v_x_i32mf2(15, 32);
}

/*
** test_vmv_v_x_i32m1_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint32m1_t 
test_vmv_v_x_i32m1_vl32_m16(size_t vl)
{
  return vmv_v_x_i32m1(-16, 32);
}

/*
** test_vmv_v_x_i32m1_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint32m1_t 
test_vmv_v_x_i32m1_vl32_15(size_t vl)
{
  return vmv_v_x_i32m1(15, 32);
}

/*
** test_vmv_v_x_i32m2_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vint32m2_t 
test_vmv_v_x_i32m2_vl32_m16(size_t vl)
{
  return vmv_v_x_i32m2(-16, 32);
}

/*
** test_vmv_v_x_i32m2_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vint32m2_t 
test_vmv_v_x_i32m2_vl32_15(size_t vl)
{
  return vmv_v_x_i32m2(15, 32);
}

/*
** test_vmv_v_x_i32m4_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vint32m4_t 
test_vmv_v_x_i32m4_vl32_m16(size_t vl)
{
  return vmv_v_x_i32m4(-16, 32);
}

/*
** test_vmv_v_x_i32m4_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vint32m4_t 
test_vmv_v_x_i32m4_vl32_15(size_t vl)
{
  return vmv_v_x_i32m4(15, 32);
}

/*
** test_vmv_v_x_i32m8_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vint32m8_t 
test_vmv_v_x_i32m8_vl32_m16(size_t vl)
{
  return vmv_v_x_i32m8(-16, 32);
}

/*
** test_vmv_v_x_i32m8_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vint32m8_t 
test_vmv_v_x_i32m8_vl32_15(size_t vl)
{
  return vmv_v_x_i32m8(15, 32);
}

/*
** test_vmv_v_x_i64m1_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vint64m1_t 
test_vmv_v_x_i64m1_vl32_m16(size_t vl)
{
  return vmv_v_x_i64m1(-16, 32);
}

/*
** test_vmv_v_x_i64m1_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vint64m1_t 
test_vmv_v_x_i64m1_vl32_15(size_t vl)
{
  return vmv_v_x_i64m1(15, 32);
}

/*
** test_vmv_v_x_i64m2_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vint64m2_t 
test_vmv_v_x_i64m2_vl32_m16(size_t vl)
{
  return vmv_v_x_i64m2(-16, 32);
}

/*
** test_vmv_v_x_i64m2_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vint64m2_t 
test_vmv_v_x_i64m2_vl32_15(size_t vl)
{
  return vmv_v_x_i64m2(15, 32);
}

/*
** test_vmv_v_x_i64m4_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vint64m4_t 
test_vmv_v_x_i64m4_vl32_m16(size_t vl)
{
  return vmv_v_x_i64m4(-16, 32);
}

/*
** test_vmv_v_x_i64m4_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vint64m4_t 
test_vmv_v_x_i64m4_vl32_15(size_t vl)
{
  return vmv_v_x_i64m4(15, 32);
}

/*
** test_vmv_v_x_i64m8_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vint64m8_t 
test_vmv_v_x_i64m8_vl32_m16(size_t vl)
{
  return vmv_v_x_i64m8(-16, 32);
}

/*
** test_vmv_v_x_i64m8_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vint64m8_t 
test_vmv_v_x_i64m8_vl32_15(size_t vl)
{
  return vmv_v_x_i64m8(15, 32);
}

/*
** test_vmv_v_x_u8mf8_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint8mf8_t 
test_vmv_v_x_u8mf8_m16(size_t vl)
{
  return vmv_v_x_u8mf8(-16, vl);
}

/*
** test_vmv_v_x_u8mf8_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint8mf8_t 
test_vmv_v_x_u8mf8_15(size_t vl)
{
  return vmv_v_x_u8mf8(15, vl);
}

/*
** test_vmv_v_x_u8mf8_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint8mf8_t 
test_vmv_v_x_u8mf8_vl31_m16(size_t vl)
{
  return vmv_v_x_u8mf8(-16, 31);
}

/*
** test_vmv_v_x_u8mf8_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint8mf8_t 
test_vmv_v_x_u8mf8_vl31_15(size_t vl)
{
  return vmv_v_x_u8mf8(15, 31);
}

/*
** test_vmv_v_x_u8mf4_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint8mf4_t 
test_vmv_v_x_u8mf4_m16(size_t vl)
{
  return vmv_v_x_u8mf4(-16, vl);
}

/*
** test_vmv_v_x_u8mf4_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint8mf4_t 
test_vmv_v_x_u8mf4_15(size_t vl)
{
  return vmv_v_x_u8mf4(15, vl);
}

/*
** test_vmv_v_x_u8mf4_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint8mf4_t 
test_vmv_v_x_u8mf4_vl31_m16(size_t vl)
{
  return vmv_v_x_u8mf4(-16, 31);
}

/*
** test_vmv_v_x_u8mf4_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint8mf4_t 
test_vmv_v_x_u8mf4_vl31_15(size_t vl)
{
  return vmv_v_x_u8mf4(15, 31);
}

/*
** test_vmv_v_x_u8mf2_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint8mf2_t 
test_vmv_v_x_u8mf2_m16(size_t vl)
{
  return vmv_v_x_u8mf2(-16, vl);
}

/*
** test_vmv_v_x_u8mf2_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint8mf2_t 
test_vmv_v_x_u8mf2_15(size_t vl)
{
  return vmv_v_x_u8mf2(15, vl);
}

/*
** test_vmv_v_x_u8mf2_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint8mf2_t 
test_vmv_v_x_u8mf2_vl31_m16(size_t vl)
{
  return vmv_v_x_u8mf2(-16, 31);
}

/*
** test_vmv_v_x_u8mf2_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint8mf2_t 
test_vmv_v_x_u8mf2_vl31_15(size_t vl)
{
  return vmv_v_x_u8mf2(15, 31);
}

/*
** test_vmv_v_x_u8m1_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint8m1_t 
test_vmv_v_x_u8m1_m16(size_t vl)
{
  return vmv_v_x_u8m1(-16, vl);
}

/*
** test_vmv_v_x_u8m1_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint8m1_t 
test_vmv_v_x_u8m1_15(size_t vl)
{
  return vmv_v_x_u8m1(15, vl);
}

/*
** test_vmv_v_x_u8m1_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint8m1_t 
test_vmv_v_x_u8m1_vl31_m16(size_t vl)
{
  return vmv_v_x_u8m1(-16, 31);
}

/*
** test_vmv_v_x_u8m1_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint8m1_t 
test_vmv_v_x_u8m1_vl31_15(size_t vl)
{
  return vmv_v_x_u8m1(15, 31);
}

/*
** test_vmv_v_x_u8m2_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vuint8m2_t 
test_vmv_v_x_u8m2_m16(size_t vl)
{
  return vmv_v_x_u8m2(-16, vl);
}

/*
** test_vmv_v_x_u8m2_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vuint8m2_t 
test_vmv_v_x_u8m2_15(size_t vl)
{
  return vmv_v_x_u8m2(15, vl);
}

/*
** test_vmv_v_x_u8m2_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vuint8m2_t 
test_vmv_v_x_u8m2_vl31_m16(size_t vl)
{
  return vmv_v_x_u8m2(-16, 31);
}

/*
** test_vmv_v_x_u8m2_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vuint8m2_t 
test_vmv_v_x_u8m2_vl31_15(size_t vl)
{
  return vmv_v_x_u8m2(15, 31);
}

/*
** test_vmv_v_x_u8m4_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vuint8m4_t 
test_vmv_v_x_u8m4_m16(size_t vl)
{
  return vmv_v_x_u8m4(-16, vl);
}

/*
** test_vmv_v_x_u8m4_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vuint8m4_t 
test_vmv_v_x_u8m4_15(size_t vl)
{
  return vmv_v_x_u8m4(15, vl);
}

/*
** test_vmv_v_x_u8m4_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vuint8m4_t 
test_vmv_v_x_u8m4_vl31_m16(size_t vl)
{
  return vmv_v_x_u8m4(-16, 31);
}

/*
** test_vmv_v_x_u8m4_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vuint8m4_t 
test_vmv_v_x_u8m4_vl31_15(size_t vl)
{
  return vmv_v_x_u8m4(15, 31);
}

/*
** test_vmv_v_x_u8m8_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vuint8m8_t 
test_vmv_v_x_u8m8_m16(size_t vl)
{
  return vmv_v_x_u8m8(-16, vl);
}

/*
** test_vmv_v_x_u8m8_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vuint8m8_t 
test_vmv_v_x_u8m8_15(size_t vl)
{
  return vmv_v_x_u8m8(15, vl);
}

/*
** test_vmv_v_x_u8m8_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vuint8m8_t 
test_vmv_v_x_u8m8_vl31_m16(size_t vl)
{
  return vmv_v_x_u8m8(-16, 31);
}

/*
** test_vmv_v_x_u8m8_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vuint8m8_t 
test_vmv_v_x_u8m8_vl31_15(size_t vl)
{
  return vmv_v_x_u8m8(15, 31);
}

/*
** test_vmv_v_x_u16mf4_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint16mf4_t 
test_vmv_v_x_u16mf4_m16(size_t vl)
{
  return vmv_v_x_u16mf4(-16, vl);
}

/*
** test_vmv_v_x_u16mf4_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint16mf4_t 
test_vmv_v_x_u16mf4_15(size_t vl)
{
  return vmv_v_x_u16mf4(15, vl);
}

/*
** test_vmv_v_x_u16mf4_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint16mf4_t 
test_vmv_v_x_u16mf4_vl31_m16(size_t vl)
{
  return vmv_v_x_u16mf4(-16, 31);
}

/*
** test_vmv_v_x_u16mf4_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint16mf4_t 
test_vmv_v_x_u16mf4_vl31_15(size_t vl)
{
  return vmv_v_x_u16mf4(15, 31);
}

/*
** test_vmv_v_x_u16mf2_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint16mf2_t 
test_vmv_v_x_u16mf2_m16(size_t vl)
{
  return vmv_v_x_u16mf2(-16, vl);
}

/*
** test_vmv_v_x_u16mf2_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint16mf2_t 
test_vmv_v_x_u16mf2_15(size_t vl)
{
  return vmv_v_x_u16mf2(15, vl);
}

/*
** test_vmv_v_x_u16mf2_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint16mf2_t 
test_vmv_v_x_u16mf2_vl31_m16(size_t vl)
{
  return vmv_v_x_u16mf2(-16, 31);
}

/*
** test_vmv_v_x_u16mf2_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint16mf2_t 
test_vmv_v_x_u16mf2_vl31_15(size_t vl)
{
  return vmv_v_x_u16mf2(15, 31);
}

/*
** test_vmv_v_x_u16m1_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint16m1_t 
test_vmv_v_x_u16m1_m16(size_t vl)
{
  return vmv_v_x_u16m1(-16, vl);
}

/*
** test_vmv_v_x_u16m1_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint16m1_t 
test_vmv_v_x_u16m1_15(size_t vl)
{
  return vmv_v_x_u16m1(15, vl);
}

/*
** test_vmv_v_x_u16m1_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint16m1_t 
test_vmv_v_x_u16m1_vl31_m16(size_t vl)
{
  return vmv_v_x_u16m1(-16, 31);
}

/*
** test_vmv_v_x_u16m1_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint16m1_t 
test_vmv_v_x_u16m1_vl31_15(size_t vl)
{
  return vmv_v_x_u16m1(15, 31);
}

/*
** test_vmv_v_x_u16m2_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vuint16m2_t 
test_vmv_v_x_u16m2_m16(size_t vl)
{
  return vmv_v_x_u16m2(-16, vl);
}

/*
** test_vmv_v_x_u16m2_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vuint16m2_t 
test_vmv_v_x_u16m2_15(size_t vl)
{
  return vmv_v_x_u16m2(15, vl);
}

/*
** test_vmv_v_x_u16m2_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vuint16m2_t 
test_vmv_v_x_u16m2_vl31_m16(size_t vl)
{
  return vmv_v_x_u16m2(-16, 31);
}

/*
** test_vmv_v_x_u16m2_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vuint16m2_t 
test_vmv_v_x_u16m2_vl31_15(size_t vl)
{
  return vmv_v_x_u16m2(15, 31);
}

/*
** test_vmv_v_x_u16m4_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vuint16m4_t 
test_vmv_v_x_u16m4_m16(size_t vl)
{
  return vmv_v_x_u16m4(-16, vl);
}

/*
** test_vmv_v_x_u16m4_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vuint16m4_t 
test_vmv_v_x_u16m4_15(size_t vl)
{
  return vmv_v_x_u16m4(15, vl);
}

/*
** test_vmv_v_x_u16m4_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vuint16m4_t 
test_vmv_v_x_u16m4_vl31_m16(size_t vl)
{
  return vmv_v_x_u16m4(-16, 31);
}

/*
** test_vmv_v_x_u16m4_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vuint16m4_t 
test_vmv_v_x_u16m4_vl31_15(size_t vl)
{
  return vmv_v_x_u16m4(15, 31);
}

/*
** test_vmv_v_x_u16m8_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vuint16m8_t 
test_vmv_v_x_u16m8_m16(size_t vl)
{
  return vmv_v_x_u16m8(-16, vl);
}

/*
** test_vmv_v_x_u16m8_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vuint16m8_t 
test_vmv_v_x_u16m8_15(size_t vl)
{
  return vmv_v_x_u16m8(15, vl);
}

/*
** test_vmv_v_x_u16m8_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vuint16m8_t 
test_vmv_v_x_u16m8_vl31_m16(size_t vl)
{
  return vmv_v_x_u16m8(-16, 31);
}

/*
** test_vmv_v_x_u16m8_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vuint16m8_t 
test_vmv_v_x_u16m8_vl31_15(size_t vl)
{
  return vmv_v_x_u16m8(15, 31);
}

/*
** test_vmv_v_x_u32mf2_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint32mf2_t 
test_vmv_v_x_u32mf2_m16(size_t vl)
{
  return vmv_v_x_u32mf2(-16, vl);
}

/*
** test_vmv_v_x_u32mf2_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint32mf2_t 
test_vmv_v_x_u32mf2_15(size_t vl)
{
  return vmv_v_x_u32mf2(15, vl);
}

/*
** test_vmv_v_x_u32mf2_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint32mf2_t 
test_vmv_v_x_u32mf2_vl31_m16(size_t vl)
{
  return vmv_v_x_u32mf2(-16, 31);
}

/*
** test_vmv_v_x_u32mf2_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint32mf2_t 
test_vmv_v_x_u32mf2_vl31_15(size_t vl)
{
  return vmv_v_x_u32mf2(15, 31);
}

/*
** test_vmv_v_x_u32m1_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint32m1_t 
test_vmv_v_x_u32m1_m16(size_t vl)
{
  return vmv_v_x_u32m1(-16, vl);
}

/*
** test_vmv_v_x_u32m1_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint32m1_t 
test_vmv_v_x_u32m1_15(size_t vl)
{
  return vmv_v_x_u32m1(15, vl);
}

/*
** test_vmv_v_x_u32m1_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint32m1_t 
test_vmv_v_x_u32m1_vl31_m16(size_t vl)
{
  return vmv_v_x_u32m1(-16, 31);
}

/*
** test_vmv_v_x_u32m1_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint32m1_t 
test_vmv_v_x_u32m1_vl31_15(size_t vl)
{
  return vmv_v_x_u32m1(15, 31);
}

/*
** test_vmv_v_x_u32m2_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vuint32m2_t 
test_vmv_v_x_u32m2_m16(size_t vl)
{
  return vmv_v_x_u32m2(-16, vl);
}

/*
** test_vmv_v_x_u32m2_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vuint32m2_t 
test_vmv_v_x_u32m2_15(size_t vl)
{
  return vmv_v_x_u32m2(15, vl);
}

/*
** test_vmv_v_x_u32m2_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vuint32m2_t 
test_vmv_v_x_u32m2_vl31_m16(size_t vl)
{
  return vmv_v_x_u32m2(-16, 31);
}

/*
** test_vmv_v_x_u32m2_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vuint32m2_t 
test_vmv_v_x_u32m2_vl31_15(size_t vl)
{
  return vmv_v_x_u32m2(15, 31);
}

/*
** test_vmv_v_x_u32m4_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vuint32m4_t 
test_vmv_v_x_u32m4_m16(size_t vl)
{
  return vmv_v_x_u32m4(-16, vl);
}

/*
** test_vmv_v_x_u32m4_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vuint32m4_t 
test_vmv_v_x_u32m4_15(size_t vl)
{
  return vmv_v_x_u32m4(15, vl);
}

/*
** test_vmv_v_x_u32m4_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vuint32m4_t 
test_vmv_v_x_u32m4_vl31_m16(size_t vl)
{
  return vmv_v_x_u32m4(-16, 31);
}

/*
** test_vmv_v_x_u32m4_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vuint32m4_t 
test_vmv_v_x_u32m4_vl31_15(size_t vl)
{
  return vmv_v_x_u32m4(15, 31);
}

/*
** test_vmv_v_x_u32m8_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vuint32m8_t 
test_vmv_v_x_u32m8_m16(size_t vl)
{
  return vmv_v_x_u32m8(-16, vl);
}

/*
** test_vmv_v_x_u32m8_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vuint32m8_t 
test_vmv_v_x_u32m8_15(size_t vl)
{
  return vmv_v_x_u32m8(15, vl);
}

/*
** test_vmv_v_x_u32m8_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vuint32m8_t 
test_vmv_v_x_u32m8_vl31_m16(size_t vl)
{
  return vmv_v_x_u32m8(-16, 31);
}

/*
** test_vmv_v_x_u32m8_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vuint32m8_t 
test_vmv_v_x_u32m8_vl31_15(size_t vl)
{
  return vmv_v_x_u32m8(15, 31);
}

/*
** test_vmv_v_x_u64m1_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint64m1_t 
test_vmv_v_x_u64m1_m16(size_t vl)
{
  return vmv_v_x_u64m1(-16, vl);
}

/*
** test_vmv_v_x_u64m1_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint64m1_t 
test_vmv_v_x_u64m1_15(size_t vl)
{
  return vmv_v_x_u64m1(15, vl);
}

/*
** test_vmv_v_x_u64m1_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint64m1_t 
test_vmv_v_x_u64m1_vl31_m16(size_t vl)
{
  return vmv_v_x_u64m1(-16, 31);
}

/*
** test_vmv_v_x_u64m1_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint64m1_t 
test_vmv_v_x_u64m1_vl31_15(size_t vl)
{
  return vmv_v_x_u64m1(15, 31);
}

/*
** test_vmv_v_x_u64m2_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vuint64m2_t 
test_vmv_v_x_u64m2_m16(size_t vl)
{
  return vmv_v_x_u64m2(-16, vl);
}

/*
** test_vmv_v_x_u64m2_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vuint64m2_t 
test_vmv_v_x_u64m2_15(size_t vl)
{
  return vmv_v_x_u64m2(15, vl);
}

/*
** test_vmv_v_x_u64m2_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vuint64m2_t 
test_vmv_v_x_u64m2_vl31_m16(size_t vl)
{
  return vmv_v_x_u64m2(-16, 31);
}

/*
** test_vmv_v_x_u64m2_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vuint64m2_t 
test_vmv_v_x_u64m2_vl31_15(size_t vl)
{
  return vmv_v_x_u64m2(15, 31);
}

/*
** test_vmv_v_x_u64m4_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vuint64m4_t 
test_vmv_v_x_u64m4_m16(size_t vl)
{
  return vmv_v_x_u64m4(-16, vl);
}

/*
** test_vmv_v_x_u64m4_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vuint64m4_t 
test_vmv_v_x_u64m4_15(size_t vl)
{
  return vmv_v_x_u64m4(15, vl);
}

/*
** test_vmv_v_x_u64m4_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vuint64m4_t 
test_vmv_v_x_u64m4_vl31_m16(size_t vl)
{
  return vmv_v_x_u64m4(-16, 31);
}

/*
** test_vmv_v_x_u64m4_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vuint64m4_t 
test_vmv_v_x_u64m4_vl31_15(size_t vl)
{
  return vmv_v_x_u64m4(15, 31);
}

/*
** test_vmv_v_x_u64m8_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vuint64m8_t 
test_vmv_v_x_u64m8_m16(size_t vl)
{
  return vmv_v_x_u64m8(-16, vl);
}

/*
** test_vmv_v_x_u64m8_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vuint64m8_t 
test_vmv_v_x_u64m8_15(size_t vl)
{
  return vmv_v_x_u64m8(15, vl);
}

/*
** test_vmv_v_x_u64m8_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vuint64m8_t 
test_vmv_v_x_u64m8_vl31_m16(size_t vl)
{
  return vmv_v_x_u64m8(-16, 31);
}

/*
** test_vmv_v_x_u64m8_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vuint64m8_t 
test_vmv_v_x_u64m8_vl31_15(size_t vl)
{
  return vmv_v_x_u64m8(15, 31);
}

/*
** test_vmv_v_x_u8mf8_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint8mf8_t 
test_vmv_v_x_u8mf8_ta_m16(size_t vl)
{
  return vmv_v_x_u8mf8_ta(-16, vl);
}

/*
** test_vmv_v_x_u8mf8_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint8mf8_t 
test_vmv_v_x_u8mf8_ta_15(size_t vl)
{
  return vmv_v_x_u8mf8_ta(15, vl);
}

/*
** test_vmv_v_x_u8mf8_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint8mf8_t 
test_vmv_v_x_u8mf8_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_u8mf8_ta(-16, 31);
}

/*
** test_vmv_v_x_u8mf8_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint8mf8_t 
test_vmv_v_x_u8mf8_ta_vl31_15(size_t vl)
{
  return vmv_v_x_u8mf8_ta(15, 31);
}

/*
** test_vmv_v_x_u8mf4_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint8mf4_t 
test_vmv_v_x_u8mf4_ta_m16(size_t vl)
{
  return vmv_v_x_u8mf4_ta(-16, vl);
}

/*
** test_vmv_v_x_u8mf4_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint8mf4_t 
test_vmv_v_x_u8mf4_ta_15(size_t vl)
{
  return vmv_v_x_u8mf4_ta(15, vl);
}

/*
** test_vmv_v_x_u8mf4_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint8mf4_t 
test_vmv_v_x_u8mf4_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_u8mf4_ta(-16, 31);
}

/*
** test_vmv_v_x_u8mf4_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint8mf4_t 
test_vmv_v_x_u8mf4_ta_vl31_15(size_t vl)
{
  return vmv_v_x_u8mf4_ta(15, 31);
}

/*
** test_vmv_v_x_u8mf2_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint8mf2_t 
test_vmv_v_x_u8mf2_ta_m16(size_t vl)
{
  return vmv_v_x_u8mf2_ta(-16, vl);
}

/*
** test_vmv_v_x_u8mf2_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint8mf2_t 
test_vmv_v_x_u8mf2_ta_15(size_t vl)
{
  return vmv_v_x_u8mf2_ta(15, vl);
}

/*
** test_vmv_v_x_u8mf2_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint8mf2_t 
test_vmv_v_x_u8mf2_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_u8mf2_ta(-16, 31);
}

/*
** test_vmv_v_x_u8mf2_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint8mf2_t 
test_vmv_v_x_u8mf2_ta_vl31_15(size_t vl)
{
  return vmv_v_x_u8mf2_ta(15, 31);
}

/*
** test_vmv_v_x_u8m1_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint8m1_t 
test_vmv_v_x_u8m1_ta_m16(size_t vl)
{
  return vmv_v_x_u8m1_ta(-16, vl);
}

/*
** test_vmv_v_x_u8m1_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint8m1_t 
test_vmv_v_x_u8m1_ta_15(size_t vl)
{
  return vmv_v_x_u8m1_ta(15, vl);
}

/*
** test_vmv_v_x_u8m1_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint8m1_t 
test_vmv_v_x_u8m1_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_u8m1_ta(-16, 31);
}

/*
** test_vmv_v_x_u8m1_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint8m1_t 
test_vmv_v_x_u8m1_ta_vl31_15(size_t vl)
{
  return vmv_v_x_u8m1_ta(15, 31);
}

/*
** test_vmv_v_x_u8m2_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vuint8m2_t 
test_vmv_v_x_u8m2_ta_m16(size_t vl)
{
  return vmv_v_x_u8m2_ta(-16, vl);
}

/*
** test_vmv_v_x_u8m2_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vuint8m2_t 
test_vmv_v_x_u8m2_ta_15(size_t vl)
{
  return vmv_v_x_u8m2_ta(15, vl);
}

/*
** test_vmv_v_x_u8m2_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vuint8m2_t 
test_vmv_v_x_u8m2_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_u8m2_ta(-16, 31);
}

/*
** test_vmv_v_x_u8m2_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vuint8m2_t 
test_vmv_v_x_u8m2_ta_vl31_15(size_t vl)
{
  return vmv_v_x_u8m2_ta(15, 31);
}

/*
** test_vmv_v_x_u8m4_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vuint8m4_t 
test_vmv_v_x_u8m4_ta_m16(size_t vl)
{
  return vmv_v_x_u8m4_ta(-16, vl);
}

/*
** test_vmv_v_x_u8m4_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vuint8m4_t 
test_vmv_v_x_u8m4_ta_15(size_t vl)
{
  return vmv_v_x_u8m4_ta(15, vl);
}

/*
** test_vmv_v_x_u8m4_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vuint8m4_t 
test_vmv_v_x_u8m4_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_u8m4_ta(-16, 31);
}

/*
** test_vmv_v_x_u8m4_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vuint8m4_t 
test_vmv_v_x_u8m4_ta_vl31_15(size_t vl)
{
  return vmv_v_x_u8m4_ta(15, 31);
}

/*
** test_vmv_v_x_u8m8_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vuint8m8_t 
test_vmv_v_x_u8m8_ta_m16(size_t vl)
{
  return vmv_v_x_u8m8_ta(-16, vl);
}

/*
** test_vmv_v_x_u8m8_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vuint8m8_t 
test_vmv_v_x_u8m8_ta_15(size_t vl)
{
  return vmv_v_x_u8m8_ta(15, vl);
}

/*
** test_vmv_v_x_u8m8_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vuint8m8_t 
test_vmv_v_x_u8m8_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_u8m8_ta(-16, 31);
}

/*
** test_vmv_v_x_u8m8_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vuint8m8_t 
test_vmv_v_x_u8m8_ta_vl31_15(size_t vl)
{
  return vmv_v_x_u8m8_ta(15, 31);
}

/*
** test_vmv_v_x_u16mf4_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint16mf4_t 
test_vmv_v_x_u16mf4_ta_m16(size_t vl)
{
  return vmv_v_x_u16mf4_ta(-16, vl);
}

/*
** test_vmv_v_x_u16mf4_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint16mf4_t 
test_vmv_v_x_u16mf4_ta_15(size_t vl)
{
  return vmv_v_x_u16mf4_ta(15, vl);
}

/*
** test_vmv_v_x_u16mf4_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint16mf4_t 
test_vmv_v_x_u16mf4_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_u16mf4_ta(-16, 31);
}

/*
** test_vmv_v_x_u16mf4_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint16mf4_t 
test_vmv_v_x_u16mf4_ta_vl31_15(size_t vl)
{
  return vmv_v_x_u16mf4_ta(15, 31);
}

/*
** test_vmv_v_x_u16mf2_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint16mf2_t 
test_vmv_v_x_u16mf2_ta_m16(size_t vl)
{
  return vmv_v_x_u16mf2_ta(-16, vl);
}

/*
** test_vmv_v_x_u16mf2_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint16mf2_t 
test_vmv_v_x_u16mf2_ta_15(size_t vl)
{
  return vmv_v_x_u16mf2_ta(15, vl);
}

/*
** test_vmv_v_x_u16mf2_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint16mf2_t 
test_vmv_v_x_u16mf2_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_u16mf2_ta(-16, 31);
}

/*
** test_vmv_v_x_u16mf2_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint16mf2_t 
test_vmv_v_x_u16mf2_ta_vl31_15(size_t vl)
{
  return vmv_v_x_u16mf2_ta(15, 31);
}

/*
** test_vmv_v_x_u16m1_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint16m1_t 
test_vmv_v_x_u16m1_ta_m16(size_t vl)
{
  return vmv_v_x_u16m1_ta(-16, vl);
}

/*
** test_vmv_v_x_u16m1_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint16m1_t 
test_vmv_v_x_u16m1_ta_15(size_t vl)
{
  return vmv_v_x_u16m1_ta(15, vl);
}

/*
** test_vmv_v_x_u16m1_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint16m1_t 
test_vmv_v_x_u16m1_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_u16m1_ta(-16, 31);
}

/*
** test_vmv_v_x_u16m1_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint16m1_t 
test_vmv_v_x_u16m1_ta_vl31_15(size_t vl)
{
  return vmv_v_x_u16m1_ta(15, 31);
}

/*
** test_vmv_v_x_u16m2_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vuint16m2_t 
test_vmv_v_x_u16m2_ta_m16(size_t vl)
{
  return vmv_v_x_u16m2_ta(-16, vl);
}

/*
** test_vmv_v_x_u16m2_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vuint16m2_t 
test_vmv_v_x_u16m2_ta_15(size_t vl)
{
  return vmv_v_x_u16m2_ta(15, vl);
}

/*
** test_vmv_v_x_u16m2_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vuint16m2_t 
test_vmv_v_x_u16m2_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_u16m2_ta(-16, 31);
}

/*
** test_vmv_v_x_u16m2_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vuint16m2_t 
test_vmv_v_x_u16m2_ta_vl31_15(size_t vl)
{
  return vmv_v_x_u16m2_ta(15, 31);
}

/*
** test_vmv_v_x_u16m4_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vuint16m4_t 
test_vmv_v_x_u16m4_ta_m16(size_t vl)
{
  return vmv_v_x_u16m4_ta(-16, vl);
}

/*
** test_vmv_v_x_u16m4_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vuint16m4_t 
test_vmv_v_x_u16m4_ta_15(size_t vl)
{
  return vmv_v_x_u16m4_ta(15, vl);
}

/*
** test_vmv_v_x_u16m4_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vuint16m4_t 
test_vmv_v_x_u16m4_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_u16m4_ta(-16, 31);
}

/*
** test_vmv_v_x_u16m4_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vuint16m4_t 
test_vmv_v_x_u16m4_ta_vl31_15(size_t vl)
{
  return vmv_v_x_u16m4_ta(15, 31);
}

/*
** test_vmv_v_x_u16m8_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vuint16m8_t 
test_vmv_v_x_u16m8_ta_m16(size_t vl)
{
  return vmv_v_x_u16m8_ta(-16, vl);
}

/*
** test_vmv_v_x_u16m8_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vuint16m8_t 
test_vmv_v_x_u16m8_ta_15(size_t vl)
{
  return vmv_v_x_u16m8_ta(15, vl);
}

/*
** test_vmv_v_x_u16m8_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vuint16m8_t 
test_vmv_v_x_u16m8_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_u16m8_ta(-16, 31);
}

/*
** test_vmv_v_x_u16m8_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vuint16m8_t 
test_vmv_v_x_u16m8_ta_vl31_15(size_t vl)
{
  return vmv_v_x_u16m8_ta(15, 31);
}

/*
** test_vmv_v_x_u32mf2_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint32mf2_t 
test_vmv_v_x_u32mf2_ta_m16(size_t vl)
{
  return vmv_v_x_u32mf2_ta(-16, vl);
}

/*
** test_vmv_v_x_u32mf2_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint32mf2_t 
test_vmv_v_x_u32mf2_ta_15(size_t vl)
{
  return vmv_v_x_u32mf2_ta(15, vl);
}

/*
** test_vmv_v_x_u32mf2_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint32mf2_t 
test_vmv_v_x_u32mf2_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_u32mf2_ta(-16, 31);
}

/*
** test_vmv_v_x_u32mf2_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint32mf2_t 
test_vmv_v_x_u32mf2_ta_vl31_15(size_t vl)
{
  return vmv_v_x_u32mf2_ta(15, 31);
}

/*
** test_vmv_v_x_u32m1_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint32m1_t 
test_vmv_v_x_u32m1_ta_m16(size_t vl)
{
  return vmv_v_x_u32m1_ta(-16, vl);
}

/*
** test_vmv_v_x_u32m1_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint32m1_t 
test_vmv_v_x_u32m1_ta_15(size_t vl)
{
  return vmv_v_x_u32m1_ta(15, vl);
}

/*
** test_vmv_v_x_u32m1_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint32m1_t 
test_vmv_v_x_u32m1_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_u32m1_ta(-16, 31);
}

/*
** test_vmv_v_x_u32m1_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint32m1_t 
test_vmv_v_x_u32m1_ta_vl31_15(size_t vl)
{
  return vmv_v_x_u32m1_ta(15, 31);
}

/*
** test_vmv_v_x_u32m2_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vuint32m2_t 
test_vmv_v_x_u32m2_ta_m16(size_t vl)
{
  return vmv_v_x_u32m2_ta(-16, vl);
}

/*
** test_vmv_v_x_u32m2_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vuint32m2_t 
test_vmv_v_x_u32m2_ta_15(size_t vl)
{
  return vmv_v_x_u32m2_ta(15, vl);
}

/*
** test_vmv_v_x_u32m2_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vuint32m2_t 
test_vmv_v_x_u32m2_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_u32m2_ta(-16, 31);
}

/*
** test_vmv_v_x_u32m2_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vuint32m2_t 
test_vmv_v_x_u32m2_ta_vl31_15(size_t vl)
{
  return vmv_v_x_u32m2_ta(15, 31);
}

/*
** test_vmv_v_x_u32m4_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vuint32m4_t 
test_vmv_v_x_u32m4_ta_m16(size_t vl)
{
  return vmv_v_x_u32m4_ta(-16, vl);
}

/*
** test_vmv_v_x_u32m4_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vuint32m4_t 
test_vmv_v_x_u32m4_ta_15(size_t vl)
{
  return vmv_v_x_u32m4_ta(15, vl);
}

/*
** test_vmv_v_x_u32m4_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vuint32m4_t 
test_vmv_v_x_u32m4_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_u32m4_ta(-16, 31);
}

/*
** test_vmv_v_x_u32m4_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vuint32m4_t 
test_vmv_v_x_u32m4_ta_vl31_15(size_t vl)
{
  return vmv_v_x_u32m4_ta(15, 31);
}

/*
** test_vmv_v_x_u32m8_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vuint32m8_t 
test_vmv_v_x_u32m8_ta_m16(size_t vl)
{
  return vmv_v_x_u32m8_ta(-16, vl);
}

/*
** test_vmv_v_x_u32m8_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vuint32m8_t 
test_vmv_v_x_u32m8_ta_15(size_t vl)
{
  return vmv_v_x_u32m8_ta(15, vl);
}

/*
** test_vmv_v_x_u32m8_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vuint32m8_t 
test_vmv_v_x_u32m8_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_u32m8_ta(-16, 31);
}

/*
** test_vmv_v_x_u32m8_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vuint32m8_t 
test_vmv_v_x_u32m8_ta_vl31_15(size_t vl)
{
  return vmv_v_x_u32m8_ta(15, 31);
}

/*
** test_vmv_v_x_u8mf8_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint8mf8_t 
test_vmv_v_x_u8mf8_tu_m16(vuint8mf8_t dest, size_t vl)
{
  return vmv_v_x_u8mf8_tu(dest, -16, vl);
}

/*
** test_vmv_v_x_u8mf8_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint8mf8_t 
test_vmv_v_x_u8mf8_tu_15(vuint8mf8_t dest, size_t vl)
{
  return vmv_v_x_u8mf8_tu(dest, 15, vl);
}

/*
** test_vmv_v_x_u8mf8_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint8mf8_t 
test_vmv_v_x_u8mf8_tu_vl31_m16(vuint8mf8_t dest)
{
  return vmv_v_x_u8mf8_tu(dest, -16, 31);
}

/*
** test_vmv_v_x_u8mf8_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint8mf8_t 
test_vmv_v_x_u8mf8_tu_vl31_15(vuint8mf8_t dest)
{
  return vmv_v_x_u8mf8_tu(dest, 15, 31);
}

/*
** test_vmv_v_x_u8mf4_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint8mf4_t 
test_vmv_v_x_u8mf4_tu_m16(vuint8mf4_t dest, size_t vl)
{
  return vmv_v_x_u8mf4_tu(dest, -16, vl);
}

/*
** test_vmv_v_x_u8mf4_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint8mf4_t 
test_vmv_v_x_u8mf4_tu_15(vuint8mf4_t dest, size_t vl)
{
  return vmv_v_x_u8mf4_tu(dest, 15, vl);
}

/*
** test_vmv_v_x_u8mf4_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint8mf4_t 
test_vmv_v_x_u8mf4_tu_vl31_m16(vuint8mf4_t dest)
{
  return vmv_v_x_u8mf4_tu(dest, -16, 31);
}

/*
** test_vmv_v_x_u8mf4_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint8mf4_t 
test_vmv_v_x_u8mf4_tu_vl31_15(vuint8mf4_t dest)
{
  return vmv_v_x_u8mf4_tu(dest, 15, 31);
}

/*
** test_vmv_v_x_u8mf2_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint8mf2_t 
test_vmv_v_x_u8mf2_tu_m16(vuint8mf2_t dest, size_t vl)
{
  return vmv_v_x_u8mf2_tu(dest, -16, vl);
}

/*
** test_vmv_v_x_u8mf2_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint8mf2_t 
test_vmv_v_x_u8mf2_tu_15(vuint8mf2_t dest, size_t vl)
{
  return vmv_v_x_u8mf2_tu(dest, 15, vl);
}

/*
** test_vmv_v_x_u8mf2_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint8mf2_t 
test_vmv_v_x_u8mf2_tu_vl31_m16(vuint8mf2_t dest)
{
  return vmv_v_x_u8mf2_tu(dest, -16, 31);
}

/*
** test_vmv_v_x_u8mf2_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint8mf2_t 
test_vmv_v_x_u8mf2_tu_vl31_15(vuint8mf2_t dest)
{
  return vmv_v_x_u8mf2_tu(dest, 15, 31);
}

/*
** test_vmv_v_x_u8m1_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint8m1_t 
test_vmv_v_x_u8m1_tu_m16(vuint8m1_t dest, size_t vl)
{
  return vmv_v_x_u8m1_tu(dest, -16, vl);
}

/*
** test_vmv_v_x_u8m1_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint8m1_t 
test_vmv_v_x_u8m1_tu_15(vuint8m1_t dest, size_t vl)
{
  return vmv_v_x_u8m1_tu(dest, 15, vl);
}

/*
** test_vmv_v_x_u8m1_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint8m1_t 
test_vmv_v_x_u8m1_tu_vl31_m16(vuint8m1_t dest)
{
  return vmv_v_x_u8m1_tu(dest, -16, 31);
}

/*
** test_vmv_v_x_u8m1_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint8m1_t 
test_vmv_v_x_u8m1_tu_vl31_15(vuint8m1_t dest)
{
  return vmv_v_x_u8m1_tu(dest, 15, 31);
}

/*
** test_vmv_v_x_u8m2_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vuint8m2_t 
test_vmv_v_x_u8m2_tu_m16(vuint8m2_t dest, size_t vl)
{
  return vmv_v_x_u8m2_tu(dest, -16, vl);
}

/*
** test_vmv_v_x_u8m2_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vuint8m2_t 
test_vmv_v_x_u8m2_tu_15(vuint8m2_t dest, size_t vl)
{
  return vmv_v_x_u8m2_tu(dest, 15, vl);
}

/*
** test_vmv_v_x_u8m2_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vuint8m2_t 
test_vmv_v_x_u8m2_tu_vl31_m16(vuint8m2_t dest)
{
  return vmv_v_x_u8m2_tu(dest, -16, 31);
}

/*
** test_vmv_v_x_u8m2_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vuint8m2_t 
test_vmv_v_x_u8m2_tu_vl31_15(vuint8m2_t dest)
{
  return vmv_v_x_u8m2_tu(dest, 15, 31);
}

/*
** test_vmv_v_x_u8m4_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vuint8m4_t 
test_vmv_v_x_u8m4_tu_m16(vuint8m4_t dest, size_t vl)
{
  return vmv_v_x_u8m4_tu(dest, -16, vl);
}

/*
** test_vmv_v_x_u8m4_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vuint8m4_t 
test_vmv_v_x_u8m4_tu_15(vuint8m4_t dest, size_t vl)
{
  return vmv_v_x_u8m4_tu(dest, 15, vl);
}

/*
** test_vmv_v_x_u8m4_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vuint8m4_t 
test_vmv_v_x_u8m4_tu_vl31_m16(vuint8m4_t dest)
{
  return vmv_v_x_u8m4_tu(dest, -16, 31);
}

/*
** test_vmv_v_x_u8m4_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vuint8m4_t 
test_vmv_v_x_u8m4_tu_vl31_15(vuint8m4_t dest)
{
  return vmv_v_x_u8m4_tu(dest, 15, 31);
}

/*
** test_vmv_v_x_u8m8_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vuint8m8_t 
test_vmv_v_x_u8m8_tu_m16(vuint8m8_t dest, size_t vl)
{
  return vmv_v_x_u8m8_tu(dest, -16, vl);
}

/*
** test_vmv_v_x_u8m8_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vuint8m8_t 
test_vmv_v_x_u8m8_tu_15(vuint8m8_t dest, size_t vl)
{
  return vmv_v_x_u8m8_tu(dest, 15, vl);
}

/*
** test_vmv_v_x_u8m8_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vuint8m8_t 
test_vmv_v_x_u8m8_tu_vl31_m16(vuint8m8_t dest)
{
  return vmv_v_x_u8m8_tu(dest, -16, 31);
}

/*
** test_vmv_v_x_u8m8_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vuint8m8_t 
test_vmv_v_x_u8m8_tu_vl31_15(vuint8m8_t dest)
{
  return vmv_v_x_u8m8_tu(dest, 15, 31);
}

/*
** test_vmv_v_x_u16mf4_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint16mf4_t 
test_vmv_v_x_u16mf4_tu_m16(vuint16mf4_t dest, size_t vl)
{
  return vmv_v_x_u16mf4_tu(dest, -16, vl);
}

/*
** test_vmv_v_x_u16mf4_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint16mf4_t 
test_vmv_v_x_u16mf4_tu_15(vuint16mf4_t dest, size_t vl)
{
  return vmv_v_x_u16mf4_tu(dest, 15, vl);
}

/*
** test_vmv_v_x_u16mf4_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint16mf4_t 
test_vmv_v_x_u16mf4_tu_vl31_m16(vuint16mf4_t dest)
{
  return vmv_v_x_u16mf4_tu(dest, -16, 31);
}

/*
** test_vmv_v_x_u16mf4_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint16mf4_t 
test_vmv_v_x_u16mf4_tu_vl31_15(vuint16mf4_t dest)
{
  return vmv_v_x_u16mf4_tu(dest, 15, 31);
}

/*
** test_vmv_v_x_u16mf2_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint16mf2_t 
test_vmv_v_x_u16mf2_tu_m16(vuint16mf2_t dest, size_t vl)
{
  return vmv_v_x_u16mf2_tu(dest, -16, vl);
}

/*
** test_vmv_v_x_u16mf2_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint16mf2_t 
test_vmv_v_x_u16mf2_tu_15(vuint16mf2_t dest, size_t vl)
{
  return vmv_v_x_u16mf2_tu(dest, 15, vl);
}

/*
** test_vmv_v_x_u16mf2_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint16mf2_t 
test_vmv_v_x_u16mf2_tu_vl31_m16(vuint16mf2_t dest)
{
  return vmv_v_x_u16mf2_tu(dest, -16, 31);
}

/*
** test_vmv_v_x_u16mf2_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint16mf2_t 
test_vmv_v_x_u16mf2_tu_vl31_15(vuint16mf2_t dest)
{
  return vmv_v_x_u16mf2_tu(dest, 15, 31);
}

/*
** test_vmv_v_x_u16m1_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint16m1_t 
test_vmv_v_x_u16m1_tu_m16(vuint16m1_t dest, size_t vl)
{
  return vmv_v_x_u16m1_tu(dest, -16, vl);
}

/*
** test_vmv_v_x_u16m1_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint16m1_t 
test_vmv_v_x_u16m1_tu_15(vuint16m1_t dest, size_t vl)
{
  return vmv_v_x_u16m1_tu(dest, 15, vl);
}

/*
** test_vmv_v_x_u16m1_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint16m1_t 
test_vmv_v_x_u16m1_tu_vl31_m16(vuint16m1_t dest)
{
  return vmv_v_x_u16m1_tu(dest, -16, 31);
}

/*
** test_vmv_v_x_u16m1_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint16m1_t 
test_vmv_v_x_u16m1_tu_vl31_15(vuint16m1_t dest)
{
  return vmv_v_x_u16m1_tu(dest, 15, 31);
}

/*
** test_vmv_v_x_u16m2_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vuint16m2_t 
test_vmv_v_x_u16m2_tu_m16(vuint16m2_t dest, size_t vl)
{
  return vmv_v_x_u16m2_tu(dest, -16, vl);
}

/*
** test_vmv_v_x_u16m2_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vuint16m2_t 
test_vmv_v_x_u16m2_tu_15(vuint16m2_t dest, size_t vl)
{
  return vmv_v_x_u16m2_tu(dest, 15, vl);
}

/*
** test_vmv_v_x_u16m2_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vuint16m2_t 
test_vmv_v_x_u16m2_tu_vl31_m16(vuint16m2_t dest)
{
  return vmv_v_x_u16m2_tu(dest, -16, 31);
}

/*
** test_vmv_v_x_u16m2_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vuint16m2_t 
test_vmv_v_x_u16m2_tu_vl31_15(vuint16m2_t dest)
{
  return vmv_v_x_u16m2_tu(dest, 15, 31);
}

/*
** test_vmv_v_x_u16m4_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vuint16m4_t 
test_vmv_v_x_u16m4_tu_m16(vuint16m4_t dest, size_t vl)
{
  return vmv_v_x_u16m4_tu(dest, -16, vl);
}

/*
** test_vmv_v_x_u16m4_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vuint16m4_t 
test_vmv_v_x_u16m4_tu_15(vuint16m4_t dest, size_t vl)
{
  return vmv_v_x_u16m4_tu(dest, 15, vl);
}

/*
** test_vmv_v_x_u16m4_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vuint16m4_t 
test_vmv_v_x_u16m4_tu_vl31_m16(vuint16m4_t dest)
{
  return vmv_v_x_u16m4_tu(dest, -16, 31);
}

/*
** test_vmv_v_x_u16m4_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vuint16m4_t 
test_vmv_v_x_u16m4_tu_vl31_15(vuint16m4_t dest)
{
  return vmv_v_x_u16m4_tu(dest, 15, 31);
}

/*
** test_vmv_v_x_u16m8_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vuint16m8_t 
test_vmv_v_x_u16m8_tu_m16(vuint16m8_t dest, size_t vl)
{
  return vmv_v_x_u16m8_tu(dest, -16, vl);
}

/*
** test_vmv_v_x_u16m8_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vuint16m8_t 
test_vmv_v_x_u16m8_tu_15(vuint16m8_t dest, size_t vl)
{
  return vmv_v_x_u16m8_tu(dest, 15, vl);
}

/*
** test_vmv_v_x_u16m8_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vuint16m8_t 
test_vmv_v_x_u16m8_tu_vl31_m16(vuint16m8_t dest)
{
  return vmv_v_x_u16m8_tu(dest, -16, 31);
}

/*
** test_vmv_v_x_u16m8_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vuint16m8_t 
test_vmv_v_x_u16m8_tu_vl31_15(vuint16m8_t dest)
{
  return vmv_v_x_u16m8_tu(dest, 15, 31);
}

/*
** test_vmv_v_x_u32mf2_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint32mf2_t 
test_vmv_v_x_u32mf2_tu_m16(vuint32mf2_t dest, size_t vl)
{
  return vmv_v_x_u32mf2_tu(dest, -16, vl);
}

/*
** test_vmv_v_x_u32mf2_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint32mf2_t 
test_vmv_v_x_u32mf2_tu_15(vuint32mf2_t dest, size_t vl)
{
  return vmv_v_x_u32mf2_tu(dest, 15, vl);
}

/*
** test_vmv_v_x_u32mf2_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint32mf2_t 
test_vmv_v_x_u32mf2_tu_vl31_m16(vuint32mf2_t dest)
{
  return vmv_v_x_u32mf2_tu(dest, -16, 31);
}

/*
** test_vmv_v_x_u32mf2_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint32mf2_t 
test_vmv_v_x_u32mf2_tu_vl31_15(vuint32mf2_t dest)
{
  return vmv_v_x_u32mf2_tu(dest, 15, 31);
}

/*
** test_vmv_v_x_u32m1_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint32m1_t 
test_vmv_v_x_u32m1_tu_m16(vuint32m1_t dest, size_t vl)
{
  return vmv_v_x_u32m1_tu(dest, -16, vl);
}

/*
** test_vmv_v_x_u32m1_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint32m1_t 
test_vmv_v_x_u32m1_tu_15(vuint32m1_t dest, size_t vl)
{
  return vmv_v_x_u32m1_tu(dest, 15, vl);
}

/*
** test_vmv_v_x_u32m1_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint32m1_t 
test_vmv_v_x_u32m1_tu_vl31_m16(vuint32m1_t dest)
{
  return vmv_v_x_u32m1_tu(dest, -16, 31);
}

/*
** test_vmv_v_x_u32m1_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint32m1_t 
test_vmv_v_x_u32m1_tu_vl31_15(vuint32m1_t dest)
{
  return vmv_v_x_u32m1_tu(dest, 15, 31);
}

/*
** test_vmv_v_x_u32m2_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vuint32m2_t 
test_vmv_v_x_u32m2_tu_m16(vuint32m2_t dest, size_t vl)
{
  return vmv_v_x_u32m2_tu(dest, -16, vl);
}

/*
** test_vmv_v_x_u32m2_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vuint32m2_t 
test_vmv_v_x_u32m2_tu_15(vuint32m2_t dest, size_t vl)
{
  return vmv_v_x_u32m2_tu(dest, 15, vl);
}

/*
** test_vmv_v_x_u32m2_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vuint32m2_t 
test_vmv_v_x_u32m2_tu_vl31_m16(vuint32m2_t dest)
{
  return vmv_v_x_u32m2_tu(dest, -16, 31);
}

/*
** test_vmv_v_x_u32m2_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vuint32m2_t 
test_vmv_v_x_u32m2_tu_vl31_15(vuint32m2_t dest)
{
  return vmv_v_x_u32m2_tu(dest, 15, 31);
}

/*
** test_vmv_v_x_u32m4_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vuint32m4_t 
test_vmv_v_x_u32m4_tu_m16(vuint32m4_t dest, size_t vl)
{
  return vmv_v_x_u32m4_tu(dest, -16, vl);
}

/*
** test_vmv_v_x_u32m4_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vuint32m4_t 
test_vmv_v_x_u32m4_tu_15(vuint32m4_t dest, size_t vl)
{
  return vmv_v_x_u32m4_tu(dest, 15, vl);
}

/*
** test_vmv_v_x_u32m4_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vuint32m4_t 
test_vmv_v_x_u32m4_tu_vl31_m16(vuint32m4_t dest)
{
  return vmv_v_x_u32m4_tu(dest, -16, 31);
}

/*
** test_vmv_v_x_u32m4_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vuint32m4_t 
test_vmv_v_x_u32m4_tu_vl31_15(vuint32m4_t dest)
{
  return vmv_v_x_u32m4_tu(dest, 15, 31);
}

/*
** test_vmv_v_x_u32m8_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vuint32m8_t 
test_vmv_v_x_u32m8_tu_m16(vuint32m8_t dest, size_t vl)
{
  return vmv_v_x_u32m8_tu(dest, -16, vl);
}

/*
** test_vmv_v_x_u32m8_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vuint32m8_t 
test_vmv_v_x_u32m8_tu_15(vuint32m8_t dest, size_t vl)
{
  return vmv_v_x_u32m8_tu(dest, 15, vl);
}

/*
** test_vmv_v_x_u32m8_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vuint32m8_t 
test_vmv_v_x_u32m8_tu_vl31_m16(vuint32m8_t dest)
{
  return vmv_v_x_u32m8_tu(dest, -16, 31);
}

/*
** test_vmv_v_x_u32m8_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vuint32m8_t 
test_vmv_v_x_u32m8_tu_vl31_15(vuint32m8_t dest)
{
  return vmv_v_x_u32m8_tu(dest, 15, 31);
}

/*
** test_vmv_v_x_u64m1_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint64m1_t 
test_vmv_v_x_u64m1_ta_m16(size_t vl)
{
  return vmv_v_x_u64m1_ta(-16, vl);
}

/*
** test_vmv_v_x_u64m1_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint64m1_t 
test_vmv_v_x_u64m1_ta_15(size_t vl)
{
  return vmv_v_x_u64m1_ta(15, vl);
}

/*
** test_vmv_v_x_u64m1_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint64m1_t 
test_vmv_v_x_u64m1_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_u64m1_ta(-16, 31);
}

/*
** test_vmv_v_x_u64m1_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint64m1_t 
test_vmv_v_x_u64m1_ta_vl31_15(size_t vl)
{
  return vmv_v_x_u64m1_ta(15, 31);
}

/*
** test_vmv_v_x_u64m2_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vuint64m2_t 
test_vmv_v_x_u64m2_ta_m16(size_t vl)
{
  return vmv_v_x_u64m2_ta(-16, vl);
}

/*
** test_vmv_v_x_u64m2_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vuint64m2_t 
test_vmv_v_x_u64m2_ta_15(size_t vl)
{
  return vmv_v_x_u64m2_ta(15, vl);
}

/*
** test_vmv_v_x_u64m2_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vuint64m2_t 
test_vmv_v_x_u64m2_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_u64m2_ta(-16, 31);
}

/*
** test_vmv_v_x_u64m2_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vuint64m2_t 
test_vmv_v_x_u64m2_ta_vl31_15(size_t vl)
{
  return vmv_v_x_u64m2_ta(15, 31);
}

/*
** test_vmv_v_x_u64m4_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vuint64m4_t 
test_vmv_v_x_u64m4_ta_m16(size_t vl)
{
  return vmv_v_x_u64m4_ta(-16, vl);
}

/*
** test_vmv_v_x_u64m4_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vuint64m4_t 
test_vmv_v_x_u64m4_ta_15(size_t vl)
{
  return vmv_v_x_u64m4_ta(15, vl);
}

/*
** test_vmv_v_x_u64m4_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vuint64m4_t 
test_vmv_v_x_u64m4_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_u64m4_ta(-16, 31);
}

/*
** test_vmv_v_x_u64m4_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vuint64m4_t 
test_vmv_v_x_u64m4_ta_vl31_15(size_t vl)
{
  return vmv_v_x_u64m4_ta(15, 31);
}

/*
** test_vmv_v_x_u64m8_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vuint64m8_t 
test_vmv_v_x_u64m8_ta_m16(size_t vl)
{
  return vmv_v_x_u64m8_ta(-16, vl);
}

/*
** test_vmv_v_x_u64m8_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vuint64m8_t 
test_vmv_v_x_u64m8_ta_15(size_t vl)
{
  return vmv_v_x_u64m8_ta(15, vl);
}

/*
** test_vmv_v_x_u64m8_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vuint64m8_t 
test_vmv_v_x_u64m8_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_u64m8_ta(-16, 31);
}

/*
** test_vmv_v_x_u64m8_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vuint64m8_t 
test_vmv_v_x_u64m8_ta_vl31_15(size_t vl)
{
  return vmv_v_x_u64m8_ta(15, 31);
}

/*
** test_vmv_v_x_u64m1_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint64m1_t 
test_vmv_v_x_u64m1_tu_m16(vuint64m1_t dest, size_t vl)
{
  return vmv_v_x_u64m1_tu(dest, -16, vl);
}

/*
** test_vmv_v_x_u64m1_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint64m1_t 
test_vmv_v_x_u64m1_tu_15(vuint64m1_t dest, size_t vl)
{
  return vmv_v_x_u64m1_tu(dest, 15, vl);
}

/*
** test_vmv_v_x_u64m1_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint64m1_t 
test_vmv_v_x_u64m1_tu_vl31_m16(vuint64m1_t dest)
{
  return vmv_v_x_u64m1_tu(dest, -16, 31);
}

/*
** test_vmv_v_x_u64m1_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint64m1_t 
test_vmv_v_x_u64m1_tu_vl31_15(vuint64m1_t dest)
{
  return vmv_v_x_u64m1_tu(dest, 15, 31);
}

/*
** test_vmv_v_x_u64m2_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vuint64m2_t 
test_vmv_v_x_u64m2_tu_m16(vuint64m2_t dest, size_t vl)
{
  return vmv_v_x_u64m2_tu(dest, -16, vl);
}

/*
** test_vmv_v_x_u64m2_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vuint64m2_t 
test_vmv_v_x_u64m2_tu_15(vuint64m2_t dest, size_t vl)
{
  return vmv_v_x_u64m2_tu(dest, 15, vl);
}

/*
** test_vmv_v_x_u64m2_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vuint64m2_t 
test_vmv_v_x_u64m2_tu_vl31_m16(vuint64m2_t dest)
{
  return vmv_v_x_u64m2_tu(dest, -16, 31);
}

/*
** test_vmv_v_x_u64m2_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vuint64m2_t 
test_vmv_v_x_u64m2_tu_vl31_15(vuint64m2_t dest)
{
  return vmv_v_x_u64m2_tu(dest, 15, 31);
}

/*
** test_vmv_v_x_u64m4_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vuint64m4_t 
test_vmv_v_x_u64m4_tu_m16(vuint64m4_t dest, size_t vl)
{
  return vmv_v_x_u64m4_tu(dest, -16, vl);
}

/*
** test_vmv_v_x_u64m4_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vuint64m4_t 
test_vmv_v_x_u64m4_tu_15(vuint64m4_t dest, size_t vl)
{
  return vmv_v_x_u64m4_tu(dest, 15, vl);
}

/*
** test_vmv_v_x_u64m4_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vuint64m4_t 
test_vmv_v_x_u64m4_tu_vl31_m16(vuint64m4_t dest)
{
  return vmv_v_x_u64m4_tu(dest, -16, 31);
}

/*
** test_vmv_v_x_u64m4_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vuint64m4_t 
test_vmv_v_x_u64m4_tu_vl31_15(vuint64m4_t dest)
{
  return vmv_v_x_u64m4_tu(dest, 15, 31);
}

/*
** test_vmv_v_x_u64m8_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vuint64m8_t 
test_vmv_v_x_u64m8_tu_m16(vuint64m8_t dest, size_t vl)
{
  return vmv_v_x_u64m8_tu(dest, -16, vl);
}

/*
** test_vmv_v_x_u64m8_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vuint64m8_t 
test_vmv_v_x_u64m8_tu_15(vuint64m8_t dest, size_t vl)
{
  return vmv_v_x_u64m8_tu(dest, 15, vl);
}

/*
** test_vmv_v_x_u64m8_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vuint64m8_t 
test_vmv_v_x_u64m8_tu_vl31_m16(vuint64m8_t dest)
{
  return vmv_v_x_u64m8_tu(dest, -16, 31);
}

/*
** test_vmv_v_x_u64m8_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vuint64m8_t 
test_vmv_v_x_u64m8_tu_vl31_15(vuint64m8_t dest)
{
  return vmv_v_x_u64m8_tu(dest, 15, 31);
}

/*
** test_vmv_v_x_u8mf8_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint8mf8_t 
test_vmv_v_x_u8mf8_ta_vl32_m16(size_t vl)
{
  return vmv_v_x_u8mf8_ta(-16, 32);
}

/*
** test_vmv_v_x_u8mf8_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint8mf8_t 
test_vmv_v_x_u8mf8_ta_vl32_15(size_t vl)
{
  return vmv_v_x_u8mf8_ta(15, 32);
}

/*
** test_vmv_v_x_u8mf4_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint8mf4_t 
test_vmv_v_x_u8mf4_ta_vl32_m16(size_t vl)
{
  return vmv_v_x_u8mf4_ta(-16, 32);
}

/*
** test_vmv_v_x_u8mf4_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint8mf4_t 
test_vmv_v_x_u8mf4_ta_vl32_15(size_t vl)
{
  return vmv_v_x_u8mf4_ta(15, 32);
}

/*
** test_vmv_v_x_u8mf2_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint8mf2_t 
test_vmv_v_x_u8mf2_ta_vl32_m16(size_t vl)
{
  return vmv_v_x_u8mf2_ta(-16, 32);
}

/*
** test_vmv_v_x_u8mf2_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint8mf2_t 
test_vmv_v_x_u8mf2_ta_vl32_15(size_t vl)
{
  return vmv_v_x_u8mf2_ta(15, 32);
}

/*
** test_vmv_v_x_u8m1_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint8m1_t 
test_vmv_v_x_u8m1_ta_vl32_m16(size_t vl)
{
  return vmv_v_x_u8m1_ta(-16, 32);
}

/*
** test_vmv_v_x_u8m1_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint8m1_t 
test_vmv_v_x_u8m1_ta_vl32_15(size_t vl)
{
  return vmv_v_x_u8m1_ta(15, 32);
}

/*
** test_vmv_v_x_u8m2_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vuint8m2_t 
test_vmv_v_x_u8m2_ta_vl32_m16(size_t vl)
{
  return vmv_v_x_u8m2_ta(-16, 32);
}

/*
** test_vmv_v_x_u8m2_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vuint8m2_t 
test_vmv_v_x_u8m2_ta_vl32_15(size_t vl)
{
  return vmv_v_x_u8m2_ta(15, 32);
}

/*
** test_vmv_v_x_u8m4_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vuint8m4_t 
test_vmv_v_x_u8m4_ta_vl32_m16(size_t vl)
{
  return vmv_v_x_u8m4_ta(-16, 32);
}

/*
** test_vmv_v_x_u8m4_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vuint8m4_t 
test_vmv_v_x_u8m4_ta_vl32_15(size_t vl)
{
  return vmv_v_x_u8m4_ta(15, 32);
}

/*
** test_vmv_v_x_u8m8_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vuint8m8_t 
test_vmv_v_x_u8m8_ta_vl32_m16(size_t vl)
{
  return vmv_v_x_u8m8_ta(-16, 32);
}

/*
** test_vmv_v_x_u8m8_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vuint8m8_t 
test_vmv_v_x_u8m8_ta_vl32_15(size_t vl)
{
  return vmv_v_x_u8m8_ta(15, 32);
}

/*
** test_vmv_v_x_u16mf4_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint16mf4_t 
test_vmv_v_x_u16mf4_ta_vl32_m16(size_t vl)
{
  return vmv_v_x_u16mf4_ta(-16, 32);
}

/*
** test_vmv_v_x_u16mf4_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint16mf4_t 
test_vmv_v_x_u16mf4_ta_vl32_15(size_t vl)
{
  return vmv_v_x_u16mf4_ta(15, 32);
}

/*
** test_vmv_v_x_u16mf2_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint16mf2_t 
test_vmv_v_x_u16mf2_ta_vl32_m16(size_t vl)
{
  return vmv_v_x_u16mf2_ta(-16, 32);
}

/*
** test_vmv_v_x_u16mf2_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint16mf2_t 
test_vmv_v_x_u16mf2_ta_vl32_15(size_t vl)
{
  return vmv_v_x_u16mf2_ta(15, 32);
}

/*
** test_vmv_v_x_u16m1_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint16m1_t 
test_vmv_v_x_u16m1_ta_vl32_m16(size_t vl)
{
  return vmv_v_x_u16m1_ta(-16, 32);
}

/*
** test_vmv_v_x_u16m1_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint16m1_t 
test_vmv_v_x_u16m1_ta_vl32_15(size_t vl)
{
  return vmv_v_x_u16m1_ta(15, 32);
}

/*
** test_vmv_v_x_u16m2_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vuint16m2_t 
test_vmv_v_x_u16m2_ta_vl32_m16(size_t vl)
{
  return vmv_v_x_u16m2_ta(-16, 32);
}

/*
** test_vmv_v_x_u16m2_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vuint16m2_t 
test_vmv_v_x_u16m2_ta_vl32_15(size_t vl)
{
  return vmv_v_x_u16m2_ta(15, 32);
}

/*
** test_vmv_v_x_u16m4_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vuint16m4_t 
test_vmv_v_x_u16m4_ta_vl32_m16(size_t vl)
{
  return vmv_v_x_u16m4_ta(-16, 32);
}

/*
** test_vmv_v_x_u16m4_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vuint16m4_t 
test_vmv_v_x_u16m4_ta_vl32_15(size_t vl)
{
  return vmv_v_x_u16m4_ta(15, 32);
}

/*
** test_vmv_v_x_u16m8_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vuint16m8_t 
test_vmv_v_x_u16m8_ta_vl32_m16(size_t vl)
{
  return vmv_v_x_u16m8_ta(-16, 32);
}

/*
** test_vmv_v_x_u16m8_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vuint16m8_t 
test_vmv_v_x_u16m8_ta_vl32_15(size_t vl)
{
  return vmv_v_x_u16m8_ta(15, 32);
}

/*
** test_vmv_v_x_u32mf2_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint32mf2_t 
test_vmv_v_x_u32mf2_ta_vl32_m16(size_t vl)
{
  return vmv_v_x_u32mf2_ta(-16, 32);
}

/*
** test_vmv_v_x_u32mf2_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint32mf2_t 
test_vmv_v_x_u32mf2_ta_vl32_15(size_t vl)
{
  return vmv_v_x_u32mf2_ta(15, 32);
}

/*
** test_vmv_v_x_u32m1_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint32m1_t 
test_vmv_v_x_u32m1_ta_vl32_m16(size_t vl)
{
  return vmv_v_x_u32m1_ta(-16, 32);
}

/*
** test_vmv_v_x_u32m1_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint32m1_t 
test_vmv_v_x_u32m1_ta_vl32_15(size_t vl)
{
  return vmv_v_x_u32m1_ta(15, 32);
}

/*
** test_vmv_v_x_u32m2_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vuint32m2_t 
test_vmv_v_x_u32m2_ta_vl32_m16(size_t vl)
{
  return vmv_v_x_u32m2_ta(-16, 32);
}

/*
** test_vmv_v_x_u32m2_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vuint32m2_t 
test_vmv_v_x_u32m2_ta_vl32_15(size_t vl)
{
  return vmv_v_x_u32m2_ta(15, 32);
}

/*
** test_vmv_v_x_u32m4_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vuint32m4_t 
test_vmv_v_x_u32m4_ta_vl32_m16(size_t vl)
{
  return vmv_v_x_u32m4_ta(-16, 32);
}

/*
** test_vmv_v_x_u32m4_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vuint32m4_t 
test_vmv_v_x_u32m4_ta_vl32_15(size_t vl)
{
  return vmv_v_x_u32m4_ta(15, 32);
}

/*
** test_vmv_v_x_u32m8_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vuint32m8_t 
test_vmv_v_x_u32m8_ta_vl32_m16(size_t vl)
{
  return vmv_v_x_u32m8_ta(-16, 32);
}

/*
** test_vmv_v_x_u32m8_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vuint32m8_t 
test_vmv_v_x_u32m8_ta_vl32_15(size_t vl)
{
  return vmv_v_x_u32m8_ta(15, 32);
}

/*
** test_vmv_v_x_u8mf8_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint8mf8_t 
test_vmv_v_x_u8mf8_tu_vl32_m16(vuint8mf8_t dest)
{
  return vmv_v_x_u8mf8_tu(dest, -16, 32);
}

/*
** test_vmv_v_x_u8mf8_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint8mf8_t 
test_vmv_v_x_u8mf8_tu_vl32_15(vuint8mf8_t dest)
{
  return vmv_v_x_u8mf8_tu(dest, 15, 32);
}

/*
** test_vmv_v_x_u8mf4_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint8mf4_t 
test_vmv_v_x_u8mf4_tu_vl32_m16(vuint8mf4_t dest)
{
  return vmv_v_x_u8mf4_tu(dest, -16, 32);
}

/*
** test_vmv_v_x_u8mf4_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint8mf4_t 
test_vmv_v_x_u8mf4_tu_vl32_15(vuint8mf4_t dest)
{
  return vmv_v_x_u8mf4_tu(dest, 15, 32);
}

/*
** test_vmv_v_x_u8mf2_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint8mf2_t 
test_vmv_v_x_u8mf2_tu_vl32_m16(vuint8mf2_t dest)
{
  return vmv_v_x_u8mf2_tu(dest, -16, 32);
}

/*
** test_vmv_v_x_u8mf2_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint8mf2_t 
test_vmv_v_x_u8mf2_tu_vl32_15(vuint8mf2_t dest)
{
  return vmv_v_x_u8mf2_tu(dest, 15, 32);
}

/*
** test_vmv_v_x_u8m1_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint8m1_t 
test_vmv_v_x_u8m1_tu_vl32_m16(vuint8m1_t dest)
{
  return vmv_v_x_u8m1_tu(dest, -16, 32);
}

/*
** test_vmv_v_x_u8m1_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint8m1_t 
test_vmv_v_x_u8m1_tu_vl32_15(vuint8m1_t dest)
{
  return vmv_v_x_u8m1_tu(dest, 15, 32);
}

/*
** test_vmv_v_x_u8m2_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vuint8m2_t 
test_vmv_v_x_u8m2_tu_vl32_m16(vuint8m2_t dest)
{
  return vmv_v_x_u8m2_tu(dest, -16, 32);
}

/*
** test_vmv_v_x_u8m2_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vuint8m2_t 
test_vmv_v_x_u8m2_tu_vl32_15(vuint8m2_t dest)
{
  return vmv_v_x_u8m2_tu(dest, 15, 32);
}

/*
** test_vmv_v_x_u8m4_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vuint8m4_t 
test_vmv_v_x_u8m4_tu_vl32_m16(vuint8m4_t dest)
{
  return vmv_v_x_u8m4_tu(dest, -16, 32);
}

/*
** test_vmv_v_x_u8m4_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vuint8m4_t 
test_vmv_v_x_u8m4_tu_vl32_15(vuint8m4_t dest)
{
  return vmv_v_x_u8m4_tu(dest, 15, 32);
}

/*
** test_vmv_v_x_u8m8_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vuint8m8_t 
test_vmv_v_x_u8m8_tu_vl32_m16(vuint8m8_t dest)
{
  return vmv_v_x_u8m8_tu(dest, -16, 32);
}

/*
** test_vmv_v_x_u8m8_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vuint8m8_t 
test_vmv_v_x_u8m8_tu_vl32_15(vuint8m8_t dest)
{
  return vmv_v_x_u8m8_tu(dest, 15, 32);
}

/*
** test_vmv_v_x_u16mf4_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint16mf4_t 
test_vmv_v_x_u16mf4_tu_vl32_m16(vuint16mf4_t dest)
{
  return vmv_v_x_u16mf4_tu(dest, -16, 32);
}

/*
** test_vmv_v_x_u16mf4_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint16mf4_t 
test_vmv_v_x_u16mf4_tu_vl32_15(vuint16mf4_t dest)
{
  return vmv_v_x_u16mf4_tu(dest, 15, 32);
}

/*
** test_vmv_v_x_u16mf2_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint16mf2_t 
test_vmv_v_x_u16mf2_tu_vl32_m16(vuint16mf2_t dest)
{
  return vmv_v_x_u16mf2_tu(dest, -16, 32);
}

/*
** test_vmv_v_x_u16mf2_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint16mf2_t 
test_vmv_v_x_u16mf2_tu_vl32_15(vuint16mf2_t dest)
{
  return vmv_v_x_u16mf2_tu(dest, 15, 32);
}

/*
** test_vmv_v_x_u16m1_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint16m1_t 
test_vmv_v_x_u16m1_tu_vl32_m16(vuint16m1_t dest)
{
  return vmv_v_x_u16m1_tu(dest, -16, 32);
}

/*
** test_vmv_v_x_u16m1_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint16m1_t 
test_vmv_v_x_u16m1_tu_vl32_15(vuint16m1_t dest)
{
  return vmv_v_x_u16m1_tu(dest, 15, 32);
}

/*
** test_vmv_v_x_u16m2_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vuint16m2_t 
test_vmv_v_x_u16m2_tu_vl32_m16(vuint16m2_t dest)
{
  return vmv_v_x_u16m2_tu(dest, -16, 32);
}

/*
** test_vmv_v_x_u16m2_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vuint16m2_t 
test_vmv_v_x_u16m2_tu_vl32_15(vuint16m2_t dest)
{
  return vmv_v_x_u16m2_tu(dest, 15, 32);
}

/*
** test_vmv_v_x_u16m4_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vuint16m4_t 
test_vmv_v_x_u16m4_tu_vl32_m16(vuint16m4_t dest)
{
  return vmv_v_x_u16m4_tu(dest, -16, 32);
}

/*
** test_vmv_v_x_u16m4_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vuint16m4_t 
test_vmv_v_x_u16m4_tu_vl32_15(vuint16m4_t dest)
{
  return vmv_v_x_u16m4_tu(dest, 15, 32);
}

/*
** test_vmv_v_x_u16m8_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vuint16m8_t 
test_vmv_v_x_u16m8_tu_vl32_m16(vuint16m8_t dest)
{
  return vmv_v_x_u16m8_tu(dest, -16, 32);
}

/*
** test_vmv_v_x_u16m8_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vuint16m8_t 
test_vmv_v_x_u16m8_tu_vl32_15(vuint16m8_t dest)
{
  return vmv_v_x_u16m8_tu(dest, 15, 32);
}

/*
** test_vmv_v_x_u32mf2_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint32mf2_t 
test_vmv_v_x_u32mf2_tu_vl32_m16(vuint32mf2_t dest)
{
  return vmv_v_x_u32mf2_tu(dest, -16, 32);
}

/*
** test_vmv_v_x_u32mf2_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint32mf2_t 
test_vmv_v_x_u32mf2_tu_vl32_15(vuint32mf2_t dest)
{
  return vmv_v_x_u32mf2_tu(dest, 15, 32);
}

/*
** test_vmv_v_x_u32m1_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint32m1_t 
test_vmv_v_x_u32m1_tu_vl32_m16(vuint32m1_t dest)
{
  return vmv_v_x_u32m1_tu(dest, -16, 32);
}

/*
** test_vmv_v_x_u32m1_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint32m1_t 
test_vmv_v_x_u32m1_tu_vl32_15(vuint32m1_t dest)
{
  return vmv_v_x_u32m1_tu(dest, 15, 32);
}

/*
** test_vmv_v_x_u32m2_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vuint32m2_t 
test_vmv_v_x_u32m2_tu_vl32_m16(vuint32m2_t dest)
{
  return vmv_v_x_u32m2_tu(dest, -16, 32);
}

/*
** test_vmv_v_x_u32m2_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vuint32m2_t 
test_vmv_v_x_u32m2_tu_vl32_15(vuint32m2_t dest)
{
  return vmv_v_x_u32m2_tu(dest, 15, 32);
}

/*
** test_vmv_v_x_u32m4_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vuint32m4_t 
test_vmv_v_x_u32m4_tu_vl32_m16(vuint32m4_t dest)
{
  return vmv_v_x_u32m4_tu(dest, -16, 32);
}

/*
** test_vmv_v_x_u32m4_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vuint32m4_t 
test_vmv_v_x_u32m4_tu_vl32_15(vuint32m4_t dest)
{
  return vmv_v_x_u32m4_tu(dest, 15, 32);
}

/*
** test_vmv_v_x_u32m8_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vuint32m8_t 
test_vmv_v_x_u32m8_tu_vl32_m16(vuint32m8_t dest)
{
  return vmv_v_x_u32m8_tu(dest, -16, 32);
}

/*
** test_vmv_v_x_u32m8_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vuint32m8_t 
test_vmv_v_x_u32m8_tu_vl32_15(vuint32m8_t dest)
{
  return vmv_v_x_u32m8_tu(dest, 15, 32);
}

/*
** test_vmv_v_x_u64m1_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint64m1_t 
test_vmv_v_x_u64m1_ta_vl32_m16(size_t vl)
{
  return vmv_v_x_u64m1_ta(-16, 32);
}

/*
** test_vmv_v_x_u64m1_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint64m1_t 
test_vmv_v_x_u64m1_ta_vl32_15(size_t vl)
{
  return vmv_v_x_u64m1_ta(15, 32);
}

/*
** test_vmv_v_x_u64m2_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vuint64m2_t 
test_vmv_v_x_u64m2_ta_vl32_m16(size_t vl)
{
  return vmv_v_x_u64m2_ta(-16, 32);
}

/*
** test_vmv_v_x_u64m2_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vuint64m2_t 
test_vmv_v_x_u64m2_ta_vl32_15(size_t vl)
{
  return vmv_v_x_u64m2_ta(15, 32);
}

/*
** test_vmv_v_x_u64m4_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vuint64m4_t 
test_vmv_v_x_u64m4_ta_vl32_m16(size_t vl)
{
  return vmv_v_x_u64m4_ta(-16, 32);
}

/*
** test_vmv_v_x_u64m4_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vuint64m4_t 
test_vmv_v_x_u64m4_ta_vl32_15(size_t vl)
{
  return vmv_v_x_u64m4_ta(15, 32);
}

/*
** test_vmv_v_x_u64m8_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vuint64m8_t 
test_vmv_v_x_u64m8_ta_vl32_m16(size_t vl)
{
  return vmv_v_x_u64m8_ta(-16, 32);
}

/*
** test_vmv_v_x_u64m8_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vuint64m8_t 
test_vmv_v_x_u64m8_ta_vl32_15(size_t vl)
{
  return vmv_v_x_u64m8_ta(15, 32);
}

/*
** test_vmv_v_x_u64m1_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint64m1_t 
test_vmv_v_x_u64m1_tu_vl32_m16(vuint64m1_t dest)
{
  return vmv_v_x_u64m1_tu(dest, -16, 32);
}

/*
** test_vmv_v_x_u64m1_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint64m1_t 
test_vmv_v_x_u64m1_tu_vl32_15(vuint64m1_t dest)
{
  return vmv_v_x_u64m1_tu(dest, 15, 32);
}

/*
** test_vmv_v_x_u64m2_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vuint64m2_t 
test_vmv_v_x_u64m2_tu_vl32_m16(vuint64m2_t dest)
{
  return vmv_v_x_u64m2_tu(dest, -16, 32);
}

/*
** test_vmv_v_x_u64m2_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vuint64m2_t 
test_vmv_v_x_u64m2_tu_vl32_15(vuint64m2_t dest)
{
  return vmv_v_x_u64m2_tu(dest, 15, 32);
}

/*
** test_vmv_v_x_u64m4_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vuint64m4_t 
test_vmv_v_x_u64m4_tu_vl32_m16(vuint64m4_t dest)
{
  return vmv_v_x_u64m4_tu(dest, -16, 32);
}

/*
** test_vmv_v_x_u64m4_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vuint64m4_t 
test_vmv_v_x_u64m4_tu_vl32_15(vuint64m4_t dest)
{
  return vmv_v_x_u64m4_tu(dest, 15, 32);
}

/*
** test_vmv_v_x_u64m8_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vuint64m8_t 
test_vmv_v_x_u64m8_tu_vl32_m16(vuint64m8_t dest)
{
  return vmv_v_x_u64m8_tu(dest, -16, 32);
}

/*
** test_vmv_v_x_u64m8_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vuint64m8_t 
test_vmv_v_x_u64m8_tu_vl32_15(vuint64m8_t dest)
{
  return vmv_v_x_u64m8_tu(dest, 15, 32);
}

/*
** test_vmv_v_x_u8mf8_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint8mf8_t 
test_vmv_v_x_u8mf8_vl32_m16(size_t vl)
{
  return vmv_v_x_u8mf8(-16, 32);
}

/*
** test_vmv_v_x_u8mf8_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint8mf8_t 
test_vmv_v_x_u8mf8_vl32_15(size_t vl)
{
  return vmv_v_x_u8mf8(15, 32);
}

/*
** test_vmv_v_x_u8mf4_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint8mf4_t 
test_vmv_v_x_u8mf4_vl32_m16(size_t vl)
{
  return vmv_v_x_u8mf4(-16, 32);
}

/*
** test_vmv_v_x_u8mf4_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint8mf4_t 
test_vmv_v_x_u8mf4_vl32_15(size_t vl)
{
  return vmv_v_x_u8mf4(15, 32);
}

/*
** test_vmv_v_x_u8mf2_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint8mf2_t 
test_vmv_v_x_u8mf2_vl32_m16(size_t vl)
{
  return vmv_v_x_u8mf2(-16, 32);
}

/*
** test_vmv_v_x_u8mf2_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint8mf2_t 
test_vmv_v_x_u8mf2_vl32_15(size_t vl)
{
  return vmv_v_x_u8mf2(15, 32);
}

/*
** test_vmv_v_x_u8m1_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint8m1_t 
test_vmv_v_x_u8m1_vl32_m16(size_t vl)
{
  return vmv_v_x_u8m1(-16, 32);
}

/*
** test_vmv_v_x_u8m1_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint8m1_t 
test_vmv_v_x_u8m1_vl32_15(size_t vl)
{
  return vmv_v_x_u8m1(15, 32);
}

/*
** test_vmv_v_x_u8m2_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vuint8m2_t 
test_vmv_v_x_u8m2_vl32_m16(size_t vl)
{
  return vmv_v_x_u8m2(-16, 32);
}

/*
** test_vmv_v_x_u8m2_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vuint8m2_t 
test_vmv_v_x_u8m2_vl32_15(size_t vl)
{
  return vmv_v_x_u8m2(15, 32);
}

/*
** test_vmv_v_x_u8m4_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vuint8m4_t 
test_vmv_v_x_u8m4_vl32_m16(size_t vl)
{
  return vmv_v_x_u8m4(-16, 32);
}

/*
** test_vmv_v_x_u8m4_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vuint8m4_t 
test_vmv_v_x_u8m4_vl32_15(size_t vl)
{
  return vmv_v_x_u8m4(15, 32);
}

/*
** test_vmv_v_x_u8m8_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vuint8m8_t 
test_vmv_v_x_u8m8_vl32_m16(size_t vl)
{
  return vmv_v_x_u8m8(-16, 32);
}

/*
** test_vmv_v_x_u8m8_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vuint8m8_t 
test_vmv_v_x_u8m8_vl32_15(size_t vl)
{
  return vmv_v_x_u8m8(15, 32);
}

/*
** test_vmv_v_x_u16mf4_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint16mf4_t 
test_vmv_v_x_u16mf4_vl32_m16(size_t vl)
{
  return vmv_v_x_u16mf4(-16, 32);
}

/*
** test_vmv_v_x_u16mf4_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint16mf4_t 
test_vmv_v_x_u16mf4_vl32_15(size_t vl)
{
  return vmv_v_x_u16mf4(15, 32);
}

/*
** test_vmv_v_x_u16mf2_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint16mf2_t 
test_vmv_v_x_u16mf2_vl32_m16(size_t vl)
{
  return vmv_v_x_u16mf2(-16, 32);
}

/*
** test_vmv_v_x_u16mf2_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint16mf2_t 
test_vmv_v_x_u16mf2_vl32_15(size_t vl)
{
  return vmv_v_x_u16mf2(15, 32);
}

/*
** test_vmv_v_x_u16m1_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint16m1_t 
test_vmv_v_x_u16m1_vl32_m16(size_t vl)
{
  return vmv_v_x_u16m1(-16, 32);
}

/*
** test_vmv_v_x_u16m1_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint16m1_t 
test_vmv_v_x_u16m1_vl32_15(size_t vl)
{
  return vmv_v_x_u16m1(15, 32);
}

/*
** test_vmv_v_x_u16m2_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vuint16m2_t 
test_vmv_v_x_u16m2_vl32_m16(size_t vl)
{
  return vmv_v_x_u16m2(-16, 32);
}

/*
** test_vmv_v_x_u16m2_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vuint16m2_t 
test_vmv_v_x_u16m2_vl32_15(size_t vl)
{
  return vmv_v_x_u16m2(15, 32);
}

/*
** test_vmv_v_x_u16m4_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vuint16m4_t 
test_vmv_v_x_u16m4_vl32_m16(size_t vl)
{
  return vmv_v_x_u16m4(-16, 32);
}

/*
** test_vmv_v_x_u16m4_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vuint16m4_t 
test_vmv_v_x_u16m4_vl32_15(size_t vl)
{
  return vmv_v_x_u16m4(15, 32);
}

/*
** test_vmv_v_x_u16m8_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vuint16m8_t 
test_vmv_v_x_u16m8_vl32_m16(size_t vl)
{
  return vmv_v_x_u16m8(-16, 32);
}

/*
** test_vmv_v_x_u16m8_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vuint16m8_t 
test_vmv_v_x_u16m8_vl32_15(size_t vl)
{
  return vmv_v_x_u16m8(15, 32);
}

/*
** test_vmv_v_x_u32mf2_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint32mf2_t 
test_vmv_v_x_u32mf2_vl32_m16(size_t vl)
{
  return vmv_v_x_u32mf2(-16, 32);
}

/*
** test_vmv_v_x_u32mf2_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint32mf2_t 
test_vmv_v_x_u32mf2_vl32_15(size_t vl)
{
  return vmv_v_x_u32mf2(15, 32);
}

/*
** test_vmv_v_x_u32m1_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint32m1_t 
test_vmv_v_x_u32m1_vl32_m16(size_t vl)
{
  return vmv_v_x_u32m1(-16, 32);
}

/*
** test_vmv_v_x_u32m1_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint32m1_t 
test_vmv_v_x_u32m1_vl32_15(size_t vl)
{
  return vmv_v_x_u32m1(15, 32);
}

/*
** test_vmv_v_x_u32m2_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vuint32m2_t 
test_vmv_v_x_u32m2_vl32_m16(size_t vl)
{
  return vmv_v_x_u32m2(-16, 32);
}

/*
** test_vmv_v_x_u32m2_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vuint32m2_t 
test_vmv_v_x_u32m2_vl32_15(size_t vl)
{
  return vmv_v_x_u32m2(15, 32);
}

/*
** test_vmv_v_x_u32m4_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vuint32m4_t 
test_vmv_v_x_u32m4_vl32_m16(size_t vl)
{
  return vmv_v_x_u32m4(-16, 32);
}

/*
** test_vmv_v_x_u32m4_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vuint32m4_t 
test_vmv_v_x_u32m4_vl32_15(size_t vl)
{
  return vmv_v_x_u32m4(15, 32);
}

/*
** test_vmv_v_x_u32m8_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vuint32m8_t 
test_vmv_v_x_u32m8_vl32_m16(size_t vl)
{
  return vmv_v_x_u32m8(-16, 32);
}

/*
** test_vmv_v_x_u32m8_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vuint32m8_t 
test_vmv_v_x_u32m8_vl32_15(size_t vl)
{
  return vmv_v_x_u32m8(15, 32);
}

/*
** test_vmv_v_x_u64m1_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vuint64m1_t 
test_vmv_v_x_u64m1_vl32_m16(size_t vl)
{
  return vmv_v_x_u64m1(-16, 32);
}

/*
** test_vmv_v_x_u64m1_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vuint64m1_t 
test_vmv_v_x_u64m1_vl32_15(size_t vl)
{
  return vmv_v_x_u64m1(15, 32);
}

/*
** test_vmv_v_x_u64m2_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vuint64m2_t 
test_vmv_v_x_u64m2_vl32_m16(size_t vl)
{
  return vmv_v_x_u64m2(-16, 32);
}

/*
** test_vmv_v_x_u64m2_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vuint64m2_t 
test_vmv_v_x_u64m2_vl32_15(size_t vl)
{
  return vmv_v_x_u64m2(15, 32);
}

/*
** test_vmv_v_x_u64m4_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vuint64m4_t 
test_vmv_v_x_u64m4_vl32_m16(size_t vl)
{
  return vmv_v_x_u64m4(-16, 32);
}

/*
** test_vmv_v_x_u64m4_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vuint64m4_t 
test_vmv_v_x_u64m4_vl32_15(size_t vl)
{
  return vmv_v_x_u64m4(15, 32);
}

/*
** test_vmv_v_x_u64m8_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vuint64m8_t 
test_vmv_v_x_u64m8_vl32_m16(size_t vl)
{
  return vmv_v_x_u64m8(-16, 32);
}

/*
** test_vmv_v_x_u64m8_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vuint64m8_t 
test_vmv_v_x_u64m8_vl32_15(size_t vl)
{
  return vmv_v_x_u64m8(15, 32);
}

/*
** test_vmv_v_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4_t 
test_vmv_v_v_f16mf4(vfloat16mf4_t op1, size_t vl)
{
  return vmv_v_v_f16mf4(op1, vl);
}

/*
** test_vmv_v_v_f16mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4_t 
test_vmv_v_v_f16mf4_vl31(vfloat16mf4_t op1)
{
  return vmv_v_v_f16mf4(op1, 31);
}

/*
** test_vmv_v_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2_t 
test_vmv_v_v_f16mf2(vfloat16mf2_t op1, size_t vl)
{
  return vmv_v_v_f16mf2(op1, vl);
}

/*
** test_vmv_v_v_f16mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2_t 
test_vmv_v_v_f16mf2_vl31(vfloat16mf2_t op1)
{
  return vmv_v_v_f16mf2(op1, 31);
}

/*
** test_vmv_v_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vmv_v_v_f16m1(vfloat16m1_t op1, size_t vl)
{
  return vmv_v_v_f16m1(op1, vl);
}

/*
** test_vmv_v_v_f16m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vmv_v_v_f16m1_vl31(vfloat16m1_t op1)
{
  return vmv_v_v_f16m1(op1, 31);
}

/*
** test_vmv_v_v_f16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat16m2_t 
test_vmv_v_v_f16m2(vfloat16m2_t op1, size_t vl)
{
  return vmv_v_v_f16m2(op1, vl);
}

/*
** test_vmv_v_v_f16m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat16m2_t 
test_vmv_v_v_f16m2_vl31(vfloat16m2_t op1)
{
  return vmv_v_v_f16m2(op1, 31);
}

/*
** test_vmv_v_v_f16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat16m4_t 
test_vmv_v_v_f16m4(vfloat16m4_t op1, size_t vl)
{
  return vmv_v_v_f16m4(op1, vl);
}

/*
** test_vmv_v_v_f16m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat16m4_t 
test_vmv_v_v_f16m4_vl31(vfloat16m4_t op1)
{
  return vmv_v_v_f16m4(op1, 31);
}

/*
** test_vmv_v_v_f16m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat16m8_t 
test_vmv_v_v_f16m8(vfloat16m8_t op1, size_t vl)
{
  return vmv_v_v_f16m8(op1, vl);
}

/*
** test_vmv_v_v_f16m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat16m8_t 
test_vmv_v_v_f16m8_vl31(vfloat16m8_t op1)
{
  return vmv_v_v_f16m8(op1, 31);
}

/*
** test_vmv_v_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2_t 
test_vmv_v_v_f32mf2(vfloat32mf2_t op1, size_t vl)
{
  return vmv_v_v_f32mf2(op1, vl);
}

/*
** test_vmv_v_v_f32mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2_t 
test_vmv_v_v_f32mf2_vl31(vfloat32mf2_t op1)
{
  return vmv_v_v_f32mf2(op1, 31);
}

/*
** test_vmv_v_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vmv_v_v_f32m1(vfloat32m1_t op1, size_t vl)
{
  return vmv_v_v_f32m1(op1, vl);
}

/*
** test_vmv_v_v_f32m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vmv_v_v_f32m1_vl31(vfloat32m1_t op1)
{
  return vmv_v_v_f32m1(op1, 31);
}

/*
** test_vmv_v_v_f32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat32m2_t 
test_vmv_v_v_f32m2(vfloat32m2_t op1, size_t vl)
{
  return vmv_v_v_f32m2(op1, vl);
}

/*
** test_vmv_v_v_f32m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat32m2_t 
test_vmv_v_v_f32m2_vl31(vfloat32m2_t op1)
{
  return vmv_v_v_f32m2(op1, 31);
}

/*
** test_vmv_v_v_f32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat32m4_t 
test_vmv_v_v_f32m4(vfloat32m4_t op1, size_t vl)
{
  return vmv_v_v_f32m4(op1, vl);
}

/*
** test_vmv_v_v_f32m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat32m4_t 
test_vmv_v_v_f32m4_vl31(vfloat32m4_t op1)
{
  return vmv_v_v_f32m4(op1, 31);
}

/*
** test_vmv_v_v_f32m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat32m8_t 
test_vmv_v_v_f32m8(vfloat32m8_t op1, size_t vl)
{
  return vmv_v_v_f32m8(op1, vl);
}

/*
** test_vmv_v_v_f32m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat32m8_t 
test_vmv_v_v_f32m8_vl31(vfloat32m8_t op1)
{
  return vmv_v_v_f32m8(op1, 31);
}

/*
** test_vmv_v_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vmv_v_v_f64m1(vfloat64m1_t op1, size_t vl)
{
  return vmv_v_v_f64m1(op1, vl);
}

/*
** test_vmv_v_v_f64m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vmv_v_v_f64m1_vl31(vfloat64m1_t op1)
{
  return vmv_v_v_f64m1(op1, 31);
}

/*
** test_vmv_v_v_f64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat64m2_t 
test_vmv_v_v_f64m2(vfloat64m2_t op1, size_t vl)
{
  return vmv_v_v_f64m2(op1, vl);
}

/*
** test_vmv_v_v_f64m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat64m2_t 
test_vmv_v_v_f64m2_vl31(vfloat64m2_t op1)
{
  return vmv_v_v_f64m2(op1, 31);
}

/*
** test_vmv_v_v_f64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat64m4_t 
test_vmv_v_v_f64m4(vfloat64m4_t op1, size_t vl)
{
  return vmv_v_v_f64m4(op1, vl);
}

/*
** test_vmv_v_v_f64m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat64m4_t 
test_vmv_v_v_f64m4_vl31(vfloat64m4_t op1)
{
  return vmv_v_v_f64m4(op1, 31);
}

/*
** test_vmv_v_v_f64m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat64m8_t 
test_vmv_v_v_f64m8(vfloat64m8_t op1, size_t vl)
{
  return vmv_v_v_f64m8(op1, vl);
}

/*
** test_vmv_v_v_f64m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat64m8_t 
test_vmv_v_v_f64m8_vl31(vfloat64m8_t op1)
{
  return vmv_v_v_f64m8(op1, 31);
}

/*
** test_vmv_v_v_f16mf4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4_t 
test_vmv_v_v_f16mf4_ta(vfloat16mf4_t op1, size_t vl)
{
  return vmv_v_v_f16mf4_ta(op1, vl);
}

/*
** test_vmv_v_v_f16mf4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4_t 
test_vmv_v_v_f16mf4_ta_vl31(vfloat16mf4_t op1)
{
  return vmv_v_v_f16mf4_ta(op1, 31);
}

/*
** test_vmv_v_v_f16mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2_t 
test_vmv_v_v_f16mf2_ta(vfloat16mf2_t op1, size_t vl)
{
  return vmv_v_v_f16mf2_ta(op1, vl);
}

/*
** test_vmv_v_v_f16mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2_t 
test_vmv_v_v_f16mf2_ta_vl31(vfloat16mf2_t op1)
{
  return vmv_v_v_f16mf2_ta(op1, 31);
}

/*
** test_vmv_v_v_f16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vmv_v_v_f16m1_ta(vfloat16m1_t op1, size_t vl)
{
  return vmv_v_v_f16m1_ta(op1, vl);
}

/*
** test_vmv_v_v_f16m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vmv_v_v_f16m1_ta_vl31(vfloat16m1_t op1)
{
  return vmv_v_v_f16m1_ta(op1, 31);
}

/*
** test_vmv_v_v_f16m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat16m2_t 
test_vmv_v_v_f16m2_ta(vfloat16m2_t op1, size_t vl)
{
  return vmv_v_v_f16m2_ta(op1, vl);
}

/*
** test_vmv_v_v_f16m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat16m2_t 
test_vmv_v_v_f16m2_ta_vl31(vfloat16m2_t op1)
{
  return vmv_v_v_f16m2_ta(op1, 31);
}

/*
** test_vmv_v_v_f16m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat16m4_t 
test_vmv_v_v_f16m4_ta(vfloat16m4_t op1, size_t vl)
{
  return vmv_v_v_f16m4_ta(op1, vl);
}

/*
** test_vmv_v_v_f16m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat16m4_t 
test_vmv_v_v_f16m4_ta_vl31(vfloat16m4_t op1)
{
  return vmv_v_v_f16m4_ta(op1, 31);
}

/*
** test_vmv_v_v_f16m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat16m8_t 
test_vmv_v_v_f16m8_ta(vfloat16m8_t op1, size_t vl)
{
  return vmv_v_v_f16m8_ta(op1, vl);
}

/*
** test_vmv_v_v_f16m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat16m8_t 
test_vmv_v_v_f16m8_ta_vl31(vfloat16m8_t op1)
{
  return vmv_v_v_f16m8_ta(op1, 31);
}

/*
** test_vmv_v_v_f32mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2_t 
test_vmv_v_v_f32mf2_ta(vfloat32mf2_t op1, size_t vl)
{
  return vmv_v_v_f32mf2_ta(op1, vl);
}

/*
** test_vmv_v_v_f32mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2_t 
test_vmv_v_v_f32mf2_ta_vl31(vfloat32mf2_t op1)
{
  return vmv_v_v_f32mf2_ta(op1, 31);
}

/*
** test_vmv_v_v_f32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vmv_v_v_f32m1_ta(vfloat32m1_t op1, size_t vl)
{
  return vmv_v_v_f32m1_ta(op1, vl);
}

/*
** test_vmv_v_v_f32m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vmv_v_v_f32m1_ta_vl31(vfloat32m1_t op1)
{
  return vmv_v_v_f32m1_ta(op1, 31);
}

/*
** test_vmv_v_v_f32m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat32m2_t 
test_vmv_v_v_f32m2_ta(vfloat32m2_t op1, size_t vl)
{
  return vmv_v_v_f32m2_ta(op1, vl);
}

/*
** test_vmv_v_v_f32m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat32m2_t 
test_vmv_v_v_f32m2_ta_vl31(vfloat32m2_t op1)
{
  return vmv_v_v_f32m2_ta(op1, 31);
}

/*
** test_vmv_v_v_f32m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat32m4_t 
test_vmv_v_v_f32m4_ta(vfloat32m4_t op1, size_t vl)
{
  return vmv_v_v_f32m4_ta(op1, vl);
}

/*
** test_vmv_v_v_f32m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat32m4_t 
test_vmv_v_v_f32m4_ta_vl31(vfloat32m4_t op1)
{
  return vmv_v_v_f32m4_ta(op1, 31);
}

/*
** test_vmv_v_v_f32m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat32m8_t 
test_vmv_v_v_f32m8_ta(vfloat32m8_t op1, size_t vl)
{
  return vmv_v_v_f32m8_ta(op1, vl);
}

/*
** test_vmv_v_v_f32m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat32m8_t 
test_vmv_v_v_f32m8_ta_vl31(vfloat32m8_t op1)
{
  return vmv_v_v_f32m8_ta(op1, 31);
}

/*
** test_vmv_v_v_f64m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vmv_v_v_f64m1_ta(vfloat64m1_t op1, size_t vl)
{
  return vmv_v_v_f64m1_ta(op1, vl);
}

/*
** test_vmv_v_v_f64m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vmv_v_v_f64m1_ta_vl31(vfloat64m1_t op1)
{
  return vmv_v_v_f64m1_ta(op1, 31);
}

/*
** test_vmv_v_v_f64m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat64m2_t 
test_vmv_v_v_f64m2_ta(vfloat64m2_t op1, size_t vl)
{
  return vmv_v_v_f64m2_ta(op1, vl);
}

/*
** test_vmv_v_v_f64m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat64m2_t 
test_vmv_v_v_f64m2_ta_vl31(vfloat64m2_t op1)
{
  return vmv_v_v_f64m2_ta(op1, 31);
}

/*
** test_vmv_v_v_f64m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat64m4_t 
test_vmv_v_v_f64m4_ta(vfloat64m4_t op1, size_t vl)
{
  return vmv_v_v_f64m4_ta(op1, vl);
}

/*
** test_vmv_v_v_f64m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat64m4_t 
test_vmv_v_v_f64m4_ta_vl31(vfloat64m4_t op1)
{
  return vmv_v_v_f64m4_ta(op1, 31);
}

/*
** test_vmv_v_v_f64m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat64m8_t 
test_vmv_v_v_f64m8_ta(vfloat64m8_t op1, size_t vl)
{
  return vmv_v_v_f64m8_ta(op1, vl);
}

/*
** test_vmv_v_v_f64m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat64m8_t 
test_vmv_v_v_f64m8_ta_vl31(vfloat64m8_t op1)
{
  return vmv_v_v_f64m8_ta(op1, 31);
}

/*
** test_vmv_v_v_f16mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4_t 
test_vmv_v_v_f16mf4_tu(vfloat16mf4_t dest, vfloat16mf4_t op1, size_t vl)
{
  return vmv_v_v_f16mf4_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_f16mf4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4_t 
test_vmv_v_v_f16mf4_tu_vl31(vfloat16mf4_t dest, vfloat16mf4_t op1)
{
  return vmv_v_v_f16mf4_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_f16mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2_t 
test_vmv_v_v_f16mf2_tu(vfloat16mf2_t dest, vfloat16mf2_t op1, size_t vl)
{
  return vmv_v_v_f16mf2_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_f16mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2_t 
test_vmv_v_v_f16mf2_tu_vl31(vfloat16mf2_t dest, vfloat16mf2_t op1)
{
  return vmv_v_v_f16mf2_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_f16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vmv_v_v_f16m1_tu(vfloat16m1_t dest, vfloat16m1_t op1, size_t vl)
{
  return vmv_v_v_f16m1_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_f16m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vmv_v_v_f16m1_tu_vl31(vfloat16m1_t dest, vfloat16m1_t op1)
{
  return vmv_v_v_f16m1_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_f16m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat16m2_t 
test_vmv_v_v_f16m2_tu(vfloat16m2_t dest, vfloat16m2_t op1, size_t vl)
{
  return vmv_v_v_f16m2_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_f16m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat16m2_t 
test_vmv_v_v_f16m2_tu_vl31(vfloat16m2_t dest, vfloat16m2_t op1)
{
  return vmv_v_v_f16m2_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_f16m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat16m4_t 
test_vmv_v_v_f16m4_tu(vfloat16m4_t dest, vfloat16m4_t op1, size_t vl)
{
  return vmv_v_v_f16m4_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_f16m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat16m4_t 
test_vmv_v_v_f16m4_tu_vl31(vfloat16m4_t dest, vfloat16m4_t op1)
{
  return vmv_v_v_f16m4_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_f16m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat16m8_t 
test_vmv_v_v_f16m8_tu(vfloat16m8_t dest, vfloat16m8_t op1, size_t vl)
{
  return vmv_v_v_f16m8_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_f16m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat16m8_t 
test_vmv_v_v_f16m8_tu_vl31(vfloat16m8_t dest, vfloat16m8_t op1)
{
  return vmv_v_v_f16m8_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_f32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2_t 
test_vmv_v_v_f32mf2_tu(vfloat32mf2_t dest, vfloat32mf2_t op1, size_t vl)
{
  return vmv_v_v_f32mf2_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_f32mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2_t 
test_vmv_v_v_f32mf2_tu_vl31(vfloat32mf2_t dest, vfloat32mf2_t op1)
{
  return vmv_v_v_f32mf2_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_f32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vmv_v_v_f32m1_tu(vfloat32m1_t dest, vfloat32m1_t op1, size_t vl)
{
  return vmv_v_v_f32m1_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_f32m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vmv_v_v_f32m1_tu_vl31(vfloat32m1_t dest, vfloat32m1_t op1)
{
  return vmv_v_v_f32m1_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_f32m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat32m2_t 
test_vmv_v_v_f32m2_tu(vfloat32m2_t dest, vfloat32m2_t op1, size_t vl)
{
  return vmv_v_v_f32m2_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_f32m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat32m2_t 
test_vmv_v_v_f32m2_tu_vl31(vfloat32m2_t dest, vfloat32m2_t op1)
{
  return vmv_v_v_f32m2_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_f32m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat32m4_t 
test_vmv_v_v_f32m4_tu(vfloat32m4_t dest, vfloat32m4_t op1, size_t vl)
{
  return vmv_v_v_f32m4_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_f32m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat32m4_t 
test_vmv_v_v_f32m4_tu_vl31(vfloat32m4_t dest, vfloat32m4_t op1)
{
  return vmv_v_v_f32m4_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_f32m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat32m8_t 
test_vmv_v_v_f32m8_tu(vfloat32m8_t dest, vfloat32m8_t op1, size_t vl)
{
  return vmv_v_v_f32m8_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_f32m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat32m8_t 
test_vmv_v_v_f32m8_tu_vl31(vfloat32m8_t dest, vfloat32m8_t op1)
{
  return vmv_v_v_f32m8_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_f64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vmv_v_v_f64m1_tu(vfloat64m1_t dest, vfloat64m1_t op1, size_t vl)
{
  return vmv_v_v_f64m1_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_f64m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vmv_v_v_f64m1_tu_vl31(vfloat64m1_t dest, vfloat64m1_t op1)
{
  return vmv_v_v_f64m1_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_f64m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat64m2_t 
test_vmv_v_v_f64m2_tu(vfloat64m2_t dest, vfloat64m2_t op1, size_t vl)
{
  return vmv_v_v_f64m2_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_f64m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat64m2_t 
test_vmv_v_v_f64m2_tu_vl31(vfloat64m2_t dest, vfloat64m2_t op1)
{
  return vmv_v_v_f64m2_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_f64m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat64m4_t 
test_vmv_v_v_f64m4_tu(vfloat64m4_t dest, vfloat64m4_t op1, size_t vl)
{
  return vmv_v_v_f64m4_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_f64m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat64m4_t 
test_vmv_v_v_f64m4_tu_vl31(vfloat64m4_t dest, vfloat64m4_t op1)
{
  return vmv_v_v_f64m4_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_f64m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat64m8_t 
test_vmv_v_v_f64m8_tu(vfloat64m8_t dest, vfloat64m8_t op1, size_t vl)
{
  return vmv_v_v_f64m8_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_f64m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat64m8_t 
test_vmv_v_v_f64m8_tu_vl31(vfloat64m8_t dest, vfloat64m8_t op1)
{
  return vmv_v_v_f64m8_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_f16mf4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4_t 
test_vmv_v_v_f16mf4_ta_vl32(vfloat16mf4_t op1)
{
  return vmv_v_v_f16mf4_ta(op1, 32);
}

/*
** test_vmv_v_v_f16mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2_t 
test_vmv_v_v_f16mf2_ta_vl32(vfloat16mf2_t op1)
{
  return vmv_v_v_f16mf2_ta(op1, 32);
}

/*
** test_vmv_v_v_f16m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vmv_v_v_f16m1_ta_vl32(vfloat16m1_t op1)
{
  return vmv_v_v_f16m1_ta(op1, 32);
}

/*
** test_vmv_v_v_f16m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat16m2_t 
test_vmv_v_v_f16m2_ta_vl32(vfloat16m2_t op1)
{
  return vmv_v_v_f16m2_ta(op1, 32);
}

/*
** test_vmv_v_v_f16m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat16m4_t 
test_vmv_v_v_f16m4_ta_vl32(vfloat16m4_t op1)
{
  return vmv_v_v_f16m4_ta(op1, 32);
}

/*
** test_vmv_v_v_f16m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat16m8_t 
test_vmv_v_v_f16m8_ta_vl32(vfloat16m8_t op1)
{
  return vmv_v_v_f16m8_ta(op1, 32);
}

/*
** test_vmv_v_v_f32mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2_t 
test_vmv_v_v_f32mf2_ta_vl32(vfloat32mf2_t op1)
{
  return vmv_v_v_f32mf2_ta(op1, 32);
}

/*
** test_vmv_v_v_f32m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vmv_v_v_f32m1_ta_vl32(vfloat32m1_t op1)
{
  return vmv_v_v_f32m1_ta(op1, 32);
}

/*
** test_vmv_v_v_f32m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat32m2_t 
test_vmv_v_v_f32m2_ta_vl32(vfloat32m2_t op1)
{
  return vmv_v_v_f32m2_ta(op1, 32);
}

/*
** test_vmv_v_v_f32m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat32m4_t 
test_vmv_v_v_f32m4_ta_vl32(vfloat32m4_t op1)
{
  return vmv_v_v_f32m4_ta(op1, 32);
}

/*
** test_vmv_v_v_f32m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat32m8_t 
test_vmv_v_v_f32m8_ta_vl32(vfloat32m8_t op1)
{
  return vmv_v_v_f32m8_ta(op1, 32);
}

/*
** test_vmv_v_v_f64m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vmv_v_v_f64m1_ta_vl32(vfloat64m1_t op1)
{
  return vmv_v_v_f64m1_ta(op1, 32);
}

/*
** test_vmv_v_v_f64m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat64m2_t 
test_vmv_v_v_f64m2_ta_vl32(vfloat64m2_t op1)
{
  return vmv_v_v_f64m2_ta(op1, 32);
}

/*
** test_vmv_v_v_f64m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat64m4_t 
test_vmv_v_v_f64m4_ta_vl32(vfloat64m4_t op1)
{
  return vmv_v_v_f64m4_ta(op1, 32);
}

/*
** test_vmv_v_v_f64m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat64m8_t 
test_vmv_v_v_f64m8_ta_vl32(vfloat64m8_t op1)
{
  return vmv_v_v_f64m8_ta(op1, 32);
}

/*
** test_vmv_v_v_f16mf4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4_t 
test_vmv_v_v_f16mf4_tu_vl32(vfloat16mf4_t dest, vfloat16mf4_t op1)
{
  return vmv_v_v_f16mf4_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_f16mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2_t 
test_vmv_v_v_f16mf2_tu_vl32(vfloat16mf2_t dest, vfloat16mf2_t op1)
{
  return vmv_v_v_f16mf2_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_f16m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vmv_v_v_f16m1_tu_vl32(vfloat16m1_t dest, vfloat16m1_t op1)
{
  return vmv_v_v_f16m1_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_f16m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat16m2_t 
test_vmv_v_v_f16m2_tu_vl32(vfloat16m2_t dest, vfloat16m2_t op1)
{
  return vmv_v_v_f16m2_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_f16m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat16m4_t 
test_vmv_v_v_f16m4_tu_vl32(vfloat16m4_t dest, vfloat16m4_t op1)
{
  return vmv_v_v_f16m4_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_f16m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat16m8_t 
test_vmv_v_v_f16m8_tu_vl32(vfloat16m8_t dest, vfloat16m8_t op1)
{
  return vmv_v_v_f16m8_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_f32mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2_t 
test_vmv_v_v_f32mf2_tu_vl32(vfloat32mf2_t dest, vfloat32mf2_t op1)
{
  return vmv_v_v_f32mf2_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_f32m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vmv_v_v_f32m1_tu_vl32(vfloat32m1_t dest, vfloat32m1_t op1)
{
  return vmv_v_v_f32m1_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_f32m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat32m2_t 
test_vmv_v_v_f32m2_tu_vl32(vfloat32m2_t dest, vfloat32m2_t op1)
{
  return vmv_v_v_f32m2_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_f32m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat32m4_t 
test_vmv_v_v_f32m4_tu_vl32(vfloat32m4_t dest, vfloat32m4_t op1)
{
  return vmv_v_v_f32m4_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_f32m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat32m8_t 
test_vmv_v_v_f32m8_tu_vl32(vfloat32m8_t dest, vfloat32m8_t op1)
{
  return vmv_v_v_f32m8_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_f64m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vmv_v_v_f64m1_tu_vl32(vfloat64m1_t dest, vfloat64m1_t op1)
{
  return vmv_v_v_f64m1_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_f64m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat64m2_t 
test_vmv_v_v_f64m2_tu_vl32(vfloat64m2_t dest, vfloat64m2_t op1)
{
  return vmv_v_v_f64m2_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_f64m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat64m4_t 
test_vmv_v_v_f64m4_tu_vl32(vfloat64m4_t dest, vfloat64m4_t op1)
{
  return vmv_v_v_f64m4_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_f64m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat64m8_t 
test_vmv_v_v_f64m8_tu_vl32(vfloat64m8_t dest, vfloat64m8_t op1)
{
  return vmv_v_v_f64m8_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_f16mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4_t 
test_vmv_v_v_f16mf4_vl32(vfloat16mf4_t op1)
{
  return vmv_v_v_f16mf4(op1, 32);
}

/*
** test_vmv_v_v_f16mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2_t 
test_vmv_v_v_f16mf2_vl32(vfloat16mf2_t op1)
{
  return vmv_v_v_f16mf2(op1, 32);
}

/*
** test_vmv_v_v_f16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vmv_v_v_f16m1_vl32(vfloat16m1_t op1)
{
  return vmv_v_v_f16m1(op1, 32);
}

/*
** test_vmv_v_v_f16m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat16m2_t 
test_vmv_v_v_f16m2_vl32(vfloat16m2_t op1)
{
  return vmv_v_v_f16m2(op1, 32);
}

/*
** test_vmv_v_v_f16m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat16m4_t 
test_vmv_v_v_f16m4_vl32(vfloat16m4_t op1)
{
  return vmv_v_v_f16m4(op1, 32);
}

/*
** test_vmv_v_v_f16m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat16m8_t 
test_vmv_v_v_f16m8_vl32(vfloat16m8_t op1)
{
  return vmv_v_v_f16m8(op1, 32);
}

/*
** test_vmv_v_v_f32mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2_t 
test_vmv_v_v_f32mf2_vl32(vfloat32mf2_t op1)
{
  return vmv_v_v_f32mf2(op1, 32);
}

/*
** test_vmv_v_v_f32m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vmv_v_v_f32m1_vl32(vfloat32m1_t op1)
{
  return vmv_v_v_f32m1(op1, 32);
}

/*
** test_vmv_v_v_f32m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat32m2_t 
test_vmv_v_v_f32m2_vl32(vfloat32m2_t op1)
{
  return vmv_v_v_f32m2(op1, 32);
}

/*
** test_vmv_v_v_f32m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat32m4_t 
test_vmv_v_v_f32m4_vl32(vfloat32m4_t op1)
{
  return vmv_v_v_f32m4(op1, 32);
}

/*
** test_vmv_v_v_f32m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat32m8_t 
test_vmv_v_v_f32m8_vl32(vfloat32m8_t op1)
{
  return vmv_v_v_f32m8(op1, 32);
}

/*
** test_vmv_v_v_f64m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vmv_v_v_f64m1_vl32(vfloat64m1_t op1)
{
  return vmv_v_v_f64m1(op1, 32);
}

/*
** test_vmv_v_v_f64m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat64m2_t 
test_vmv_v_v_f64m2_vl32(vfloat64m2_t op1)
{
  return vmv_v_v_f64m2(op1, 32);
}

/*
** test_vmv_v_v_f64m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat64m4_t 
test_vmv_v_v_f64m4_vl32(vfloat64m4_t op1)
{
  return vmv_v_v_f64m4(op1, 32);
}

/*
** test_vmv_v_v_f64m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat64m8_t 
test_vmv_v_v_f64m8_vl32(vfloat64m8_t op1)
{
  return vmv_v_v_f64m8(op1, 32);
}

/*
** test_vmv_v_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8_t 
test_vmv_v_v_i8mf8(vint8mf8_t op1, size_t vl)
{
  return vmv_v_v_i8mf8(op1, vl);
}

/*
** test_vmv_v_v_i8mf8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8_t 
test_vmv_v_v_i8mf8_vl31(vint8mf8_t op1)
{
  return vmv_v_v_i8mf8(op1, 31);
}

/*
** test_vmv_v_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4_t 
test_vmv_v_v_i8mf4(vint8mf4_t op1, size_t vl)
{
  return vmv_v_v_i8mf4(op1, vl);
}

/*
** test_vmv_v_v_i8mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4_t 
test_vmv_v_v_i8mf4_vl31(vint8mf4_t op1)
{
  return vmv_v_v_i8mf4(op1, 31);
}

/*
** test_vmv_v_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf2_t 
test_vmv_v_v_i8mf2(vint8mf2_t op1, size_t vl)
{
  return vmv_v_v_i8mf2(op1, vl);
}

/*
** test_vmv_v_v_i8mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf2_t 
test_vmv_v_v_i8mf2_vl31(vint8mf2_t op1)
{
  return vmv_v_v_i8mf2(op1, 31);
}

/*
** test_vmv_v_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vmv_v_v_i8m1(vint8m1_t op1, size_t vl)
{
  return vmv_v_v_i8m1(op1, vl);
}

/*
** test_vmv_v_v_i8m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vmv_v_v_i8m1_vl31(vint8m1_t op1)
{
  return vmv_v_v_i8m1(op1, 31);
}

/*
** test_vmv_v_v_i8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8m2_t 
test_vmv_v_v_i8m2(vint8m2_t op1, size_t vl)
{
  return vmv_v_v_i8m2(op1, vl);
}

/*
** test_vmv_v_v_i8m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8m2_t 
test_vmv_v_v_i8m2_vl31(vint8m2_t op1)
{
  return vmv_v_v_i8m2(op1, 31);
}

/*
** test_vmv_v_v_i8m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m4_t 
test_vmv_v_v_i8m4(vint8m4_t op1, size_t vl)
{
  return vmv_v_v_i8m4(op1, vl);
}

/*
** test_vmv_v_v_i8m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m4_t 
test_vmv_v_v_i8m4_vl31(vint8m4_t op1)
{
  return vmv_v_v_i8m4(op1, 31);
}

/*
** test_vmv_v_v_i8m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m8_t 
test_vmv_v_v_i8m8(vint8m8_t op1, size_t vl)
{
  return vmv_v_v_i8m8(op1, vl);
}

/*
** test_vmv_v_v_i8m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m8_t 
test_vmv_v_v_i8m8_vl31(vint8m8_t op1)
{
  return vmv_v_v_i8m8(op1, 31);
}

/*
** test_vmv_v_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4_t 
test_vmv_v_v_i16mf4(vint16mf4_t op1, size_t vl)
{
  return vmv_v_v_i16mf4(op1, vl);
}

/*
** test_vmv_v_v_i16mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4_t 
test_vmv_v_v_i16mf4_vl31(vint16mf4_t op1)
{
  return vmv_v_v_i16mf4(op1, 31);
}

/*
** test_vmv_v_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2_t 
test_vmv_v_v_i16mf2(vint16mf2_t op1, size_t vl)
{
  return vmv_v_v_i16mf2(op1, vl);
}

/*
** test_vmv_v_v_i16mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2_t 
test_vmv_v_v_i16mf2_vl31(vint16mf2_t op1)
{
  return vmv_v_v_i16mf2(op1, 31);
}

/*
** test_vmv_v_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vmv_v_v_i16m1(vint16m1_t op1, size_t vl)
{
  return vmv_v_v_i16m1(op1, vl);
}

/*
** test_vmv_v_v_i16m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vmv_v_v_i16m1_vl31(vint16m1_t op1)
{
  return vmv_v_v_i16m1(op1, 31);
}

/*
** test_vmv_v_v_i16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m2_t 
test_vmv_v_v_i16m2(vint16m2_t op1, size_t vl)
{
  return vmv_v_v_i16m2(op1, vl);
}

/*
** test_vmv_v_v_i16m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m2_t 
test_vmv_v_v_i16m2_vl31(vint16m2_t op1)
{
  return vmv_v_v_i16m2(op1, 31);
}

/*
** test_vmv_v_v_i16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m4_t 
test_vmv_v_v_i16m4(vint16m4_t op1, size_t vl)
{
  return vmv_v_v_i16m4(op1, vl);
}

/*
** test_vmv_v_v_i16m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m4_t 
test_vmv_v_v_i16m4_vl31(vint16m4_t op1)
{
  return vmv_v_v_i16m4(op1, 31);
}

/*
** test_vmv_v_v_i16m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint16m8_t 
test_vmv_v_v_i16m8(vint16m8_t op1, size_t vl)
{
  return vmv_v_v_i16m8(op1, vl);
}

/*
** test_vmv_v_v_i16m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint16m8_t 
test_vmv_v_v_i16m8_vl31(vint16m8_t op1)
{
  return vmv_v_v_i16m8(op1, 31);
}

/*
** test_vmv_v_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2_t 
test_vmv_v_v_i32mf2(vint32mf2_t op1, size_t vl)
{
  return vmv_v_v_i32mf2(op1, vl);
}

/*
** test_vmv_v_v_i32mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2_t 
test_vmv_v_v_i32mf2_vl31(vint32mf2_t op1)
{
  return vmv_v_v_i32mf2(op1, 31);
}

/*
** test_vmv_v_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vmv_v_v_i32m1(vint32m1_t op1, size_t vl)
{
  return vmv_v_v_i32m1(op1, vl);
}

/*
** test_vmv_v_v_i32m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vmv_v_v_i32m1_vl31(vint32m1_t op1)
{
  return vmv_v_v_i32m1(op1, 31);
}

/*
** test_vmv_v_v_i32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m2_t 
test_vmv_v_v_i32m2(vint32m2_t op1, size_t vl)
{
  return vmv_v_v_i32m2(op1, vl);
}

/*
** test_vmv_v_v_i32m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m2_t 
test_vmv_v_v_i32m2_vl31(vint32m2_t op1)
{
  return vmv_v_v_i32m2(op1, 31);
}

/*
** test_vmv_v_v_i32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint32m4_t 
test_vmv_v_v_i32m4(vint32m4_t op1, size_t vl)
{
  return vmv_v_v_i32m4(op1, vl);
}

/*
** test_vmv_v_v_i32m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint32m4_t 
test_vmv_v_v_i32m4_vl31(vint32m4_t op1)
{
  return vmv_v_v_i32m4(op1, 31);
}

/*
** test_vmv_v_v_i32m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint32m8_t 
test_vmv_v_v_i32m8(vint32m8_t op1, size_t vl)
{
  return vmv_v_v_i32m8(op1, vl);
}

/*
** test_vmv_v_v_i32m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint32m8_t 
test_vmv_v_v_i32m8_vl31(vint32m8_t op1)
{
  return vmv_v_v_i32m8(op1, 31);
}

/*
** test_vmv_v_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t 
test_vmv_v_v_i64m1(vint64m1_t op1, size_t vl)
{
  return vmv_v_v_i64m1(op1, vl);
}

/*
** test_vmv_v_v_i64m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t 
test_vmv_v_v_i64m1_vl31(vint64m1_t op1)
{
  return vmv_v_v_i64m1(op1, 31);
}

/*
** test_vmv_v_v_i64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint64m2_t 
test_vmv_v_v_i64m2(vint64m2_t op1, size_t vl)
{
  return vmv_v_v_i64m2(op1, vl);
}

/*
** test_vmv_v_v_i64m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint64m2_t 
test_vmv_v_v_i64m2_vl31(vint64m2_t op1)
{
  return vmv_v_v_i64m2(op1, 31);
}

/*
** test_vmv_v_v_i64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint64m4_t 
test_vmv_v_v_i64m4(vint64m4_t op1, size_t vl)
{
  return vmv_v_v_i64m4(op1, vl);
}

/*
** test_vmv_v_v_i64m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint64m4_t 
test_vmv_v_v_i64m4_vl31(vint64m4_t op1)
{
  return vmv_v_v_i64m4(op1, 31);
}

/*
** test_vmv_v_v_i64m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint64m8_t 
test_vmv_v_v_i64m8(vint64m8_t op1, size_t vl)
{
  return vmv_v_v_i64m8(op1, vl);
}

/*
** test_vmv_v_v_i64m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint64m8_t 
test_vmv_v_v_i64m8_vl31(vint64m8_t op1)
{
  return vmv_v_v_i64m8(op1, 31);
}

/*
** test_vmv_v_v_i8mf8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8_t 
test_vmv_v_v_i8mf8_ta(vint8mf8_t op1, size_t vl)
{
  return vmv_v_v_i8mf8_ta(op1, vl);
}

/*
** test_vmv_v_v_i8mf8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8_t 
test_vmv_v_v_i8mf8_ta_vl31(vint8mf8_t op1)
{
  return vmv_v_v_i8mf8_ta(op1, 31);
}

/*
** test_vmv_v_v_i8mf4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4_t 
test_vmv_v_v_i8mf4_ta(vint8mf4_t op1, size_t vl)
{
  return vmv_v_v_i8mf4_ta(op1, vl);
}

/*
** test_vmv_v_v_i8mf4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4_t 
test_vmv_v_v_i8mf4_ta_vl31(vint8mf4_t op1)
{
  return vmv_v_v_i8mf4_ta(op1, 31);
}

/*
** test_vmv_v_v_i8mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf2_t 
test_vmv_v_v_i8mf2_ta(vint8mf2_t op1, size_t vl)
{
  return vmv_v_v_i8mf2_ta(op1, vl);
}

/*
** test_vmv_v_v_i8mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf2_t 
test_vmv_v_v_i8mf2_ta_vl31(vint8mf2_t op1)
{
  return vmv_v_v_i8mf2_ta(op1, 31);
}

/*
** test_vmv_v_v_i8m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vmv_v_v_i8m1_ta(vint8m1_t op1, size_t vl)
{
  return vmv_v_v_i8m1_ta(op1, vl);
}

/*
** test_vmv_v_v_i8m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vmv_v_v_i8m1_ta_vl31(vint8m1_t op1)
{
  return vmv_v_v_i8m1_ta(op1, 31);
}

/*
** test_vmv_v_v_i8m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8m2_t 
test_vmv_v_v_i8m2_ta(vint8m2_t op1, size_t vl)
{
  return vmv_v_v_i8m2_ta(op1, vl);
}

/*
** test_vmv_v_v_i8m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8m2_t 
test_vmv_v_v_i8m2_ta_vl31(vint8m2_t op1)
{
  return vmv_v_v_i8m2_ta(op1, 31);
}

/*
** test_vmv_v_v_i8m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m4_t 
test_vmv_v_v_i8m4_ta(vint8m4_t op1, size_t vl)
{
  return vmv_v_v_i8m4_ta(op1, vl);
}

/*
** test_vmv_v_v_i8m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m4_t 
test_vmv_v_v_i8m4_ta_vl31(vint8m4_t op1)
{
  return vmv_v_v_i8m4_ta(op1, 31);
}

/*
** test_vmv_v_v_i8m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m8_t 
test_vmv_v_v_i8m8_ta(vint8m8_t op1, size_t vl)
{
  return vmv_v_v_i8m8_ta(op1, vl);
}

/*
** test_vmv_v_v_i8m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m8_t 
test_vmv_v_v_i8m8_ta_vl31(vint8m8_t op1)
{
  return vmv_v_v_i8m8_ta(op1, 31);
}

/*
** test_vmv_v_v_i16mf4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4_t 
test_vmv_v_v_i16mf4_ta(vint16mf4_t op1, size_t vl)
{
  return vmv_v_v_i16mf4_ta(op1, vl);
}

/*
** test_vmv_v_v_i16mf4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4_t 
test_vmv_v_v_i16mf4_ta_vl31(vint16mf4_t op1)
{
  return vmv_v_v_i16mf4_ta(op1, 31);
}

/*
** test_vmv_v_v_i16mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2_t 
test_vmv_v_v_i16mf2_ta(vint16mf2_t op1, size_t vl)
{
  return vmv_v_v_i16mf2_ta(op1, vl);
}

/*
** test_vmv_v_v_i16mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2_t 
test_vmv_v_v_i16mf2_ta_vl31(vint16mf2_t op1)
{
  return vmv_v_v_i16mf2_ta(op1, 31);
}

/*
** test_vmv_v_v_i16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vmv_v_v_i16m1_ta(vint16m1_t op1, size_t vl)
{
  return vmv_v_v_i16m1_ta(op1, vl);
}

/*
** test_vmv_v_v_i16m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vmv_v_v_i16m1_ta_vl31(vint16m1_t op1)
{
  return vmv_v_v_i16m1_ta(op1, 31);
}

/*
** test_vmv_v_v_i16m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m2_t 
test_vmv_v_v_i16m2_ta(vint16m2_t op1, size_t vl)
{
  return vmv_v_v_i16m2_ta(op1, vl);
}

/*
** test_vmv_v_v_i16m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m2_t 
test_vmv_v_v_i16m2_ta_vl31(vint16m2_t op1)
{
  return vmv_v_v_i16m2_ta(op1, 31);
}

/*
** test_vmv_v_v_i16m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m4_t 
test_vmv_v_v_i16m4_ta(vint16m4_t op1, size_t vl)
{
  return vmv_v_v_i16m4_ta(op1, vl);
}

/*
** test_vmv_v_v_i16m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m4_t 
test_vmv_v_v_i16m4_ta_vl31(vint16m4_t op1)
{
  return vmv_v_v_i16m4_ta(op1, 31);
}

/*
** test_vmv_v_v_i16m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint16m8_t 
test_vmv_v_v_i16m8_ta(vint16m8_t op1, size_t vl)
{
  return vmv_v_v_i16m8_ta(op1, vl);
}

/*
** test_vmv_v_v_i16m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint16m8_t 
test_vmv_v_v_i16m8_ta_vl31(vint16m8_t op1)
{
  return vmv_v_v_i16m8_ta(op1, 31);
}

/*
** test_vmv_v_v_i32mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2_t 
test_vmv_v_v_i32mf2_ta(vint32mf2_t op1, size_t vl)
{
  return vmv_v_v_i32mf2_ta(op1, vl);
}

/*
** test_vmv_v_v_i32mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2_t 
test_vmv_v_v_i32mf2_ta_vl31(vint32mf2_t op1)
{
  return vmv_v_v_i32mf2_ta(op1, 31);
}

/*
** test_vmv_v_v_i32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vmv_v_v_i32m1_ta(vint32m1_t op1, size_t vl)
{
  return vmv_v_v_i32m1_ta(op1, vl);
}

/*
** test_vmv_v_v_i32m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vmv_v_v_i32m1_ta_vl31(vint32m1_t op1)
{
  return vmv_v_v_i32m1_ta(op1, 31);
}

/*
** test_vmv_v_v_i32m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m2_t 
test_vmv_v_v_i32m2_ta(vint32m2_t op1, size_t vl)
{
  return vmv_v_v_i32m2_ta(op1, vl);
}

/*
** test_vmv_v_v_i32m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m2_t 
test_vmv_v_v_i32m2_ta_vl31(vint32m2_t op1)
{
  return vmv_v_v_i32m2_ta(op1, 31);
}

/*
** test_vmv_v_v_i32m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint32m4_t 
test_vmv_v_v_i32m4_ta(vint32m4_t op1, size_t vl)
{
  return vmv_v_v_i32m4_ta(op1, vl);
}

/*
** test_vmv_v_v_i32m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint32m4_t 
test_vmv_v_v_i32m4_ta_vl31(vint32m4_t op1)
{
  return vmv_v_v_i32m4_ta(op1, 31);
}

/*
** test_vmv_v_v_i32m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint32m8_t 
test_vmv_v_v_i32m8_ta(vint32m8_t op1, size_t vl)
{
  return vmv_v_v_i32m8_ta(op1, vl);
}

/*
** test_vmv_v_v_i32m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint32m8_t 
test_vmv_v_v_i32m8_ta_vl31(vint32m8_t op1)
{
  return vmv_v_v_i32m8_ta(op1, 31);
}

/*
** test_vmv_v_v_i64m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t 
test_vmv_v_v_i64m1_ta(vint64m1_t op1, size_t vl)
{
  return vmv_v_v_i64m1_ta(op1, vl);
}

/*
** test_vmv_v_v_i64m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t 
test_vmv_v_v_i64m1_ta_vl31(vint64m1_t op1)
{
  return vmv_v_v_i64m1_ta(op1, 31);
}

/*
** test_vmv_v_v_i64m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint64m2_t 
test_vmv_v_v_i64m2_ta(vint64m2_t op1, size_t vl)
{
  return vmv_v_v_i64m2_ta(op1, vl);
}

/*
** test_vmv_v_v_i64m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint64m2_t 
test_vmv_v_v_i64m2_ta_vl31(vint64m2_t op1)
{
  return vmv_v_v_i64m2_ta(op1, 31);
}

/*
** test_vmv_v_v_i64m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint64m4_t 
test_vmv_v_v_i64m4_ta(vint64m4_t op1, size_t vl)
{
  return vmv_v_v_i64m4_ta(op1, vl);
}

/*
** test_vmv_v_v_i64m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint64m4_t 
test_vmv_v_v_i64m4_ta_vl31(vint64m4_t op1)
{
  return vmv_v_v_i64m4_ta(op1, 31);
}

/*
** test_vmv_v_v_i64m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint64m8_t 
test_vmv_v_v_i64m8_ta(vint64m8_t op1, size_t vl)
{
  return vmv_v_v_i64m8_ta(op1, vl);
}

/*
** test_vmv_v_v_i64m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint64m8_t 
test_vmv_v_v_i64m8_ta_vl31(vint64m8_t op1)
{
  return vmv_v_v_i64m8_ta(op1, 31);
}

/*
** test_vmv_v_v_i8mf8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8_t 
test_vmv_v_v_i8mf8_tu(vint8mf8_t dest, vint8mf8_t op1, size_t vl)
{
  return vmv_v_v_i8mf8_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_i8mf8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8_t 
test_vmv_v_v_i8mf8_tu_vl31(vint8mf8_t dest, vint8mf8_t op1)
{
  return vmv_v_v_i8mf8_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_i8mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4_t 
test_vmv_v_v_i8mf4_tu(vint8mf4_t dest, vint8mf4_t op1, size_t vl)
{
  return vmv_v_v_i8mf4_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_i8mf4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4_t 
test_vmv_v_v_i8mf4_tu_vl31(vint8mf4_t dest, vint8mf4_t op1)
{
  return vmv_v_v_i8mf4_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_i8mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf2_t 
test_vmv_v_v_i8mf2_tu(vint8mf2_t dest, vint8mf2_t op1, size_t vl)
{
  return vmv_v_v_i8mf2_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_i8mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf2_t 
test_vmv_v_v_i8mf2_tu_vl31(vint8mf2_t dest, vint8mf2_t op1)
{
  return vmv_v_v_i8mf2_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_i8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vmv_v_v_i8m1_tu(vint8m1_t dest, vint8m1_t op1, size_t vl)
{
  return vmv_v_v_i8m1_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_i8m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vmv_v_v_i8m1_tu_vl31(vint8m1_t dest, vint8m1_t op1)
{
  return vmv_v_v_i8m1_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_i8m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8m2_t 
test_vmv_v_v_i8m2_tu(vint8m2_t dest, vint8m2_t op1, size_t vl)
{
  return vmv_v_v_i8m2_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_i8m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8m2_t 
test_vmv_v_v_i8m2_tu_vl31(vint8m2_t dest, vint8m2_t op1)
{
  return vmv_v_v_i8m2_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_i8m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m4_t 
test_vmv_v_v_i8m4_tu(vint8m4_t dest, vint8m4_t op1, size_t vl)
{
  return vmv_v_v_i8m4_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_i8m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m4_t 
test_vmv_v_v_i8m4_tu_vl31(vint8m4_t dest, vint8m4_t op1)
{
  return vmv_v_v_i8m4_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_i8m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m8_t 
test_vmv_v_v_i8m8_tu(vint8m8_t dest, vint8m8_t op1, size_t vl)
{
  return vmv_v_v_i8m8_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_i8m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m8_t 
test_vmv_v_v_i8m8_tu_vl31(vint8m8_t dest, vint8m8_t op1)
{
  return vmv_v_v_i8m8_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_i16mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4_t 
test_vmv_v_v_i16mf4_tu(vint16mf4_t dest, vint16mf4_t op1, size_t vl)
{
  return vmv_v_v_i16mf4_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_i16mf4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4_t 
test_vmv_v_v_i16mf4_tu_vl31(vint16mf4_t dest, vint16mf4_t op1)
{
  return vmv_v_v_i16mf4_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_i16mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2_t 
test_vmv_v_v_i16mf2_tu(vint16mf2_t dest, vint16mf2_t op1, size_t vl)
{
  return vmv_v_v_i16mf2_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_i16mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2_t 
test_vmv_v_v_i16mf2_tu_vl31(vint16mf2_t dest, vint16mf2_t op1)
{
  return vmv_v_v_i16mf2_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_i16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vmv_v_v_i16m1_tu(vint16m1_t dest, vint16m1_t op1, size_t vl)
{
  return vmv_v_v_i16m1_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_i16m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vmv_v_v_i16m1_tu_vl31(vint16m1_t dest, vint16m1_t op1)
{
  return vmv_v_v_i16m1_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_i16m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m2_t 
test_vmv_v_v_i16m2_tu(vint16m2_t dest, vint16m2_t op1, size_t vl)
{
  return vmv_v_v_i16m2_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_i16m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m2_t 
test_vmv_v_v_i16m2_tu_vl31(vint16m2_t dest, vint16m2_t op1)
{
  return vmv_v_v_i16m2_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_i16m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m4_t 
test_vmv_v_v_i16m4_tu(vint16m4_t dest, vint16m4_t op1, size_t vl)
{
  return vmv_v_v_i16m4_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_i16m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m4_t 
test_vmv_v_v_i16m4_tu_vl31(vint16m4_t dest, vint16m4_t op1)
{
  return vmv_v_v_i16m4_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_i16m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint16m8_t 
test_vmv_v_v_i16m8_tu(vint16m8_t dest, vint16m8_t op1, size_t vl)
{
  return vmv_v_v_i16m8_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_i16m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint16m8_t 
test_vmv_v_v_i16m8_tu_vl31(vint16m8_t dest, vint16m8_t op1)
{
  return vmv_v_v_i16m8_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_i32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2_t 
test_vmv_v_v_i32mf2_tu(vint32mf2_t dest, vint32mf2_t op1, size_t vl)
{
  return vmv_v_v_i32mf2_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_i32mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2_t 
test_vmv_v_v_i32mf2_tu_vl31(vint32mf2_t dest, vint32mf2_t op1)
{
  return vmv_v_v_i32mf2_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_i32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vmv_v_v_i32m1_tu(vint32m1_t dest, vint32m1_t op1, size_t vl)
{
  return vmv_v_v_i32m1_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_i32m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vmv_v_v_i32m1_tu_vl31(vint32m1_t dest, vint32m1_t op1)
{
  return vmv_v_v_i32m1_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_i32m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m2_t 
test_vmv_v_v_i32m2_tu(vint32m2_t dest, vint32m2_t op1, size_t vl)
{
  return vmv_v_v_i32m2_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_i32m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m2_t 
test_vmv_v_v_i32m2_tu_vl31(vint32m2_t dest, vint32m2_t op1)
{
  return vmv_v_v_i32m2_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_i32m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint32m4_t 
test_vmv_v_v_i32m4_tu(vint32m4_t dest, vint32m4_t op1, size_t vl)
{
  return vmv_v_v_i32m4_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_i32m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint32m4_t 
test_vmv_v_v_i32m4_tu_vl31(vint32m4_t dest, vint32m4_t op1)
{
  return vmv_v_v_i32m4_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_i32m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint32m8_t 
test_vmv_v_v_i32m8_tu(vint32m8_t dest, vint32m8_t op1, size_t vl)
{
  return vmv_v_v_i32m8_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_i32m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint32m8_t 
test_vmv_v_v_i32m8_tu_vl31(vint32m8_t dest, vint32m8_t op1)
{
  return vmv_v_v_i32m8_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_i64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t 
test_vmv_v_v_i64m1_tu(vint64m1_t dest, vint64m1_t op1, size_t vl)
{
  return vmv_v_v_i64m1_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_i64m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t 
test_vmv_v_v_i64m1_tu_vl31(vint64m1_t dest, vint64m1_t op1)
{
  return vmv_v_v_i64m1_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_i64m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint64m2_t 
test_vmv_v_v_i64m2_tu(vint64m2_t dest, vint64m2_t op1, size_t vl)
{
  return vmv_v_v_i64m2_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_i64m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint64m2_t 
test_vmv_v_v_i64m2_tu_vl31(vint64m2_t dest, vint64m2_t op1)
{
  return vmv_v_v_i64m2_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_i64m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint64m4_t 
test_vmv_v_v_i64m4_tu(vint64m4_t dest, vint64m4_t op1, size_t vl)
{
  return vmv_v_v_i64m4_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_i64m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint64m4_t 
test_vmv_v_v_i64m4_tu_vl31(vint64m4_t dest, vint64m4_t op1)
{
  return vmv_v_v_i64m4_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_i64m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint64m8_t 
test_vmv_v_v_i64m8_tu(vint64m8_t dest, vint64m8_t op1, size_t vl)
{
  return vmv_v_v_i64m8_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_i64m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint64m8_t 
test_vmv_v_v_i64m8_tu_vl31(vint64m8_t dest, vint64m8_t op1)
{
  return vmv_v_v_i64m8_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_i8mf8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8_t 
test_vmv_v_v_i8mf8_ta_vl32(vint8mf8_t op1)
{
  return vmv_v_v_i8mf8_ta(op1, 32);
}

/*
** test_vmv_v_v_i8mf4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4_t 
test_vmv_v_v_i8mf4_ta_vl32(vint8mf4_t op1)
{
  return vmv_v_v_i8mf4_ta(op1, 32);
}

/*
** test_vmv_v_v_i8mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf2_t 
test_vmv_v_v_i8mf2_ta_vl32(vint8mf2_t op1)
{
  return vmv_v_v_i8mf2_ta(op1, 32);
}

/*
** test_vmv_v_v_i8m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vmv_v_v_i8m1_ta_vl32(vint8m1_t op1)
{
  return vmv_v_v_i8m1_ta(op1, 32);
}

/*
** test_vmv_v_v_i8m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8m2_t 
test_vmv_v_v_i8m2_ta_vl32(vint8m2_t op1)
{
  return vmv_v_v_i8m2_ta(op1, 32);
}

/*
** test_vmv_v_v_i8m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m4_t 
test_vmv_v_v_i8m4_ta_vl32(vint8m4_t op1)
{
  return vmv_v_v_i8m4_ta(op1, 32);
}

/*
** test_vmv_v_v_i8m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m8_t 
test_vmv_v_v_i8m8_ta_vl32(vint8m8_t op1)
{
  return vmv_v_v_i8m8_ta(op1, 32);
}

/*
** test_vmv_v_v_i16mf4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4_t 
test_vmv_v_v_i16mf4_ta_vl32(vint16mf4_t op1)
{
  return vmv_v_v_i16mf4_ta(op1, 32);
}

/*
** test_vmv_v_v_i16mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2_t 
test_vmv_v_v_i16mf2_ta_vl32(vint16mf2_t op1)
{
  return vmv_v_v_i16mf2_ta(op1, 32);
}

/*
** test_vmv_v_v_i16m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vmv_v_v_i16m1_ta_vl32(vint16m1_t op1)
{
  return vmv_v_v_i16m1_ta(op1, 32);
}

/*
** test_vmv_v_v_i16m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m2_t 
test_vmv_v_v_i16m2_ta_vl32(vint16m2_t op1)
{
  return vmv_v_v_i16m2_ta(op1, 32);
}

/*
** test_vmv_v_v_i16m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m4_t 
test_vmv_v_v_i16m4_ta_vl32(vint16m4_t op1)
{
  return vmv_v_v_i16m4_ta(op1, 32);
}

/*
** test_vmv_v_v_i16m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint16m8_t 
test_vmv_v_v_i16m8_ta_vl32(vint16m8_t op1)
{
  return vmv_v_v_i16m8_ta(op1, 32);
}

/*
** test_vmv_v_v_i32mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2_t 
test_vmv_v_v_i32mf2_ta_vl32(vint32mf2_t op1)
{
  return vmv_v_v_i32mf2_ta(op1, 32);
}

/*
** test_vmv_v_v_i32m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vmv_v_v_i32m1_ta_vl32(vint32m1_t op1)
{
  return vmv_v_v_i32m1_ta(op1, 32);
}

/*
** test_vmv_v_v_i32m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m2_t 
test_vmv_v_v_i32m2_ta_vl32(vint32m2_t op1)
{
  return vmv_v_v_i32m2_ta(op1, 32);
}

/*
** test_vmv_v_v_i32m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint32m4_t 
test_vmv_v_v_i32m4_ta_vl32(vint32m4_t op1)
{
  return vmv_v_v_i32m4_ta(op1, 32);
}

/*
** test_vmv_v_v_i32m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint32m8_t 
test_vmv_v_v_i32m8_ta_vl32(vint32m8_t op1)
{
  return vmv_v_v_i32m8_ta(op1, 32);
}

/*
** test_vmv_v_v_i64m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t 
test_vmv_v_v_i64m1_ta_vl32(vint64m1_t op1)
{
  return vmv_v_v_i64m1_ta(op1, 32);
}

/*
** test_vmv_v_v_i64m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint64m2_t 
test_vmv_v_v_i64m2_ta_vl32(vint64m2_t op1)
{
  return vmv_v_v_i64m2_ta(op1, 32);
}

/*
** test_vmv_v_v_i64m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint64m4_t 
test_vmv_v_v_i64m4_ta_vl32(vint64m4_t op1)
{
  return vmv_v_v_i64m4_ta(op1, 32);
}

/*
** test_vmv_v_v_i64m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint64m8_t 
test_vmv_v_v_i64m8_ta_vl32(vint64m8_t op1)
{
  return vmv_v_v_i64m8_ta(op1, 32);
}

/*
** test_vmv_v_v_i8mf8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8_t 
test_vmv_v_v_i8mf8_tu_vl32(vint8mf8_t dest, vint8mf8_t op1)
{
  return vmv_v_v_i8mf8_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_i8mf4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4_t 
test_vmv_v_v_i8mf4_tu_vl32(vint8mf4_t dest, vint8mf4_t op1)
{
  return vmv_v_v_i8mf4_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_i8mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf2_t 
test_vmv_v_v_i8mf2_tu_vl32(vint8mf2_t dest, vint8mf2_t op1)
{
  return vmv_v_v_i8mf2_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_i8m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vmv_v_v_i8m1_tu_vl32(vint8m1_t dest, vint8m1_t op1)
{
  return vmv_v_v_i8m1_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_i8m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8m2_t 
test_vmv_v_v_i8m2_tu_vl32(vint8m2_t dest, vint8m2_t op1)
{
  return vmv_v_v_i8m2_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_i8m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m4_t 
test_vmv_v_v_i8m4_tu_vl32(vint8m4_t dest, vint8m4_t op1)
{
  return vmv_v_v_i8m4_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_i8m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m8_t 
test_vmv_v_v_i8m8_tu_vl32(vint8m8_t dest, vint8m8_t op1)
{
  return vmv_v_v_i8m8_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_i16mf4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4_t 
test_vmv_v_v_i16mf4_tu_vl32(vint16mf4_t dest, vint16mf4_t op1)
{
  return vmv_v_v_i16mf4_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_i16mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2_t 
test_vmv_v_v_i16mf2_tu_vl32(vint16mf2_t dest, vint16mf2_t op1)
{
  return vmv_v_v_i16mf2_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_i16m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vmv_v_v_i16m1_tu_vl32(vint16m1_t dest, vint16m1_t op1)
{
  return vmv_v_v_i16m1_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_i16m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m2_t 
test_vmv_v_v_i16m2_tu_vl32(vint16m2_t dest, vint16m2_t op1)
{
  return vmv_v_v_i16m2_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_i16m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m4_t 
test_vmv_v_v_i16m4_tu_vl32(vint16m4_t dest, vint16m4_t op1)
{
  return vmv_v_v_i16m4_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_i16m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint16m8_t 
test_vmv_v_v_i16m8_tu_vl32(vint16m8_t dest, vint16m8_t op1)
{
  return vmv_v_v_i16m8_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_i32mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2_t 
test_vmv_v_v_i32mf2_tu_vl32(vint32mf2_t dest, vint32mf2_t op1)
{
  return vmv_v_v_i32mf2_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_i32m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vmv_v_v_i32m1_tu_vl32(vint32m1_t dest, vint32m1_t op1)
{
  return vmv_v_v_i32m1_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_i32m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m2_t 
test_vmv_v_v_i32m2_tu_vl32(vint32m2_t dest, vint32m2_t op1)
{
  return vmv_v_v_i32m2_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_i32m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint32m4_t 
test_vmv_v_v_i32m4_tu_vl32(vint32m4_t dest, vint32m4_t op1)
{
  return vmv_v_v_i32m4_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_i32m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint32m8_t 
test_vmv_v_v_i32m8_tu_vl32(vint32m8_t dest, vint32m8_t op1)
{
  return vmv_v_v_i32m8_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_i64m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t 
test_vmv_v_v_i64m1_tu_vl32(vint64m1_t dest, vint64m1_t op1)
{
  return vmv_v_v_i64m1_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_i64m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint64m2_t 
test_vmv_v_v_i64m2_tu_vl32(vint64m2_t dest, vint64m2_t op1)
{
  return vmv_v_v_i64m2_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_i64m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint64m4_t 
test_vmv_v_v_i64m4_tu_vl32(vint64m4_t dest, vint64m4_t op1)
{
  return vmv_v_v_i64m4_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_i64m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint64m8_t 
test_vmv_v_v_i64m8_tu_vl32(vint64m8_t dest, vint64m8_t op1)
{
  return vmv_v_v_i64m8_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_i8mf8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8_t 
test_vmv_v_v_i8mf8_vl32(vint8mf8_t op1)
{
  return vmv_v_v_i8mf8(op1, 32);
}

/*
** test_vmv_v_v_i8mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4_t 
test_vmv_v_v_i8mf4_vl32(vint8mf4_t op1)
{
  return vmv_v_v_i8mf4(op1, 32);
}

/*
** test_vmv_v_v_i8mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf2_t 
test_vmv_v_v_i8mf2_vl32(vint8mf2_t op1)
{
  return vmv_v_v_i8mf2(op1, 32);
}

/*
** test_vmv_v_v_i8m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vmv_v_v_i8m1_vl32(vint8m1_t op1)
{
  return vmv_v_v_i8m1(op1, 32);
}

/*
** test_vmv_v_v_i8m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8m2_t 
test_vmv_v_v_i8m2_vl32(vint8m2_t op1)
{
  return vmv_v_v_i8m2(op1, 32);
}

/*
** test_vmv_v_v_i8m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m4_t 
test_vmv_v_v_i8m4_vl32(vint8m4_t op1)
{
  return vmv_v_v_i8m4(op1, 32);
}

/*
** test_vmv_v_v_i8m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m8_t 
test_vmv_v_v_i8m8_vl32(vint8m8_t op1)
{
  return vmv_v_v_i8m8(op1, 32);
}

/*
** test_vmv_v_v_i16mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4_t 
test_vmv_v_v_i16mf4_vl32(vint16mf4_t op1)
{
  return vmv_v_v_i16mf4(op1, 32);
}

/*
** test_vmv_v_v_i16mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2_t 
test_vmv_v_v_i16mf2_vl32(vint16mf2_t op1)
{
  return vmv_v_v_i16mf2(op1, 32);
}

/*
** test_vmv_v_v_i16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vmv_v_v_i16m1_vl32(vint16m1_t op1)
{
  return vmv_v_v_i16m1(op1, 32);
}

/*
** test_vmv_v_v_i16m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m2_t 
test_vmv_v_v_i16m2_vl32(vint16m2_t op1)
{
  return vmv_v_v_i16m2(op1, 32);
}

/*
** test_vmv_v_v_i16m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m4_t 
test_vmv_v_v_i16m4_vl32(vint16m4_t op1)
{
  return vmv_v_v_i16m4(op1, 32);
}

/*
** test_vmv_v_v_i16m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint16m8_t 
test_vmv_v_v_i16m8_vl32(vint16m8_t op1)
{
  return vmv_v_v_i16m8(op1, 32);
}

/*
** test_vmv_v_v_i32mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2_t 
test_vmv_v_v_i32mf2_vl32(vint32mf2_t op1)
{
  return vmv_v_v_i32mf2(op1, 32);
}

/*
** test_vmv_v_v_i32m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vmv_v_v_i32m1_vl32(vint32m1_t op1)
{
  return vmv_v_v_i32m1(op1, 32);
}

/*
** test_vmv_v_v_i32m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m2_t 
test_vmv_v_v_i32m2_vl32(vint32m2_t op1)
{
  return vmv_v_v_i32m2(op1, 32);
}

/*
** test_vmv_v_v_i32m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint32m4_t 
test_vmv_v_v_i32m4_vl32(vint32m4_t op1)
{
  return vmv_v_v_i32m4(op1, 32);
}

/*
** test_vmv_v_v_i32m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint32m8_t 
test_vmv_v_v_i32m8_vl32(vint32m8_t op1)
{
  return vmv_v_v_i32m8(op1, 32);
}

/*
** test_vmv_v_v_i64m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t 
test_vmv_v_v_i64m1_vl32(vint64m1_t op1)
{
  return vmv_v_v_i64m1(op1, 32);
}

/*
** test_vmv_v_v_i64m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint64m2_t 
test_vmv_v_v_i64m2_vl32(vint64m2_t op1)
{
  return vmv_v_v_i64m2(op1, 32);
}

/*
** test_vmv_v_v_i64m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint64m4_t 
test_vmv_v_v_i64m4_vl32(vint64m4_t op1)
{
  return vmv_v_v_i64m4(op1, 32);
}

/*
** test_vmv_v_v_i64m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint64m8_t 
test_vmv_v_v_i64m8_vl32(vint64m8_t op1)
{
  return vmv_v_v_i64m8(op1, 32);
}

/*
** test_vmv_v_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8_t 
test_vmv_v_v_u8mf8(vuint8mf8_t op1, size_t vl)
{
  return vmv_v_v_u8mf8(op1, vl);
}

/*
** test_vmv_v_v_u8mf8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8_t 
test_vmv_v_v_u8mf8_vl31(vuint8mf8_t op1)
{
  return vmv_v_v_u8mf8(op1, 31);
}

/*
** test_vmv_v_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4_t 
test_vmv_v_v_u8mf4(vuint8mf4_t op1, size_t vl)
{
  return vmv_v_v_u8mf4(op1, vl);
}

/*
** test_vmv_v_v_u8mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4_t 
test_vmv_v_v_u8mf4_vl31(vuint8mf4_t op1)
{
  return vmv_v_v_u8mf4(op1, 31);
}

/*
** test_vmv_v_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2_t 
test_vmv_v_v_u8mf2(vuint8mf2_t op1, size_t vl)
{
  return vmv_v_v_u8mf2(op1, vl);
}

/*
** test_vmv_v_v_u8mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2_t 
test_vmv_v_v_u8mf2_vl31(vuint8mf2_t op1)
{
  return vmv_v_v_u8mf2(op1, 31);
}

/*
** test_vmv_v_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vmv_v_v_u8m1(vuint8m1_t op1, size_t vl)
{
  return vmv_v_v_u8m1(op1, vl);
}

/*
** test_vmv_v_v_u8m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vmv_v_v_u8m1_vl31(vuint8m1_t op1)
{
  return vmv_v_v_u8m1(op1, 31);
}

/*
** test_vmv_v_v_u8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m2_t 
test_vmv_v_v_u8m2(vuint8m2_t op1, size_t vl)
{
  return vmv_v_v_u8m2(op1, vl);
}

/*
** test_vmv_v_v_u8m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m2_t 
test_vmv_v_v_u8m2_vl31(vuint8m2_t op1)
{
  return vmv_v_v_u8m2(op1, 31);
}

/*
** test_vmv_v_v_u8m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m4_t 
test_vmv_v_v_u8m4(vuint8m4_t op1, size_t vl)
{
  return vmv_v_v_u8m4(op1, vl);
}

/*
** test_vmv_v_v_u8m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m4_t 
test_vmv_v_v_u8m4_vl31(vuint8m4_t op1)
{
  return vmv_v_v_u8m4(op1, 31);
}

/*
** test_vmv_v_v_u8m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint8m8_t 
test_vmv_v_v_u8m8(vuint8m8_t op1, size_t vl)
{
  return vmv_v_v_u8m8(op1, vl);
}

/*
** test_vmv_v_v_u8m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint8m8_t 
test_vmv_v_v_u8m8_vl31(vuint8m8_t op1)
{
  return vmv_v_v_u8m8(op1, 31);
}

/*
** test_vmv_v_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4_t 
test_vmv_v_v_u16mf4(vuint16mf4_t op1, size_t vl)
{
  return vmv_v_v_u16mf4(op1, vl);
}

/*
** test_vmv_v_v_u16mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4_t 
test_vmv_v_v_u16mf4_vl31(vuint16mf4_t op1)
{
  return vmv_v_v_u16mf4(op1, 31);
}

/*
** test_vmv_v_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2_t 
test_vmv_v_v_u16mf2(vuint16mf2_t op1, size_t vl)
{
  return vmv_v_v_u16mf2(op1, vl);
}

/*
** test_vmv_v_v_u16mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2_t 
test_vmv_v_v_u16mf2_vl31(vuint16mf2_t op1)
{
  return vmv_v_v_u16mf2(op1, 31);
}

/*
** test_vmv_v_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vmv_v_v_u16m1(vuint16m1_t op1, size_t vl)
{
  return vmv_v_v_u16m1(op1, vl);
}

/*
** test_vmv_v_v_u16m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vmv_v_v_u16m1_vl31(vuint16m1_t op1)
{
  return vmv_v_v_u16m1(op1, 31);
}

/*
** test_vmv_v_v_u16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m2_t 
test_vmv_v_v_u16m2(vuint16m2_t op1, size_t vl)
{
  return vmv_v_v_u16m2(op1, vl);
}

/*
** test_vmv_v_v_u16m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m2_t 
test_vmv_v_v_u16m2_vl31(vuint16m2_t op1)
{
  return vmv_v_v_u16m2(op1, 31);
}

/*
** test_vmv_v_v_u16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m4_t 
test_vmv_v_v_u16m4(vuint16m4_t op1, size_t vl)
{
  return vmv_v_v_u16m4(op1, vl);
}

/*
** test_vmv_v_v_u16m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m4_t 
test_vmv_v_v_u16m4_vl31(vuint16m4_t op1)
{
  return vmv_v_v_u16m4(op1, 31);
}

/*
** test_vmv_v_v_u16m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint16m8_t 
test_vmv_v_v_u16m8(vuint16m8_t op1, size_t vl)
{
  return vmv_v_v_u16m8(op1, vl);
}

/*
** test_vmv_v_v_u16m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint16m8_t 
test_vmv_v_v_u16m8_vl31(vuint16m8_t op1)
{
  return vmv_v_v_u16m8(op1, 31);
}

/*
** test_vmv_v_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2_t 
test_vmv_v_v_u32mf2(vuint32mf2_t op1, size_t vl)
{
  return vmv_v_v_u32mf2(op1, vl);
}

/*
** test_vmv_v_v_u32mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2_t 
test_vmv_v_v_u32mf2_vl31(vuint32mf2_t op1)
{
  return vmv_v_v_u32mf2(op1, 31);
}

/*
** test_vmv_v_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vmv_v_v_u32m1(vuint32m1_t op1, size_t vl)
{
  return vmv_v_v_u32m1(op1, vl);
}

/*
** test_vmv_v_v_u32m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vmv_v_v_u32m1_vl31(vuint32m1_t op1)
{
  return vmv_v_v_u32m1(op1, 31);
}

/*
** test_vmv_v_v_u32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m2_t 
test_vmv_v_v_u32m2(vuint32m2_t op1, size_t vl)
{
  return vmv_v_v_u32m2(op1, vl);
}

/*
** test_vmv_v_v_u32m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m2_t 
test_vmv_v_v_u32m2_vl31(vuint32m2_t op1)
{
  return vmv_v_v_u32m2(op1, 31);
}

/*
** test_vmv_v_v_u32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint32m4_t 
test_vmv_v_v_u32m4(vuint32m4_t op1, size_t vl)
{
  return vmv_v_v_u32m4(op1, vl);
}

/*
** test_vmv_v_v_u32m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint32m4_t 
test_vmv_v_v_u32m4_vl31(vuint32m4_t op1)
{
  return vmv_v_v_u32m4(op1, 31);
}

/*
** test_vmv_v_v_u32m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint32m8_t 
test_vmv_v_v_u32m8(vuint32m8_t op1, size_t vl)
{
  return vmv_v_v_u32m8(op1, vl);
}

/*
** test_vmv_v_v_u32m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint32m8_t 
test_vmv_v_v_u32m8_vl31(vuint32m8_t op1)
{
  return vmv_v_v_u32m8(op1, 31);
}

/*
** test_vmv_v_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vmv_v_v_u64m1(vuint64m1_t op1, size_t vl)
{
  return vmv_v_v_u64m1(op1, vl);
}

/*
** test_vmv_v_v_u64m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vmv_v_v_u64m1_vl31(vuint64m1_t op1)
{
  return vmv_v_v_u64m1(op1, 31);
}

/*
** test_vmv_v_v_u64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint64m2_t 
test_vmv_v_v_u64m2(vuint64m2_t op1, size_t vl)
{
  return vmv_v_v_u64m2(op1, vl);
}

/*
** test_vmv_v_v_u64m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint64m2_t 
test_vmv_v_v_u64m2_vl31(vuint64m2_t op1)
{
  return vmv_v_v_u64m2(op1, 31);
}

/*
** test_vmv_v_v_u64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint64m4_t 
test_vmv_v_v_u64m4(vuint64m4_t op1, size_t vl)
{
  return vmv_v_v_u64m4(op1, vl);
}

/*
** test_vmv_v_v_u64m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint64m4_t 
test_vmv_v_v_u64m4_vl31(vuint64m4_t op1)
{
  return vmv_v_v_u64m4(op1, 31);
}

/*
** test_vmv_v_v_u64m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint64m8_t 
test_vmv_v_v_u64m8(vuint64m8_t op1, size_t vl)
{
  return vmv_v_v_u64m8(op1, vl);
}

/*
** test_vmv_v_v_u64m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint64m8_t 
test_vmv_v_v_u64m8_vl31(vuint64m8_t op1)
{
  return vmv_v_v_u64m8(op1, 31);
}

/*
** test_vmv_v_v_u8mf8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8_t 
test_vmv_v_v_u8mf8_ta(vuint8mf8_t op1, size_t vl)
{
  return vmv_v_v_u8mf8_ta(op1, vl);
}

/*
** test_vmv_v_v_u8mf8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8_t 
test_vmv_v_v_u8mf8_ta_vl31(vuint8mf8_t op1)
{
  return vmv_v_v_u8mf8_ta(op1, 31);
}

/*
** test_vmv_v_v_u8mf4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4_t 
test_vmv_v_v_u8mf4_ta(vuint8mf4_t op1, size_t vl)
{
  return vmv_v_v_u8mf4_ta(op1, vl);
}

/*
** test_vmv_v_v_u8mf4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4_t 
test_vmv_v_v_u8mf4_ta_vl31(vuint8mf4_t op1)
{
  return vmv_v_v_u8mf4_ta(op1, 31);
}

/*
** test_vmv_v_v_u8mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2_t 
test_vmv_v_v_u8mf2_ta(vuint8mf2_t op1, size_t vl)
{
  return vmv_v_v_u8mf2_ta(op1, vl);
}

/*
** test_vmv_v_v_u8mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2_t 
test_vmv_v_v_u8mf2_ta_vl31(vuint8mf2_t op1)
{
  return vmv_v_v_u8mf2_ta(op1, 31);
}

/*
** test_vmv_v_v_u8m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vmv_v_v_u8m1_ta(vuint8m1_t op1, size_t vl)
{
  return vmv_v_v_u8m1_ta(op1, vl);
}

/*
** test_vmv_v_v_u8m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vmv_v_v_u8m1_ta_vl31(vuint8m1_t op1)
{
  return vmv_v_v_u8m1_ta(op1, 31);
}

/*
** test_vmv_v_v_u8m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m2_t 
test_vmv_v_v_u8m2_ta(vuint8m2_t op1, size_t vl)
{
  return vmv_v_v_u8m2_ta(op1, vl);
}

/*
** test_vmv_v_v_u8m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m2_t 
test_vmv_v_v_u8m2_ta_vl31(vuint8m2_t op1)
{
  return vmv_v_v_u8m2_ta(op1, 31);
}

/*
** test_vmv_v_v_u8m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m4_t 
test_vmv_v_v_u8m4_ta(vuint8m4_t op1, size_t vl)
{
  return vmv_v_v_u8m4_ta(op1, vl);
}

/*
** test_vmv_v_v_u8m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m4_t 
test_vmv_v_v_u8m4_ta_vl31(vuint8m4_t op1)
{
  return vmv_v_v_u8m4_ta(op1, 31);
}

/*
** test_vmv_v_v_u8m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint8m8_t 
test_vmv_v_v_u8m8_ta(vuint8m8_t op1, size_t vl)
{
  return vmv_v_v_u8m8_ta(op1, vl);
}

/*
** test_vmv_v_v_u8m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint8m8_t 
test_vmv_v_v_u8m8_ta_vl31(vuint8m8_t op1)
{
  return vmv_v_v_u8m8_ta(op1, 31);
}

/*
** test_vmv_v_v_u16mf4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4_t 
test_vmv_v_v_u16mf4_ta(vuint16mf4_t op1, size_t vl)
{
  return vmv_v_v_u16mf4_ta(op1, vl);
}

/*
** test_vmv_v_v_u16mf4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4_t 
test_vmv_v_v_u16mf4_ta_vl31(vuint16mf4_t op1)
{
  return vmv_v_v_u16mf4_ta(op1, 31);
}

/*
** test_vmv_v_v_u16mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2_t 
test_vmv_v_v_u16mf2_ta(vuint16mf2_t op1, size_t vl)
{
  return vmv_v_v_u16mf2_ta(op1, vl);
}

/*
** test_vmv_v_v_u16mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2_t 
test_vmv_v_v_u16mf2_ta_vl31(vuint16mf2_t op1)
{
  return vmv_v_v_u16mf2_ta(op1, 31);
}

/*
** test_vmv_v_v_u16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vmv_v_v_u16m1_ta(vuint16m1_t op1, size_t vl)
{
  return vmv_v_v_u16m1_ta(op1, vl);
}

/*
** test_vmv_v_v_u16m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vmv_v_v_u16m1_ta_vl31(vuint16m1_t op1)
{
  return vmv_v_v_u16m1_ta(op1, 31);
}

/*
** test_vmv_v_v_u16m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m2_t 
test_vmv_v_v_u16m2_ta(vuint16m2_t op1, size_t vl)
{
  return vmv_v_v_u16m2_ta(op1, vl);
}

/*
** test_vmv_v_v_u16m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m2_t 
test_vmv_v_v_u16m2_ta_vl31(vuint16m2_t op1)
{
  return vmv_v_v_u16m2_ta(op1, 31);
}

/*
** test_vmv_v_v_u16m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m4_t 
test_vmv_v_v_u16m4_ta(vuint16m4_t op1, size_t vl)
{
  return vmv_v_v_u16m4_ta(op1, vl);
}

/*
** test_vmv_v_v_u16m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m4_t 
test_vmv_v_v_u16m4_ta_vl31(vuint16m4_t op1)
{
  return vmv_v_v_u16m4_ta(op1, 31);
}

/*
** test_vmv_v_v_u16m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint16m8_t 
test_vmv_v_v_u16m8_ta(vuint16m8_t op1, size_t vl)
{
  return vmv_v_v_u16m8_ta(op1, vl);
}

/*
** test_vmv_v_v_u16m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint16m8_t 
test_vmv_v_v_u16m8_ta_vl31(vuint16m8_t op1)
{
  return vmv_v_v_u16m8_ta(op1, 31);
}

/*
** test_vmv_v_v_u32mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2_t 
test_vmv_v_v_u32mf2_ta(vuint32mf2_t op1, size_t vl)
{
  return vmv_v_v_u32mf2_ta(op1, vl);
}

/*
** test_vmv_v_v_u32mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2_t 
test_vmv_v_v_u32mf2_ta_vl31(vuint32mf2_t op1)
{
  return vmv_v_v_u32mf2_ta(op1, 31);
}

/*
** test_vmv_v_v_u32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vmv_v_v_u32m1_ta(vuint32m1_t op1, size_t vl)
{
  return vmv_v_v_u32m1_ta(op1, vl);
}

/*
** test_vmv_v_v_u32m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vmv_v_v_u32m1_ta_vl31(vuint32m1_t op1)
{
  return vmv_v_v_u32m1_ta(op1, 31);
}

/*
** test_vmv_v_v_u32m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m2_t 
test_vmv_v_v_u32m2_ta(vuint32m2_t op1, size_t vl)
{
  return vmv_v_v_u32m2_ta(op1, vl);
}

/*
** test_vmv_v_v_u32m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m2_t 
test_vmv_v_v_u32m2_ta_vl31(vuint32m2_t op1)
{
  return vmv_v_v_u32m2_ta(op1, 31);
}

/*
** test_vmv_v_v_u32m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint32m4_t 
test_vmv_v_v_u32m4_ta(vuint32m4_t op1, size_t vl)
{
  return vmv_v_v_u32m4_ta(op1, vl);
}

/*
** test_vmv_v_v_u32m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint32m4_t 
test_vmv_v_v_u32m4_ta_vl31(vuint32m4_t op1)
{
  return vmv_v_v_u32m4_ta(op1, 31);
}

/*
** test_vmv_v_v_u32m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint32m8_t 
test_vmv_v_v_u32m8_ta(vuint32m8_t op1, size_t vl)
{
  return vmv_v_v_u32m8_ta(op1, vl);
}

/*
** test_vmv_v_v_u32m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint32m8_t 
test_vmv_v_v_u32m8_ta_vl31(vuint32m8_t op1)
{
  return vmv_v_v_u32m8_ta(op1, 31);
}

/*
** test_vmv_v_v_u64m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vmv_v_v_u64m1_ta(vuint64m1_t op1, size_t vl)
{
  return vmv_v_v_u64m1_ta(op1, vl);
}

/*
** test_vmv_v_v_u64m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vmv_v_v_u64m1_ta_vl31(vuint64m1_t op1)
{
  return vmv_v_v_u64m1_ta(op1, 31);
}

/*
** test_vmv_v_v_u64m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint64m2_t 
test_vmv_v_v_u64m2_ta(vuint64m2_t op1, size_t vl)
{
  return vmv_v_v_u64m2_ta(op1, vl);
}

/*
** test_vmv_v_v_u64m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint64m2_t 
test_vmv_v_v_u64m2_ta_vl31(vuint64m2_t op1)
{
  return vmv_v_v_u64m2_ta(op1, 31);
}

/*
** test_vmv_v_v_u64m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint64m4_t 
test_vmv_v_v_u64m4_ta(vuint64m4_t op1, size_t vl)
{
  return vmv_v_v_u64m4_ta(op1, vl);
}

/*
** test_vmv_v_v_u64m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint64m4_t 
test_vmv_v_v_u64m4_ta_vl31(vuint64m4_t op1)
{
  return vmv_v_v_u64m4_ta(op1, 31);
}

/*
** test_vmv_v_v_u64m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint64m8_t 
test_vmv_v_v_u64m8_ta(vuint64m8_t op1, size_t vl)
{
  return vmv_v_v_u64m8_ta(op1, vl);
}

/*
** test_vmv_v_v_u64m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint64m8_t 
test_vmv_v_v_u64m8_ta_vl31(vuint64m8_t op1)
{
  return vmv_v_v_u64m8_ta(op1, 31);
}

/*
** test_vmv_v_v_u8mf8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8_t 
test_vmv_v_v_u8mf8_tu(vuint8mf8_t dest, vuint8mf8_t op1, size_t vl)
{
  return vmv_v_v_u8mf8_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_u8mf8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8_t 
test_vmv_v_v_u8mf8_tu_vl31(vuint8mf8_t dest, vuint8mf8_t op1)
{
  return vmv_v_v_u8mf8_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_u8mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4_t 
test_vmv_v_v_u8mf4_tu(vuint8mf4_t dest, vuint8mf4_t op1, size_t vl)
{
  return vmv_v_v_u8mf4_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_u8mf4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4_t 
test_vmv_v_v_u8mf4_tu_vl31(vuint8mf4_t dest, vuint8mf4_t op1)
{
  return vmv_v_v_u8mf4_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_u8mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2_t 
test_vmv_v_v_u8mf2_tu(vuint8mf2_t dest, vuint8mf2_t op1, size_t vl)
{
  return vmv_v_v_u8mf2_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_u8mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2_t 
test_vmv_v_v_u8mf2_tu_vl31(vuint8mf2_t dest, vuint8mf2_t op1)
{
  return vmv_v_v_u8mf2_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_u8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vmv_v_v_u8m1_tu(vuint8m1_t dest, vuint8m1_t op1, size_t vl)
{
  return vmv_v_v_u8m1_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_u8m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vmv_v_v_u8m1_tu_vl31(vuint8m1_t dest, vuint8m1_t op1)
{
  return vmv_v_v_u8m1_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_u8m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m2_t 
test_vmv_v_v_u8m2_tu(vuint8m2_t dest, vuint8m2_t op1, size_t vl)
{
  return vmv_v_v_u8m2_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_u8m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m2_t 
test_vmv_v_v_u8m2_tu_vl31(vuint8m2_t dest, vuint8m2_t op1)
{
  return vmv_v_v_u8m2_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_u8m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m4_t 
test_vmv_v_v_u8m4_tu(vuint8m4_t dest, vuint8m4_t op1, size_t vl)
{
  return vmv_v_v_u8m4_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_u8m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m4_t 
test_vmv_v_v_u8m4_tu_vl31(vuint8m4_t dest, vuint8m4_t op1)
{
  return vmv_v_v_u8m4_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_u8m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint8m8_t 
test_vmv_v_v_u8m8_tu(vuint8m8_t dest, vuint8m8_t op1, size_t vl)
{
  return vmv_v_v_u8m8_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_u8m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint8m8_t 
test_vmv_v_v_u8m8_tu_vl31(vuint8m8_t dest, vuint8m8_t op1)
{
  return vmv_v_v_u8m8_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_u16mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4_t 
test_vmv_v_v_u16mf4_tu(vuint16mf4_t dest, vuint16mf4_t op1, size_t vl)
{
  return vmv_v_v_u16mf4_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_u16mf4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4_t 
test_vmv_v_v_u16mf4_tu_vl31(vuint16mf4_t dest, vuint16mf4_t op1)
{
  return vmv_v_v_u16mf4_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_u16mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2_t 
test_vmv_v_v_u16mf2_tu(vuint16mf2_t dest, vuint16mf2_t op1, size_t vl)
{
  return vmv_v_v_u16mf2_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_u16mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2_t 
test_vmv_v_v_u16mf2_tu_vl31(vuint16mf2_t dest, vuint16mf2_t op1)
{
  return vmv_v_v_u16mf2_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_u16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vmv_v_v_u16m1_tu(vuint16m1_t dest, vuint16m1_t op1, size_t vl)
{
  return vmv_v_v_u16m1_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_u16m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vmv_v_v_u16m1_tu_vl31(vuint16m1_t dest, vuint16m1_t op1)
{
  return vmv_v_v_u16m1_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_u16m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m2_t 
test_vmv_v_v_u16m2_tu(vuint16m2_t dest, vuint16m2_t op1, size_t vl)
{
  return vmv_v_v_u16m2_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_u16m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m2_t 
test_vmv_v_v_u16m2_tu_vl31(vuint16m2_t dest, vuint16m2_t op1)
{
  return vmv_v_v_u16m2_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_u16m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m4_t 
test_vmv_v_v_u16m4_tu(vuint16m4_t dest, vuint16m4_t op1, size_t vl)
{
  return vmv_v_v_u16m4_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_u16m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m4_t 
test_vmv_v_v_u16m4_tu_vl31(vuint16m4_t dest, vuint16m4_t op1)
{
  return vmv_v_v_u16m4_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_u16m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint16m8_t 
test_vmv_v_v_u16m8_tu(vuint16m8_t dest, vuint16m8_t op1, size_t vl)
{
  return vmv_v_v_u16m8_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_u16m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint16m8_t 
test_vmv_v_v_u16m8_tu_vl31(vuint16m8_t dest, vuint16m8_t op1)
{
  return vmv_v_v_u16m8_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_u32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2_t 
test_vmv_v_v_u32mf2_tu(vuint32mf2_t dest, vuint32mf2_t op1, size_t vl)
{
  return vmv_v_v_u32mf2_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_u32mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2_t 
test_vmv_v_v_u32mf2_tu_vl31(vuint32mf2_t dest, vuint32mf2_t op1)
{
  return vmv_v_v_u32mf2_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_u32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vmv_v_v_u32m1_tu(vuint32m1_t dest, vuint32m1_t op1, size_t vl)
{
  return vmv_v_v_u32m1_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_u32m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vmv_v_v_u32m1_tu_vl31(vuint32m1_t dest, vuint32m1_t op1)
{
  return vmv_v_v_u32m1_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_u32m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m2_t 
test_vmv_v_v_u32m2_tu(vuint32m2_t dest, vuint32m2_t op1, size_t vl)
{
  return vmv_v_v_u32m2_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_u32m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m2_t 
test_vmv_v_v_u32m2_tu_vl31(vuint32m2_t dest, vuint32m2_t op1)
{
  return vmv_v_v_u32m2_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_u32m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint32m4_t 
test_vmv_v_v_u32m4_tu(vuint32m4_t dest, vuint32m4_t op1, size_t vl)
{
  return vmv_v_v_u32m4_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_u32m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint32m4_t 
test_vmv_v_v_u32m4_tu_vl31(vuint32m4_t dest, vuint32m4_t op1)
{
  return vmv_v_v_u32m4_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_u32m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint32m8_t 
test_vmv_v_v_u32m8_tu(vuint32m8_t dest, vuint32m8_t op1, size_t vl)
{
  return vmv_v_v_u32m8_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_u32m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint32m8_t 
test_vmv_v_v_u32m8_tu_vl31(vuint32m8_t dest, vuint32m8_t op1)
{
  return vmv_v_v_u32m8_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_u64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vmv_v_v_u64m1_tu(vuint64m1_t dest, vuint64m1_t op1, size_t vl)
{
  return vmv_v_v_u64m1_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_u64m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vmv_v_v_u64m1_tu_vl31(vuint64m1_t dest, vuint64m1_t op1)
{
  return vmv_v_v_u64m1_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_u64m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint64m2_t 
test_vmv_v_v_u64m2_tu(vuint64m2_t dest, vuint64m2_t op1, size_t vl)
{
  return vmv_v_v_u64m2_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_u64m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint64m2_t 
test_vmv_v_v_u64m2_tu_vl31(vuint64m2_t dest, vuint64m2_t op1)
{
  return vmv_v_v_u64m2_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_u64m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint64m4_t 
test_vmv_v_v_u64m4_tu(vuint64m4_t dest, vuint64m4_t op1, size_t vl)
{
  return vmv_v_v_u64m4_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_u64m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint64m4_t 
test_vmv_v_v_u64m4_tu_vl31(vuint64m4_t dest, vuint64m4_t op1)
{
  return vmv_v_v_u64m4_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_u64m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint64m8_t 
test_vmv_v_v_u64m8_tu(vuint64m8_t dest, vuint64m8_t op1, size_t vl)
{
  return vmv_v_v_u64m8_tu(dest, op1, vl);
}

/*
** test_vmv_v_v_u64m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint64m8_t 
test_vmv_v_v_u64m8_tu_vl31(vuint64m8_t dest, vuint64m8_t op1)
{
  return vmv_v_v_u64m8_tu(dest, op1, 31);
}

/*
** test_vmv_v_v_u8mf8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8_t 
test_vmv_v_v_u8mf8_ta_vl32(vuint8mf8_t op1)
{
  return vmv_v_v_u8mf8_ta(op1, 32);
}

/*
** test_vmv_v_v_u8mf4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4_t 
test_vmv_v_v_u8mf4_ta_vl32(vuint8mf4_t op1)
{
  return vmv_v_v_u8mf4_ta(op1, 32);
}

/*
** test_vmv_v_v_u8mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2_t 
test_vmv_v_v_u8mf2_ta_vl32(vuint8mf2_t op1)
{
  return vmv_v_v_u8mf2_ta(op1, 32);
}

/*
** test_vmv_v_v_u8m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vmv_v_v_u8m1_ta_vl32(vuint8m1_t op1)
{
  return vmv_v_v_u8m1_ta(op1, 32);
}

/*
** test_vmv_v_v_u8m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m2_t 
test_vmv_v_v_u8m2_ta_vl32(vuint8m2_t op1)
{
  return vmv_v_v_u8m2_ta(op1, 32);
}

/*
** test_vmv_v_v_u8m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m4_t 
test_vmv_v_v_u8m4_ta_vl32(vuint8m4_t op1)
{
  return vmv_v_v_u8m4_ta(op1, 32);
}

/*
** test_vmv_v_v_u8m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint8m8_t 
test_vmv_v_v_u8m8_ta_vl32(vuint8m8_t op1)
{
  return vmv_v_v_u8m8_ta(op1, 32);
}

/*
** test_vmv_v_v_u16mf4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4_t 
test_vmv_v_v_u16mf4_ta_vl32(vuint16mf4_t op1)
{
  return vmv_v_v_u16mf4_ta(op1, 32);
}

/*
** test_vmv_v_v_u16mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2_t 
test_vmv_v_v_u16mf2_ta_vl32(vuint16mf2_t op1)
{
  return vmv_v_v_u16mf2_ta(op1, 32);
}

/*
** test_vmv_v_v_u16m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vmv_v_v_u16m1_ta_vl32(vuint16m1_t op1)
{
  return vmv_v_v_u16m1_ta(op1, 32);
}

/*
** test_vmv_v_v_u16m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m2_t 
test_vmv_v_v_u16m2_ta_vl32(vuint16m2_t op1)
{
  return vmv_v_v_u16m2_ta(op1, 32);
}

/*
** test_vmv_v_v_u16m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m4_t 
test_vmv_v_v_u16m4_ta_vl32(vuint16m4_t op1)
{
  return vmv_v_v_u16m4_ta(op1, 32);
}

/*
** test_vmv_v_v_u16m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint16m8_t 
test_vmv_v_v_u16m8_ta_vl32(vuint16m8_t op1)
{
  return vmv_v_v_u16m8_ta(op1, 32);
}

/*
** test_vmv_v_v_u32mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2_t 
test_vmv_v_v_u32mf2_ta_vl32(vuint32mf2_t op1)
{
  return vmv_v_v_u32mf2_ta(op1, 32);
}

/*
** test_vmv_v_v_u32m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vmv_v_v_u32m1_ta_vl32(vuint32m1_t op1)
{
  return vmv_v_v_u32m1_ta(op1, 32);
}

/*
** test_vmv_v_v_u32m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m2_t 
test_vmv_v_v_u32m2_ta_vl32(vuint32m2_t op1)
{
  return vmv_v_v_u32m2_ta(op1, 32);
}

/*
** test_vmv_v_v_u32m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint32m4_t 
test_vmv_v_v_u32m4_ta_vl32(vuint32m4_t op1)
{
  return vmv_v_v_u32m4_ta(op1, 32);
}

/*
** test_vmv_v_v_u32m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint32m8_t 
test_vmv_v_v_u32m8_ta_vl32(vuint32m8_t op1)
{
  return vmv_v_v_u32m8_ta(op1, 32);
}

/*
** test_vmv_v_v_u64m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vmv_v_v_u64m1_ta_vl32(vuint64m1_t op1)
{
  return vmv_v_v_u64m1_ta(op1, 32);
}

/*
** test_vmv_v_v_u64m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint64m2_t 
test_vmv_v_v_u64m2_ta_vl32(vuint64m2_t op1)
{
  return vmv_v_v_u64m2_ta(op1, 32);
}

/*
** test_vmv_v_v_u64m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint64m4_t 
test_vmv_v_v_u64m4_ta_vl32(vuint64m4_t op1)
{
  return vmv_v_v_u64m4_ta(op1, 32);
}

/*
** test_vmv_v_v_u64m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint64m8_t 
test_vmv_v_v_u64m8_ta_vl32(vuint64m8_t op1)
{
  return vmv_v_v_u64m8_ta(op1, 32);
}

/*
** test_vmv_v_v_u8mf8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8_t 
test_vmv_v_v_u8mf8_tu_vl32(vuint8mf8_t dest, vuint8mf8_t op1)
{
  return vmv_v_v_u8mf8_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_u8mf4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4_t 
test_vmv_v_v_u8mf4_tu_vl32(vuint8mf4_t dest, vuint8mf4_t op1)
{
  return vmv_v_v_u8mf4_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_u8mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2_t 
test_vmv_v_v_u8mf2_tu_vl32(vuint8mf2_t dest, vuint8mf2_t op1)
{
  return vmv_v_v_u8mf2_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_u8m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vmv_v_v_u8m1_tu_vl32(vuint8m1_t dest, vuint8m1_t op1)
{
  return vmv_v_v_u8m1_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_u8m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m2_t 
test_vmv_v_v_u8m2_tu_vl32(vuint8m2_t dest, vuint8m2_t op1)
{
  return vmv_v_v_u8m2_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_u8m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m4_t 
test_vmv_v_v_u8m4_tu_vl32(vuint8m4_t dest, vuint8m4_t op1)
{
  return vmv_v_v_u8m4_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_u8m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint8m8_t 
test_vmv_v_v_u8m8_tu_vl32(vuint8m8_t dest, vuint8m8_t op1)
{
  return vmv_v_v_u8m8_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_u16mf4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4_t 
test_vmv_v_v_u16mf4_tu_vl32(vuint16mf4_t dest, vuint16mf4_t op1)
{
  return vmv_v_v_u16mf4_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_u16mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2_t 
test_vmv_v_v_u16mf2_tu_vl32(vuint16mf2_t dest, vuint16mf2_t op1)
{
  return vmv_v_v_u16mf2_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_u16m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vmv_v_v_u16m1_tu_vl32(vuint16m1_t dest, vuint16m1_t op1)
{
  return vmv_v_v_u16m1_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_u16m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m2_t 
test_vmv_v_v_u16m2_tu_vl32(vuint16m2_t dest, vuint16m2_t op1)
{
  return vmv_v_v_u16m2_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_u16m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m4_t 
test_vmv_v_v_u16m4_tu_vl32(vuint16m4_t dest, vuint16m4_t op1)
{
  return vmv_v_v_u16m4_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_u16m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint16m8_t 
test_vmv_v_v_u16m8_tu_vl32(vuint16m8_t dest, vuint16m8_t op1)
{
  return vmv_v_v_u16m8_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_u32mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2_t 
test_vmv_v_v_u32mf2_tu_vl32(vuint32mf2_t dest, vuint32mf2_t op1)
{
  return vmv_v_v_u32mf2_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_u32m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vmv_v_v_u32m1_tu_vl32(vuint32m1_t dest, vuint32m1_t op1)
{
  return vmv_v_v_u32m1_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_u32m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m2_t 
test_vmv_v_v_u32m2_tu_vl32(vuint32m2_t dest, vuint32m2_t op1)
{
  return vmv_v_v_u32m2_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_u32m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint32m4_t 
test_vmv_v_v_u32m4_tu_vl32(vuint32m4_t dest, vuint32m4_t op1)
{
  return vmv_v_v_u32m4_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_u32m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint32m8_t 
test_vmv_v_v_u32m8_tu_vl32(vuint32m8_t dest, vuint32m8_t op1)
{
  return vmv_v_v_u32m8_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_u64m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vmv_v_v_u64m1_tu_vl32(vuint64m1_t dest, vuint64m1_t op1)
{
  return vmv_v_v_u64m1_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_u64m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint64m2_t 
test_vmv_v_v_u64m2_tu_vl32(vuint64m2_t dest, vuint64m2_t op1)
{
  return vmv_v_v_u64m2_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_u64m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint64m4_t 
test_vmv_v_v_u64m4_tu_vl32(vuint64m4_t dest, vuint64m4_t op1)
{
  return vmv_v_v_u64m4_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_u64m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint64m8_t 
test_vmv_v_v_u64m8_tu_vl32(vuint64m8_t dest, vuint64m8_t op1)
{
  return vmv_v_v_u64m8_tu(dest, op1, 32);
}

/*
** test_vmv_v_v_u8mf8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8_t 
test_vmv_v_v_u8mf8_vl32(vuint8mf8_t op1)
{
  return vmv_v_v_u8mf8(op1, 32);
}

/*
** test_vmv_v_v_u8mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4_t 
test_vmv_v_v_u8mf4_vl32(vuint8mf4_t op1)
{
  return vmv_v_v_u8mf4(op1, 32);
}

/*
** test_vmv_v_v_u8mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2_t 
test_vmv_v_v_u8mf2_vl32(vuint8mf2_t op1)
{
  return vmv_v_v_u8mf2(op1, 32);
}

/*
** test_vmv_v_v_u8m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vmv_v_v_u8m1_vl32(vuint8m1_t op1)
{
  return vmv_v_v_u8m1(op1, 32);
}

/*
** test_vmv_v_v_u8m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m2_t 
test_vmv_v_v_u8m2_vl32(vuint8m2_t op1)
{
  return vmv_v_v_u8m2(op1, 32);
}

/*
** test_vmv_v_v_u8m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m4_t 
test_vmv_v_v_u8m4_vl32(vuint8m4_t op1)
{
  return vmv_v_v_u8m4(op1, 32);
}

/*
** test_vmv_v_v_u8m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint8m8_t 
test_vmv_v_v_u8m8_vl32(vuint8m8_t op1)
{
  return vmv_v_v_u8m8(op1, 32);
}

/*
** test_vmv_v_v_u16mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4_t 
test_vmv_v_v_u16mf4_vl32(vuint16mf4_t op1)
{
  return vmv_v_v_u16mf4(op1, 32);
}

/*
** test_vmv_v_v_u16mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2_t 
test_vmv_v_v_u16mf2_vl32(vuint16mf2_t op1)
{
  return vmv_v_v_u16mf2(op1, 32);
}

/*
** test_vmv_v_v_u16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vmv_v_v_u16m1_vl32(vuint16m1_t op1)
{
  return vmv_v_v_u16m1(op1, 32);
}

/*
** test_vmv_v_v_u16m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m2_t 
test_vmv_v_v_u16m2_vl32(vuint16m2_t op1)
{
  return vmv_v_v_u16m2(op1, 32);
}

/*
** test_vmv_v_v_u16m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m4_t 
test_vmv_v_v_u16m4_vl32(vuint16m4_t op1)
{
  return vmv_v_v_u16m4(op1, 32);
}

/*
** test_vmv_v_v_u16m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint16m8_t 
test_vmv_v_v_u16m8_vl32(vuint16m8_t op1)
{
  return vmv_v_v_u16m8(op1, 32);
}

/*
** test_vmv_v_v_u32mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2_t 
test_vmv_v_v_u32mf2_vl32(vuint32mf2_t op1)
{
  return vmv_v_v_u32mf2(op1, 32);
}

/*
** test_vmv_v_v_u32m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vmv_v_v_u32m1_vl32(vuint32m1_t op1)
{
  return vmv_v_v_u32m1(op1, 32);
}

/*
** test_vmv_v_v_u32m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m2_t 
test_vmv_v_v_u32m2_vl32(vuint32m2_t op1)
{
  return vmv_v_v_u32m2(op1, 32);
}

/*
** test_vmv_v_v_u32m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint32m4_t 
test_vmv_v_v_u32m4_vl32(vuint32m4_t op1)
{
  return vmv_v_v_u32m4(op1, 32);
}

/*
** test_vmv_v_v_u32m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint32m8_t 
test_vmv_v_v_u32m8_vl32(vuint32m8_t op1)
{
  return vmv_v_v_u32m8(op1, 32);
}

/*
** test_vmv_v_v_u64m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vmv_v_v_u64m1_vl32(vuint64m1_t op1)
{
  return vmv_v_v_u64m1(op1, 32);
}

/*
** test_vmv_v_v_u64m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint64m2_t 
test_vmv_v_v_u64m2_vl32(vuint64m2_t op1)
{
  return vmv_v_v_u64m2(op1, 32);
}

/*
** test_vmv_v_v_u64m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint64m4_t 
test_vmv_v_v_u64m4_vl32(vuint64m4_t op1)
{
  return vmv_v_v_u64m4(op1, 32);
}

/*
** test_vmv_v_v_u64m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint64m8_t 
test_vmv_v_v_u64m8_vl32(vuint64m8_t op1)
{
  return vmv_v_v_u64m8(op1, 32);
}

/*
** test_vmv_v_x_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf8_t 
test_vmv_v_x_i8mf8(int8_t op1, size_t vl)
{
  return vmv_v_x_i8mf8(op1, vl);
}

/*
** test_vmv_v_x_i8mf8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf8_t 
test_vmv_v_x_i8mf8_vl31(int8_t op1)
{
  return vmv_v_x_i8mf8(op1, 31);
}

/*
** test_vmv_v_x_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf4_t 
test_vmv_v_x_i8mf4(int8_t op1, size_t vl)
{
  return vmv_v_x_i8mf4(op1, vl);
}

/*
** test_vmv_v_x_i8mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf4_t 
test_vmv_v_x_i8mf4_vl31(int8_t op1)
{
  return vmv_v_x_i8mf4(op1, 31);
}

/*
** test_vmv_v_x_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf2_t 
test_vmv_v_x_i8mf2(int8_t op1, size_t vl)
{
  return vmv_v_x_i8mf2(op1, vl);
}

/*
** test_vmv_v_x_i8mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf2_t 
test_vmv_v_x_i8mf2_vl31(int8_t op1)
{
  return vmv_v_x_i8mf2(op1, 31);
}

/*
** test_vmv_v_x_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m1_t 
test_vmv_v_x_i8m1(int8_t op1, size_t vl)
{
  return vmv_v_x_i8m1(op1, vl);
}

/*
** test_vmv_v_x_i8m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m1_t 
test_vmv_v_x_i8m1_vl31(int8_t op1)
{
  return vmv_v_x_i8m1(op1, 31);
}

/*
** test_vmv_v_x_i8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m2_t 
test_vmv_v_x_i8m2(int8_t op1, size_t vl)
{
  return vmv_v_x_i8m2(op1, vl);
}

/*
** test_vmv_v_x_i8m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m2_t 
test_vmv_v_x_i8m2_vl31(int8_t op1)
{
  return vmv_v_x_i8m2(op1, 31);
}

/*
** test_vmv_v_x_i8m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m4_t 
test_vmv_v_x_i8m4(int8_t op1, size_t vl)
{
  return vmv_v_x_i8m4(op1, vl);
}

/*
** test_vmv_v_x_i8m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m4_t 
test_vmv_v_x_i8m4_vl31(int8_t op1)
{
  return vmv_v_x_i8m4(op1, 31);
}

/*
** test_vmv_v_x_i8m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m8_t 
test_vmv_v_x_i8m8(int8_t op1, size_t vl)
{
  return vmv_v_x_i8m8(op1, vl);
}

/*
** test_vmv_v_x_i8m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m8_t 
test_vmv_v_x_i8m8_vl31(int8_t op1)
{
  return vmv_v_x_i8m8(op1, 31);
}

/*
** test_vmv_v_x_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf4_t 
test_vmv_v_x_i16mf4(int16_t op1, size_t vl)
{
  return vmv_v_x_i16mf4(op1, vl);
}

/*
** test_vmv_v_x_i16mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf4_t 
test_vmv_v_x_i16mf4_vl31(int16_t op1)
{
  return vmv_v_x_i16mf4(op1, 31);
}

/*
** test_vmv_v_x_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf2_t 
test_vmv_v_x_i16mf2(int16_t op1, size_t vl)
{
  return vmv_v_x_i16mf2(op1, vl);
}

/*
** test_vmv_v_x_i16mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf2_t 
test_vmv_v_x_i16mf2_vl31(int16_t op1)
{
  return vmv_v_x_i16mf2(op1, 31);
}

/*
** test_vmv_v_x_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m1_t 
test_vmv_v_x_i16m1(int16_t op1, size_t vl)
{
  return vmv_v_x_i16m1(op1, vl);
}

/*
** test_vmv_v_x_i16m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m1_t 
test_vmv_v_x_i16m1_vl31(int16_t op1)
{
  return vmv_v_x_i16m1(op1, 31);
}

/*
** test_vmv_v_x_i16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m2_t 
test_vmv_v_x_i16m2(int16_t op1, size_t vl)
{
  return vmv_v_x_i16m2(op1, vl);
}

/*
** test_vmv_v_x_i16m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m2_t 
test_vmv_v_x_i16m2_vl31(int16_t op1)
{
  return vmv_v_x_i16m2(op1, 31);
}

/*
** test_vmv_v_x_i16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m4_t 
test_vmv_v_x_i16m4(int16_t op1, size_t vl)
{
  return vmv_v_x_i16m4(op1, vl);
}

/*
** test_vmv_v_x_i16m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m4_t 
test_vmv_v_x_i16m4_vl31(int16_t op1)
{
  return vmv_v_x_i16m4(op1, 31);
}

/*
** test_vmv_v_x_i16m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m8_t 
test_vmv_v_x_i16m8(int16_t op1, size_t vl)
{
  return vmv_v_x_i16m8(op1, vl);
}

/*
** test_vmv_v_x_i16m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m8_t 
test_vmv_v_x_i16m8_vl31(int16_t op1)
{
  return vmv_v_x_i16m8(op1, 31);
}

/*
** test_vmv_v_x_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32mf2_t 
test_vmv_v_x_i32mf2(int32_t op1, size_t vl)
{
  return vmv_v_x_i32mf2(op1, vl);
}

/*
** test_vmv_v_x_i32mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32mf2_t 
test_vmv_v_x_i32mf2_vl31(int32_t op1)
{
  return vmv_v_x_i32mf2(op1, 31);
}

/*
** test_vmv_v_x_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m1_t 
test_vmv_v_x_i32m1(int32_t op1, size_t vl)
{
  return vmv_v_x_i32m1(op1, vl);
}

/*
** test_vmv_v_x_i32m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m1_t 
test_vmv_v_x_i32m1_vl31(int32_t op1)
{
  return vmv_v_x_i32m1(op1, 31);
}

/*
** test_vmv_v_x_i32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m2_t 
test_vmv_v_x_i32m2(int32_t op1, size_t vl)
{
  return vmv_v_x_i32m2(op1, vl);
}

/*
** test_vmv_v_x_i32m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m2_t 
test_vmv_v_x_i32m2_vl31(int32_t op1)
{
  return vmv_v_x_i32m2(op1, 31);
}

/*
** test_vmv_v_x_i32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m4_t 
test_vmv_v_x_i32m4(int32_t op1, size_t vl)
{
  return vmv_v_x_i32m4(op1, vl);
}

/*
** test_vmv_v_x_i32m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m4_t 
test_vmv_v_x_i32m4_vl31(int32_t op1)
{
  return vmv_v_x_i32m4(op1, 31);
}

/*
** test_vmv_v_x_i32m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m8_t 
test_vmv_v_x_i32m8(int32_t op1, size_t vl)
{
  return vmv_v_x_i32m8(op1, vl);
}

/*
** test_vmv_v_x_i32m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m8_t 
test_vmv_v_x_i32m8_vl31(int32_t op1)
{
  return vmv_v_x_i32m8(op1, 31);
}

/*
** test_vmv_v_x_i64m1:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m1_t 
test_vmv_v_x_i64m1(int64_t op1, size_t vl)
{
  return vmv_v_x_i64m1(op1, vl);
}

/*
** test_vmv_v_x_i64m1_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m1_t 
test_vmv_v_x_i64m1_vl31(int64_t op1)
{
  return vmv_v_x_i64m1(op1, 31);
}

/*
** test_vmv_v_x_i64m2:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m2_t 
test_vmv_v_x_i64m2(int64_t op1, size_t vl)
{
  return vmv_v_x_i64m2(op1, vl);
}

/*
** test_vmv_v_x_i64m2_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m2_t 
test_vmv_v_x_i64m2_vl31(int64_t op1)
{
  return vmv_v_x_i64m2(op1, 31);
}

/*
** test_vmv_v_x_i64m4:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m4_t 
test_vmv_v_x_i64m4(int64_t op1, size_t vl)
{
  return vmv_v_x_i64m4(op1, vl);
}

/*
** test_vmv_v_x_i64m4_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m4_t 
test_vmv_v_x_i64m4_vl31(int64_t op1)
{
  return vmv_v_x_i64m4(op1, 31);
}

/*
** test_vmv_v_x_i64m8:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m8_t 
test_vmv_v_x_i64m8(int64_t op1, size_t vl)
{
  return vmv_v_x_i64m8(op1, vl);
}

/*
** test_vmv_v_x_i64m8_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m8_t 
test_vmv_v_x_i64m8_vl31(int64_t op1)
{
  return vmv_v_x_i64m8(op1, 31);
}

/*
** test_vmv_v_x_i8mf8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf8_t 
test_vmv_v_x_i8mf8_ta(int8_t op1, size_t vl)
{
  return vmv_v_x_i8mf8_ta(op1, vl);
}

/*
** test_vmv_v_x_i8mf8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf8_t 
test_vmv_v_x_i8mf8_ta_vl31(int8_t op1)
{
  return vmv_v_x_i8mf8_ta(op1, 31);
}

/*
** test_vmv_v_x_i8mf4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf4_t 
test_vmv_v_x_i8mf4_ta(int8_t op1, size_t vl)
{
  return vmv_v_x_i8mf4_ta(op1, vl);
}

/*
** test_vmv_v_x_i8mf4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf4_t 
test_vmv_v_x_i8mf4_ta_vl31(int8_t op1)
{
  return vmv_v_x_i8mf4_ta(op1, 31);
}

/*
** test_vmv_v_x_i8mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf2_t 
test_vmv_v_x_i8mf2_ta(int8_t op1, size_t vl)
{
  return vmv_v_x_i8mf2_ta(op1, vl);
}

/*
** test_vmv_v_x_i8mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf2_t 
test_vmv_v_x_i8mf2_ta_vl31(int8_t op1)
{
  return vmv_v_x_i8mf2_ta(op1, 31);
}

/*
** test_vmv_v_x_i8m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m1_t 
test_vmv_v_x_i8m1_ta(int8_t op1, size_t vl)
{
  return vmv_v_x_i8m1_ta(op1, vl);
}

/*
** test_vmv_v_x_i8m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m1_t 
test_vmv_v_x_i8m1_ta_vl31(int8_t op1)
{
  return vmv_v_x_i8m1_ta(op1, 31);
}

/*
** test_vmv_v_x_i8m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m2_t 
test_vmv_v_x_i8m2_ta(int8_t op1, size_t vl)
{
  return vmv_v_x_i8m2_ta(op1, vl);
}

/*
** test_vmv_v_x_i8m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m2_t 
test_vmv_v_x_i8m2_ta_vl31(int8_t op1)
{
  return vmv_v_x_i8m2_ta(op1, 31);
}

/*
** test_vmv_v_x_i8m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m4_t 
test_vmv_v_x_i8m4_ta(int8_t op1, size_t vl)
{
  return vmv_v_x_i8m4_ta(op1, vl);
}

/*
** test_vmv_v_x_i8m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m4_t 
test_vmv_v_x_i8m4_ta_vl31(int8_t op1)
{
  return vmv_v_x_i8m4_ta(op1, 31);
}

/*
** test_vmv_v_x_i8m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m8_t 
test_vmv_v_x_i8m8_ta(int8_t op1, size_t vl)
{
  return vmv_v_x_i8m8_ta(op1, vl);
}

/*
** test_vmv_v_x_i8m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m8_t 
test_vmv_v_x_i8m8_ta_vl31(int8_t op1)
{
  return vmv_v_x_i8m8_ta(op1, 31);
}

/*
** test_vmv_v_x_i16mf4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf4_t 
test_vmv_v_x_i16mf4_ta(int16_t op1, size_t vl)
{
  return vmv_v_x_i16mf4_ta(op1, vl);
}

/*
** test_vmv_v_x_i16mf4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf4_t 
test_vmv_v_x_i16mf4_ta_vl31(int16_t op1)
{
  return vmv_v_x_i16mf4_ta(op1, 31);
}

/*
** test_vmv_v_x_i16mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf2_t 
test_vmv_v_x_i16mf2_ta(int16_t op1, size_t vl)
{
  return vmv_v_x_i16mf2_ta(op1, vl);
}

/*
** test_vmv_v_x_i16mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf2_t 
test_vmv_v_x_i16mf2_ta_vl31(int16_t op1)
{
  return vmv_v_x_i16mf2_ta(op1, 31);
}

/*
** test_vmv_v_x_i16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m1_t 
test_vmv_v_x_i16m1_ta(int16_t op1, size_t vl)
{
  return vmv_v_x_i16m1_ta(op1, vl);
}

/*
** test_vmv_v_x_i16m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m1_t 
test_vmv_v_x_i16m1_ta_vl31(int16_t op1)
{
  return vmv_v_x_i16m1_ta(op1, 31);
}

/*
** test_vmv_v_x_i16m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m2_t 
test_vmv_v_x_i16m2_ta(int16_t op1, size_t vl)
{
  return vmv_v_x_i16m2_ta(op1, vl);
}

/*
** test_vmv_v_x_i16m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m2_t 
test_vmv_v_x_i16m2_ta_vl31(int16_t op1)
{
  return vmv_v_x_i16m2_ta(op1, 31);
}

/*
** test_vmv_v_x_i16m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m4_t 
test_vmv_v_x_i16m4_ta(int16_t op1, size_t vl)
{
  return vmv_v_x_i16m4_ta(op1, vl);
}

/*
** test_vmv_v_x_i16m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m4_t 
test_vmv_v_x_i16m4_ta_vl31(int16_t op1)
{
  return vmv_v_x_i16m4_ta(op1, 31);
}

/*
** test_vmv_v_x_i16m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m8_t 
test_vmv_v_x_i16m8_ta(int16_t op1, size_t vl)
{
  return vmv_v_x_i16m8_ta(op1, vl);
}

/*
** test_vmv_v_x_i16m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m8_t 
test_vmv_v_x_i16m8_ta_vl31(int16_t op1)
{
  return vmv_v_x_i16m8_ta(op1, 31);
}

/*
** test_vmv_v_x_i32mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32mf2_t 
test_vmv_v_x_i32mf2_ta(int32_t op1, size_t vl)
{
  return vmv_v_x_i32mf2_ta(op1, vl);
}

/*
** test_vmv_v_x_i32mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32mf2_t 
test_vmv_v_x_i32mf2_ta_vl31(int32_t op1)
{
  return vmv_v_x_i32mf2_ta(op1, 31);
}

/*
** test_vmv_v_x_i32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m1_t 
test_vmv_v_x_i32m1_ta(int32_t op1, size_t vl)
{
  return vmv_v_x_i32m1_ta(op1, vl);
}

/*
** test_vmv_v_x_i32m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m1_t 
test_vmv_v_x_i32m1_ta_vl31(int32_t op1)
{
  return vmv_v_x_i32m1_ta(op1, 31);
}

/*
** test_vmv_v_x_i32m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m2_t 
test_vmv_v_x_i32m2_ta(int32_t op1, size_t vl)
{
  return vmv_v_x_i32m2_ta(op1, vl);
}

/*
** test_vmv_v_x_i32m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m2_t 
test_vmv_v_x_i32m2_ta_vl31(int32_t op1)
{
  return vmv_v_x_i32m2_ta(op1, 31);
}

/*
** test_vmv_v_x_i32m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m4_t 
test_vmv_v_x_i32m4_ta(int32_t op1, size_t vl)
{
  return vmv_v_x_i32m4_ta(op1, vl);
}

/*
** test_vmv_v_x_i32m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m4_t 
test_vmv_v_x_i32m4_ta_vl31(int32_t op1)
{
  return vmv_v_x_i32m4_ta(op1, 31);
}

/*
** test_vmv_v_x_i32m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m8_t 
test_vmv_v_x_i32m8_ta(int32_t op1, size_t vl)
{
  return vmv_v_x_i32m8_ta(op1, vl);
}

/*
** test_vmv_v_x_i32m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m8_t 
test_vmv_v_x_i32m8_ta_vl31(int32_t op1)
{
  return vmv_v_x_i32m8_ta(op1, 31);
}

/*
** test_vmv_v_x_i8mf8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf8_t 
test_vmv_v_x_i8mf8_tu(vint8mf8_t dest, int8_t op1, size_t vl)
{
  return vmv_v_x_i8mf8_tu(dest, op1, vl);
}

/*
** test_vmv_v_x_i8mf8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf8_t 
test_vmv_v_x_i8mf8_tu_vl31(vint8mf8_t dest, int8_t op1)
{
  return vmv_v_x_i8mf8_tu(dest, op1, 31);
}

/*
** test_vmv_v_x_i8mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf4_t 
test_vmv_v_x_i8mf4_tu(vint8mf4_t dest, int8_t op1, size_t vl)
{
  return vmv_v_x_i8mf4_tu(dest, op1, vl);
}

/*
** test_vmv_v_x_i8mf4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf4_t 
test_vmv_v_x_i8mf4_tu_vl31(vint8mf4_t dest, int8_t op1)
{
  return vmv_v_x_i8mf4_tu(dest, op1, 31);
}

/*
** test_vmv_v_x_i8mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf2_t 
test_vmv_v_x_i8mf2_tu(vint8mf2_t dest, int8_t op1, size_t vl)
{
  return vmv_v_x_i8mf2_tu(dest, op1, vl);
}

/*
** test_vmv_v_x_i8mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf2_t 
test_vmv_v_x_i8mf2_tu_vl31(vint8mf2_t dest, int8_t op1)
{
  return vmv_v_x_i8mf2_tu(dest, op1, 31);
}

/*
** test_vmv_v_x_i8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m1_t 
test_vmv_v_x_i8m1_tu(vint8m1_t dest, int8_t op1, size_t vl)
{
  return vmv_v_x_i8m1_tu(dest, op1, vl);
}

/*
** test_vmv_v_x_i8m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m1_t 
test_vmv_v_x_i8m1_tu_vl31(vint8m1_t dest, int8_t op1)
{
  return vmv_v_x_i8m1_tu(dest, op1, 31);
}

/*
** test_vmv_v_x_i8m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m2_t 
test_vmv_v_x_i8m2_tu(vint8m2_t dest, int8_t op1, size_t vl)
{
  return vmv_v_x_i8m2_tu(dest, op1, vl);
}

/*
** test_vmv_v_x_i8m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m2_t 
test_vmv_v_x_i8m2_tu_vl31(vint8m2_t dest, int8_t op1)
{
  return vmv_v_x_i8m2_tu(dest, op1, 31);
}

/*
** test_vmv_v_x_i8m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m4_t 
test_vmv_v_x_i8m4_tu(vint8m4_t dest, int8_t op1, size_t vl)
{
  return vmv_v_x_i8m4_tu(dest, op1, vl);
}

/*
** test_vmv_v_x_i8m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m4_t 
test_vmv_v_x_i8m4_tu_vl31(vint8m4_t dest, int8_t op1)
{
  return vmv_v_x_i8m4_tu(dest, op1, 31);
}

/*
** test_vmv_v_x_i8m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m8_t 
test_vmv_v_x_i8m8_tu(vint8m8_t dest, int8_t op1, size_t vl)
{
  return vmv_v_x_i8m8_tu(dest, op1, vl);
}

/*
** test_vmv_v_x_i8m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m8_t 
test_vmv_v_x_i8m8_tu_vl31(vint8m8_t dest, int8_t op1)
{
  return vmv_v_x_i8m8_tu(dest, op1, 31);
}

/*
** test_vmv_v_x_i16mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf4_t 
test_vmv_v_x_i16mf4_tu(vint16mf4_t dest, int16_t op1, size_t vl)
{
  return vmv_v_x_i16mf4_tu(dest, op1, vl);
}

/*
** test_vmv_v_x_i16mf4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf4_t 
test_vmv_v_x_i16mf4_tu_vl31(vint16mf4_t dest, int16_t op1)
{
  return vmv_v_x_i16mf4_tu(dest, op1, 31);
}

/*
** test_vmv_v_x_i16mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf2_t 
test_vmv_v_x_i16mf2_tu(vint16mf2_t dest, int16_t op1, size_t vl)
{
  return vmv_v_x_i16mf2_tu(dest, op1, vl);
}

/*
** test_vmv_v_x_i16mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf2_t 
test_vmv_v_x_i16mf2_tu_vl31(vint16mf2_t dest, int16_t op1)
{
  return vmv_v_x_i16mf2_tu(dest, op1, 31);
}

/*
** test_vmv_v_x_i16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m1_t 
test_vmv_v_x_i16m1_tu(vint16m1_t dest, int16_t op1, size_t vl)
{
  return vmv_v_x_i16m1_tu(dest, op1, vl);
}

/*
** test_vmv_v_x_i16m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m1_t 
test_vmv_v_x_i16m1_tu_vl31(vint16m1_t dest, int16_t op1)
{
  return vmv_v_x_i16m1_tu(dest, op1, 31);
}

/*
** test_vmv_v_x_i16m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m2_t 
test_vmv_v_x_i16m2_tu(vint16m2_t dest, int16_t op1, size_t vl)
{
  return vmv_v_x_i16m2_tu(dest, op1, vl);
}

/*
** test_vmv_v_x_i16m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m2_t 
test_vmv_v_x_i16m2_tu_vl31(vint16m2_t dest, int16_t op1)
{
  return vmv_v_x_i16m2_tu(dest, op1, 31);
}

/*
** test_vmv_v_x_i16m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m4_t 
test_vmv_v_x_i16m4_tu(vint16m4_t dest, int16_t op1, size_t vl)
{
  return vmv_v_x_i16m4_tu(dest, op1, vl);
}

/*
** test_vmv_v_x_i16m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m4_t 
test_vmv_v_x_i16m4_tu_vl31(vint16m4_t dest, int16_t op1)
{
  return vmv_v_x_i16m4_tu(dest, op1, 31);
}

/*
** test_vmv_v_x_i16m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m8_t 
test_vmv_v_x_i16m8_tu(vint16m8_t dest, int16_t op1, size_t vl)
{
  return vmv_v_x_i16m8_tu(dest, op1, vl);
}

/*
** test_vmv_v_x_i16m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m8_t 
test_vmv_v_x_i16m8_tu_vl31(vint16m8_t dest, int16_t op1)
{
  return vmv_v_x_i16m8_tu(dest, op1, 31);
}

/*
** test_vmv_v_x_i32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32mf2_t 
test_vmv_v_x_i32mf2_tu(vint32mf2_t dest, int32_t op1, size_t vl)
{
  return vmv_v_x_i32mf2_tu(dest, op1, vl);
}

/*
** test_vmv_v_x_i32mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32mf2_t 
test_vmv_v_x_i32mf2_tu_vl31(vint32mf2_t dest, int32_t op1)
{
  return vmv_v_x_i32mf2_tu(dest, op1, 31);
}

/*
** test_vmv_v_x_i32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m1_t 
test_vmv_v_x_i32m1_tu(vint32m1_t dest, int32_t op1, size_t vl)
{
  return vmv_v_x_i32m1_tu(dest, op1, vl);
}

/*
** test_vmv_v_x_i32m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m1_t 
test_vmv_v_x_i32m1_tu_vl31(vint32m1_t dest, int32_t op1)
{
  return vmv_v_x_i32m1_tu(dest, op1, 31);
}

/*
** test_vmv_v_x_i32m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m2_t 
test_vmv_v_x_i32m2_tu(vint32m2_t dest, int32_t op1, size_t vl)
{
  return vmv_v_x_i32m2_tu(dest, op1, vl);
}

/*
** test_vmv_v_x_i32m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m2_t 
test_vmv_v_x_i32m2_tu_vl31(vint32m2_t dest, int32_t op1)
{
  return vmv_v_x_i32m2_tu(dest, op1, 31);
}

/*
** test_vmv_v_x_i32m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m4_t 
test_vmv_v_x_i32m4_tu(vint32m4_t dest, int32_t op1, size_t vl)
{
  return vmv_v_x_i32m4_tu(dest, op1, vl);
}

/*
** test_vmv_v_x_i32m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m4_t 
test_vmv_v_x_i32m4_tu_vl31(vint32m4_t dest, int32_t op1)
{
  return vmv_v_x_i32m4_tu(dest, op1, 31);
}

/*
** test_vmv_v_x_i32m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m8_t 
test_vmv_v_x_i32m8_tu(vint32m8_t dest, int32_t op1, size_t vl)
{
  return vmv_v_x_i32m8_tu(dest, op1, vl);
}

/*
** test_vmv_v_x_i32m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m8_t 
test_vmv_v_x_i32m8_tu_vl31(vint32m8_t dest, int32_t op1)
{
  return vmv_v_x_i32m8_tu(dest, op1, 31);
}

/*
** test_vmv_v_x_i64m1_ta:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m1_t 
test_vmv_v_x_i64m1_ta(int64_t op1, size_t vl)
{
  return vmv_v_x_i64m1_ta(op1, vl);
}

/*
** test_vmv_v_x_i64m1_ta_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m1_t 
test_vmv_v_x_i64m1_ta_vl31(int64_t op1)
{
  return vmv_v_x_i64m1_ta(op1, 31);
}

/*
** test_vmv_v_x_i64m2_ta:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m2_t 
test_vmv_v_x_i64m2_ta(int64_t op1, size_t vl)
{
  return vmv_v_x_i64m2_ta(op1, vl);
}

/*
** test_vmv_v_x_i64m2_ta_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m2_t 
test_vmv_v_x_i64m2_ta_vl31(int64_t op1)
{
  return vmv_v_x_i64m2_ta(op1, 31);
}

/*
** test_vmv_v_x_i64m4_ta:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m4_t 
test_vmv_v_x_i64m4_ta(int64_t op1, size_t vl)
{
  return vmv_v_x_i64m4_ta(op1, vl);
}

/*
** test_vmv_v_x_i64m4_ta_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m4_t 
test_vmv_v_x_i64m4_ta_vl31(int64_t op1)
{
  return vmv_v_x_i64m4_ta(op1, 31);
}

/*
** test_vmv_v_x_i64m8_ta:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m8_t 
test_vmv_v_x_i64m8_ta(int64_t op1, size_t vl)
{
  return vmv_v_x_i64m8_ta(op1, vl);
}

/*
** test_vmv_v_x_i64m8_ta_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m8_t 
test_vmv_v_x_i64m8_ta_vl31(int64_t op1)
{
  return vmv_v_x_i64m8_ta(op1, 31);
}

/*
** test_vmv_v_x_i64m1_tu:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m1_t 
test_vmv_v_x_i64m1_tu(vint64m1_t dest, int64_t op1, size_t vl)
{
  return vmv_v_x_i64m1_tu(dest, op1, vl);
}

/*
** test_vmv_v_x_i64m1_tu_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m1_t 
test_vmv_v_x_i64m1_tu_vl31(vint64m1_t dest, int64_t op1)
{
  return vmv_v_x_i64m1_tu(dest, op1, 31);
}

/*
** test_vmv_v_x_i64m2_tu:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m2_t 
test_vmv_v_x_i64m2_tu(vint64m2_t dest, int64_t op1, size_t vl)
{
  return vmv_v_x_i64m2_tu(dest, op1, vl);
}

/*
** test_vmv_v_x_i64m2_tu_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m2_t 
test_vmv_v_x_i64m2_tu_vl31(vint64m2_t dest, int64_t op1)
{
  return vmv_v_x_i64m2_tu(dest, op1, 31);
}

/*
** test_vmv_v_x_i64m4_tu:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m4_t 
test_vmv_v_x_i64m4_tu(vint64m4_t dest, int64_t op1, size_t vl)
{
  return vmv_v_x_i64m4_tu(dest, op1, vl);
}

/*
** test_vmv_v_x_i64m4_tu_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m4_t 
test_vmv_v_x_i64m4_tu_vl31(vint64m4_t dest, int64_t op1)
{
  return vmv_v_x_i64m4_tu(dest, op1, 31);
}

/*
** test_vmv_v_x_i64m8_tu:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m8_t 
test_vmv_v_x_i64m8_tu(vint64m8_t dest, int64_t op1, size_t vl)
{
  return vmv_v_x_i64m8_tu(dest, op1, vl);
}

/*
** test_vmv_v_x_i64m8_tu_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m8_t 
test_vmv_v_x_i64m8_tu_vl31(vint64m8_t dest, int64_t op1)
{
  return vmv_v_x_i64m8_tu(dest, op1, 31);
}

/*
** test_vmv_v_x_i8mf8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf8_t 
test_vmv_v_x_i8mf8_ta_vl32(int8_t op1)
{
  return vmv_v_x_i8mf8_ta(op1, 32);
}

/*
** test_vmv_v_x_i8mf4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf4_t 
test_vmv_v_x_i8mf4_ta_vl32(int8_t op1)
{
  return vmv_v_x_i8mf4_ta(op1, 32);
}

/*
** test_vmv_v_x_i8mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf2_t 
test_vmv_v_x_i8mf2_ta_vl32(int8_t op1)
{
  return vmv_v_x_i8mf2_ta(op1, 32);
}

/*
** test_vmv_v_x_i8m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m1_t 
test_vmv_v_x_i8m1_ta_vl32(int8_t op1)
{
  return vmv_v_x_i8m1_ta(op1, 32);
}

/*
** test_vmv_v_x_i8m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m2_t 
test_vmv_v_x_i8m2_ta_vl32(int8_t op1)
{
  return vmv_v_x_i8m2_ta(op1, 32);
}

/*
** test_vmv_v_x_i8m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m4_t 
test_vmv_v_x_i8m4_ta_vl32(int8_t op1)
{
  return vmv_v_x_i8m4_ta(op1, 32);
}

/*
** test_vmv_v_x_i8m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m8_t 
test_vmv_v_x_i8m8_ta_vl32(int8_t op1)
{
  return vmv_v_x_i8m8_ta(op1, 32);
}

/*
** test_vmv_v_x_i16mf4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf4_t 
test_vmv_v_x_i16mf4_ta_vl32(int16_t op1)
{
  return vmv_v_x_i16mf4_ta(op1, 32);
}

/*
** test_vmv_v_x_i16mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf2_t 
test_vmv_v_x_i16mf2_ta_vl32(int16_t op1)
{
  return vmv_v_x_i16mf2_ta(op1, 32);
}

/*
** test_vmv_v_x_i16m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m1_t 
test_vmv_v_x_i16m1_ta_vl32(int16_t op1)
{
  return vmv_v_x_i16m1_ta(op1, 32);
}

/*
** test_vmv_v_x_i16m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m2_t 
test_vmv_v_x_i16m2_ta_vl32(int16_t op1)
{
  return vmv_v_x_i16m2_ta(op1, 32);
}

/*
** test_vmv_v_x_i16m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m4_t 
test_vmv_v_x_i16m4_ta_vl32(int16_t op1)
{
  return vmv_v_x_i16m4_ta(op1, 32);
}

/*
** test_vmv_v_x_i16m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m8_t 
test_vmv_v_x_i16m8_ta_vl32(int16_t op1)
{
  return vmv_v_x_i16m8_ta(op1, 32);
}

/*
** test_vmv_v_x_i32mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32mf2_t 
test_vmv_v_x_i32mf2_ta_vl32(int32_t op1)
{
  return vmv_v_x_i32mf2_ta(op1, 32);
}

/*
** test_vmv_v_x_i32m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m1_t 
test_vmv_v_x_i32m1_ta_vl32(int32_t op1)
{
  return vmv_v_x_i32m1_ta(op1, 32);
}

/*
** test_vmv_v_x_i32m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m2_t 
test_vmv_v_x_i32m2_ta_vl32(int32_t op1)
{
  return vmv_v_x_i32m2_ta(op1, 32);
}

/*
** test_vmv_v_x_i32m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m4_t 
test_vmv_v_x_i32m4_ta_vl32(int32_t op1)
{
  return vmv_v_x_i32m4_ta(op1, 32);
}

/*
** test_vmv_v_x_i32m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m8_t 
test_vmv_v_x_i32m8_ta_vl32(int32_t op1)
{
  return vmv_v_x_i32m8_ta(op1, 32);
}

/*
** test_vmv_v_x_i8mf8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf8_t 
test_vmv_v_x_i8mf8_tu_vl32(vint8mf8_t dest, int8_t op1)
{
  return vmv_v_x_i8mf8_tu(dest, op1, 32);
}

/*
** test_vmv_v_x_i8mf4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf4_t 
test_vmv_v_x_i8mf4_tu_vl32(vint8mf4_t dest, int8_t op1)
{
  return vmv_v_x_i8mf4_tu(dest, op1, 32);
}

/*
** test_vmv_v_x_i8mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf2_t 
test_vmv_v_x_i8mf2_tu_vl32(vint8mf2_t dest, int8_t op1)
{
  return vmv_v_x_i8mf2_tu(dest, op1, 32);
}

/*
** test_vmv_v_x_i8m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m1_t 
test_vmv_v_x_i8m1_tu_vl32(vint8m1_t dest, int8_t op1)
{
  return vmv_v_x_i8m1_tu(dest, op1, 32);
}

/*
** test_vmv_v_x_i8m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m2_t 
test_vmv_v_x_i8m2_tu_vl32(vint8m2_t dest, int8_t op1)
{
  return vmv_v_x_i8m2_tu(dest, op1, 32);
}

/*
** test_vmv_v_x_i8m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m4_t 
test_vmv_v_x_i8m4_tu_vl32(vint8m4_t dest, int8_t op1)
{
  return vmv_v_x_i8m4_tu(dest, op1, 32);
}

/*
** test_vmv_v_x_i8m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m8_t 
test_vmv_v_x_i8m8_tu_vl32(vint8m8_t dest, int8_t op1)
{
  return vmv_v_x_i8m8_tu(dest, op1, 32);
}

/*
** test_vmv_v_x_i16mf4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf4_t 
test_vmv_v_x_i16mf4_tu_vl32(vint16mf4_t dest, int16_t op1)
{
  return vmv_v_x_i16mf4_tu(dest, op1, 32);
}

/*
** test_vmv_v_x_i16mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf2_t 
test_vmv_v_x_i16mf2_tu_vl32(vint16mf2_t dest, int16_t op1)
{
  return vmv_v_x_i16mf2_tu(dest, op1, 32);
}

/*
** test_vmv_v_x_i16m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m1_t 
test_vmv_v_x_i16m1_tu_vl32(vint16m1_t dest, int16_t op1)
{
  return vmv_v_x_i16m1_tu(dest, op1, 32);
}

/*
** test_vmv_v_x_i16m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m2_t 
test_vmv_v_x_i16m2_tu_vl32(vint16m2_t dest, int16_t op1)
{
  return vmv_v_x_i16m2_tu(dest, op1, 32);
}

/*
** test_vmv_v_x_i16m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m4_t 
test_vmv_v_x_i16m4_tu_vl32(vint16m4_t dest, int16_t op1)
{
  return vmv_v_x_i16m4_tu(dest, op1, 32);
}

/*
** test_vmv_v_x_i16m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m8_t 
test_vmv_v_x_i16m8_tu_vl32(vint16m8_t dest, int16_t op1)
{
  return vmv_v_x_i16m8_tu(dest, op1, 32);
}

/*
** test_vmv_v_x_i32mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32mf2_t 
test_vmv_v_x_i32mf2_tu_vl32(vint32mf2_t dest, int32_t op1)
{
  return vmv_v_x_i32mf2_tu(dest, op1, 32);
}

/*
** test_vmv_v_x_i32m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m1_t 
test_vmv_v_x_i32m1_tu_vl32(vint32m1_t dest, int32_t op1)
{
  return vmv_v_x_i32m1_tu(dest, op1, 32);
}

/*
** test_vmv_v_x_i32m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m2_t 
test_vmv_v_x_i32m2_tu_vl32(vint32m2_t dest, int32_t op1)
{
  return vmv_v_x_i32m2_tu(dest, op1, 32);
}

/*
** test_vmv_v_x_i32m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m4_t 
test_vmv_v_x_i32m4_tu_vl32(vint32m4_t dest, int32_t op1)
{
  return vmv_v_x_i32m4_tu(dest, op1, 32);
}

/*
** test_vmv_v_x_i32m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m8_t 
test_vmv_v_x_i32m8_tu_vl32(vint32m8_t dest, int32_t op1)
{
  return vmv_v_x_i32m8_tu(dest, op1, 32);
}

/*
** test_vmv_v_x_i64m1_ta_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m1_t 
test_vmv_v_x_i64m1_ta_vl32(int64_t op1)
{
  return vmv_v_x_i64m1_ta(op1, 32);
}

/*
** test_vmv_v_x_i64m2_ta_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m2_t 
test_vmv_v_x_i64m2_ta_vl32(int64_t op1)
{
  return vmv_v_x_i64m2_ta(op1, 32);
}

/*
** test_vmv_v_x_i64m4_ta_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m4_t 
test_vmv_v_x_i64m4_ta_vl32(int64_t op1)
{
  return vmv_v_x_i64m4_ta(op1, 32);
}

/*
** test_vmv_v_x_i64m8_ta_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m8_t 
test_vmv_v_x_i64m8_ta_vl32(int64_t op1)
{
  return vmv_v_x_i64m8_ta(op1, 32);
}

/*
** test_vmv_v_x_i64m1_tu_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m1_t 
test_vmv_v_x_i64m1_tu_vl32(vint64m1_t dest, int64_t op1)
{
  return vmv_v_x_i64m1_tu(dest, op1, 32);
}

/*
** test_vmv_v_x_i64m2_tu_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m2_t 
test_vmv_v_x_i64m2_tu_vl32(vint64m2_t dest, int64_t op1)
{
  return vmv_v_x_i64m2_tu(dest, op1, 32);
}

/*
** test_vmv_v_x_i64m4_tu_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m4_t 
test_vmv_v_x_i64m4_tu_vl32(vint64m4_t dest, int64_t op1)
{
  return vmv_v_x_i64m4_tu(dest, op1, 32);
}

/*
** test_vmv_v_x_i64m8_tu_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m8_t 
test_vmv_v_x_i64m8_tu_vl32(vint64m8_t dest, int64_t op1)
{
  return vmv_v_x_i64m8_tu(dest, op1, 32);
}

/*
** test_vmv_v_x_i8mf8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf8_t 
test_vmv_v_x_i8mf8_vl32(int8_t op1)
{
  return vmv_v_x_i8mf8(op1, 32);
}

/*
** test_vmv_v_x_i8mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf4_t 
test_vmv_v_x_i8mf4_vl32(int8_t op1)
{
  return vmv_v_x_i8mf4(op1, 32);
}

/*
** test_vmv_v_x_i8mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf2_t 
test_vmv_v_x_i8mf2_vl32(int8_t op1)
{
  return vmv_v_x_i8mf2(op1, 32);
}

/*
** test_vmv_v_x_i8m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m1_t 
test_vmv_v_x_i8m1_vl32(int8_t op1)
{
  return vmv_v_x_i8m1(op1, 32);
}

/*
** test_vmv_v_x_i8m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m2_t 
test_vmv_v_x_i8m2_vl32(int8_t op1)
{
  return vmv_v_x_i8m2(op1, 32);
}

/*
** test_vmv_v_x_i8m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m4_t 
test_vmv_v_x_i8m4_vl32(int8_t op1)
{
  return vmv_v_x_i8m4(op1, 32);
}

/*
** test_vmv_v_x_i8m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m8_t 
test_vmv_v_x_i8m8_vl32(int8_t op1)
{
  return vmv_v_x_i8m8(op1, 32);
}

/*
** test_vmv_v_x_i16mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf4_t 
test_vmv_v_x_i16mf4_vl32(int16_t op1)
{
  return vmv_v_x_i16mf4(op1, 32);
}

/*
** test_vmv_v_x_i16mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf2_t 
test_vmv_v_x_i16mf2_vl32(int16_t op1)
{
  return vmv_v_x_i16mf2(op1, 32);
}

/*
** test_vmv_v_x_i16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m1_t 
test_vmv_v_x_i16m1_vl32(int16_t op1)
{
  return vmv_v_x_i16m1(op1, 32);
}

/*
** test_vmv_v_x_i16m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m2_t 
test_vmv_v_x_i16m2_vl32(int16_t op1)
{
  return vmv_v_x_i16m2(op1, 32);
}

/*
** test_vmv_v_x_i16m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m4_t 
test_vmv_v_x_i16m4_vl32(int16_t op1)
{
  return vmv_v_x_i16m4(op1, 32);
}

/*
** test_vmv_v_x_i16m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m8_t 
test_vmv_v_x_i16m8_vl32(int16_t op1)
{
  return vmv_v_x_i16m8(op1, 32);
}

/*
** test_vmv_v_x_i32mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32mf2_t 
test_vmv_v_x_i32mf2_vl32(int32_t op1)
{
  return vmv_v_x_i32mf2(op1, 32);
}

/*
** test_vmv_v_x_i32m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m1_t 
test_vmv_v_x_i32m1_vl32(int32_t op1)
{
  return vmv_v_x_i32m1(op1, 32);
}

/*
** test_vmv_v_x_i32m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m2_t 
test_vmv_v_x_i32m2_vl32(int32_t op1)
{
  return vmv_v_x_i32m2(op1, 32);
}

/*
** test_vmv_v_x_i32m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m4_t 
test_vmv_v_x_i32m4_vl32(int32_t op1)
{
  return vmv_v_x_i32m4(op1, 32);
}

/*
** test_vmv_v_x_i32m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m8_t 
test_vmv_v_x_i32m8_vl32(int32_t op1)
{
  return vmv_v_x_i32m8(op1, 32);
}

/*
** test_vmv_v_x_i64m1_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m1_t 
test_vmv_v_x_i64m1_vl32(int64_t op1)
{
  return vmv_v_x_i64m1(op1, 32);
}

/*
** test_vmv_v_x_i64m2_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m2_t 
test_vmv_v_x_i64m2_vl32(int64_t op1)
{
  return vmv_v_x_i64m2(op1, 32);
}

/*
** test_vmv_v_x_i64m4_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m4_t 
test_vmv_v_x_i64m4_vl32(int64_t op1)
{
  return vmv_v_x_i64m4(op1, 32);
}

/*
** test_vmv_v_x_i64m8_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m8_t 
test_vmv_v_x_i64m8_vl32(int64_t op1)
{
  return vmv_v_x_i64m8(op1, 32);
}

/*
** test_vmv_v_x_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf8_t 
test_vmv_v_x_u8mf8(uint8_t op1, size_t vl)
{
  return vmv_v_x_u8mf8(op1, vl);
}

/*
** test_vmv_v_x_u8mf8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf8_t 
test_vmv_v_x_u8mf8_vl31(uint8_t op1)
{
  return vmv_v_x_u8mf8(op1, 31);
}

/*
** test_vmv_v_x_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf4_t 
test_vmv_v_x_u8mf4(uint8_t op1, size_t vl)
{
  return vmv_v_x_u8mf4(op1, vl);
}

/*
** test_vmv_v_x_u8mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf4_t 
test_vmv_v_x_u8mf4_vl31(uint8_t op1)
{
  return vmv_v_x_u8mf4(op1, 31);
}

/*
** test_vmv_v_x_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf2_t 
test_vmv_v_x_u8mf2(uint8_t op1, size_t vl)
{
  return vmv_v_x_u8mf2(op1, vl);
}

/*
** test_vmv_v_x_u8mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf2_t 
test_vmv_v_x_u8mf2_vl31(uint8_t op1)
{
  return vmv_v_x_u8mf2(op1, 31);
}

/*
** test_vmv_v_x_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m1_t 
test_vmv_v_x_u8m1(uint8_t op1, size_t vl)
{
  return vmv_v_x_u8m1(op1, vl);
}

/*
** test_vmv_v_x_u8m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m1_t 
test_vmv_v_x_u8m1_vl31(uint8_t op1)
{
  return vmv_v_x_u8m1(op1, 31);
}

/*
** test_vmv_v_x_u8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m2_t 
test_vmv_v_x_u8m2(uint8_t op1, size_t vl)
{
  return vmv_v_x_u8m2(op1, vl);
}

/*
** test_vmv_v_x_u8m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m2_t 
test_vmv_v_x_u8m2_vl31(uint8_t op1)
{
  return vmv_v_x_u8m2(op1, 31);
}

/*
** test_vmv_v_x_u8m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m4_t 
test_vmv_v_x_u8m4(uint8_t op1, size_t vl)
{
  return vmv_v_x_u8m4(op1, vl);
}

/*
** test_vmv_v_x_u8m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m4_t 
test_vmv_v_x_u8m4_vl31(uint8_t op1)
{
  return vmv_v_x_u8m4(op1, 31);
}

/*
** test_vmv_v_x_u8m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m8_t 
test_vmv_v_x_u8m8(uint8_t op1, size_t vl)
{
  return vmv_v_x_u8m8(op1, vl);
}

/*
** test_vmv_v_x_u8m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m8_t 
test_vmv_v_x_u8m8_vl31(uint8_t op1)
{
  return vmv_v_x_u8m8(op1, 31);
}

/*
** test_vmv_v_x_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4_t 
test_vmv_v_x_u16mf4(uint16_t op1, size_t vl)
{
  return vmv_v_x_u16mf4(op1, vl);
}

/*
** test_vmv_v_x_u16mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4_t 
test_vmv_v_x_u16mf4_vl31(uint16_t op1)
{
  return vmv_v_x_u16mf4(op1, 31);
}

/*
** test_vmv_v_x_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2_t 
test_vmv_v_x_u16mf2(uint16_t op1, size_t vl)
{
  return vmv_v_x_u16mf2(op1, vl);
}

/*
** test_vmv_v_x_u16mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2_t 
test_vmv_v_x_u16mf2_vl31(uint16_t op1)
{
  return vmv_v_x_u16mf2(op1, 31);
}

/*
** test_vmv_v_x_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1_t 
test_vmv_v_x_u16m1(uint16_t op1, size_t vl)
{
  return vmv_v_x_u16m1(op1, vl);
}

/*
** test_vmv_v_x_u16m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1_t 
test_vmv_v_x_u16m1_vl31(uint16_t op1)
{
  return vmv_v_x_u16m1(op1, 31);
}

/*
** test_vmv_v_x_u16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m2_t 
test_vmv_v_x_u16m2(uint16_t op1, size_t vl)
{
  return vmv_v_x_u16m2(op1, vl);
}

/*
** test_vmv_v_x_u16m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m2_t 
test_vmv_v_x_u16m2_vl31(uint16_t op1)
{
  return vmv_v_x_u16m2(op1, 31);
}

/*
** test_vmv_v_x_u16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m4_t 
test_vmv_v_x_u16m4(uint16_t op1, size_t vl)
{
  return vmv_v_x_u16m4(op1, vl);
}

/*
** test_vmv_v_x_u16m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m4_t 
test_vmv_v_x_u16m4_vl31(uint16_t op1)
{
  return vmv_v_x_u16m4(op1, 31);
}

/*
** test_vmv_v_x_u16m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m8_t 
test_vmv_v_x_u16m8(uint16_t op1, size_t vl)
{
  return vmv_v_x_u16m8(op1, vl);
}

/*
** test_vmv_v_x_u16m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m8_t 
test_vmv_v_x_u16m8_vl31(uint16_t op1)
{
  return vmv_v_x_u16m8(op1, 31);
}

/*
** test_vmv_v_x_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2_t 
test_vmv_v_x_u32mf2(uint32_t op1, size_t vl)
{
  return vmv_v_x_u32mf2(op1, vl);
}

/*
** test_vmv_v_x_u32mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2_t 
test_vmv_v_x_u32mf2_vl31(uint32_t op1)
{
  return vmv_v_x_u32mf2(op1, 31);
}

/*
** test_vmv_v_x_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1_t 
test_vmv_v_x_u32m1(uint32_t op1, size_t vl)
{
  return vmv_v_x_u32m1(op1, vl);
}

/*
** test_vmv_v_x_u32m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1_t 
test_vmv_v_x_u32m1_vl31(uint32_t op1)
{
  return vmv_v_x_u32m1(op1, 31);
}

/*
** test_vmv_v_x_u32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m2_t 
test_vmv_v_x_u32m2(uint32_t op1, size_t vl)
{
  return vmv_v_x_u32m2(op1, vl);
}

/*
** test_vmv_v_x_u32m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m2_t 
test_vmv_v_x_u32m2_vl31(uint32_t op1)
{
  return vmv_v_x_u32m2(op1, 31);
}

/*
** test_vmv_v_x_u32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m4_t 
test_vmv_v_x_u32m4(uint32_t op1, size_t vl)
{
  return vmv_v_x_u32m4(op1, vl);
}

/*
** test_vmv_v_x_u32m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m4_t 
test_vmv_v_x_u32m4_vl31(uint32_t op1)
{
  return vmv_v_x_u32m4(op1, 31);
}

/*
** test_vmv_v_x_u32m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m8_t 
test_vmv_v_x_u32m8(uint32_t op1, size_t vl)
{
  return vmv_v_x_u32m8(op1, vl);
}

/*
** test_vmv_v_x_u32m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m8_t 
test_vmv_v_x_u32m8_vl31(uint32_t op1)
{
  return vmv_v_x_u32m8(op1, 31);
}

/*
** test_vmv_v_x_u64m1:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1_t 
test_vmv_v_x_u64m1(uint64_t op1, size_t vl)
{
  return vmv_v_x_u64m1(op1, vl);
}

/*
** test_vmv_v_x_u64m1_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1_t 
test_vmv_v_x_u64m1_vl31(uint64_t op1)
{
  return vmv_v_x_u64m1(op1, 31);
}

/*
** test_vmv_v_x_u64m2:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m2_t 
test_vmv_v_x_u64m2(uint64_t op1, size_t vl)
{
  return vmv_v_x_u64m2(op1, vl);
}

/*
** test_vmv_v_x_u64m2_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m2_t 
test_vmv_v_x_u64m2_vl31(uint64_t op1)
{
  return vmv_v_x_u64m2(op1, 31);
}

/*
** test_vmv_v_x_u64m4:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m4_t 
test_vmv_v_x_u64m4(uint64_t op1, size_t vl)
{
  return vmv_v_x_u64m4(op1, vl);
}

/*
** test_vmv_v_x_u64m4_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m4_t 
test_vmv_v_x_u64m4_vl31(uint64_t op1)
{
  return vmv_v_x_u64m4(op1, 31);
}

/*
** test_vmv_v_x_u64m8:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m8_t 
test_vmv_v_x_u64m8(uint64_t op1, size_t vl)
{
  return vmv_v_x_u64m8(op1, vl);
}

/*
** test_vmv_v_x_u64m8_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m8_t 
test_vmv_v_x_u64m8_vl31(uint64_t op1)
{
  return vmv_v_x_u64m8(op1, 31);
}

/*
** test_vmv_v_x_u8mf8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf8_t 
test_vmv_v_x_u8mf8_ta(uint8_t op1, size_t vl)
{
  return vmv_v_x_u8mf8_ta(op1, vl);
}

/*
** test_vmv_v_x_u8mf8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf8_t 
test_vmv_v_x_u8mf8_ta_vl31(uint8_t op1)
{
  return vmv_v_x_u8mf8_ta(op1, 31);
}

/*
** test_vmv_v_x_u8mf4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf4_t 
test_vmv_v_x_u8mf4_ta(uint8_t op1, size_t vl)
{
  return vmv_v_x_u8mf4_ta(op1, vl);
}

/*
** test_vmv_v_x_u8mf4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf4_t 
test_vmv_v_x_u8mf4_ta_vl31(uint8_t op1)
{
  return vmv_v_x_u8mf4_ta(op1, 31);
}

/*
** test_vmv_v_x_u8mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf2_t 
test_vmv_v_x_u8mf2_ta(uint8_t op1, size_t vl)
{
  return vmv_v_x_u8mf2_ta(op1, vl);
}

/*
** test_vmv_v_x_u8mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf2_t 
test_vmv_v_x_u8mf2_ta_vl31(uint8_t op1)
{
  return vmv_v_x_u8mf2_ta(op1, 31);
}

/*
** test_vmv_v_x_u8m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m1_t 
test_vmv_v_x_u8m1_ta(uint8_t op1, size_t vl)
{
  return vmv_v_x_u8m1_ta(op1, vl);
}

/*
** test_vmv_v_x_u8m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m1_t 
test_vmv_v_x_u8m1_ta_vl31(uint8_t op1)
{
  return vmv_v_x_u8m1_ta(op1, 31);
}

/*
** test_vmv_v_x_u8m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m2_t 
test_vmv_v_x_u8m2_ta(uint8_t op1, size_t vl)
{
  return vmv_v_x_u8m2_ta(op1, vl);
}

/*
** test_vmv_v_x_u8m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m2_t 
test_vmv_v_x_u8m2_ta_vl31(uint8_t op1)
{
  return vmv_v_x_u8m2_ta(op1, 31);
}

/*
** test_vmv_v_x_u8m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m4_t 
test_vmv_v_x_u8m4_ta(uint8_t op1, size_t vl)
{
  return vmv_v_x_u8m4_ta(op1, vl);
}

/*
** test_vmv_v_x_u8m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m4_t 
test_vmv_v_x_u8m4_ta_vl31(uint8_t op1)
{
  return vmv_v_x_u8m4_ta(op1, 31);
}

/*
** test_vmv_v_x_u8m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m8_t 
test_vmv_v_x_u8m8_ta(uint8_t op1, size_t vl)
{
  return vmv_v_x_u8m8_ta(op1, vl);
}

/*
** test_vmv_v_x_u8m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m8_t 
test_vmv_v_x_u8m8_ta_vl31(uint8_t op1)
{
  return vmv_v_x_u8m8_ta(op1, 31);
}

/*
** test_vmv_v_x_u16mf4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4_t 
test_vmv_v_x_u16mf4_ta(uint16_t op1, size_t vl)
{
  return vmv_v_x_u16mf4_ta(op1, vl);
}

/*
** test_vmv_v_x_u16mf4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4_t 
test_vmv_v_x_u16mf4_ta_vl31(uint16_t op1)
{
  return vmv_v_x_u16mf4_ta(op1, 31);
}

/*
** test_vmv_v_x_u16mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2_t 
test_vmv_v_x_u16mf2_ta(uint16_t op1, size_t vl)
{
  return vmv_v_x_u16mf2_ta(op1, vl);
}

/*
** test_vmv_v_x_u16mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2_t 
test_vmv_v_x_u16mf2_ta_vl31(uint16_t op1)
{
  return vmv_v_x_u16mf2_ta(op1, 31);
}

/*
** test_vmv_v_x_u16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1_t 
test_vmv_v_x_u16m1_ta(uint16_t op1, size_t vl)
{
  return vmv_v_x_u16m1_ta(op1, vl);
}

/*
** test_vmv_v_x_u16m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1_t 
test_vmv_v_x_u16m1_ta_vl31(uint16_t op1)
{
  return vmv_v_x_u16m1_ta(op1, 31);
}

/*
** test_vmv_v_x_u16m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m2_t 
test_vmv_v_x_u16m2_ta(uint16_t op1, size_t vl)
{
  return vmv_v_x_u16m2_ta(op1, vl);
}

/*
** test_vmv_v_x_u16m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m2_t 
test_vmv_v_x_u16m2_ta_vl31(uint16_t op1)
{
  return vmv_v_x_u16m2_ta(op1, 31);
}

/*
** test_vmv_v_x_u16m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m4_t 
test_vmv_v_x_u16m4_ta(uint16_t op1, size_t vl)
{
  return vmv_v_x_u16m4_ta(op1, vl);
}

/*
** test_vmv_v_x_u16m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m4_t 
test_vmv_v_x_u16m4_ta_vl31(uint16_t op1)
{
  return vmv_v_x_u16m4_ta(op1, 31);
}

/*
** test_vmv_v_x_u16m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m8_t 
test_vmv_v_x_u16m8_ta(uint16_t op1, size_t vl)
{
  return vmv_v_x_u16m8_ta(op1, vl);
}

/*
** test_vmv_v_x_u16m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m8_t 
test_vmv_v_x_u16m8_ta_vl31(uint16_t op1)
{
  return vmv_v_x_u16m8_ta(op1, 31);
}

/*
** test_vmv_v_x_u32mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2_t 
test_vmv_v_x_u32mf2_ta(uint32_t op1, size_t vl)
{
  return vmv_v_x_u32mf2_ta(op1, vl);
}

/*
** test_vmv_v_x_u32mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2_t 
test_vmv_v_x_u32mf2_ta_vl31(uint32_t op1)
{
  return vmv_v_x_u32mf2_ta(op1, 31);
}

/*
** test_vmv_v_x_u32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1_t 
test_vmv_v_x_u32m1_ta(uint32_t op1, size_t vl)
{
  return vmv_v_x_u32m1_ta(op1, vl);
}

/*
** test_vmv_v_x_u32m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1_t 
test_vmv_v_x_u32m1_ta_vl31(uint32_t op1)
{
  return vmv_v_x_u32m1_ta(op1, 31);
}

/*
** test_vmv_v_x_u32m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m2_t 
test_vmv_v_x_u32m2_ta(uint32_t op1, size_t vl)
{
  return vmv_v_x_u32m2_ta(op1, vl);
}

/*
** test_vmv_v_x_u32m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m2_t 
test_vmv_v_x_u32m2_ta_vl31(uint32_t op1)
{
  return vmv_v_x_u32m2_ta(op1, 31);
}

/*
** test_vmv_v_x_u32m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m4_t 
test_vmv_v_x_u32m4_ta(uint32_t op1, size_t vl)
{
  return vmv_v_x_u32m4_ta(op1, vl);
}

/*
** test_vmv_v_x_u32m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m4_t 
test_vmv_v_x_u32m4_ta_vl31(uint32_t op1)
{
  return vmv_v_x_u32m4_ta(op1, 31);
}

/*
** test_vmv_v_x_u32m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m8_t 
test_vmv_v_x_u32m8_ta(uint32_t op1, size_t vl)
{
  return vmv_v_x_u32m8_ta(op1, vl);
}

/*
** test_vmv_v_x_u32m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m8_t 
test_vmv_v_x_u32m8_ta_vl31(uint32_t op1)
{
  return vmv_v_x_u32m8_ta(op1, 31);
}

/*
** test_vmv_v_x_u8mf8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf8_t 
test_vmv_v_x_u8mf8_tu(vuint8mf8_t dest, uint8_t op1, size_t vl)
{
  return vmv_v_x_u8mf8_tu(dest, op1, vl);
}

/*
** test_vmv_v_x_u8mf8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf8_t 
test_vmv_v_x_u8mf8_tu_vl31(vuint8mf8_t dest, uint8_t op1)
{
  return vmv_v_x_u8mf8_tu(dest, op1, 31);
}

/*
** test_vmv_v_x_u8mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf4_t 
test_vmv_v_x_u8mf4_tu(vuint8mf4_t dest, uint8_t op1, size_t vl)
{
  return vmv_v_x_u8mf4_tu(dest, op1, vl);
}

/*
** test_vmv_v_x_u8mf4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf4_t 
test_vmv_v_x_u8mf4_tu_vl31(vuint8mf4_t dest, uint8_t op1)
{
  return vmv_v_x_u8mf4_tu(dest, op1, 31);
}

/*
** test_vmv_v_x_u8mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf2_t 
test_vmv_v_x_u8mf2_tu(vuint8mf2_t dest, uint8_t op1, size_t vl)
{
  return vmv_v_x_u8mf2_tu(dest, op1, vl);
}

/*
** test_vmv_v_x_u8mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf2_t 
test_vmv_v_x_u8mf2_tu_vl31(vuint8mf2_t dest, uint8_t op1)
{
  return vmv_v_x_u8mf2_tu(dest, op1, 31);
}

/*
** test_vmv_v_x_u8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m1_t 
test_vmv_v_x_u8m1_tu(vuint8m1_t dest, uint8_t op1, size_t vl)
{
  return vmv_v_x_u8m1_tu(dest, op1, vl);
}

/*
** test_vmv_v_x_u8m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m1_t 
test_vmv_v_x_u8m1_tu_vl31(vuint8m1_t dest, uint8_t op1)
{
  return vmv_v_x_u8m1_tu(dest, op1, 31);
}

/*
** test_vmv_v_x_u8m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m2_t 
test_vmv_v_x_u8m2_tu(vuint8m2_t dest, uint8_t op1, size_t vl)
{
  return vmv_v_x_u8m2_tu(dest, op1, vl);
}

/*
** test_vmv_v_x_u8m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m2_t 
test_vmv_v_x_u8m2_tu_vl31(vuint8m2_t dest, uint8_t op1)
{
  return vmv_v_x_u8m2_tu(dest, op1, 31);
}

/*
** test_vmv_v_x_u8m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m4_t 
test_vmv_v_x_u8m4_tu(vuint8m4_t dest, uint8_t op1, size_t vl)
{
  return vmv_v_x_u8m4_tu(dest, op1, vl);
}

/*
** test_vmv_v_x_u8m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m4_t 
test_vmv_v_x_u8m4_tu_vl31(vuint8m4_t dest, uint8_t op1)
{
  return vmv_v_x_u8m4_tu(dest, op1, 31);
}

/*
** test_vmv_v_x_u8m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m8_t 
test_vmv_v_x_u8m8_tu(vuint8m8_t dest, uint8_t op1, size_t vl)
{
  return vmv_v_x_u8m8_tu(dest, op1, vl);
}

/*
** test_vmv_v_x_u8m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m8_t 
test_vmv_v_x_u8m8_tu_vl31(vuint8m8_t dest, uint8_t op1)
{
  return vmv_v_x_u8m8_tu(dest, op1, 31);
}

/*
** test_vmv_v_x_u16mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4_t 
test_vmv_v_x_u16mf4_tu(vuint16mf4_t dest, uint16_t op1, size_t vl)
{
  return vmv_v_x_u16mf4_tu(dest, op1, vl);
}

/*
** test_vmv_v_x_u16mf4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4_t 
test_vmv_v_x_u16mf4_tu_vl31(vuint16mf4_t dest, uint16_t op1)
{
  return vmv_v_x_u16mf4_tu(dest, op1, 31);
}

/*
** test_vmv_v_x_u16mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2_t 
test_vmv_v_x_u16mf2_tu(vuint16mf2_t dest, uint16_t op1, size_t vl)
{
  return vmv_v_x_u16mf2_tu(dest, op1, vl);
}

/*
** test_vmv_v_x_u16mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2_t 
test_vmv_v_x_u16mf2_tu_vl31(vuint16mf2_t dest, uint16_t op1)
{
  return vmv_v_x_u16mf2_tu(dest, op1, 31);
}

/*
** test_vmv_v_x_u16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1_t 
test_vmv_v_x_u16m1_tu(vuint16m1_t dest, uint16_t op1, size_t vl)
{
  return vmv_v_x_u16m1_tu(dest, op1, vl);
}

/*
** test_vmv_v_x_u16m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1_t 
test_vmv_v_x_u16m1_tu_vl31(vuint16m1_t dest, uint16_t op1)
{
  return vmv_v_x_u16m1_tu(dest, op1, 31);
}

/*
** test_vmv_v_x_u16m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m2_t 
test_vmv_v_x_u16m2_tu(vuint16m2_t dest, uint16_t op1, size_t vl)
{
  return vmv_v_x_u16m2_tu(dest, op1, vl);
}

/*
** test_vmv_v_x_u16m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m2_t 
test_vmv_v_x_u16m2_tu_vl31(vuint16m2_t dest, uint16_t op1)
{
  return vmv_v_x_u16m2_tu(dest, op1, 31);
}

/*
** test_vmv_v_x_u16m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m4_t 
test_vmv_v_x_u16m4_tu(vuint16m4_t dest, uint16_t op1, size_t vl)
{
  return vmv_v_x_u16m4_tu(dest, op1, vl);
}

/*
** test_vmv_v_x_u16m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m4_t 
test_vmv_v_x_u16m4_tu_vl31(vuint16m4_t dest, uint16_t op1)
{
  return vmv_v_x_u16m4_tu(dest, op1, 31);
}

/*
** test_vmv_v_x_u16m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m8_t 
test_vmv_v_x_u16m8_tu(vuint16m8_t dest, uint16_t op1, size_t vl)
{
  return vmv_v_x_u16m8_tu(dest, op1, vl);
}

/*
** test_vmv_v_x_u16m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m8_t 
test_vmv_v_x_u16m8_tu_vl31(vuint16m8_t dest, uint16_t op1)
{
  return vmv_v_x_u16m8_tu(dest, op1, 31);
}

/*
** test_vmv_v_x_u32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2_t 
test_vmv_v_x_u32mf2_tu(vuint32mf2_t dest, uint32_t op1, size_t vl)
{
  return vmv_v_x_u32mf2_tu(dest, op1, vl);
}

/*
** test_vmv_v_x_u32mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2_t 
test_vmv_v_x_u32mf2_tu_vl31(vuint32mf2_t dest, uint32_t op1)
{
  return vmv_v_x_u32mf2_tu(dest, op1, 31);
}

/*
** test_vmv_v_x_u32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1_t 
test_vmv_v_x_u32m1_tu(vuint32m1_t dest, uint32_t op1, size_t vl)
{
  return vmv_v_x_u32m1_tu(dest, op1, vl);
}

/*
** test_vmv_v_x_u32m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1_t 
test_vmv_v_x_u32m1_tu_vl31(vuint32m1_t dest, uint32_t op1)
{
  return vmv_v_x_u32m1_tu(dest, op1, 31);
}

/*
** test_vmv_v_x_u32m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m2_t 
test_vmv_v_x_u32m2_tu(vuint32m2_t dest, uint32_t op1, size_t vl)
{
  return vmv_v_x_u32m2_tu(dest, op1, vl);
}

/*
** test_vmv_v_x_u32m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m2_t 
test_vmv_v_x_u32m2_tu_vl31(vuint32m2_t dest, uint32_t op1)
{
  return vmv_v_x_u32m2_tu(dest, op1, 31);
}

/*
** test_vmv_v_x_u32m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m4_t 
test_vmv_v_x_u32m4_tu(vuint32m4_t dest, uint32_t op1, size_t vl)
{
  return vmv_v_x_u32m4_tu(dest, op1, vl);
}

/*
** test_vmv_v_x_u32m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m4_t 
test_vmv_v_x_u32m4_tu_vl31(vuint32m4_t dest, uint32_t op1)
{
  return vmv_v_x_u32m4_tu(dest, op1, 31);
}

/*
** test_vmv_v_x_u32m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m8_t 
test_vmv_v_x_u32m8_tu(vuint32m8_t dest, uint32_t op1, size_t vl)
{
  return vmv_v_x_u32m8_tu(dest, op1, vl);
}

/*
** test_vmv_v_x_u32m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m8_t 
test_vmv_v_x_u32m8_tu_vl31(vuint32m8_t dest, uint32_t op1)
{
  return vmv_v_x_u32m8_tu(dest, op1, 31);
}

/*
** test_vmv_v_x_u64m1_ta:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1_t 
test_vmv_v_x_u64m1_ta(uint64_t op1, size_t vl)
{
  return vmv_v_x_u64m1_ta(op1, vl);
}

/*
** test_vmv_v_x_u64m1_ta_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1_t 
test_vmv_v_x_u64m1_ta_vl31(uint64_t op1)
{
  return vmv_v_x_u64m1_ta(op1, 31);
}

/*
** test_vmv_v_x_u64m2_ta:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m2_t 
test_vmv_v_x_u64m2_ta(uint64_t op1, size_t vl)
{
  return vmv_v_x_u64m2_ta(op1, vl);
}

/*
** test_vmv_v_x_u64m2_ta_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m2_t 
test_vmv_v_x_u64m2_ta_vl31(uint64_t op1)
{
  return vmv_v_x_u64m2_ta(op1, 31);
}

/*
** test_vmv_v_x_u64m4_ta:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m4_t 
test_vmv_v_x_u64m4_ta(uint64_t op1, size_t vl)
{
  return vmv_v_x_u64m4_ta(op1, vl);
}

/*
** test_vmv_v_x_u64m4_ta_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m4_t 
test_vmv_v_x_u64m4_ta_vl31(uint64_t op1)
{
  return vmv_v_x_u64m4_ta(op1, 31);
}

/*
** test_vmv_v_x_u64m8_ta:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m8_t 
test_vmv_v_x_u64m8_ta(uint64_t op1, size_t vl)
{
  return vmv_v_x_u64m8_ta(op1, vl);
}

/*
** test_vmv_v_x_u64m8_ta_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m8_t 
test_vmv_v_x_u64m8_ta_vl31(uint64_t op1)
{
  return vmv_v_x_u64m8_ta(op1, 31);
}

/*
** test_vmv_v_x_u64m1_tu:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1_t 
test_vmv_v_x_u64m1_tu(vuint64m1_t dest, uint64_t op1, size_t vl)
{
  return vmv_v_x_u64m1_tu(dest, op1, vl);
}

/*
** test_vmv_v_x_u64m1_tu_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1_t 
test_vmv_v_x_u64m1_tu_vl31(vuint64m1_t dest, uint64_t op1)
{
  return vmv_v_x_u64m1_tu(dest, op1, 31);
}

/*
** test_vmv_v_x_u64m2_tu:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m2_t 
test_vmv_v_x_u64m2_tu(vuint64m2_t dest, uint64_t op1, size_t vl)
{
  return vmv_v_x_u64m2_tu(dest, op1, vl);
}

/*
** test_vmv_v_x_u64m2_tu_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m2_t 
test_vmv_v_x_u64m2_tu_vl31(vuint64m2_t dest, uint64_t op1)
{
  return vmv_v_x_u64m2_tu(dest, op1, 31);
}

/*
** test_vmv_v_x_u64m4_tu:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m4_t 
test_vmv_v_x_u64m4_tu(vuint64m4_t dest, uint64_t op1, size_t vl)
{
  return vmv_v_x_u64m4_tu(dest, op1, vl);
}

/*
** test_vmv_v_x_u64m4_tu_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m4_t 
test_vmv_v_x_u64m4_tu_vl31(vuint64m4_t dest, uint64_t op1)
{
  return vmv_v_x_u64m4_tu(dest, op1, 31);
}

/*
** test_vmv_v_x_u64m8_tu:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m8_t 
test_vmv_v_x_u64m8_tu(vuint64m8_t dest, uint64_t op1, size_t vl)
{
  return vmv_v_x_u64m8_tu(dest, op1, vl);
}

/*
** test_vmv_v_x_u64m8_tu_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m8_t 
test_vmv_v_x_u64m8_tu_vl31(vuint64m8_t dest, uint64_t op1)
{
  return vmv_v_x_u64m8_tu(dest, op1, 31);
}

/*
** test_vmv_v_x_u8mf8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf8_t 
test_vmv_v_x_u8mf8_ta_vl32(uint8_t op1)
{
  return vmv_v_x_u8mf8_ta(op1, 32);
}

/*
** test_vmv_v_x_u8mf4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf4_t 
test_vmv_v_x_u8mf4_ta_vl32(uint8_t op1)
{
  return vmv_v_x_u8mf4_ta(op1, 32);
}

/*
** test_vmv_v_x_u8mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf2_t 
test_vmv_v_x_u8mf2_ta_vl32(uint8_t op1)
{
  return vmv_v_x_u8mf2_ta(op1, 32);
}

/*
** test_vmv_v_x_u8m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m1_t 
test_vmv_v_x_u8m1_ta_vl32(uint8_t op1)
{
  return vmv_v_x_u8m1_ta(op1, 32);
}

/*
** test_vmv_v_x_u8m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m2_t 
test_vmv_v_x_u8m2_ta_vl32(uint8_t op1)
{
  return vmv_v_x_u8m2_ta(op1, 32);
}

/*
** test_vmv_v_x_u8m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m4_t 
test_vmv_v_x_u8m4_ta_vl32(uint8_t op1)
{
  return vmv_v_x_u8m4_ta(op1, 32);
}

/*
** test_vmv_v_x_u8m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m8_t 
test_vmv_v_x_u8m8_ta_vl32(uint8_t op1)
{
  return vmv_v_x_u8m8_ta(op1, 32);
}

/*
** test_vmv_v_x_u16mf4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4_t 
test_vmv_v_x_u16mf4_ta_vl32(uint16_t op1)
{
  return vmv_v_x_u16mf4_ta(op1, 32);
}

/*
** test_vmv_v_x_u16mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2_t 
test_vmv_v_x_u16mf2_ta_vl32(uint16_t op1)
{
  return vmv_v_x_u16mf2_ta(op1, 32);
}

/*
** test_vmv_v_x_u16m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1_t 
test_vmv_v_x_u16m1_ta_vl32(uint16_t op1)
{
  return vmv_v_x_u16m1_ta(op1, 32);
}

/*
** test_vmv_v_x_u16m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m2_t 
test_vmv_v_x_u16m2_ta_vl32(uint16_t op1)
{
  return vmv_v_x_u16m2_ta(op1, 32);
}

/*
** test_vmv_v_x_u16m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m4_t 
test_vmv_v_x_u16m4_ta_vl32(uint16_t op1)
{
  return vmv_v_x_u16m4_ta(op1, 32);
}

/*
** test_vmv_v_x_u16m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m8_t 
test_vmv_v_x_u16m8_ta_vl32(uint16_t op1)
{
  return vmv_v_x_u16m8_ta(op1, 32);
}

/*
** test_vmv_v_x_u32mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2_t 
test_vmv_v_x_u32mf2_ta_vl32(uint32_t op1)
{
  return vmv_v_x_u32mf2_ta(op1, 32);
}

/*
** test_vmv_v_x_u32m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1_t 
test_vmv_v_x_u32m1_ta_vl32(uint32_t op1)
{
  return vmv_v_x_u32m1_ta(op1, 32);
}

/*
** test_vmv_v_x_u32m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m2_t 
test_vmv_v_x_u32m2_ta_vl32(uint32_t op1)
{
  return vmv_v_x_u32m2_ta(op1, 32);
}

/*
** test_vmv_v_x_u32m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m4_t 
test_vmv_v_x_u32m4_ta_vl32(uint32_t op1)
{
  return vmv_v_x_u32m4_ta(op1, 32);
}

/*
** test_vmv_v_x_u32m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m8_t 
test_vmv_v_x_u32m8_ta_vl32(uint32_t op1)
{
  return vmv_v_x_u32m8_ta(op1, 32);
}

/*
** test_vmv_v_x_u8mf8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf8_t 
test_vmv_v_x_u8mf8_tu_vl32(vuint8mf8_t dest, uint8_t op1)
{
  return vmv_v_x_u8mf8_tu(dest, op1, 32);
}

/*
** test_vmv_v_x_u8mf4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf4_t 
test_vmv_v_x_u8mf4_tu_vl32(vuint8mf4_t dest, uint8_t op1)
{
  return vmv_v_x_u8mf4_tu(dest, op1, 32);
}

/*
** test_vmv_v_x_u8mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf2_t 
test_vmv_v_x_u8mf2_tu_vl32(vuint8mf2_t dest, uint8_t op1)
{
  return vmv_v_x_u8mf2_tu(dest, op1, 32);
}

/*
** test_vmv_v_x_u8m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m1_t 
test_vmv_v_x_u8m1_tu_vl32(vuint8m1_t dest, uint8_t op1)
{
  return vmv_v_x_u8m1_tu(dest, op1, 32);
}

/*
** test_vmv_v_x_u8m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m2_t 
test_vmv_v_x_u8m2_tu_vl32(vuint8m2_t dest, uint8_t op1)
{
  return vmv_v_x_u8m2_tu(dest, op1, 32);
}

/*
** test_vmv_v_x_u8m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m4_t 
test_vmv_v_x_u8m4_tu_vl32(vuint8m4_t dest, uint8_t op1)
{
  return vmv_v_x_u8m4_tu(dest, op1, 32);
}

/*
** test_vmv_v_x_u8m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m8_t 
test_vmv_v_x_u8m8_tu_vl32(vuint8m8_t dest, uint8_t op1)
{
  return vmv_v_x_u8m8_tu(dest, op1, 32);
}

/*
** test_vmv_v_x_u16mf4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4_t 
test_vmv_v_x_u16mf4_tu_vl32(vuint16mf4_t dest, uint16_t op1)
{
  return vmv_v_x_u16mf4_tu(dest, op1, 32);
}

/*
** test_vmv_v_x_u16mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2_t 
test_vmv_v_x_u16mf2_tu_vl32(vuint16mf2_t dest, uint16_t op1)
{
  return vmv_v_x_u16mf2_tu(dest, op1, 32);
}

/*
** test_vmv_v_x_u16m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1_t 
test_vmv_v_x_u16m1_tu_vl32(vuint16m1_t dest, uint16_t op1)
{
  return vmv_v_x_u16m1_tu(dest, op1, 32);
}

/*
** test_vmv_v_x_u16m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m2_t 
test_vmv_v_x_u16m2_tu_vl32(vuint16m2_t dest, uint16_t op1)
{
  return vmv_v_x_u16m2_tu(dest, op1, 32);
}

/*
** test_vmv_v_x_u16m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m4_t 
test_vmv_v_x_u16m4_tu_vl32(vuint16m4_t dest, uint16_t op1)
{
  return vmv_v_x_u16m4_tu(dest, op1, 32);
}

/*
** test_vmv_v_x_u16m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m8_t 
test_vmv_v_x_u16m8_tu_vl32(vuint16m8_t dest, uint16_t op1)
{
  return vmv_v_x_u16m8_tu(dest, op1, 32);
}

/*
** test_vmv_v_x_u32mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2_t 
test_vmv_v_x_u32mf2_tu_vl32(vuint32mf2_t dest, uint32_t op1)
{
  return vmv_v_x_u32mf2_tu(dest, op1, 32);
}

/*
** test_vmv_v_x_u32m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1_t 
test_vmv_v_x_u32m1_tu_vl32(vuint32m1_t dest, uint32_t op1)
{
  return vmv_v_x_u32m1_tu(dest, op1, 32);
}

/*
** test_vmv_v_x_u32m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m2_t 
test_vmv_v_x_u32m2_tu_vl32(vuint32m2_t dest, uint32_t op1)
{
  return vmv_v_x_u32m2_tu(dest, op1, 32);
}

/*
** test_vmv_v_x_u32m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m4_t 
test_vmv_v_x_u32m4_tu_vl32(vuint32m4_t dest, uint32_t op1)
{
  return vmv_v_x_u32m4_tu(dest, op1, 32);
}

/*
** test_vmv_v_x_u32m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m8_t 
test_vmv_v_x_u32m8_tu_vl32(vuint32m8_t dest, uint32_t op1)
{
  return vmv_v_x_u32m8_tu(dest, op1, 32);
}

/*
** test_vmv_v_x_u64m1_ta_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1_t 
test_vmv_v_x_u64m1_ta_vl32(uint64_t op1)
{
  return vmv_v_x_u64m1_ta(op1, 32);
}

/*
** test_vmv_v_x_u64m2_ta_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m2_t 
test_vmv_v_x_u64m2_ta_vl32(uint64_t op1)
{
  return vmv_v_x_u64m2_ta(op1, 32);
}

/*
** test_vmv_v_x_u64m4_ta_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m4_t 
test_vmv_v_x_u64m4_ta_vl32(uint64_t op1)
{
  return vmv_v_x_u64m4_ta(op1, 32);
}

/*
** test_vmv_v_x_u64m8_ta_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m8_t 
test_vmv_v_x_u64m8_ta_vl32(uint64_t op1)
{
  return vmv_v_x_u64m8_ta(op1, 32);
}

/*
** test_vmv_v_x_u64m1_tu_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1_t 
test_vmv_v_x_u64m1_tu_vl32(vuint64m1_t dest, uint64_t op1)
{
  return vmv_v_x_u64m1_tu(dest, op1, 32);
}

/*
** test_vmv_v_x_u64m2_tu_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m2_t 
test_vmv_v_x_u64m2_tu_vl32(vuint64m2_t dest, uint64_t op1)
{
  return vmv_v_x_u64m2_tu(dest, op1, 32);
}

/*
** test_vmv_v_x_u64m4_tu_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m4_t 
test_vmv_v_x_u64m4_tu_vl32(vuint64m4_t dest, uint64_t op1)
{
  return vmv_v_x_u64m4_tu(dest, op1, 32);
}

/*
** test_vmv_v_x_u64m8_tu_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m8_t 
test_vmv_v_x_u64m8_tu_vl32(vuint64m8_t dest, uint64_t op1)
{
  return vmv_v_x_u64m8_tu(dest, op1, 32);
}

/*
** test_vmv_v_x_u8mf8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf8_t 
test_vmv_v_x_u8mf8_vl32(uint8_t op1)
{
  return vmv_v_x_u8mf8(op1, 32);
}

/*
** test_vmv_v_x_u8mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf4_t 
test_vmv_v_x_u8mf4_vl32(uint8_t op1)
{
  return vmv_v_x_u8mf4(op1, 32);
}

/*
** test_vmv_v_x_u8mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf2_t 
test_vmv_v_x_u8mf2_vl32(uint8_t op1)
{
  return vmv_v_x_u8mf2(op1, 32);
}

/*
** test_vmv_v_x_u8m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m1_t 
test_vmv_v_x_u8m1_vl32(uint8_t op1)
{
  return vmv_v_x_u8m1(op1, 32);
}

/*
** test_vmv_v_x_u8m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m2_t 
test_vmv_v_x_u8m2_vl32(uint8_t op1)
{
  return vmv_v_x_u8m2(op1, 32);
}

/*
** test_vmv_v_x_u8m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m4_t 
test_vmv_v_x_u8m4_vl32(uint8_t op1)
{
  return vmv_v_x_u8m4(op1, 32);
}

/*
** test_vmv_v_x_u8m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m8_t 
test_vmv_v_x_u8m8_vl32(uint8_t op1)
{
  return vmv_v_x_u8m8(op1, 32);
}

/*
** test_vmv_v_x_u16mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4_t 
test_vmv_v_x_u16mf4_vl32(uint16_t op1)
{
  return vmv_v_x_u16mf4(op1, 32);
}

/*
** test_vmv_v_x_u16mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2_t 
test_vmv_v_x_u16mf2_vl32(uint16_t op1)
{
  return vmv_v_x_u16mf2(op1, 32);
}

/*
** test_vmv_v_x_u16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1_t 
test_vmv_v_x_u16m1_vl32(uint16_t op1)
{
  return vmv_v_x_u16m1(op1, 32);
}

/*
** test_vmv_v_x_u16m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m2_t 
test_vmv_v_x_u16m2_vl32(uint16_t op1)
{
  return vmv_v_x_u16m2(op1, 32);
}

/*
** test_vmv_v_x_u16m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m4_t 
test_vmv_v_x_u16m4_vl32(uint16_t op1)
{
  return vmv_v_x_u16m4(op1, 32);
}

/*
** test_vmv_v_x_u16m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m8_t 
test_vmv_v_x_u16m8_vl32(uint16_t op1)
{
  return vmv_v_x_u16m8(op1, 32);
}

/*
** test_vmv_v_x_u32mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2_t 
test_vmv_v_x_u32mf2_vl32(uint32_t op1)
{
  return vmv_v_x_u32mf2(op1, 32);
}

/*
** test_vmv_v_x_u32m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1_t 
test_vmv_v_x_u32m1_vl32(uint32_t op1)
{
  return vmv_v_x_u32m1(op1, 32);
}

/*
** test_vmv_v_x_u32m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m2_t 
test_vmv_v_x_u32m2_vl32(uint32_t op1)
{
  return vmv_v_x_u32m2(op1, 32);
}

/*
** test_vmv_v_x_u32m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m4_t 
test_vmv_v_x_u32m4_vl32(uint32_t op1)
{
  return vmv_v_x_u32m4(op1, 32);
}

/*
** test_vmv_v_x_u32m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m8_t 
test_vmv_v_x_u32m8_vl32(uint32_t op1)
{
  return vmv_v_x_u32m8(op1, 32);
}

/*
** test_vmv_v_x_u64m1_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1_t 
test_vmv_v_x_u64m1_vl32(uint64_t op1)
{
  return vmv_v_x_u64m1(op1, 32);
}

/*
** test_vmv_v_x_u64m2_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m2_t 
test_vmv_v_x_u64m2_vl32(uint64_t op1)
{
  return vmv_v_x_u64m2(op1, 32);
}

/*
** test_vmv_v_x_u64m4_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m4_t 
test_vmv_v_x_u64m4_vl32(uint64_t op1)
{
  return vmv_v_x_u64m4(op1, 32);
}

/*
** test_vmv_v_x_u64m8_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m8_t 
test_vmv_v_x_u64m8_vl32(uint64_t op1)
{
  return vmv_v_x_u64m8(op1, 32);
}

/*
** test_vmv_x_s_i8mf8_i8:
**  ...
**	vsetivli\s+zero,\s*0,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
int8_t
test_vmv_x_s_i8mf8_i8(vint8mf8_t src)
{
  return vmv_x_s_i8mf8_i8(src);
}

/*
** test_vmv_x_s_i8mf4_i8:
**  ...
**	vsetivli\s+zero,\s*0,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
int8_t
test_vmv_x_s_i8mf4_i8(vint8mf4_t src)
{
  return vmv_x_s_i8mf4_i8(src);
}

/*
** test_vmv_x_s_i8mf2_i8:
**  ...
**	vsetivli\s+zero,\s*0,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
int8_t
test_vmv_x_s_i8mf2_i8(vint8mf2_t src)
{
  return vmv_x_s_i8mf2_i8(src);
}

/*
** test_vmv_x_s_i8m1_i8:
**  ...
**	vsetivli\s+zero,\s*0,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
int8_t
test_vmv_x_s_i8m1_i8(vint8m1_t src)
{
  return vmv_x_s_i8m1_i8(src);
}

/*
** test_vmv_x_s_i8m2_i8:
**  ...
**	vsetivli\s+zero,\s*0,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
int8_t
test_vmv_x_s_i8m2_i8(vint8m2_t src)
{
  return vmv_x_s_i8m2_i8(src);
}

/*
** test_vmv_x_s_i8m4_i8:
**  ...
**	vsetivli\s+zero,\s*0,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
int8_t
test_vmv_x_s_i8m4_i8(vint8m4_t src)
{
  return vmv_x_s_i8m4_i8(src);
}

/*
** test_vmv_x_s_i8m8_i8:
**  ...
**	vsetivli\s+zero,\s*0,\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
int8_t
test_vmv_x_s_i8m8_i8(vint8m8_t src)
{
  return vmv_x_s_i8m8_i8(src);
}

/*
** test_vmv_x_s_i16mf4_i16:
**  ...
**	vsetivli\s+zero,\s*0,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
int16_t
test_vmv_x_s_i16mf4_i16(vint16mf4_t src)
{
  return vmv_x_s_i16mf4_i16(src);
}

/*
** test_vmv_x_s_i16mf2_i16:
**  ...
**	vsetivli\s+zero,\s*0,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
int16_t
test_vmv_x_s_i16mf2_i16(vint16mf2_t src)
{
  return vmv_x_s_i16mf2_i16(src);
}

/*
** test_vmv_x_s_i16m1_i16:
**  ...
**	vsetivli\s+zero,\s*0,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
int16_t
test_vmv_x_s_i16m1_i16(vint16m1_t src)
{
  return vmv_x_s_i16m1_i16(src);
}

/*
** test_vmv_x_s_i16m2_i16:
**  ...
**	vsetivli\s+zero,\s*0,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
int16_t
test_vmv_x_s_i16m2_i16(vint16m2_t src)
{
  return vmv_x_s_i16m2_i16(src);
}

/*
** test_vmv_x_s_i16m4_i16:
**  ...
**	vsetivli\s+zero,\s*0,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
int16_t
test_vmv_x_s_i16m4_i16(vint16m4_t src)
{
  return vmv_x_s_i16m4_i16(src);
}

/*
** test_vmv_x_s_i16m8_i16:
**  ...
**	vsetivli\s+zero,\s*0,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
int16_t
test_vmv_x_s_i16m8_i16(vint16m8_t src)
{
  return vmv_x_s_i16m8_i16(src);
}

/*
** test_vmv_x_s_i32mf2_i32:
**  ...
**	vsetivli\s+zero,\s*0,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
int32_t
test_vmv_x_s_i32mf2_i32(vint32mf2_t src)
{
  return vmv_x_s_i32mf2_i32(src);
}

/*
** test_vmv_x_s_i32m1_i32:
**  ...
**	vsetivli\s+zero,\s*0,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
int32_t
test_vmv_x_s_i32m1_i32(vint32m1_t src)
{
  return vmv_x_s_i32m1_i32(src);
}

/*
** test_vmv_x_s_i32m2_i32:
**  ...
**	vsetivli\s+zero,\s*0,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
int32_t
test_vmv_x_s_i32m2_i32(vint32m2_t src)
{
  return vmv_x_s_i32m2_i32(src);
}

/*
** test_vmv_x_s_i32m4_i32:
**  ...
**	vsetivli\s+zero,\s*0,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
int32_t
test_vmv_x_s_i32m4_i32(vint32m4_t src)
{
  return vmv_x_s_i32m4_i32(src);
}

/*
** test_vmv_x_s_i32m8_i32:
**  ...
**	vsetivli\s+zero,\s*0,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
int32_t
test_vmv_x_s_i32m8_i32(vint32m8_t src)
{
  return vmv_x_s_i32m8_i32(src);
}

/*
** test_vmv_x_s_i64m1_i64:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*0,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
int64_t
test_vmv_x_s_i64m1_i64(vint64m1_t src)
{
  return vmv_x_s_i64m1_i64(src);
}

/*
** test_vmv_x_s_i64m2_i64:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*0,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
int64_t
test_vmv_x_s_i64m2_i64(vint64m2_t src)
{
  return vmv_x_s_i64m2_i64(src);
}

/*
** test_vmv_x_s_i64m4_i64:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*0,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
int64_t
test_vmv_x_s_i64m4_i64(vint64m4_t src)
{
  return vmv_x_s_i64m4_i64(src);
}

/*
** test_vmv_x_s_i64m8_i64:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*0,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
int64_t
test_vmv_x_s_i64m8_i64(vint64m8_t src)
{
  return vmv_x_s_i64m8_i64(src);
}

/*
** test_vmv_x_s_u8mf8_u8:
**  ...
**	vsetivli\s+zero,\s*0,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
uint8_t
test_vmv_x_s_u8mf8_u8(vuint8mf8_t src)
{
  return vmv_x_s_u8mf8_u8(src);
}

/*
** test_vmv_x_s_u8mf4_u8:
**  ...
**	vsetivli\s+zero,\s*0,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
uint8_t
test_vmv_x_s_u8mf4_u8(vuint8mf4_t src)
{
  return vmv_x_s_u8mf4_u8(src);
}

/*
** test_vmv_x_s_u8mf2_u8:
**  ...
**	vsetivli\s+zero,\s*0,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
uint8_t
test_vmv_x_s_u8mf2_u8(vuint8mf2_t src)
{
  return vmv_x_s_u8mf2_u8(src);
}

/*
** test_vmv_x_s_u8m1_u8:
**  ...
**	vsetivli\s+zero,\s*0,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
uint8_t
test_vmv_x_s_u8m1_u8(vuint8m1_t src)
{
  return vmv_x_s_u8m1_u8(src);
}

/*
** test_vmv_x_s_u8m2_u8:
**  ...
**	vsetivli\s+zero,\s*0,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
uint8_t
test_vmv_x_s_u8m2_u8(vuint8m2_t src)
{
  return vmv_x_s_u8m2_u8(src);
}

/*
** test_vmv_x_s_u8m4_u8:
**  ...
**	vsetivli\s+zero,\s*0,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
uint8_t
test_vmv_x_s_u8m4_u8(vuint8m4_t src)
{
  return vmv_x_s_u8m4_u8(src);
}

/*
** test_vmv_x_s_u8m8_u8:
**  ...
**	vsetivli\s+zero,\s*0,\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
uint8_t
test_vmv_x_s_u8m8_u8(vuint8m8_t src)
{
  return vmv_x_s_u8m8_u8(src);
}

/*
** test_vmv_x_s_u16mf4_u16:
**  ...
**	vsetivli\s+zero,\s*0,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
uint16_t
test_vmv_x_s_u16mf4_u16(vuint16mf4_t src)
{
  return vmv_x_s_u16mf4_u16(src);
}

/*
** test_vmv_x_s_u16mf2_u16:
**  ...
**	vsetivli\s+zero,\s*0,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
uint16_t
test_vmv_x_s_u16mf2_u16(vuint16mf2_t src)
{
  return vmv_x_s_u16mf2_u16(src);
}

/*
** test_vmv_x_s_u16m1_u16:
**  ...
**	vsetivli\s+zero,\s*0,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
uint16_t
test_vmv_x_s_u16m1_u16(vuint16m1_t src)
{
  return vmv_x_s_u16m1_u16(src);
}

/*
** test_vmv_x_s_u16m2_u16:
**  ...
**	vsetivli\s+zero,\s*0,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
uint16_t
test_vmv_x_s_u16m2_u16(vuint16m2_t src)
{
  return vmv_x_s_u16m2_u16(src);
}

/*
** test_vmv_x_s_u16m4_u16:
**  ...
**	vsetivli\s+zero,\s*0,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
uint16_t
test_vmv_x_s_u16m4_u16(vuint16m4_t src)
{
  return vmv_x_s_u16m4_u16(src);
}

/*
** test_vmv_x_s_u16m8_u16:
**  ...
**	vsetivli\s+zero,\s*0,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
uint16_t
test_vmv_x_s_u16m8_u16(vuint16m8_t src)
{
  return vmv_x_s_u16m8_u16(src);
}

/*
** test_vmv_x_s_u32mf2_u32:
**  ...
**	vsetivli\s+zero,\s*0,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
uint32_t
test_vmv_x_s_u32mf2_u32(vuint32mf2_t src)
{
  return vmv_x_s_u32mf2_u32(src);
}

/*
** test_vmv_x_s_u32m1_u32:
**  ...
**	vsetivli\s+zero,\s*0,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
uint32_t
test_vmv_x_s_u32m1_u32(vuint32m1_t src)
{
  return vmv_x_s_u32m1_u32(src);
}

/*
** test_vmv_x_s_u32m2_u32:
**  ...
**	vsetivli\s+zero,\s*0,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
uint32_t
test_vmv_x_s_u32m2_u32(vuint32m2_t src)
{
  return vmv_x_s_u32m2_u32(src);
}

/*
** test_vmv_x_s_u32m4_u32:
**  ...
**	vsetivli\s+zero,\s*0,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
uint32_t
test_vmv_x_s_u32m4_u32(vuint32m4_t src)
{
  return vmv_x_s_u32m4_u32(src);
}

/*
** test_vmv_x_s_u32m8_u32:
**  ...
**	vsetivli\s+zero,\s*0,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
uint32_t
test_vmv_x_s_u32m8_u32(vuint32m8_t src)
{
  return vmv_x_s_u32m8_u32(src);
}

/*
** test_vmv_x_s_u64m1_u64:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*0,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
uint64_t
test_vmv_x_s_u64m1_u64(vuint64m1_t src)
{
  return vmv_x_s_u64m1_u64(src);
}

/*
** test_vmv_x_s_u64m2_u64:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*0,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
uint64_t
test_vmv_x_s_u64m2_u64(vuint64m2_t src)
{
  return vmv_x_s_u64m2_u64(src);
}

/*
** test_vmv_x_s_u64m4_u64:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*0,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
uint64_t
test_vmv_x_s_u64m4_u64(vuint64m4_t src)
{
  return vmv_x_s_u64m4_u64(src);
}

/*
** test_vmv_x_s_u64m8_u64:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*0,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
uint64_t
test_vmv_x_s_u64m8_u64(vuint64m8_t src)
{
  return vmv_x_s_u64m8_u64(src);
}

