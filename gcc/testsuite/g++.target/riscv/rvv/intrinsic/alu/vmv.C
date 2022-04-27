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
extern "C" vint8mf8_t 
test_vmv_s_x_i8mf8(vint8mf8_t dest, int8_t op1, size_t vl)
{
  return vmv_s(dest, op1, vl);
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
extern "C" vint8mf4_t 
test_vmv_s_x_i8mf4(vint8mf4_t dest, int8_t op1, size_t vl)
{
  return vmv_s(dest, op1, vl);
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
extern "C" vint8mf2_t 
test_vmv_s_x_i8mf2(vint8mf2_t dest, int8_t op1, size_t vl)
{
  return vmv_s(dest, op1, vl);
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
extern "C" vint8m1_t 
test_vmv_s_x_i8m1(vint8m1_t dest, int8_t op1, size_t vl)
{
  return vmv_s(dest, op1, vl);
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
extern "C" vint8m2_t 
test_vmv_s_x_i8m2(vint8m2_t dest, int8_t op1, size_t vl)
{
  return vmv_s(dest, op1, vl);
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
extern "C" vint8m4_t 
test_vmv_s_x_i8m4(vint8m4_t dest, int8_t op1, size_t vl)
{
  return vmv_s(dest, op1, vl);
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
extern "C" vint8m8_t 
test_vmv_s_x_i8m8(vint8m8_t dest, int8_t op1, size_t vl)
{
  return vmv_s(dest, op1, vl);
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
extern "C" vint16mf4_t 
test_vmv_s_x_i16mf4(vint16mf4_t dest, int16_t op1, size_t vl)
{
  return vmv_s(dest, op1, vl);
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
extern "C" vint16mf2_t 
test_vmv_s_x_i16mf2(vint16mf2_t dest, int16_t op1, size_t vl)
{
  return vmv_s(dest, op1, vl);
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
extern "C" vint16m1_t 
test_vmv_s_x_i16m1(vint16m1_t dest, int16_t op1, size_t vl)
{
  return vmv_s(dest, op1, vl);
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
extern "C" vint16m2_t 
test_vmv_s_x_i16m2(vint16m2_t dest, int16_t op1, size_t vl)
{
  return vmv_s(dest, op1, vl);
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
extern "C" vint16m4_t 
test_vmv_s_x_i16m4(vint16m4_t dest, int16_t op1, size_t vl)
{
  return vmv_s(dest, op1, vl);
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
extern "C" vint16m8_t 
test_vmv_s_x_i16m8(vint16m8_t dest, int16_t op1, size_t vl)
{
  return vmv_s(dest, op1, vl);
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
extern "C" vint32mf2_t 
test_vmv_s_x_i32mf2(vint32mf2_t dest, int32_t op1, size_t vl)
{
  return vmv_s(dest, op1, vl);
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
extern "C" vint32m1_t 
test_vmv_s_x_i32m1(vint32m1_t dest, int32_t op1, size_t vl)
{
  return vmv_s(dest, op1, vl);
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
extern "C" vint32m2_t 
test_vmv_s_x_i32m2(vint32m2_t dest, int32_t op1, size_t vl)
{
  return vmv_s(dest, op1, vl);
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
extern "C" vint32m4_t 
test_vmv_s_x_i32m4(vint32m4_t dest, int32_t op1, size_t vl)
{
  return vmv_s(dest, op1, vl);
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
extern "C" vint32m8_t 
test_vmv_s_x_i32m8(vint32m8_t dest, int32_t op1, size_t vl)
{
  return vmv_s(dest, op1, vl);
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
extern "C" vint64m1_t 
test_vmv_s_x_i64m1(vint64m1_t dest, int64_t op1, size_t vl)
{
  return vmv_s(dest, op1, vl);
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
extern "C" vint64m2_t 
test_vmv_s_x_i64m2(vint64m2_t dest, int64_t op1, size_t vl)
{
  return vmv_s(dest, op1, vl);
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
extern "C" vint64m4_t 
test_vmv_s_x_i64m4(vint64m4_t dest, int64_t op1, size_t vl)
{
  return vmv_s(dest, op1, vl);
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
extern "C" vint64m8_t 
test_vmv_s_x_i64m8(vint64m8_t dest, int64_t op1, size_t vl)
{
  return vmv_s(dest, op1, vl);
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
extern "C" vint8mf8_t 
test_vmv_s_x_i8mf8_tu(vint8mf8_t dest, int8_t op1, size_t vl)
{
  return vmv_s_tu(dest, op1, vl);
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
extern "C" vint8mf4_t 
test_vmv_s_x_i8mf4_tu(vint8mf4_t dest, int8_t op1, size_t vl)
{
  return vmv_s_tu(dest, op1, vl);
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
extern "C" vint8mf2_t 
test_vmv_s_x_i8mf2_tu(vint8mf2_t dest, int8_t op1, size_t vl)
{
  return vmv_s_tu(dest, op1, vl);
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
extern "C" vint8m1_t 
test_vmv_s_x_i8m1_tu(vint8m1_t dest, int8_t op1, size_t vl)
{
  return vmv_s_tu(dest, op1, vl);
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
extern "C" vint8m2_t 
test_vmv_s_x_i8m2_tu(vint8m2_t dest, int8_t op1, size_t vl)
{
  return vmv_s_tu(dest, op1, vl);
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
extern "C" vint8m4_t 
test_vmv_s_x_i8m4_tu(vint8m4_t dest, int8_t op1, size_t vl)
{
  return vmv_s_tu(dest, op1, vl);
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
extern "C" vint8m8_t 
test_vmv_s_x_i8m8_tu(vint8m8_t dest, int8_t op1, size_t vl)
{
  return vmv_s_tu(dest, op1, vl);
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
extern "C" vint16mf4_t 
test_vmv_s_x_i16mf4_tu(vint16mf4_t dest, int16_t op1, size_t vl)
{
  return vmv_s_tu(dest, op1, vl);
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
extern "C" vint16mf2_t 
test_vmv_s_x_i16mf2_tu(vint16mf2_t dest, int16_t op1, size_t vl)
{
  return vmv_s_tu(dest, op1, vl);
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
extern "C" vint16m1_t 
test_vmv_s_x_i16m1_tu(vint16m1_t dest, int16_t op1, size_t vl)
{
  return vmv_s_tu(dest, op1, vl);
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
extern "C" vint16m2_t 
test_vmv_s_x_i16m2_tu(vint16m2_t dest, int16_t op1, size_t vl)
{
  return vmv_s_tu(dest, op1, vl);
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
extern "C" vint16m4_t 
test_vmv_s_x_i16m4_tu(vint16m4_t dest, int16_t op1, size_t vl)
{
  return vmv_s_tu(dest, op1, vl);
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
extern "C" vint16m8_t 
test_vmv_s_x_i16m8_tu(vint16m8_t dest, int16_t op1, size_t vl)
{
  return vmv_s_tu(dest, op1, vl);
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
extern "C" vint32mf2_t 
test_vmv_s_x_i32mf2_tu(vint32mf2_t dest, int32_t op1, size_t vl)
{
  return vmv_s_tu(dest, op1, vl);
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
extern "C" vint32m1_t 
test_vmv_s_x_i32m1_tu(vint32m1_t dest, int32_t op1, size_t vl)
{
  return vmv_s_tu(dest, op1, vl);
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
extern "C" vint32m2_t 
test_vmv_s_x_i32m2_tu(vint32m2_t dest, int32_t op1, size_t vl)
{
  return vmv_s_tu(dest, op1, vl);
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
extern "C" vint32m4_t 
test_vmv_s_x_i32m4_tu(vint32m4_t dest, int32_t op1, size_t vl)
{
  return vmv_s_tu(dest, op1, vl);
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
extern "C" vint32m8_t 
test_vmv_s_x_i32m8_tu(vint32m8_t dest, int32_t op1, size_t vl)
{
  return vmv_s_tu(dest, op1, vl);
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
extern "C" vint64m1_t 
test_vmv_s_x_i64m1_tu(vint64m1_t dest, int64_t op1, size_t vl)
{
  return vmv_s_tu(dest, op1, vl);
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
extern "C" vint64m2_t 
test_vmv_s_x_i64m2_tu(vint64m2_t dest, int64_t op1, size_t vl)
{
  return vmv_s_tu(dest, op1, vl);
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
extern "C" vint64m4_t 
test_vmv_s_x_i64m4_tu(vint64m4_t dest, int64_t op1, size_t vl)
{
  return vmv_s_tu(dest, op1, vl);
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
extern "C" vint64m8_t 
test_vmv_s_x_i64m8_tu(vint64m8_t dest, int64_t op1, size_t vl)
{
  return vmv_s_tu(dest, op1, vl);
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
extern "C" vuint8mf8_t 
test_vmv_s_x_u8mf8(vuint8mf8_t dest, uint8_t op1, size_t vl)
{
  return vmv_s(dest, op1, vl);
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
extern "C" vuint8mf4_t 
test_vmv_s_x_u8mf4(vuint8mf4_t dest, uint8_t op1, size_t vl)
{
  return vmv_s(dest, op1, vl);
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
extern "C" vuint8mf2_t 
test_vmv_s_x_u8mf2(vuint8mf2_t dest, uint8_t op1, size_t vl)
{
  return vmv_s(dest, op1, vl);
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
extern "C" vuint8m1_t 
test_vmv_s_x_u8m1(vuint8m1_t dest, uint8_t op1, size_t vl)
{
  return vmv_s(dest, op1, vl);
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
extern "C" vuint8m2_t 
test_vmv_s_x_u8m2(vuint8m2_t dest, uint8_t op1, size_t vl)
{
  return vmv_s(dest, op1, vl);
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
extern "C" vuint8m4_t 
test_vmv_s_x_u8m4(vuint8m4_t dest, uint8_t op1, size_t vl)
{
  return vmv_s(dest, op1, vl);
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
extern "C" vuint8m8_t 
test_vmv_s_x_u8m8(vuint8m8_t dest, uint8_t op1, size_t vl)
{
  return vmv_s(dest, op1, vl);
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
extern "C" vuint16mf4_t 
test_vmv_s_x_u16mf4(vuint16mf4_t dest, uint16_t op1, size_t vl)
{
  return vmv_s(dest, op1, vl);
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
extern "C" vuint16mf2_t 
test_vmv_s_x_u16mf2(vuint16mf2_t dest, uint16_t op1, size_t vl)
{
  return vmv_s(dest, op1, vl);
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
extern "C" vuint16m1_t 
test_vmv_s_x_u16m1(vuint16m1_t dest, uint16_t op1, size_t vl)
{
  return vmv_s(dest, op1, vl);
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
extern "C" vuint16m2_t 
test_vmv_s_x_u16m2(vuint16m2_t dest, uint16_t op1, size_t vl)
{
  return vmv_s(dest, op1, vl);
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
extern "C" vuint16m4_t 
test_vmv_s_x_u16m4(vuint16m4_t dest, uint16_t op1, size_t vl)
{
  return vmv_s(dest, op1, vl);
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
extern "C" vuint16m8_t 
test_vmv_s_x_u16m8(vuint16m8_t dest, uint16_t op1, size_t vl)
{
  return vmv_s(dest, op1, vl);
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
extern "C" vuint32mf2_t 
test_vmv_s_x_u32mf2(vuint32mf2_t dest, uint32_t op1, size_t vl)
{
  return vmv_s(dest, op1, vl);
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
extern "C" vuint32m1_t 
test_vmv_s_x_u32m1(vuint32m1_t dest, uint32_t op1, size_t vl)
{
  return vmv_s(dest, op1, vl);
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
extern "C" vuint32m2_t 
test_vmv_s_x_u32m2(vuint32m2_t dest, uint32_t op1, size_t vl)
{
  return vmv_s(dest, op1, vl);
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
extern "C" vuint32m4_t 
test_vmv_s_x_u32m4(vuint32m4_t dest, uint32_t op1, size_t vl)
{
  return vmv_s(dest, op1, vl);
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
extern "C" vuint32m8_t 
test_vmv_s_x_u32m8(vuint32m8_t dest, uint32_t op1, size_t vl)
{
  return vmv_s(dest, op1, vl);
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
extern "C" vuint64m1_t 
test_vmv_s_x_u64m1(vuint64m1_t dest, uint64_t op1, size_t vl)
{
  return vmv_s(dest, op1, vl);
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
extern "C" vuint64m2_t 
test_vmv_s_x_u64m2(vuint64m2_t dest, uint64_t op1, size_t vl)
{
  return vmv_s(dest, op1, vl);
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
extern "C" vuint64m4_t 
test_vmv_s_x_u64m4(vuint64m4_t dest, uint64_t op1, size_t vl)
{
  return vmv_s(dest, op1, vl);
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
extern "C" vuint64m8_t 
test_vmv_s_x_u64m8(vuint64m8_t dest, uint64_t op1, size_t vl)
{
  return vmv_s(dest, op1, vl);
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
extern "C" vuint8mf8_t 
test_vmv_s_x_u8mf8_tu(vuint8mf8_t dest, uint8_t op1, size_t vl)
{
  return vmv_s_tu(dest, op1, vl);
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
extern "C" vuint8mf4_t 
test_vmv_s_x_u8mf4_tu(vuint8mf4_t dest, uint8_t op1, size_t vl)
{
  return vmv_s_tu(dest, op1, vl);
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
extern "C" vuint8mf2_t 
test_vmv_s_x_u8mf2_tu(vuint8mf2_t dest, uint8_t op1, size_t vl)
{
  return vmv_s_tu(dest, op1, vl);
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
extern "C" vuint8m1_t 
test_vmv_s_x_u8m1_tu(vuint8m1_t dest, uint8_t op1, size_t vl)
{
  return vmv_s_tu(dest, op1, vl);
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
extern "C" vuint8m2_t 
test_vmv_s_x_u8m2_tu(vuint8m2_t dest, uint8_t op1, size_t vl)
{
  return vmv_s_tu(dest, op1, vl);
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
extern "C" vuint8m4_t 
test_vmv_s_x_u8m4_tu(vuint8m4_t dest, uint8_t op1, size_t vl)
{
  return vmv_s_tu(dest, op1, vl);
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
extern "C" vuint8m8_t 
test_vmv_s_x_u8m8_tu(vuint8m8_t dest, uint8_t op1, size_t vl)
{
  return vmv_s_tu(dest, op1, vl);
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
extern "C" vuint16mf4_t 
test_vmv_s_x_u16mf4_tu(vuint16mf4_t dest, uint16_t op1, size_t vl)
{
  return vmv_s_tu(dest, op1, vl);
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
extern "C" vuint16mf2_t 
test_vmv_s_x_u16mf2_tu(vuint16mf2_t dest, uint16_t op1, size_t vl)
{
  return vmv_s_tu(dest, op1, vl);
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
extern "C" vuint16m1_t 
test_vmv_s_x_u16m1_tu(vuint16m1_t dest, uint16_t op1, size_t vl)
{
  return vmv_s_tu(dest, op1, vl);
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
extern "C" vuint16m2_t 
test_vmv_s_x_u16m2_tu(vuint16m2_t dest, uint16_t op1, size_t vl)
{
  return vmv_s_tu(dest, op1, vl);
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
extern "C" vuint16m4_t 
test_vmv_s_x_u16m4_tu(vuint16m4_t dest, uint16_t op1, size_t vl)
{
  return vmv_s_tu(dest, op1, vl);
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
extern "C" vuint16m8_t 
test_vmv_s_x_u16m8_tu(vuint16m8_t dest, uint16_t op1, size_t vl)
{
  return vmv_s_tu(dest, op1, vl);
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
extern "C" vuint32mf2_t 
test_vmv_s_x_u32mf2_tu(vuint32mf2_t dest, uint32_t op1, size_t vl)
{
  return vmv_s_tu(dest, op1, vl);
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
extern "C" vuint32m1_t 
test_vmv_s_x_u32m1_tu(vuint32m1_t dest, uint32_t op1, size_t vl)
{
  return vmv_s_tu(dest, op1, vl);
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
extern "C" vuint32m2_t 
test_vmv_s_x_u32m2_tu(vuint32m2_t dest, uint32_t op1, size_t vl)
{
  return vmv_s_tu(dest, op1, vl);
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
extern "C" vuint32m4_t 
test_vmv_s_x_u32m4_tu(vuint32m4_t dest, uint32_t op1, size_t vl)
{
  return vmv_s_tu(dest, op1, vl);
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
extern "C" vuint32m8_t 
test_vmv_s_x_u32m8_tu(vuint32m8_t dest, uint32_t op1, size_t vl)
{
  return vmv_s_tu(dest, op1, vl);
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
extern "C" vuint64m1_t 
test_vmv_s_x_u64m1_tu(vuint64m1_t dest, uint64_t op1, size_t vl)
{
  return vmv_s_tu(dest, op1, vl);
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
extern "C" vuint64m2_t 
test_vmv_s_x_u64m2_tu(vuint64m2_t dest, uint64_t op1, size_t vl)
{
  return vmv_s_tu(dest, op1, vl);
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
extern "C" vuint64m4_t 
test_vmv_s_x_u64m4_tu(vuint64m4_t dest, uint64_t op1, size_t vl)
{
  return vmv_s_tu(dest, op1, vl);
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
extern "C" vuint64m8_t 
test_vmv_s_x_u64m8_tu(vuint64m8_t dest, uint64_t op1, size_t vl)
{
  return vmv_s_tu(dest, op1, vl);
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
extern "C" vfloat16mf4_t 
test_vmv_v_v_f16mf4(vfloat16mf4_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vfloat16mf2_t 
test_vmv_v_v_f16mf2(vfloat16mf2_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vfloat16m1_t 
test_vmv_v_v_f16m1(vfloat16m1_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vfloat16m2_t 
test_vmv_v_v_f16m2(vfloat16m2_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vfloat16m4_t 
test_vmv_v_v_f16m4(vfloat16m4_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vfloat16m8_t 
test_vmv_v_v_f16m8(vfloat16m8_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vfloat32mf2_t 
test_vmv_v_v_f32mf2(vfloat32mf2_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vfloat32m1_t 
test_vmv_v_v_f32m1(vfloat32m1_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vfloat32m2_t 
test_vmv_v_v_f32m2(vfloat32m2_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vfloat32m4_t 
test_vmv_v_v_f32m4(vfloat32m4_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vfloat32m8_t 
test_vmv_v_v_f32m8(vfloat32m8_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vfloat64m1_t 
test_vmv_v_v_f64m1(vfloat64m1_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vfloat64m2_t 
test_vmv_v_v_f64m2(vfloat64m2_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vfloat64m4_t 
test_vmv_v_v_f64m4(vfloat64m4_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vfloat64m8_t 
test_vmv_v_v_f64m8(vfloat64m8_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vfloat16mf4_t 
test_vmv_v_v_f16mf4_tu(vfloat16mf4_t dest, vfloat16mf4_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vfloat16mf2_t 
test_vmv_v_v_f16mf2_tu(vfloat16mf2_t dest, vfloat16mf2_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vfloat16m1_t 
test_vmv_v_v_f16m1_tu(vfloat16m1_t dest, vfloat16m1_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vfloat16m2_t 
test_vmv_v_v_f16m2_tu(vfloat16m2_t dest, vfloat16m2_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vfloat16m4_t 
test_vmv_v_v_f16m4_tu(vfloat16m4_t dest, vfloat16m4_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vfloat16m8_t 
test_vmv_v_v_f16m8_tu(vfloat16m8_t dest, vfloat16m8_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vfloat32mf2_t 
test_vmv_v_v_f32mf2_tu(vfloat32mf2_t dest, vfloat32mf2_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vfloat32m1_t 
test_vmv_v_v_f32m1_tu(vfloat32m1_t dest, vfloat32m1_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vfloat32m2_t 
test_vmv_v_v_f32m2_tu(vfloat32m2_t dest, vfloat32m2_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vfloat32m4_t 
test_vmv_v_v_f32m4_tu(vfloat32m4_t dest, vfloat32m4_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vfloat32m8_t 
test_vmv_v_v_f32m8_tu(vfloat32m8_t dest, vfloat32m8_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vfloat64m1_t 
test_vmv_v_v_f64m1_tu(vfloat64m1_t dest, vfloat64m1_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vfloat64m2_t 
test_vmv_v_v_f64m2_tu(vfloat64m2_t dest, vfloat64m2_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vfloat64m4_t 
test_vmv_v_v_f64m4_tu(vfloat64m4_t dest, vfloat64m4_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vfloat64m8_t 
test_vmv_v_v_f64m8_tu(vfloat64m8_t dest, vfloat64m8_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vint8mf8_t 
test_vmv_v_v_i8mf8(vint8mf8_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vint8mf4_t 
test_vmv_v_v_i8mf4(vint8mf4_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vint8mf2_t 
test_vmv_v_v_i8mf2(vint8mf2_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vint8m1_t 
test_vmv_v_v_i8m1(vint8m1_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vint8m2_t 
test_vmv_v_v_i8m2(vint8m2_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vint8m4_t 
test_vmv_v_v_i8m4(vint8m4_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vint8m8_t 
test_vmv_v_v_i8m8(vint8m8_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vint16mf4_t 
test_vmv_v_v_i16mf4(vint16mf4_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vint16mf2_t 
test_vmv_v_v_i16mf2(vint16mf2_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vint16m1_t 
test_vmv_v_v_i16m1(vint16m1_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vint16m2_t 
test_vmv_v_v_i16m2(vint16m2_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vint16m4_t 
test_vmv_v_v_i16m4(vint16m4_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vint16m8_t 
test_vmv_v_v_i16m8(vint16m8_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vint32mf2_t 
test_vmv_v_v_i32mf2(vint32mf2_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vint32m1_t 
test_vmv_v_v_i32m1(vint32m1_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vint32m2_t 
test_vmv_v_v_i32m2(vint32m2_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vint32m4_t 
test_vmv_v_v_i32m4(vint32m4_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vint32m8_t 
test_vmv_v_v_i32m8(vint32m8_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vint64m1_t 
test_vmv_v_v_i64m1(vint64m1_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vint64m2_t 
test_vmv_v_v_i64m2(vint64m2_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vint64m4_t 
test_vmv_v_v_i64m4(vint64m4_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vint64m8_t 
test_vmv_v_v_i64m8(vint64m8_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vint8mf8_t 
test_vmv_v_v_i8mf8_tu(vint8mf8_t dest, vint8mf8_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vint8mf4_t 
test_vmv_v_v_i8mf4_tu(vint8mf4_t dest, vint8mf4_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vint8mf2_t 
test_vmv_v_v_i8mf2_tu(vint8mf2_t dest, vint8mf2_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vint8m1_t 
test_vmv_v_v_i8m1_tu(vint8m1_t dest, vint8m1_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vint8m2_t 
test_vmv_v_v_i8m2_tu(vint8m2_t dest, vint8m2_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vint8m4_t 
test_vmv_v_v_i8m4_tu(vint8m4_t dest, vint8m4_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vint8m8_t 
test_vmv_v_v_i8m8_tu(vint8m8_t dest, vint8m8_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vint16mf4_t 
test_vmv_v_v_i16mf4_tu(vint16mf4_t dest, vint16mf4_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vint16mf2_t 
test_vmv_v_v_i16mf2_tu(vint16mf2_t dest, vint16mf2_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vint16m1_t 
test_vmv_v_v_i16m1_tu(vint16m1_t dest, vint16m1_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vint16m2_t 
test_vmv_v_v_i16m2_tu(vint16m2_t dest, vint16m2_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vint16m4_t 
test_vmv_v_v_i16m4_tu(vint16m4_t dest, vint16m4_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vint16m8_t 
test_vmv_v_v_i16m8_tu(vint16m8_t dest, vint16m8_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vint32mf2_t 
test_vmv_v_v_i32mf2_tu(vint32mf2_t dest, vint32mf2_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vint32m1_t 
test_vmv_v_v_i32m1_tu(vint32m1_t dest, vint32m1_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vint32m2_t 
test_vmv_v_v_i32m2_tu(vint32m2_t dest, vint32m2_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vint32m4_t 
test_vmv_v_v_i32m4_tu(vint32m4_t dest, vint32m4_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vint32m8_t 
test_vmv_v_v_i32m8_tu(vint32m8_t dest, vint32m8_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vint64m1_t 
test_vmv_v_v_i64m1_tu(vint64m1_t dest, vint64m1_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vint64m2_t 
test_vmv_v_v_i64m2_tu(vint64m2_t dest, vint64m2_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vint64m4_t 
test_vmv_v_v_i64m4_tu(vint64m4_t dest, vint64m4_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vint64m8_t 
test_vmv_v_v_i64m8_tu(vint64m8_t dest, vint64m8_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vuint8mf8_t 
test_vmv_v_v_u8mf8(vuint8mf8_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vuint8mf4_t 
test_vmv_v_v_u8mf4(vuint8mf4_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vuint8mf2_t 
test_vmv_v_v_u8mf2(vuint8mf2_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vuint8m1_t 
test_vmv_v_v_u8m1(vuint8m1_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vuint8m2_t 
test_vmv_v_v_u8m2(vuint8m2_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vuint8m4_t 
test_vmv_v_v_u8m4(vuint8m4_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vuint8m8_t 
test_vmv_v_v_u8m8(vuint8m8_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vuint16mf4_t 
test_vmv_v_v_u16mf4(vuint16mf4_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vuint16mf2_t 
test_vmv_v_v_u16mf2(vuint16mf2_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vuint16m1_t 
test_vmv_v_v_u16m1(vuint16m1_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vuint16m2_t 
test_vmv_v_v_u16m2(vuint16m2_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vuint16m4_t 
test_vmv_v_v_u16m4(vuint16m4_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vuint16m8_t 
test_vmv_v_v_u16m8(vuint16m8_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vuint32mf2_t 
test_vmv_v_v_u32mf2(vuint32mf2_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vuint32m1_t 
test_vmv_v_v_u32m1(vuint32m1_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vuint32m2_t 
test_vmv_v_v_u32m2(vuint32m2_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vuint32m4_t 
test_vmv_v_v_u32m4(vuint32m4_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vuint32m8_t 
test_vmv_v_v_u32m8(vuint32m8_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vuint64m1_t 
test_vmv_v_v_u64m1(vuint64m1_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vuint64m2_t 
test_vmv_v_v_u64m2(vuint64m2_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vuint64m4_t 
test_vmv_v_v_u64m4(vuint64m4_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vuint64m8_t 
test_vmv_v_v_u64m8(vuint64m8_t op1, size_t vl)
{
  return vmv_v(op1, vl);
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
extern "C" vuint8mf8_t 
test_vmv_v_v_u8mf8_tu(vuint8mf8_t dest, vuint8mf8_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vuint8mf4_t 
test_vmv_v_v_u8mf4_tu(vuint8mf4_t dest, vuint8mf4_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vuint8mf2_t 
test_vmv_v_v_u8mf2_tu(vuint8mf2_t dest, vuint8mf2_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vuint8m1_t 
test_vmv_v_v_u8m1_tu(vuint8m1_t dest, vuint8m1_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vuint8m2_t 
test_vmv_v_v_u8m2_tu(vuint8m2_t dest, vuint8m2_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vuint8m4_t 
test_vmv_v_v_u8m4_tu(vuint8m4_t dest, vuint8m4_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vuint8m8_t 
test_vmv_v_v_u8m8_tu(vuint8m8_t dest, vuint8m8_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vuint16mf4_t 
test_vmv_v_v_u16mf4_tu(vuint16mf4_t dest, vuint16mf4_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vuint16mf2_t 
test_vmv_v_v_u16mf2_tu(vuint16mf2_t dest, vuint16mf2_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vuint16m1_t 
test_vmv_v_v_u16m1_tu(vuint16m1_t dest, vuint16m1_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vuint16m2_t 
test_vmv_v_v_u16m2_tu(vuint16m2_t dest, vuint16m2_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vuint16m4_t 
test_vmv_v_v_u16m4_tu(vuint16m4_t dest, vuint16m4_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vuint16m8_t 
test_vmv_v_v_u16m8_tu(vuint16m8_t dest, vuint16m8_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vuint32mf2_t 
test_vmv_v_v_u32mf2_tu(vuint32mf2_t dest, vuint32mf2_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vuint32m1_t 
test_vmv_v_v_u32m1_tu(vuint32m1_t dest, vuint32m1_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vuint32m2_t 
test_vmv_v_v_u32m2_tu(vuint32m2_t dest, vuint32m2_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vuint32m4_t 
test_vmv_v_v_u32m4_tu(vuint32m4_t dest, vuint32m4_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vuint32m8_t 
test_vmv_v_v_u32m8_tu(vuint32m8_t dest, vuint32m8_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vuint64m1_t 
test_vmv_v_v_u64m1_tu(vuint64m1_t dest, vuint64m1_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vuint64m2_t 
test_vmv_v_v_u64m2_tu(vuint64m2_t dest, vuint64m2_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vuint64m4_t 
test_vmv_v_v_u64m4_tu(vuint64m4_t dest, vuint64m4_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vuint64m8_t 
test_vmv_v_v_u64m8_tu(vuint64m8_t dest, vuint64m8_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vint8mf8_t 
test_vmv_v_x_i8mf8(int8_t op1, size_t vl)
{
  return vmv_v_x_i8mf8(op1, vl);
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
extern "C" vint8mf4_t 
test_vmv_v_x_i8mf4(int8_t op1, size_t vl)
{
  return vmv_v_x_i8mf4(op1, vl);
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
extern "C" vint8mf2_t 
test_vmv_v_x_i8mf2(int8_t op1, size_t vl)
{
  return vmv_v_x_i8mf2(op1, vl);
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
extern "C" vint8m1_t 
test_vmv_v_x_i8m1(int8_t op1, size_t vl)
{
  return vmv_v_x_i8m1(op1, vl);
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
extern "C" vint8m2_t 
test_vmv_v_x_i8m2(int8_t op1, size_t vl)
{
  return vmv_v_x_i8m2(op1, vl);
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
extern "C" vint8m4_t 
test_vmv_v_x_i8m4(int8_t op1, size_t vl)
{
  return vmv_v_x_i8m4(op1, vl);
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
extern "C" vint8m8_t 
test_vmv_v_x_i8m8(int8_t op1, size_t vl)
{
  return vmv_v_x_i8m8(op1, vl);
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
extern "C" vint16mf4_t 
test_vmv_v_x_i16mf4(int16_t op1, size_t vl)
{
  return vmv_v_x_i16mf4(op1, vl);
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
extern "C" vint16mf2_t 
test_vmv_v_x_i16mf2(int16_t op1, size_t vl)
{
  return vmv_v_x_i16mf2(op1, vl);
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
extern "C" vint16m1_t 
test_vmv_v_x_i16m1(int16_t op1, size_t vl)
{
  return vmv_v_x_i16m1(op1, vl);
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
extern "C" vint16m2_t 
test_vmv_v_x_i16m2(int16_t op1, size_t vl)
{
  return vmv_v_x_i16m2(op1, vl);
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
extern "C" vint16m4_t 
test_vmv_v_x_i16m4(int16_t op1, size_t vl)
{
  return vmv_v_x_i16m4(op1, vl);
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
extern "C" vint16m8_t 
test_vmv_v_x_i16m8(int16_t op1, size_t vl)
{
  return vmv_v_x_i16m8(op1, vl);
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
extern "C" vint32mf2_t 
test_vmv_v_x_i32mf2(int32_t op1, size_t vl)
{
  return vmv_v_x_i32mf2(op1, vl);
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
extern "C" vint32m1_t 
test_vmv_v_x_i32m1(int32_t op1, size_t vl)
{
  return vmv_v_x_i32m1(op1, vl);
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
extern "C" vint32m2_t 
test_vmv_v_x_i32m2(int32_t op1, size_t vl)
{
  return vmv_v_x_i32m2(op1, vl);
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
extern "C" vint32m4_t 
test_vmv_v_x_i32m4(int32_t op1, size_t vl)
{
  return vmv_v_x_i32m4(op1, vl);
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
extern "C" vint32m8_t 
test_vmv_v_x_i32m8(int32_t op1, size_t vl)
{
  return vmv_v_x_i32m8(op1, vl);
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
extern "C" vint64m1_t 
test_vmv_v_x_i64m1(int64_t op1, size_t vl)
{
  return vmv_v_x_i64m1(op1, vl);
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
extern "C" vint64m2_t 
test_vmv_v_x_i64m2(int64_t op1, size_t vl)
{
  return vmv_v_x_i64m2(op1, vl);
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
extern "C" vint64m4_t 
test_vmv_v_x_i64m4(int64_t op1, size_t vl)
{
  return vmv_v_x_i64m4(op1, vl);
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
extern "C" vint64m8_t 
test_vmv_v_x_i64m8(int64_t op1, size_t vl)
{
  return vmv_v_x_i64m8(op1, vl);
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
extern "C" vint8mf8_t 
test_vmv_v_x_i8mf8_tu(vint8mf8_t dest, int8_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vint8mf4_t 
test_vmv_v_x_i8mf4_tu(vint8mf4_t dest, int8_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vint8mf2_t 
test_vmv_v_x_i8mf2_tu(vint8mf2_t dest, int8_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vint8m1_t 
test_vmv_v_x_i8m1_tu(vint8m1_t dest, int8_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vint8m2_t 
test_vmv_v_x_i8m2_tu(vint8m2_t dest, int8_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vint8m4_t 
test_vmv_v_x_i8m4_tu(vint8m4_t dest, int8_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vint8m8_t 
test_vmv_v_x_i8m8_tu(vint8m8_t dest, int8_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vint16mf4_t 
test_vmv_v_x_i16mf4_tu(vint16mf4_t dest, int16_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vint16mf2_t 
test_vmv_v_x_i16mf2_tu(vint16mf2_t dest, int16_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vint16m1_t 
test_vmv_v_x_i16m1_tu(vint16m1_t dest, int16_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vint16m2_t 
test_vmv_v_x_i16m2_tu(vint16m2_t dest, int16_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vint16m4_t 
test_vmv_v_x_i16m4_tu(vint16m4_t dest, int16_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vint16m8_t 
test_vmv_v_x_i16m8_tu(vint16m8_t dest, int16_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vint32mf2_t 
test_vmv_v_x_i32mf2_tu(vint32mf2_t dest, int32_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vint32m1_t 
test_vmv_v_x_i32m1_tu(vint32m1_t dest, int32_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vint32m2_t 
test_vmv_v_x_i32m2_tu(vint32m2_t dest, int32_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vint32m4_t 
test_vmv_v_x_i32m4_tu(vint32m4_t dest, int32_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vint32m8_t 
test_vmv_v_x_i32m8_tu(vint32m8_t dest, int32_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vint64m1_t 
test_vmv_v_x_i64m1_tu(vint64m1_t dest, int64_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vint64m2_t 
test_vmv_v_x_i64m2_tu(vint64m2_t dest, int64_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vint64m4_t 
test_vmv_v_x_i64m4_tu(vint64m4_t dest, int64_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vint64m8_t 
test_vmv_v_x_i64m8_tu(vint64m8_t dest, int64_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vuint8mf8_t 
test_vmv_v_x_u8mf8(uint8_t op1, size_t vl)
{
  return vmv_v_x_u8mf8(op1, vl);
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
extern "C" vuint8mf4_t 
test_vmv_v_x_u8mf4(uint8_t op1, size_t vl)
{
  return vmv_v_x_u8mf4(op1, vl);
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
extern "C" vuint8mf2_t 
test_vmv_v_x_u8mf2(uint8_t op1, size_t vl)
{
  return vmv_v_x_u8mf2(op1, vl);
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
extern "C" vuint8m1_t 
test_vmv_v_x_u8m1(uint8_t op1, size_t vl)
{
  return vmv_v_x_u8m1(op1, vl);
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
extern "C" vuint8m2_t 
test_vmv_v_x_u8m2(uint8_t op1, size_t vl)
{
  return vmv_v_x_u8m2(op1, vl);
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
extern "C" vuint8m4_t 
test_vmv_v_x_u8m4(uint8_t op1, size_t vl)
{
  return vmv_v_x_u8m4(op1, vl);
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
extern "C" vuint8m8_t 
test_vmv_v_x_u8m8(uint8_t op1, size_t vl)
{
  return vmv_v_x_u8m8(op1, vl);
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
extern "C" vuint16mf4_t 
test_vmv_v_x_u16mf4(uint16_t op1, size_t vl)
{
  return vmv_v_x_u16mf4(op1, vl);
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
extern "C" vuint16mf2_t 
test_vmv_v_x_u16mf2(uint16_t op1, size_t vl)
{
  return vmv_v_x_u16mf2(op1, vl);
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
extern "C" vuint16m1_t 
test_vmv_v_x_u16m1(uint16_t op1, size_t vl)
{
  return vmv_v_x_u16m1(op1, vl);
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
extern "C" vuint16m2_t 
test_vmv_v_x_u16m2(uint16_t op1, size_t vl)
{
  return vmv_v_x_u16m2(op1, vl);
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
extern "C" vuint16m4_t 
test_vmv_v_x_u16m4(uint16_t op1, size_t vl)
{
  return vmv_v_x_u16m4(op1, vl);
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
extern "C" vuint16m8_t 
test_vmv_v_x_u16m8(uint16_t op1, size_t vl)
{
  return vmv_v_x_u16m8(op1, vl);
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
extern "C" vuint32mf2_t 
test_vmv_v_x_u32mf2(uint32_t op1, size_t vl)
{
  return vmv_v_x_u32mf2(op1, vl);
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
extern "C" vuint32m1_t 
test_vmv_v_x_u32m1(uint32_t op1, size_t vl)
{
  return vmv_v_x_u32m1(op1, vl);
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
extern "C" vuint32m2_t 
test_vmv_v_x_u32m2(uint32_t op1, size_t vl)
{
  return vmv_v_x_u32m2(op1, vl);
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
extern "C" vuint32m4_t 
test_vmv_v_x_u32m4(uint32_t op1, size_t vl)
{
  return vmv_v_x_u32m4(op1, vl);
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
extern "C" vuint32m8_t 
test_vmv_v_x_u32m8(uint32_t op1, size_t vl)
{
  return vmv_v_x_u32m8(op1, vl);
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
extern "C" vuint64m1_t 
test_vmv_v_x_u64m1(uint64_t op1, size_t vl)
{
  return vmv_v_x_u64m1(op1, vl);
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
extern "C" vuint64m2_t 
test_vmv_v_x_u64m2(uint64_t op1, size_t vl)
{
  return vmv_v_x_u64m2(op1, vl);
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
extern "C" vuint64m4_t 
test_vmv_v_x_u64m4(uint64_t op1, size_t vl)
{
  return vmv_v_x_u64m4(op1, vl);
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
extern "C" vuint64m8_t 
test_vmv_v_x_u64m8(uint64_t op1, size_t vl)
{
  return vmv_v_x_u64m8(op1, vl);
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
extern "C" vuint8mf8_t 
test_vmv_v_x_u8mf8_tu(vuint8mf8_t dest, uint8_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vuint8mf4_t 
test_vmv_v_x_u8mf4_tu(vuint8mf4_t dest, uint8_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vuint8mf2_t 
test_vmv_v_x_u8mf2_tu(vuint8mf2_t dest, uint8_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vuint8m1_t 
test_vmv_v_x_u8m1_tu(vuint8m1_t dest, uint8_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vuint8m2_t 
test_vmv_v_x_u8m2_tu(vuint8m2_t dest, uint8_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vuint8m4_t 
test_vmv_v_x_u8m4_tu(vuint8m4_t dest, uint8_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vuint8m8_t 
test_vmv_v_x_u8m8_tu(vuint8m8_t dest, uint8_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vuint16mf4_t 
test_vmv_v_x_u16mf4_tu(vuint16mf4_t dest, uint16_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vuint16mf2_t 
test_vmv_v_x_u16mf2_tu(vuint16mf2_t dest, uint16_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vuint16m1_t 
test_vmv_v_x_u16m1_tu(vuint16m1_t dest, uint16_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vuint16m2_t 
test_vmv_v_x_u16m2_tu(vuint16m2_t dest, uint16_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vuint16m4_t 
test_vmv_v_x_u16m4_tu(vuint16m4_t dest, uint16_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vuint16m8_t 
test_vmv_v_x_u16m8_tu(vuint16m8_t dest, uint16_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vuint32mf2_t 
test_vmv_v_x_u32mf2_tu(vuint32mf2_t dest, uint32_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vuint32m1_t 
test_vmv_v_x_u32m1_tu(vuint32m1_t dest, uint32_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vuint32m2_t 
test_vmv_v_x_u32m2_tu(vuint32m2_t dest, uint32_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vuint32m4_t 
test_vmv_v_x_u32m4_tu(vuint32m4_t dest, uint32_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vuint32m8_t 
test_vmv_v_x_u32m8_tu(vuint32m8_t dest, uint32_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vuint64m1_t 
test_vmv_v_x_u64m1_tu(vuint64m1_t dest, uint64_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vuint64m2_t 
test_vmv_v_x_u64m2_tu(vuint64m2_t dest, uint64_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vuint64m4_t 
test_vmv_v_x_u64m4_tu(vuint64m4_t dest, uint64_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" vuint64m8_t 
test_vmv_v_x_u64m8_tu(vuint64m8_t dest, uint64_t op1, size_t vl)
{
  return vmv_v_tu(dest, op1, vl);
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
extern "C" int8_t
test_vmv_x_s_i8mf8_i8(vint8mf8_t src)
{
  return vmv_x(src);
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
extern "C" int8_t
test_vmv_x_s_i8mf4_i8(vint8mf4_t src)
{
  return vmv_x(src);
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
extern "C" int8_t
test_vmv_x_s_i8mf2_i8(vint8mf2_t src)
{
  return vmv_x(src);
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
extern "C" int8_t
test_vmv_x_s_i8m1_i8(vint8m1_t src)
{
  return vmv_x(src);
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
extern "C" int8_t
test_vmv_x_s_i8m2_i8(vint8m2_t src)
{
  return vmv_x(src);
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
extern "C" int8_t
test_vmv_x_s_i8m4_i8(vint8m4_t src)
{
  return vmv_x(src);
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
extern "C" int8_t
test_vmv_x_s_i8m8_i8(vint8m8_t src)
{
  return vmv_x(src);
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
extern "C" int16_t
test_vmv_x_s_i16mf4_i16(vint16mf4_t src)
{
  return vmv_x(src);
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
extern "C" int16_t
test_vmv_x_s_i16mf2_i16(vint16mf2_t src)
{
  return vmv_x(src);
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
extern "C" int16_t
test_vmv_x_s_i16m1_i16(vint16m1_t src)
{
  return vmv_x(src);
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
extern "C" int16_t
test_vmv_x_s_i16m2_i16(vint16m2_t src)
{
  return vmv_x(src);
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
extern "C" int16_t
test_vmv_x_s_i16m4_i16(vint16m4_t src)
{
  return vmv_x(src);
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
extern "C" int16_t
test_vmv_x_s_i16m8_i16(vint16m8_t src)
{
  return vmv_x(src);
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
extern "C" int32_t
test_vmv_x_s_i32mf2_i32(vint32mf2_t src)
{
  return vmv_x(src);
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
extern "C" int32_t
test_vmv_x_s_i32m1_i32(vint32m1_t src)
{
  return vmv_x(src);
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
extern "C" int32_t
test_vmv_x_s_i32m2_i32(vint32m2_t src)
{
  return vmv_x(src);
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
extern "C" int32_t
test_vmv_x_s_i32m4_i32(vint32m4_t src)
{
  return vmv_x(src);
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
extern "C" int32_t
test_vmv_x_s_i32m8_i32(vint32m8_t src)
{
  return vmv_x(src);
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
extern "C" int64_t
test_vmv_x_s_i64m1_i64(vint64m1_t src)
{
  return vmv_x(src);
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
extern "C" int64_t
test_vmv_x_s_i64m2_i64(vint64m2_t src)
{
  return vmv_x(src);
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
extern "C" int64_t
test_vmv_x_s_i64m4_i64(vint64m4_t src)
{
  return vmv_x(src);
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
extern "C" int64_t
test_vmv_x_s_i64m8_i64(vint64m8_t src)
{
  return vmv_x(src);
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
extern "C" uint8_t
test_vmv_x_s_u8mf8_u8(vuint8mf8_t src)
{
  return vmv_x(src);
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
extern "C" uint8_t
test_vmv_x_s_u8mf4_u8(vuint8mf4_t src)
{
  return vmv_x(src);
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
extern "C" uint8_t
test_vmv_x_s_u8mf2_u8(vuint8mf2_t src)
{
  return vmv_x(src);
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
extern "C" uint8_t
test_vmv_x_s_u8m1_u8(vuint8m1_t src)
{
  return vmv_x(src);
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
extern "C" uint8_t
test_vmv_x_s_u8m2_u8(vuint8m2_t src)
{
  return vmv_x(src);
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
extern "C" uint8_t
test_vmv_x_s_u8m4_u8(vuint8m4_t src)
{
  return vmv_x(src);
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
extern "C" uint8_t
test_vmv_x_s_u8m8_u8(vuint8m8_t src)
{
  return vmv_x(src);
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
extern "C" uint16_t
test_vmv_x_s_u16mf4_u16(vuint16mf4_t src)
{
  return vmv_x(src);
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
extern "C" uint16_t
test_vmv_x_s_u16mf2_u16(vuint16mf2_t src)
{
  return vmv_x(src);
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
extern "C" uint16_t
test_vmv_x_s_u16m1_u16(vuint16m1_t src)
{
  return vmv_x(src);
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
extern "C" uint16_t
test_vmv_x_s_u16m2_u16(vuint16m2_t src)
{
  return vmv_x(src);
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
extern "C" uint16_t
test_vmv_x_s_u16m4_u16(vuint16m4_t src)
{
  return vmv_x(src);
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
extern "C" uint16_t
test_vmv_x_s_u16m8_u16(vuint16m8_t src)
{
  return vmv_x(src);
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
extern "C" uint32_t
test_vmv_x_s_u32mf2_u32(vuint32mf2_t src)
{
  return vmv_x(src);
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
extern "C" uint32_t
test_vmv_x_s_u32m1_u32(vuint32m1_t src)
{
  return vmv_x(src);
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
extern "C" uint32_t
test_vmv_x_s_u32m2_u32(vuint32m2_t src)
{
  return vmv_x(src);
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
extern "C" uint32_t
test_vmv_x_s_u32m4_u32(vuint32m4_t src)
{
  return vmv_x(src);
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
extern "C" uint32_t
test_vmv_x_s_u32m8_u32(vuint32m8_t src)
{
  return vmv_x(src);
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
extern "C" uint64_t
test_vmv_x_s_u64m1_u64(vuint64m1_t src)
{
  return vmv_x(src);
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
extern "C" uint64_t
test_vmv_x_s_u64m2_u64(vuint64m2_t src)
{
  return vmv_x(src);
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
extern "C" uint64_t
test_vmv_x_s_u64m4_u64(vuint64m4_t src)
{
  return vmv_x(src);
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
extern "C" uint64_t
test_vmv_x_s_u64m8_u64(vuint64m8_t src)
{
  return vmv_x(src);
}

