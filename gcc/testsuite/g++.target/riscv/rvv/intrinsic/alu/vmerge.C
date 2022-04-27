/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>

/*
** test_vmerge_vvm_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vfloat16mf4_t 
test_vmerge_vvm_f16mf4(vbool64_t mask, vfloat16mf4_t op1, vfloat16mf4_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vfloat16mf2_t 
test_vmerge_vvm_f16mf2(vbool32_t mask, vfloat16mf2_t op1, vfloat16mf2_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vfloat16m1_t 
test_vmerge_vvm_f16m1(vbool16_t mask, vfloat16m1_t op1, vfloat16m1_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_f16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vfloat16m2_t 
test_vmerge_vvm_f16m2(vbool8_t mask, vfloat16m2_t op1, vfloat16m2_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_f16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vfloat16m4_t 
test_vmerge_vvm_f16m4(vbool4_t mask, vfloat16m4_t op1, vfloat16m4_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_f16m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vfloat16m8_t 
test_vmerge_vvm_f16m8(vbool2_t mask, vfloat16m8_t op1, vfloat16m8_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vfloat32mf2_t 
test_vmerge_vvm_f32mf2(vbool64_t mask, vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vfloat32m1_t 
test_vmerge_vvm_f32m1(vbool32_t mask, vfloat32m1_t op1, vfloat32m1_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_f32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vfloat32m2_t 
test_vmerge_vvm_f32m2(vbool16_t mask, vfloat32m2_t op1, vfloat32m2_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_f32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vfloat32m4_t 
test_vmerge_vvm_f32m4(vbool8_t mask, vfloat32m4_t op1, vfloat32m4_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_f32m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vfloat32m8_t 
test_vmerge_vvm_f32m8(vbool4_t mask, vfloat32m8_t op1, vfloat32m8_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vfloat64m1_t 
test_vmerge_vvm_f64m1(vbool64_t mask, vfloat64m1_t op1, vfloat64m1_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_f64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vfloat64m2_t 
test_vmerge_vvm_f64m2(vbool32_t mask, vfloat64m2_t op1, vfloat64m2_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_f64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vfloat64m4_t 
test_vmerge_vvm_f64m4(vbool16_t mask, vfloat64m4_t op1, vfloat64m4_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_f64m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vfloat64m8_t 
test_vmerge_vvm_f64m8(vbool8_t mask, vfloat64m8_t op1, vfloat64m8_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_f16mf4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vfloat16mf4_t 
test_vmerge_vvm_f16mf4_ta(vbool64_t mask, vfloat16mf4_t op1, vfloat16mf4_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_f16mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vfloat16mf2_t 
test_vmerge_vvm_f16mf2_ta(vbool32_t mask, vfloat16mf2_t op1, vfloat16mf2_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_f16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vfloat16m1_t 
test_vmerge_vvm_f16m1_ta(vbool16_t mask, vfloat16m1_t op1, vfloat16m1_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_f16m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vfloat16m2_t 
test_vmerge_vvm_f16m2_ta(vbool8_t mask, vfloat16m2_t op1, vfloat16m2_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_f16m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vfloat16m4_t 
test_vmerge_vvm_f16m4_ta(vbool4_t mask, vfloat16m4_t op1, vfloat16m4_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_f16m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vfloat16m8_t 
test_vmerge_vvm_f16m8_ta(vbool2_t mask, vfloat16m8_t op1, vfloat16m8_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_f32mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vfloat32mf2_t 
test_vmerge_vvm_f32mf2_ta(vbool64_t mask, vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_f32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vfloat32m1_t 
test_vmerge_vvm_f32m1_ta(vbool32_t mask, vfloat32m1_t op1, vfloat32m1_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_f32m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vfloat32m2_t 
test_vmerge_vvm_f32m2_ta(vbool16_t mask, vfloat32m2_t op1, vfloat32m2_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_f32m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vfloat32m4_t 
test_vmerge_vvm_f32m4_ta(vbool8_t mask, vfloat32m4_t op1, vfloat32m4_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_f32m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vfloat32m8_t 
test_vmerge_vvm_f32m8_ta(vbool4_t mask, vfloat32m8_t op1, vfloat32m8_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_f64m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vfloat64m1_t 
test_vmerge_vvm_f64m1_ta(vbool64_t mask, vfloat64m1_t op1, vfloat64m1_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_f64m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vfloat64m2_t 
test_vmerge_vvm_f64m2_ta(vbool32_t mask, vfloat64m2_t op1, vfloat64m2_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_f64m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vfloat64m4_t 
test_vmerge_vvm_f64m4_ta(vbool16_t mask, vfloat64m4_t op1, vfloat64m4_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_f64m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vfloat64m8_t 
test_vmerge_vvm_f64m8_ta(vbool8_t mask, vfloat64m8_t op1, vfloat64m8_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_f16mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vfloat16mf4_t 
test_vmerge_vvm_f16mf4_tu(vfloat16mf4_t dest, vbool64_t mask, vfloat16mf4_t op1, vfloat16mf4_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_f16mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vfloat16mf2_t 
test_vmerge_vvm_f16mf2_tu(vfloat16mf2_t dest, vbool32_t mask, vfloat16mf2_t op1, vfloat16mf2_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_f16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vfloat16m1_t 
test_vmerge_vvm_f16m1_tu(vfloat16m1_t dest, vbool16_t mask, vfloat16m1_t op1, vfloat16m1_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_f16m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vfloat16m2_t 
test_vmerge_vvm_f16m2_tu(vfloat16m2_t dest, vbool8_t mask, vfloat16m2_t op1, vfloat16m2_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_f16m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vfloat16m4_t 
test_vmerge_vvm_f16m4_tu(vfloat16m4_t dest, vbool4_t mask, vfloat16m4_t op1, vfloat16m4_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_f16m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vfloat16m8_t 
test_vmerge_vvm_f16m8_tu(vfloat16m8_t dest, vbool2_t mask, vfloat16m8_t op1, vfloat16m8_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_f32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vfloat32mf2_t 
test_vmerge_vvm_f32mf2_tu(vfloat32mf2_t dest, vbool64_t mask, vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_f32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vfloat32m1_t 
test_vmerge_vvm_f32m1_tu(vfloat32m1_t dest, vbool32_t mask, vfloat32m1_t op1, vfloat32m1_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_f32m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vfloat32m2_t 
test_vmerge_vvm_f32m2_tu(vfloat32m2_t dest, vbool16_t mask, vfloat32m2_t op1, vfloat32m2_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_f32m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vfloat32m4_t 
test_vmerge_vvm_f32m4_tu(vfloat32m4_t dest, vbool8_t mask, vfloat32m4_t op1, vfloat32m4_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_f32m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vfloat32m8_t 
test_vmerge_vvm_f32m8_tu(vfloat32m8_t dest, vbool4_t mask, vfloat32m8_t op1, vfloat32m8_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_f64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vfloat64m1_t 
test_vmerge_vvm_f64m1_tu(vfloat64m1_t dest, vbool64_t mask, vfloat64m1_t op1, vfloat64m1_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_f64m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vfloat64m2_t 
test_vmerge_vvm_f64m2_tu(vfloat64m2_t dest, vbool32_t mask, vfloat64m2_t op1, vfloat64m2_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_f64m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vfloat64m4_t 
test_vmerge_vvm_f64m4_tu(vfloat64m4_t dest, vbool16_t mask, vfloat64m4_t op1, vfloat64m4_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_f64m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vfloat64m8_t 
test_vmerge_vvm_f64m8_tu(vfloat64m8_t dest, vbool8_t mask, vfloat64m8_t op1, vfloat64m8_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint8mf8_t 
test_vmerge_vvm_i8mf8(vbool64_t mask, vint8mf8_t op1, vint8mf8_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint8mf4_t 
test_vmerge_vvm_i8mf4(vbool32_t mask, vint8mf4_t op1, vint8mf4_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint8mf2_t 
test_vmerge_vvm_i8mf2(vbool16_t mask, vint8mf2_t op1, vint8mf2_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint8m1_t 
test_vmerge_vvm_i8m1(vbool8_t mask, vint8m1_t op1, vint8m1_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_i8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vint8m2_t 
test_vmerge_vvm_i8m2(vbool4_t mask, vint8m2_t op1, vint8m2_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_i8m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vint8m4_t 
test_vmerge_vvm_i8m4(vbool2_t mask, vint8m4_t op1, vint8m4_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_i8m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vint8m8_t 
test_vmerge_vvm_i8m8(vbool1_t mask, vint8m8_t op1, vint8m8_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint16mf4_t 
test_vmerge_vvm_i16mf4(vbool64_t mask, vint16mf4_t op1, vint16mf4_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint16mf2_t 
test_vmerge_vvm_i16mf2(vbool32_t mask, vint16mf2_t op1, vint16mf2_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint16m1_t 
test_vmerge_vvm_i16m1(vbool16_t mask, vint16m1_t op1, vint16m1_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_i16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vint16m2_t 
test_vmerge_vvm_i16m2(vbool8_t mask, vint16m2_t op1, vint16m2_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_i16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vint16m4_t 
test_vmerge_vvm_i16m4(vbool4_t mask, vint16m4_t op1, vint16m4_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_i16m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vint16m8_t 
test_vmerge_vvm_i16m8(vbool2_t mask, vint16m8_t op1, vint16m8_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint32mf2_t 
test_vmerge_vvm_i32mf2(vbool64_t mask, vint32mf2_t op1, vint32mf2_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint32m1_t 
test_vmerge_vvm_i32m1(vbool32_t mask, vint32m1_t op1, vint32m1_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_i32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vint32m2_t 
test_vmerge_vvm_i32m2(vbool16_t mask, vint32m2_t op1, vint32m2_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_i32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vint32m4_t 
test_vmerge_vvm_i32m4(vbool8_t mask, vint32m4_t op1, vint32m4_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_i32m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vint32m8_t 
test_vmerge_vvm_i32m8(vbool4_t mask, vint32m8_t op1, vint32m8_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint64m1_t 
test_vmerge_vvm_i64m1(vbool64_t mask, vint64m1_t op1, vint64m1_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_i64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vint64m2_t 
test_vmerge_vvm_i64m2(vbool32_t mask, vint64m2_t op1, vint64m2_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_i64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vint64m4_t 
test_vmerge_vvm_i64m4(vbool16_t mask, vint64m4_t op1, vint64m4_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_i64m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vint64m8_t 
test_vmerge_vvm_i64m8(vbool8_t mask, vint64m8_t op1, vint64m8_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_i8mf8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint8mf8_t 
test_vmerge_vvm_i8mf8_ta(vbool64_t mask, vint8mf8_t op1, vint8mf8_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_i8mf4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint8mf4_t 
test_vmerge_vvm_i8mf4_ta(vbool32_t mask, vint8mf4_t op1, vint8mf4_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_i8mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint8mf2_t 
test_vmerge_vvm_i8mf2_ta(vbool16_t mask, vint8mf2_t op1, vint8mf2_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_i8m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint8m1_t 
test_vmerge_vvm_i8m1_ta(vbool8_t mask, vint8m1_t op1, vint8m1_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_i8m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vint8m2_t 
test_vmerge_vvm_i8m2_ta(vbool4_t mask, vint8m2_t op1, vint8m2_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_i8m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vint8m4_t 
test_vmerge_vvm_i8m4_ta(vbool2_t mask, vint8m4_t op1, vint8m4_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_i8m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vint8m8_t 
test_vmerge_vvm_i8m8_ta(vbool1_t mask, vint8m8_t op1, vint8m8_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_i16mf4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint16mf4_t 
test_vmerge_vvm_i16mf4_ta(vbool64_t mask, vint16mf4_t op1, vint16mf4_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_i16mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint16mf2_t 
test_vmerge_vvm_i16mf2_ta(vbool32_t mask, vint16mf2_t op1, vint16mf2_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_i16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint16m1_t 
test_vmerge_vvm_i16m1_ta(vbool16_t mask, vint16m1_t op1, vint16m1_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_i16m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vint16m2_t 
test_vmerge_vvm_i16m2_ta(vbool8_t mask, vint16m2_t op1, vint16m2_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_i16m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vint16m4_t 
test_vmerge_vvm_i16m4_ta(vbool4_t mask, vint16m4_t op1, vint16m4_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_i16m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vint16m8_t 
test_vmerge_vvm_i16m8_ta(vbool2_t mask, vint16m8_t op1, vint16m8_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_i32mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint32mf2_t 
test_vmerge_vvm_i32mf2_ta(vbool64_t mask, vint32mf2_t op1, vint32mf2_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_i32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint32m1_t 
test_vmerge_vvm_i32m1_ta(vbool32_t mask, vint32m1_t op1, vint32m1_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_i32m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vint32m2_t 
test_vmerge_vvm_i32m2_ta(vbool16_t mask, vint32m2_t op1, vint32m2_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_i32m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vint32m4_t 
test_vmerge_vvm_i32m4_ta(vbool8_t mask, vint32m4_t op1, vint32m4_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_i32m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vint32m8_t 
test_vmerge_vvm_i32m8_ta(vbool4_t mask, vint32m8_t op1, vint32m8_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_i64m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint64m1_t 
test_vmerge_vvm_i64m1_ta(vbool64_t mask, vint64m1_t op1, vint64m1_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_i64m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vint64m2_t 
test_vmerge_vvm_i64m2_ta(vbool32_t mask, vint64m2_t op1, vint64m2_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_i64m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vint64m4_t 
test_vmerge_vvm_i64m4_ta(vbool16_t mask, vint64m4_t op1, vint64m4_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_i64m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vint64m8_t 
test_vmerge_vvm_i64m8_ta(vbool8_t mask, vint64m8_t op1, vint64m8_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_i8mf8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint8mf8_t 
test_vmerge_vvm_i8mf8_tu(vint8mf8_t dest, vbool64_t mask, vint8mf8_t op1, vint8mf8_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_i8mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint8mf4_t 
test_vmerge_vvm_i8mf4_tu(vint8mf4_t dest, vbool32_t mask, vint8mf4_t op1, vint8mf4_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_i8mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint8mf2_t 
test_vmerge_vvm_i8mf2_tu(vint8mf2_t dest, vbool16_t mask, vint8mf2_t op1, vint8mf2_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_i8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint8m1_t 
test_vmerge_vvm_i8m1_tu(vint8m1_t dest, vbool8_t mask, vint8m1_t op1, vint8m1_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_i8m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vint8m2_t 
test_vmerge_vvm_i8m2_tu(vint8m2_t dest, vbool4_t mask, vint8m2_t op1, vint8m2_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_i8m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vint8m4_t 
test_vmerge_vvm_i8m4_tu(vint8m4_t dest, vbool2_t mask, vint8m4_t op1, vint8m4_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_i8m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vint8m8_t 
test_vmerge_vvm_i8m8_tu(vint8m8_t dest, vbool1_t mask, vint8m8_t op1, vint8m8_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_i16mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint16mf4_t 
test_vmerge_vvm_i16mf4_tu(vint16mf4_t dest, vbool64_t mask, vint16mf4_t op1, vint16mf4_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_i16mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint16mf2_t 
test_vmerge_vvm_i16mf2_tu(vint16mf2_t dest, vbool32_t mask, vint16mf2_t op1, vint16mf2_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_i16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint16m1_t 
test_vmerge_vvm_i16m1_tu(vint16m1_t dest, vbool16_t mask, vint16m1_t op1, vint16m1_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_i16m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vint16m2_t 
test_vmerge_vvm_i16m2_tu(vint16m2_t dest, vbool8_t mask, vint16m2_t op1, vint16m2_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_i16m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vint16m4_t 
test_vmerge_vvm_i16m4_tu(vint16m4_t dest, vbool4_t mask, vint16m4_t op1, vint16m4_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_i16m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vint16m8_t 
test_vmerge_vvm_i16m8_tu(vint16m8_t dest, vbool2_t mask, vint16m8_t op1, vint16m8_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_i32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint32mf2_t 
test_vmerge_vvm_i32mf2_tu(vint32mf2_t dest, vbool64_t mask, vint32mf2_t op1, vint32mf2_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_i32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint32m1_t 
test_vmerge_vvm_i32m1_tu(vint32m1_t dest, vbool32_t mask, vint32m1_t op1, vint32m1_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_i32m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vint32m2_t 
test_vmerge_vvm_i32m2_tu(vint32m2_t dest, vbool16_t mask, vint32m2_t op1, vint32m2_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_i32m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vint32m4_t 
test_vmerge_vvm_i32m4_tu(vint32m4_t dest, vbool8_t mask, vint32m4_t op1, vint32m4_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_i32m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vint32m8_t 
test_vmerge_vvm_i32m8_tu(vint32m8_t dest, vbool4_t mask, vint32m8_t op1, vint32m8_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_i64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint64m1_t 
test_vmerge_vvm_i64m1_tu(vint64m1_t dest, vbool64_t mask, vint64m1_t op1, vint64m1_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_i64m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vint64m2_t 
test_vmerge_vvm_i64m2_tu(vint64m2_t dest, vbool32_t mask, vint64m2_t op1, vint64m2_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_i64m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vint64m4_t 
test_vmerge_vvm_i64m4_tu(vint64m4_t dest, vbool16_t mask, vint64m4_t op1, vint64m4_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_i64m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vint64m8_t 
test_vmerge_vvm_i64m8_tu(vint64m8_t dest, vbool8_t mask, vint64m8_t op1, vint64m8_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8mf8_t 
test_vmerge_vvm_u8mf8(vbool64_t mask, vuint8mf8_t op1, vuint8mf8_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8mf4_t 
test_vmerge_vvm_u8mf4(vbool32_t mask, vuint8mf4_t op1, vuint8mf4_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8mf2_t 
test_vmerge_vvm_u8mf2(vbool16_t mask, vuint8mf2_t op1, vuint8mf2_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8m1_t 
test_vmerge_vvm_u8m1(vbool8_t mask, vuint8m1_t op1, vuint8m1_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_u8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vuint8m2_t 
test_vmerge_vvm_u8m2(vbool4_t mask, vuint8m2_t op1, vuint8m2_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_u8m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8m4_t 
test_vmerge_vvm_u8m4(vbool2_t mask, vuint8m4_t op1, vuint8m4_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_u8m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vuint8m8_t 
test_vmerge_vvm_u8m8(vbool1_t mask, vuint8m8_t op1, vuint8m8_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16mf4_t 
test_vmerge_vvm_u16mf4(vbool64_t mask, vuint16mf4_t op1, vuint16mf4_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16mf2_t 
test_vmerge_vvm_u16mf2(vbool32_t mask, vuint16mf2_t op1, vuint16mf2_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vmerge_vvm_u16m1(vbool16_t mask, vuint16m1_t op1, vuint16m1_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_u16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vuint16m2_t 
test_vmerge_vvm_u16m2(vbool8_t mask, vuint16m2_t op1, vuint16m2_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_u16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16m4_t 
test_vmerge_vvm_u16m4(vbool4_t mask, vuint16m4_t op1, vuint16m4_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_u16m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vuint16m8_t 
test_vmerge_vvm_u16m8(vbool2_t mask, vuint16m8_t op1, vuint16m8_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint32mf2_t 
test_vmerge_vvm_u32mf2(vbool64_t mask, vuint32mf2_t op1, vuint32mf2_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vmerge_vvm_u32m1(vbool32_t mask, vuint32m1_t op1, vuint32m1_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_u32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vuint32m2_t 
test_vmerge_vvm_u32m2(vbool16_t mask, vuint32m2_t op1, vuint32m2_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_u32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vuint32m4_t 
test_vmerge_vvm_u32m4(vbool8_t mask, vuint32m4_t op1, vuint32m4_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_u32m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vuint32m8_t 
test_vmerge_vvm_u32m8(vbool4_t mask, vuint32m8_t op1, vuint32m8_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vmerge_vvm_u64m1(vbool64_t mask, vuint64m1_t op1, vuint64m1_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_u64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vuint64m2_t 
test_vmerge_vvm_u64m2(vbool32_t mask, vuint64m2_t op1, vuint64m2_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_u64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vuint64m4_t 
test_vmerge_vvm_u64m4(vbool16_t mask, vuint64m4_t op1, vuint64m4_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_u64m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vuint64m8_t 
test_vmerge_vvm_u64m8(vbool8_t mask, vuint64m8_t op1, vuint64m8_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_u8mf8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8mf8_t 
test_vmerge_vvm_u8mf8_ta(vbool64_t mask, vuint8mf8_t op1, vuint8mf8_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_u8mf4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8mf4_t 
test_vmerge_vvm_u8mf4_ta(vbool32_t mask, vuint8mf4_t op1, vuint8mf4_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_u8mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8mf2_t 
test_vmerge_vvm_u8mf2_ta(vbool16_t mask, vuint8mf2_t op1, vuint8mf2_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_u8m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8m1_t 
test_vmerge_vvm_u8m1_ta(vbool8_t mask, vuint8m1_t op1, vuint8m1_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_u8m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vuint8m2_t 
test_vmerge_vvm_u8m2_ta(vbool4_t mask, vuint8m2_t op1, vuint8m2_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_u8m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8m4_t 
test_vmerge_vvm_u8m4_ta(vbool2_t mask, vuint8m4_t op1, vuint8m4_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_u8m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vuint8m8_t 
test_vmerge_vvm_u8m8_ta(vbool1_t mask, vuint8m8_t op1, vuint8m8_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_u16mf4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16mf4_t 
test_vmerge_vvm_u16mf4_ta(vbool64_t mask, vuint16mf4_t op1, vuint16mf4_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_u16mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16mf2_t 
test_vmerge_vvm_u16mf2_ta(vbool32_t mask, vuint16mf2_t op1, vuint16mf2_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_u16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vmerge_vvm_u16m1_ta(vbool16_t mask, vuint16m1_t op1, vuint16m1_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_u16m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vuint16m2_t 
test_vmerge_vvm_u16m2_ta(vbool8_t mask, vuint16m2_t op1, vuint16m2_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_u16m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16m4_t 
test_vmerge_vvm_u16m4_ta(vbool4_t mask, vuint16m4_t op1, vuint16m4_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_u16m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vuint16m8_t 
test_vmerge_vvm_u16m8_ta(vbool2_t mask, vuint16m8_t op1, vuint16m8_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_u32mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint32mf2_t 
test_vmerge_vvm_u32mf2_ta(vbool64_t mask, vuint32mf2_t op1, vuint32mf2_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_u32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vmerge_vvm_u32m1_ta(vbool32_t mask, vuint32m1_t op1, vuint32m1_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_u32m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vuint32m2_t 
test_vmerge_vvm_u32m2_ta(vbool16_t mask, vuint32m2_t op1, vuint32m2_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_u32m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vuint32m4_t 
test_vmerge_vvm_u32m4_ta(vbool8_t mask, vuint32m4_t op1, vuint32m4_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_u32m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vuint32m8_t 
test_vmerge_vvm_u32m8_ta(vbool4_t mask, vuint32m8_t op1, vuint32m8_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_u64m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vmerge_vvm_u64m1_ta(vbool64_t mask, vuint64m1_t op1, vuint64m1_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_u64m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vuint64m2_t 
test_vmerge_vvm_u64m2_ta(vbool32_t mask, vuint64m2_t op1, vuint64m2_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_u64m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vuint64m4_t 
test_vmerge_vvm_u64m4_ta(vbool16_t mask, vuint64m4_t op1, vuint64m4_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_u64m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vuint64m8_t 
test_vmerge_vvm_u64m8_ta(vbool8_t mask, vuint64m8_t op1, vuint64m8_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vvm_u8mf8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8mf8_t 
test_vmerge_vvm_u8mf8_tu(vuint8mf8_t dest, vbool64_t mask, vuint8mf8_t op1, vuint8mf8_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_u8mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8mf4_t 
test_vmerge_vvm_u8mf4_tu(vuint8mf4_t dest, vbool32_t mask, vuint8mf4_t op1, vuint8mf4_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_u8mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8mf2_t 
test_vmerge_vvm_u8mf2_tu(vuint8mf2_t dest, vbool16_t mask, vuint8mf2_t op1, vuint8mf2_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_u8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8m1_t 
test_vmerge_vvm_u8m1_tu(vuint8m1_t dest, vbool8_t mask, vuint8m1_t op1, vuint8m1_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_u8m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vuint8m2_t 
test_vmerge_vvm_u8m2_tu(vuint8m2_t dest, vbool4_t mask, vuint8m2_t op1, vuint8m2_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_u8m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8m4_t 
test_vmerge_vvm_u8m4_tu(vuint8m4_t dest, vbool2_t mask, vuint8m4_t op1, vuint8m4_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_u8m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vuint8m8_t 
test_vmerge_vvm_u8m8_tu(vuint8m8_t dest, vbool1_t mask, vuint8m8_t op1, vuint8m8_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_u16mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16mf4_t 
test_vmerge_vvm_u16mf4_tu(vuint16mf4_t dest, vbool64_t mask, vuint16mf4_t op1, vuint16mf4_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_u16mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16mf2_t 
test_vmerge_vvm_u16mf2_tu(vuint16mf2_t dest, vbool32_t mask, vuint16mf2_t op1, vuint16mf2_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_u16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vmerge_vvm_u16m1_tu(vuint16m1_t dest, vbool16_t mask, vuint16m1_t op1, vuint16m1_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_u16m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vuint16m2_t 
test_vmerge_vvm_u16m2_tu(vuint16m2_t dest, vbool8_t mask, vuint16m2_t op1, vuint16m2_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_u16m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16m4_t 
test_vmerge_vvm_u16m4_tu(vuint16m4_t dest, vbool4_t mask, vuint16m4_t op1, vuint16m4_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_u16m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vuint16m8_t 
test_vmerge_vvm_u16m8_tu(vuint16m8_t dest, vbool2_t mask, vuint16m8_t op1, vuint16m8_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_u32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint32mf2_t 
test_vmerge_vvm_u32mf2_tu(vuint32mf2_t dest, vbool64_t mask, vuint32mf2_t op1, vuint32mf2_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_u32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vmerge_vvm_u32m1_tu(vuint32m1_t dest, vbool32_t mask, vuint32m1_t op1, vuint32m1_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_u32m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vuint32m2_t 
test_vmerge_vvm_u32m2_tu(vuint32m2_t dest, vbool16_t mask, vuint32m2_t op1, vuint32m2_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_u32m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vuint32m4_t 
test_vmerge_vvm_u32m4_tu(vuint32m4_t dest, vbool8_t mask, vuint32m4_t op1, vuint32m4_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_u32m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vuint32m8_t 
test_vmerge_vvm_u32m8_tu(vuint32m8_t dest, vbool4_t mask, vuint32m8_t op1, vuint32m8_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_u64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vmerge_vvm_u64m1_tu(vuint64m1_t dest, vbool64_t mask, vuint64m1_t op1, vuint64m1_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_u64m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vuint64m2_t 
test_vmerge_vvm_u64m2_tu(vuint64m2_t dest, vbool32_t mask, vuint64m2_t op1, vuint64m2_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_u64m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vuint64m4_t 
test_vmerge_vvm_u64m4_tu(vuint64m4_t dest, vbool16_t mask, vuint64m4_t op1, vuint64m4_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vvm_u64m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vuint64m8_t 
test_vmerge_vvm_u64m8_tu(vuint64m8_t dest, vbool8_t mask, vuint64m8_t op1, vuint64m8_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vxm_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint8mf8_t 
test_vmerge_vxm_i8mf8(vbool64_t mask, vint8mf8_t op1, int8_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint8mf4_t 
test_vmerge_vxm_i8mf4(vbool32_t mask, vint8mf4_t op1, int8_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint8mf2_t 
test_vmerge_vxm_i8mf2(vbool16_t mask, vint8mf2_t op1, int8_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint8m1_t 
test_vmerge_vxm_i8m1(vbool8_t mask, vint8m1_t op1, int8_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_i8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint8m2_t 
test_vmerge_vxm_i8m2(vbool4_t mask, vint8m2_t op1, int8_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_i8m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint8m4_t 
test_vmerge_vxm_i8m4(vbool2_t mask, vint8m4_t op1, int8_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_i8m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint8m8_t 
test_vmerge_vxm_i8m8(vbool1_t mask, vint8m8_t op1, int8_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint16mf4_t 
test_vmerge_vxm_i16mf4(vbool64_t mask, vint16mf4_t op1, int16_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint16mf2_t 
test_vmerge_vxm_i16mf2(vbool32_t mask, vint16mf2_t op1, int16_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint16m1_t 
test_vmerge_vxm_i16m1(vbool16_t mask, vint16m1_t op1, int16_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_i16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint16m2_t 
test_vmerge_vxm_i16m2(vbool8_t mask, vint16m2_t op1, int16_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_i16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint16m4_t 
test_vmerge_vxm_i16m4(vbool4_t mask, vint16m4_t op1, int16_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_i16m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint16m8_t 
test_vmerge_vxm_i16m8(vbool2_t mask, vint16m8_t op1, int16_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint32mf2_t 
test_vmerge_vxm_i32mf2(vbool64_t mask, vint32mf2_t op1, int32_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint32m1_t 
test_vmerge_vxm_i32m1(vbool32_t mask, vint32m1_t op1, int32_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_i32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint32m2_t 
test_vmerge_vxm_i32m2(vbool16_t mask, vint32m2_t op1, int32_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_i32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint32m4_t 
test_vmerge_vxm_i32m4(vbool8_t mask, vint32m4_t op1, int32_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_i32m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint32m8_t 
test_vmerge_vxm_i32m8(vbool4_t mask, vint32m8_t op1, int32_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_i64m1:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint64m1_t 
test_vmerge_vxm_i64m1(vbool64_t mask, vint64m1_t op1, int64_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_i64m2:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint64m2_t 
test_vmerge_vxm_i64m2(vbool32_t mask, vint64m2_t op1, int64_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_i64m4:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint64m4_t 
test_vmerge_vxm_i64m4(vbool16_t mask, vint64m4_t op1, int64_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_i64m8:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint64m8_t 
test_vmerge_vxm_i64m8(vbool8_t mask, vint64m8_t op1, int64_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_i8mf8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint8mf8_t 
test_vmerge_vxm_i8mf8_ta(vbool64_t mask, vint8mf8_t op1, int8_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_i8mf4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint8mf4_t 
test_vmerge_vxm_i8mf4_ta(vbool32_t mask, vint8mf4_t op1, int8_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_i8mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint8mf2_t 
test_vmerge_vxm_i8mf2_ta(vbool16_t mask, vint8mf2_t op1, int8_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_i8m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint8m1_t 
test_vmerge_vxm_i8m1_ta(vbool8_t mask, vint8m1_t op1, int8_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_i8m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint8m2_t 
test_vmerge_vxm_i8m2_ta(vbool4_t mask, vint8m2_t op1, int8_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_i8m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint8m4_t 
test_vmerge_vxm_i8m4_ta(vbool2_t mask, vint8m4_t op1, int8_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_i8m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint8m8_t 
test_vmerge_vxm_i8m8_ta(vbool1_t mask, vint8m8_t op1, int8_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_i16mf4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint16mf4_t 
test_vmerge_vxm_i16mf4_ta(vbool64_t mask, vint16mf4_t op1, int16_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_i16mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint16mf2_t 
test_vmerge_vxm_i16mf2_ta(vbool32_t mask, vint16mf2_t op1, int16_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_i16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint16m1_t 
test_vmerge_vxm_i16m1_ta(vbool16_t mask, vint16m1_t op1, int16_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_i16m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint16m2_t 
test_vmerge_vxm_i16m2_ta(vbool8_t mask, vint16m2_t op1, int16_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_i16m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint16m4_t 
test_vmerge_vxm_i16m4_ta(vbool4_t mask, vint16m4_t op1, int16_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_i16m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint16m8_t 
test_vmerge_vxm_i16m8_ta(vbool2_t mask, vint16m8_t op1, int16_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_i32mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint32mf2_t 
test_vmerge_vxm_i32mf2_ta(vbool64_t mask, vint32mf2_t op1, int32_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_i32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint32m1_t 
test_vmerge_vxm_i32m1_ta(vbool32_t mask, vint32m1_t op1, int32_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_i32m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint32m2_t 
test_vmerge_vxm_i32m2_ta(vbool16_t mask, vint32m2_t op1, int32_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_i32m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint32m4_t 
test_vmerge_vxm_i32m4_ta(vbool8_t mask, vint32m4_t op1, int32_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_i32m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint32m8_t 
test_vmerge_vxm_i32m8_ta(vbool4_t mask, vint32m8_t op1, int32_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_i64m1_ta:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint64m1_t 
test_vmerge_vxm_i64m1_ta(vbool64_t mask, vint64m1_t op1, int64_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_i64m2_ta:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint64m2_t 
test_vmerge_vxm_i64m2_ta(vbool32_t mask, vint64m2_t op1, int64_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_i64m4_ta:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint64m4_t 
test_vmerge_vxm_i64m4_ta(vbool16_t mask, vint64m4_t op1, int64_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_i64m8_ta:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint64m8_t 
test_vmerge_vxm_i64m8_ta(vbool8_t mask, vint64m8_t op1, int64_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_i8mf8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint8mf8_t 
test_vmerge_vxm_i8mf8_tu(vint8mf8_t dest, vbool64_t mask, vint8mf8_t op1, int8_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vxm_i8mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint8mf4_t 
test_vmerge_vxm_i8mf4_tu(vint8mf4_t dest, vbool32_t mask, vint8mf4_t op1, int8_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vxm_i8mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint8mf2_t 
test_vmerge_vxm_i8mf2_tu(vint8mf2_t dest, vbool16_t mask, vint8mf2_t op1, int8_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vxm_i8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint8m1_t 
test_vmerge_vxm_i8m1_tu(vint8m1_t dest, vbool8_t mask, vint8m1_t op1, int8_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vxm_i8m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint8m2_t 
test_vmerge_vxm_i8m2_tu(vint8m2_t dest, vbool4_t mask, vint8m2_t op1, int8_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vxm_i8m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint8m4_t 
test_vmerge_vxm_i8m4_tu(vint8m4_t dest, vbool2_t mask, vint8m4_t op1, int8_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vxm_i8m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint8m8_t 
test_vmerge_vxm_i8m8_tu(vint8m8_t dest, vbool1_t mask, vint8m8_t op1, int8_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vxm_i16mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint16mf4_t 
test_vmerge_vxm_i16mf4_tu(vint16mf4_t dest, vbool64_t mask, vint16mf4_t op1, int16_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vxm_i16mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint16mf2_t 
test_vmerge_vxm_i16mf2_tu(vint16mf2_t dest, vbool32_t mask, vint16mf2_t op1, int16_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vxm_i16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint16m1_t 
test_vmerge_vxm_i16m1_tu(vint16m1_t dest, vbool16_t mask, vint16m1_t op1, int16_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vxm_i16m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint16m2_t 
test_vmerge_vxm_i16m2_tu(vint16m2_t dest, vbool8_t mask, vint16m2_t op1, int16_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vxm_i16m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint16m4_t 
test_vmerge_vxm_i16m4_tu(vint16m4_t dest, vbool4_t mask, vint16m4_t op1, int16_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vxm_i16m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint16m8_t 
test_vmerge_vxm_i16m8_tu(vint16m8_t dest, vbool2_t mask, vint16m8_t op1, int16_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vxm_i32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint32mf2_t 
test_vmerge_vxm_i32mf2_tu(vint32mf2_t dest, vbool64_t mask, vint32mf2_t op1, int32_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vxm_i32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint32m1_t 
test_vmerge_vxm_i32m1_tu(vint32m1_t dest, vbool32_t mask, vint32m1_t op1, int32_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vxm_i32m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint32m2_t 
test_vmerge_vxm_i32m2_tu(vint32m2_t dest, vbool16_t mask, vint32m2_t op1, int32_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vxm_i32m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint32m4_t 
test_vmerge_vxm_i32m4_tu(vint32m4_t dest, vbool8_t mask, vint32m4_t op1, int32_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vxm_i32m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint32m8_t 
test_vmerge_vxm_i32m8_tu(vint32m8_t dest, vbool4_t mask, vint32m8_t op1, int32_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vxm_i64m1_tu:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint64m1_t 
test_vmerge_vxm_i64m1_tu(vint64m1_t dest, vbool64_t mask, vint64m1_t op1, int64_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vxm_i64m2_tu:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint64m2_t 
test_vmerge_vxm_i64m2_tu(vint64m2_t dest, vbool32_t mask, vint64m2_t op1, int64_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vxm_i64m4_tu:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint64m4_t 
test_vmerge_vxm_i64m4_tu(vint64m4_t dest, vbool16_t mask, vint64m4_t op1, int64_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vxm_i64m8_tu:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint64m8_t 
test_vmerge_vxm_i64m8_tu(vint64m8_t dest, vbool8_t mask, vint64m8_t op1, int64_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vxm_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8mf8_t 
test_vmerge_vxm_u8mf8(vbool64_t mask, vuint8mf8_t op1, uint8_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8mf4_t 
test_vmerge_vxm_u8mf4(vbool32_t mask, vuint8mf4_t op1, uint8_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8mf2_t 
test_vmerge_vxm_u8mf2(vbool16_t mask, vuint8mf2_t op1, uint8_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8m1_t 
test_vmerge_vxm_u8m1(vbool8_t mask, vuint8m1_t op1, uint8_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_u8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8m2_t 
test_vmerge_vxm_u8m2(vbool4_t mask, vuint8m2_t op1, uint8_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_u8m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8m4_t 
test_vmerge_vxm_u8m4(vbool2_t mask, vuint8m4_t op1, uint8_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_u8m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8m8_t 
test_vmerge_vxm_u8m8(vbool1_t mask, vuint8m8_t op1, uint8_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16mf4_t 
test_vmerge_vxm_u16mf4(vbool64_t mask, vuint16mf4_t op1, uint16_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16mf2_t 
test_vmerge_vxm_u16mf2(vbool32_t mask, vuint16mf2_t op1, uint16_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vmerge_vxm_u16m1(vbool16_t mask, vuint16m1_t op1, uint16_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_u16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16m2_t 
test_vmerge_vxm_u16m2(vbool8_t mask, vuint16m2_t op1, uint16_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_u16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16m4_t 
test_vmerge_vxm_u16m4(vbool4_t mask, vuint16m4_t op1, uint16_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_u16m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16m8_t 
test_vmerge_vxm_u16m8(vbool2_t mask, vuint16m8_t op1, uint16_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint32mf2_t 
test_vmerge_vxm_u32mf2(vbool64_t mask, vuint32mf2_t op1, uint32_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vmerge_vxm_u32m1(vbool32_t mask, vuint32m1_t op1, uint32_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_u32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint32m2_t 
test_vmerge_vxm_u32m2(vbool16_t mask, vuint32m2_t op1, uint32_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_u32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint32m4_t 
test_vmerge_vxm_u32m4(vbool8_t mask, vuint32m4_t op1, uint32_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_u32m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint32m8_t 
test_vmerge_vxm_u32m8(vbool4_t mask, vuint32m8_t op1, uint32_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_u64m1:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vmerge_vxm_u64m1(vbool64_t mask, vuint64m1_t op1, uint64_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_u64m2:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint64m2_t 
test_vmerge_vxm_u64m2(vbool32_t mask, vuint64m2_t op1, uint64_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_u64m4:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint64m4_t 
test_vmerge_vxm_u64m4(vbool16_t mask, vuint64m4_t op1, uint64_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_u64m8:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint64m8_t 
test_vmerge_vxm_u64m8(vbool8_t mask, vuint64m8_t op1, uint64_t op2, size_t vl)
{
  return vmerge(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_u8mf8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8mf8_t 
test_vmerge_vxm_u8mf8_ta(vbool64_t mask, vuint8mf8_t op1, uint8_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_u8mf4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8mf4_t 
test_vmerge_vxm_u8mf4_ta(vbool32_t mask, vuint8mf4_t op1, uint8_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_u8mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8mf2_t 
test_vmerge_vxm_u8mf2_ta(vbool16_t mask, vuint8mf2_t op1, uint8_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_u8m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8m1_t 
test_vmerge_vxm_u8m1_ta(vbool8_t mask, vuint8m1_t op1, uint8_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_u8m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8m2_t 
test_vmerge_vxm_u8m2_ta(vbool4_t mask, vuint8m2_t op1, uint8_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_u8m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8m4_t 
test_vmerge_vxm_u8m4_ta(vbool2_t mask, vuint8m4_t op1, uint8_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_u8m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8m8_t 
test_vmerge_vxm_u8m8_ta(vbool1_t mask, vuint8m8_t op1, uint8_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_u16mf4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16mf4_t 
test_vmerge_vxm_u16mf4_ta(vbool64_t mask, vuint16mf4_t op1, uint16_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_u16mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16mf2_t 
test_vmerge_vxm_u16mf2_ta(vbool32_t mask, vuint16mf2_t op1, uint16_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_u16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vmerge_vxm_u16m1_ta(vbool16_t mask, vuint16m1_t op1, uint16_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_u16m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16m2_t 
test_vmerge_vxm_u16m2_ta(vbool8_t mask, vuint16m2_t op1, uint16_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_u16m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16m4_t 
test_vmerge_vxm_u16m4_ta(vbool4_t mask, vuint16m4_t op1, uint16_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_u16m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16m8_t 
test_vmerge_vxm_u16m8_ta(vbool2_t mask, vuint16m8_t op1, uint16_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_u32mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint32mf2_t 
test_vmerge_vxm_u32mf2_ta(vbool64_t mask, vuint32mf2_t op1, uint32_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_u32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vmerge_vxm_u32m1_ta(vbool32_t mask, vuint32m1_t op1, uint32_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_u32m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint32m2_t 
test_vmerge_vxm_u32m2_ta(vbool16_t mask, vuint32m2_t op1, uint32_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_u32m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint32m4_t 
test_vmerge_vxm_u32m4_ta(vbool8_t mask, vuint32m4_t op1, uint32_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_u32m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint32m8_t 
test_vmerge_vxm_u32m8_ta(vbool4_t mask, vuint32m8_t op1, uint32_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_u64m1_ta:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vmerge_vxm_u64m1_ta(vbool64_t mask, vuint64m1_t op1, uint64_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_u64m2_ta:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint64m2_t 
test_vmerge_vxm_u64m2_ta(vbool32_t mask, vuint64m2_t op1, uint64_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_u64m4_ta:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint64m4_t 
test_vmerge_vxm_u64m4_ta(vbool16_t mask, vuint64m4_t op1, uint64_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_u64m8_ta:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint64m8_t 
test_vmerge_vxm_u64m8_ta(vbool8_t mask, vuint64m8_t op1, uint64_t op2, size_t vl)
{
  return vmerge_ta(mask, op1, op2, vl);
}


/*
** test_vmerge_vxm_u8mf8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8mf8_t 
test_vmerge_vxm_u8mf8_tu(vuint8mf8_t dest, vbool64_t mask, vuint8mf8_t op1, uint8_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vxm_u8mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8mf4_t 
test_vmerge_vxm_u8mf4_tu(vuint8mf4_t dest, vbool32_t mask, vuint8mf4_t op1, uint8_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vxm_u8mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8mf2_t 
test_vmerge_vxm_u8mf2_tu(vuint8mf2_t dest, vbool16_t mask, vuint8mf2_t op1, uint8_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vxm_u8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8m1_t 
test_vmerge_vxm_u8m1_tu(vuint8m1_t dest, vbool8_t mask, vuint8m1_t op1, uint8_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vxm_u8m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8m2_t 
test_vmerge_vxm_u8m2_tu(vuint8m2_t dest, vbool4_t mask, vuint8m2_t op1, uint8_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vxm_u8m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8m4_t 
test_vmerge_vxm_u8m4_tu(vuint8m4_t dest, vbool2_t mask, vuint8m4_t op1, uint8_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vxm_u8m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8m8_t 
test_vmerge_vxm_u8m8_tu(vuint8m8_t dest, vbool1_t mask, vuint8m8_t op1, uint8_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vxm_u16mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16mf4_t 
test_vmerge_vxm_u16mf4_tu(vuint16mf4_t dest, vbool64_t mask, vuint16mf4_t op1, uint16_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vxm_u16mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16mf2_t 
test_vmerge_vxm_u16mf2_tu(vuint16mf2_t dest, vbool32_t mask, vuint16mf2_t op1, uint16_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vxm_u16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vmerge_vxm_u16m1_tu(vuint16m1_t dest, vbool16_t mask, vuint16m1_t op1, uint16_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vxm_u16m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16m2_t 
test_vmerge_vxm_u16m2_tu(vuint16m2_t dest, vbool8_t mask, vuint16m2_t op1, uint16_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vxm_u16m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16m4_t 
test_vmerge_vxm_u16m4_tu(vuint16m4_t dest, vbool4_t mask, vuint16m4_t op1, uint16_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vxm_u16m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16m8_t 
test_vmerge_vxm_u16m8_tu(vuint16m8_t dest, vbool2_t mask, vuint16m8_t op1, uint16_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vxm_u32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint32mf2_t 
test_vmerge_vxm_u32mf2_tu(vuint32mf2_t dest, vbool64_t mask, vuint32mf2_t op1, uint32_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vxm_u32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vmerge_vxm_u32m1_tu(vuint32m1_t dest, vbool32_t mask, vuint32m1_t op1, uint32_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vxm_u32m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint32m2_t 
test_vmerge_vxm_u32m2_tu(vuint32m2_t dest, vbool16_t mask, vuint32m2_t op1, uint32_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vxm_u32m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint32m4_t 
test_vmerge_vxm_u32m4_tu(vuint32m4_t dest, vbool8_t mask, vuint32m4_t op1, uint32_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vxm_u32m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint32m8_t 
test_vmerge_vxm_u32m8_tu(vuint32m8_t dest, vbool4_t mask, vuint32m8_t op1, uint32_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vxm_u64m1_tu:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vmerge_vxm_u64m1_tu(vuint64m1_t dest, vbool64_t mask, vuint64m1_t op1, uint64_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vxm_u64m2_tu:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint64m2_t 
test_vmerge_vxm_u64m2_tu(vuint64m2_t dest, vbool32_t mask, vuint64m2_t op1, uint64_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vxm_u64m4_tu:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint64m4_t 
test_vmerge_vxm_u64m4_tu(vuint64m4_t dest, vbool16_t mask, vuint64m4_t op1, uint64_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}


/*
** test_vmerge_vxm_u64m8_tu:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint64m8_t 
test_vmerge_vxm_u64m8_tu(vuint64m8_t dest, vbool8_t mask, vuint64m8_t op1, uint64_t op2, size_t vl)
{
  return vmerge_tu(mask, dest, op1, op2, vl);
}

