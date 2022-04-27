/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>


/*
** test_vfredmax_vs_f16mf4_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16mf4_f16m1(vfloat16m1_t dest, vfloat16mf4_t op1, vfloat16m1_t op2, size_t vl)
{
  return vfredmax_vs_f16mf4_f16m1(dest, op1, op2, vl);
}

/*
** test_vfredmax_vs_f16mf4_f16m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16mf4_f16m1_vl31(vfloat16m1_t dest, vfloat16mf4_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16mf4_f16m1(dest, op1, op2, 31);
}

/*
** test_vfredmax_vs_f16mf2_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16mf2_f16m1(vfloat16m1_t dest, vfloat16mf2_t op1, vfloat16m1_t op2, size_t vl)
{
  return vfredmax_vs_f16mf2_f16m1(dest, op1, op2, vl);
}

/*
** test_vfredmax_vs_f16mf2_f16m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16mf2_f16m1_vl31(vfloat16m1_t dest, vfloat16mf2_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16mf2_f16m1(dest, op1, op2, 31);
}

/*
** test_vfredmax_vs_f16m1_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m1_f16m1(vfloat16m1_t dest, vfloat16m1_t op1, vfloat16m1_t op2, size_t vl)
{
  return vfredmax_vs_f16m1_f16m1(dest, op1, op2, vl);
}

/*
** test_vfredmax_vs_f16m1_f16m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m1_f16m1_vl31(vfloat16m1_t dest, vfloat16m1_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16m1_f16m1(dest, op1, op2, 31);
}

/*
** test_vfredmax_vs_f16m2_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m2_f16m1(vfloat16m1_t dest, vfloat16m2_t op1, vfloat16m1_t op2, size_t vl)
{
  return vfredmax_vs_f16m2_f16m1(dest, op1, op2, vl);
}

/*
** test_vfredmax_vs_f16m2_f16m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m2_f16m1_vl31(vfloat16m1_t dest, vfloat16m2_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16m2_f16m1(dest, op1, op2, 31);
}

/*
** test_vfredmax_vs_f16m4_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m4_f16m1(vfloat16m1_t dest, vfloat16m4_t op1, vfloat16m1_t op2, size_t vl)
{
  return vfredmax_vs_f16m4_f16m1(dest, op1, op2, vl);
}

/*
** test_vfredmax_vs_f16m4_f16m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m4_f16m1_vl31(vfloat16m1_t dest, vfloat16m4_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16m4_f16m1(dest, op1, op2, 31);
}

/*
** test_vfredmax_vs_f16m8_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m8_f16m1(vfloat16m1_t dest, vfloat16m8_t op1, vfloat16m1_t op2, size_t vl)
{
  return vfredmax_vs_f16m8_f16m1(dest, op1, op2, vl);
}

/*
** test_vfredmax_vs_f16m8_f16m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m8_f16m1_vl31(vfloat16m1_t dest, vfloat16m8_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16m8_f16m1(dest, op1, op2, 31);
}

/*
** test_vfredmax_vs_f32mf2_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32mf2_f32m1(vfloat32m1_t dest, vfloat32mf2_t op1, vfloat32m1_t op2, size_t vl)
{
  return vfredmax_vs_f32mf2_f32m1(dest, op1, op2, vl);
}

/*
** test_vfredmax_vs_f32mf2_f32m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32mf2_f32m1_vl31(vfloat32m1_t dest, vfloat32mf2_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32mf2_f32m1(dest, op1, op2, 31);
}

/*
** test_vfredmax_vs_f32m1_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m1_f32m1(vfloat32m1_t dest, vfloat32m1_t op1, vfloat32m1_t op2, size_t vl)
{
  return vfredmax_vs_f32m1_f32m1(dest, op1, op2, vl);
}

/*
** test_vfredmax_vs_f32m1_f32m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m1_f32m1_vl31(vfloat32m1_t dest, vfloat32m1_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32m1_f32m1(dest, op1, op2, 31);
}

/*
** test_vfredmax_vs_f32m2_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m2_f32m1(vfloat32m1_t dest, vfloat32m2_t op1, vfloat32m1_t op2, size_t vl)
{
  return vfredmax_vs_f32m2_f32m1(dest, op1, op2, vl);
}

/*
** test_vfredmax_vs_f32m2_f32m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m2_f32m1_vl31(vfloat32m1_t dest, vfloat32m2_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32m2_f32m1(dest, op1, op2, 31);
}

/*
** test_vfredmax_vs_f32m4_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m4_f32m1(vfloat32m1_t dest, vfloat32m4_t op1, vfloat32m1_t op2, size_t vl)
{
  return vfredmax_vs_f32m4_f32m1(dest, op1, op2, vl);
}

/*
** test_vfredmax_vs_f32m4_f32m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m4_f32m1_vl31(vfloat32m1_t dest, vfloat32m4_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32m4_f32m1(dest, op1, op2, 31);
}

/*
** test_vfredmax_vs_f32m8_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m8_f32m1(vfloat32m1_t dest, vfloat32m8_t op1, vfloat32m1_t op2, size_t vl)
{
  return vfredmax_vs_f32m8_f32m1(dest, op1, op2, vl);
}

/*
** test_vfredmax_vs_f32m8_f32m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m8_f32m1_vl31(vfloat32m1_t dest, vfloat32m8_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32m8_f32m1(dest, op1, op2, 31);
}

/*
** test_vfredmax_vs_f64m1_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m1_f64m1(vfloat64m1_t dest, vfloat64m1_t op1, vfloat64m1_t op2, size_t vl)
{
  return vfredmax_vs_f64m1_f64m1(dest, op1, op2, vl);
}

/*
** test_vfredmax_vs_f64m1_f64m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m1_f64m1_vl31(vfloat64m1_t dest, vfloat64m1_t op1, vfloat64m1_t op2)
{
  return vfredmax_vs_f64m1_f64m1(dest, op1, op2, 31);
}

/*
** test_vfredmax_vs_f64m2_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m2_f64m1(vfloat64m1_t dest, vfloat64m2_t op1, vfloat64m1_t op2, size_t vl)
{
  return vfredmax_vs_f64m2_f64m1(dest, op1, op2, vl);
}

/*
** test_vfredmax_vs_f64m2_f64m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m2_f64m1_vl31(vfloat64m1_t dest, vfloat64m2_t op1, vfloat64m1_t op2)
{
  return vfredmax_vs_f64m2_f64m1(dest, op1, op2, 31);
}

/*
** test_vfredmax_vs_f64m4_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m4_f64m1(vfloat64m1_t dest, vfloat64m4_t op1, vfloat64m1_t op2, size_t vl)
{
  return vfredmax_vs_f64m4_f64m1(dest, op1, op2, vl);
}

/*
** test_vfredmax_vs_f64m4_f64m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m4_f64m1_vl31(vfloat64m1_t dest, vfloat64m4_t op1, vfloat64m1_t op2)
{
  return vfredmax_vs_f64m4_f64m1(dest, op1, op2, 31);
}

/*
** test_vfredmax_vs_f64m8_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m8_f64m1(vfloat64m1_t dest, vfloat64m8_t op1, vfloat64m1_t op2, size_t vl)
{
  return vfredmax_vs_f64m8_f64m1(dest, op1, op2, vl);
}

/*
** test_vfredmax_vs_f64m8_f64m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m8_f64m1_vl31(vfloat64m1_t dest, vfloat64m8_t op1, vfloat64m1_t op2)
{
  return vfredmax_vs_f64m8_f64m1(dest, op1, op2, 31);
}

/*
** test_vfredmax_vs_f16mf4_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16mf4_f16m1_m(vbool64_t mask, vfloat16m1_t maskedoff, vfloat16mf4_t op1, vfloat16m1_t op2, size_t vl)
{
  return vfredmax_vs_f16mf4_f16m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vfredmax_vs_f16mf4_f16m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16mf4_f16m1_m_vl31(vbool64_t mask, vfloat16m1_t maskedoff, vfloat16mf4_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16mf4_f16m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vfredmax_vs_f16mf2_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16mf2_f16m1_m(vbool32_t mask, vfloat16m1_t maskedoff, vfloat16mf2_t op1, vfloat16m1_t op2, size_t vl)
{
  return vfredmax_vs_f16mf2_f16m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vfredmax_vs_f16mf2_f16m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16mf2_f16m1_m_vl31(vbool32_t mask, vfloat16m1_t maskedoff, vfloat16mf2_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16mf2_f16m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vfredmax_vs_f16m1_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m1_f16m1_m(vbool16_t mask, vfloat16m1_t maskedoff, vfloat16m1_t op1, vfloat16m1_t op2, size_t vl)
{
  return vfredmax_vs_f16m1_f16m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vfredmax_vs_f16m1_f16m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m1_f16m1_m_vl31(vbool16_t mask, vfloat16m1_t maskedoff, vfloat16m1_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16m1_f16m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vfredmax_vs_f16m2_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m2_f16m1_m(vbool8_t mask, vfloat16m1_t maskedoff, vfloat16m2_t op1, vfloat16m1_t op2, size_t vl)
{
  return vfredmax_vs_f16m2_f16m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vfredmax_vs_f16m2_f16m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m2_f16m1_m_vl31(vbool8_t mask, vfloat16m1_t maskedoff, vfloat16m2_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16m2_f16m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vfredmax_vs_f16m4_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m4_f16m1_m(vbool4_t mask, vfloat16m1_t maskedoff, vfloat16m4_t op1, vfloat16m1_t op2, size_t vl)
{
  return vfredmax_vs_f16m4_f16m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vfredmax_vs_f16m4_f16m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m4_f16m1_m_vl31(vbool4_t mask, vfloat16m1_t maskedoff, vfloat16m4_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16m4_f16m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vfredmax_vs_f16m8_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*mu
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m8_f16m1_m(vbool2_t mask, vfloat16m1_t maskedoff, vfloat16m8_t op1, vfloat16m1_t op2, size_t vl)
{
  return vfredmax_vs_f16m8_f16m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vfredmax_vs_f16m8_f16m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*mu
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m8_f16m1_m_vl31(vbool2_t mask, vfloat16m1_t maskedoff, vfloat16m8_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16m8_f16m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vfredmax_vs_f32mf2_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32mf2_f32m1_m(vbool64_t mask, vfloat32m1_t maskedoff, vfloat32mf2_t op1, vfloat32m1_t op2, size_t vl)
{
  return vfredmax_vs_f32mf2_f32m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vfredmax_vs_f32mf2_f32m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32mf2_f32m1_m_vl31(vbool64_t mask, vfloat32m1_t maskedoff, vfloat32mf2_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32mf2_f32m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vfredmax_vs_f32m1_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m1_f32m1_m(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t op1, vfloat32m1_t op2, size_t vl)
{
  return vfredmax_vs_f32m1_f32m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vfredmax_vs_f32m1_f32m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m1_f32m1_m_vl31(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32m1_f32m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vfredmax_vs_f32m2_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m2_f32m1_m(vbool16_t mask, vfloat32m1_t maskedoff, vfloat32m2_t op1, vfloat32m1_t op2, size_t vl)
{
  return vfredmax_vs_f32m2_f32m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vfredmax_vs_f32m2_f32m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m2_f32m1_m_vl31(vbool16_t mask, vfloat32m1_t maskedoff, vfloat32m2_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32m2_f32m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vfredmax_vs_f32m4_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m4_f32m1_m(vbool8_t mask, vfloat32m1_t maskedoff, vfloat32m4_t op1, vfloat32m1_t op2, size_t vl)
{
  return vfredmax_vs_f32m4_f32m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vfredmax_vs_f32m4_f32m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m4_f32m1_m_vl31(vbool8_t mask, vfloat32m1_t maskedoff, vfloat32m4_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32m4_f32m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vfredmax_vs_f32m8_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m8_f32m1_m(vbool4_t mask, vfloat32m1_t maskedoff, vfloat32m8_t op1, vfloat32m1_t op2, size_t vl)
{
  return vfredmax_vs_f32m8_f32m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vfredmax_vs_f32m8_f32m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*mu
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m8_f32m1_m_vl31(vbool4_t mask, vfloat32m1_t maskedoff, vfloat32m8_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32m8_f32m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vfredmax_vs_f64m1_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m1_f64m1_m(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t op1, vfloat64m1_t op2, size_t vl)
{
  return vfredmax_vs_f64m1_f64m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vfredmax_vs_f64m1_f64m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m1_f64m1_m_vl31(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t op1, vfloat64m1_t op2)
{
  return vfredmax_vs_f64m1_f64m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vfredmax_vs_f64m2_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m2_f64m1_m(vbool32_t mask, vfloat64m1_t maskedoff, vfloat64m2_t op1, vfloat64m1_t op2, size_t vl)
{
  return vfredmax_vs_f64m2_f64m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vfredmax_vs_f64m2_f64m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m2_f64m1_m_vl31(vbool32_t mask, vfloat64m1_t maskedoff, vfloat64m2_t op1, vfloat64m1_t op2)
{
  return vfredmax_vs_f64m2_f64m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vfredmax_vs_f64m4_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m4_f64m1_m(vbool16_t mask, vfloat64m1_t maskedoff, vfloat64m4_t op1, vfloat64m1_t op2, size_t vl)
{
  return vfredmax_vs_f64m4_f64m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vfredmax_vs_f64m4_f64m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m4_f64m1_m_vl31(vbool16_t mask, vfloat64m1_t maskedoff, vfloat64m4_t op1, vfloat64m1_t op2)
{
  return vfredmax_vs_f64m4_f64m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vfredmax_vs_f64m8_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m8_f64m1_m(vbool8_t mask, vfloat64m1_t maskedoff, vfloat64m8_t op1, vfloat64m1_t op2, size_t vl)
{
  return vfredmax_vs_f64m8_f64m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vfredmax_vs_f64m8_f64m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*mu
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m8_f64m1_m_vl31(vbool8_t mask, vfloat64m1_t maskedoff, vfloat64m8_t op1, vfloat64m1_t op2)
{
  return vfredmax_vs_f64m8_f64m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vfredmax_vs_f16mf4_f16m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16mf4_f16m1_m_vl32(vbool64_t mask, vfloat16m1_t maskedoff, vfloat16mf4_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16mf4_f16m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vfredmax_vs_f16mf2_f16m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16mf2_f16m1_m_vl32(vbool32_t mask, vfloat16m1_t maskedoff, vfloat16mf2_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16mf2_f16m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vfredmax_vs_f16m1_f16m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m1_f16m1_m_vl32(vbool16_t mask, vfloat16m1_t maskedoff, vfloat16m1_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16m1_f16m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vfredmax_vs_f16m2_f16m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m2_f16m1_m_vl32(vbool8_t mask, vfloat16m1_t maskedoff, vfloat16m2_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16m2_f16m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vfredmax_vs_f16m4_f16m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m4_f16m1_m_vl32(vbool4_t mask, vfloat16m1_t maskedoff, vfloat16m4_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16m4_f16m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vfredmax_vs_f16m8_f16m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*mu
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m8_f16m1_m_vl32(vbool2_t mask, vfloat16m1_t maskedoff, vfloat16m8_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16m8_f16m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vfredmax_vs_f32mf2_f32m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32mf2_f32m1_m_vl32(vbool64_t mask, vfloat32m1_t maskedoff, vfloat32mf2_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32mf2_f32m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vfredmax_vs_f32m1_f32m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m1_f32m1_m_vl32(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32m1_f32m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vfredmax_vs_f32m2_f32m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m2_f32m1_m_vl32(vbool16_t mask, vfloat32m1_t maskedoff, vfloat32m2_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32m2_f32m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vfredmax_vs_f32m4_f32m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m4_f32m1_m_vl32(vbool8_t mask, vfloat32m1_t maskedoff, vfloat32m4_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32m4_f32m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vfredmax_vs_f32m8_f32m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m8_f32m1_m_vl32(vbool4_t mask, vfloat32m1_t maskedoff, vfloat32m8_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32m8_f32m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vfredmax_vs_f64m1_f64m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m1_f64m1_m_vl32(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t op1, vfloat64m1_t op2)
{
  return vfredmax_vs_f64m1_f64m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vfredmax_vs_f64m2_f64m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m2_f64m1_m_vl32(vbool32_t mask, vfloat64m1_t maskedoff, vfloat64m2_t op1, vfloat64m1_t op2)
{
  return vfredmax_vs_f64m2_f64m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vfredmax_vs_f64m4_f64m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m4_f64m1_m_vl32(vbool16_t mask, vfloat64m1_t maskedoff, vfloat64m4_t op1, vfloat64m1_t op2)
{
  return vfredmax_vs_f64m4_f64m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vfredmax_vs_f64m8_f64m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m8_f64m1_m_vl32(vbool8_t mask, vfloat64m1_t maskedoff, vfloat64m8_t op1, vfloat64m1_t op2)
{
  return vfredmax_vs_f64m8_f64m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vfredmax_vs_f16mf4_f16m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16mf4_f16m1_tam(vbool64_t mask, vfloat16m1_t maskedoff, vfloat16mf4_t op1, vfloat16m1_t op2, size_t vl)
{
  return vfredmax_vs_f16mf4_f16m1_tam(mask, op1, op2, vl);
}

/*
** test_vfredmax_vs_f16mf4_f16m1_tam_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16mf4_f16m1_tam_vl31(vbool64_t mask, vfloat16m1_t maskedoff, vfloat16mf4_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16mf4_f16m1_tam(mask, op1, op2, 31);
}

/*
** test_vfredmax_vs_f16mf2_f16m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16mf2_f16m1_tam(vbool32_t mask, vfloat16m1_t maskedoff, vfloat16mf2_t op1, vfloat16m1_t op2, size_t vl)
{
  return vfredmax_vs_f16mf2_f16m1_tam(mask, op1, op2, vl);
}

/*
** test_vfredmax_vs_f16mf2_f16m1_tam_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16mf2_f16m1_tam_vl31(vbool32_t mask, vfloat16m1_t maskedoff, vfloat16mf2_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16mf2_f16m1_tam(mask, op1, op2, 31);
}

/*
** test_vfredmax_vs_f16m1_f16m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m1_f16m1_tam(vbool16_t mask, vfloat16m1_t maskedoff, vfloat16m1_t op1, vfloat16m1_t op2, size_t vl)
{
  return vfredmax_vs_f16m1_f16m1_tam(mask, op1, op2, vl);
}

/*
** test_vfredmax_vs_f16m1_f16m1_tam_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m1_f16m1_tam_vl31(vbool16_t mask, vfloat16m1_t maskedoff, vfloat16m1_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16m1_f16m1_tam(mask, op1, op2, 31);
}

/*
** test_vfredmax_vs_f16m2_f16m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m2_f16m1_tam(vbool8_t mask, vfloat16m1_t maskedoff, vfloat16m2_t op1, vfloat16m1_t op2, size_t vl)
{
  return vfredmax_vs_f16m2_f16m1_tam(mask, op1, op2, vl);
}

/*
** test_vfredmax_vs_f16m2_f16m1_tam_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m2_f16m1_tam_vl31(vbool8_t mask, vfloat16m1_t maskedoff, vfloat16m2_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16m2_f16m1_tam(mask, op1, op2, 31);
}

/*
** test_vfredmax_vs_f16m4_f16m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m4_f16m1_tam(vbool4_t mask, vfloat16m1_t maskedoff, vfloat16m4_t op1, vfloat16m1_t op2, size_t vl)
{
  return vfredmax_vs_f16m4_f16m1_tam(mask, op1, op2, vl);
}

/*
** test_vfredmax_vs_f16m4_f16m1_tam_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m4_f16m1_tam_vl31(vbool4_t mask, vfloat16m1_t maskedoff, vfloat16m4_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16m4_f16m1_tam(mask, op1, op2, 31);
}

/*
** test_vfredmax_vs_f16m8_f16m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m8_f16m1_tam(vbool2_t mask, vfloat16m1_t maskedoff, vfloat16m8_t op1, vfloat16m1_t op2, size_t vl)
{
  return vfredmax_vs_f16m8_f16m1_tam(mask, op1, op2, vl);
}

/*
** test_vfredmax_vs_f16m8_f16m1_tam_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m8_f16m1_tam_vl31(vbool2_t mask, vfloat16m1_t maskedoff, vfloat16m8_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16m8_f16m1_tam(mask, op1, op2, 31);
}

/*
** test_vfredmax_vs_f32mf2_f32m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32mf2_f32m1_tam(vbool64_t mask, vfloat32m1_t maskedoff, vfloat32mf2_t op1, vfloat32m1_t op2, size_t vl)
{
  return vfredmax_vs_f32mf2_f32m1_tam(mask, op1, op2, vl);
}

/*
** test_vfredmax_vs_f32mf2_f32m1_tam_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32mf2_f32m1_tam_vl31(vbool64_t mask, vfloat32m1_t maskedoff, vfloat32mf2_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32mf2_f32m1_tam(mask, op1, op2, 31);
}

/*
** test_vfredmax_vs_f32m1_f32m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m1_f32m1_tam(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t op1, vfloat32m1_t op2, size_t vl)
{
  return vfredmax_vs_f32m1_f32m1_tam(mask, op1, op2, vl);
}

/*
** test_vfredmax_vs_f32m1_f32m1_tam_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m1_f32m1_tam_vl31(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32m1_f32m1_tam(mask, op1, op2, 31);
}

/*
** test_vfredmax_vs_f32m2_f32m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m2_f32m1_tam(vbool16_t mask, vfloat32m1_t maskedoff, vfloat32m2_t op1, vfloat32m1_t op2, size_t vl)
{
  return vfredmax_vs_f32m2_f32m1_tam(mask, op1, op2, vl);
}

/*
** test_vfredmax_vs_f32m2_f32m1_tam_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m2_f32m1_tam_vl31(vbool16_t mask, vfloat32m1_t maskedoff, vfloat32m2_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32m2_f32m1_tam(mask, op1, op2, 31);
}

/*
** test_vfredmax_vs_f32m4_f32m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m4_f32m1_tam(vbool8_t mask, vfloat32m1_t maskedoff, vfloat32m4_t op1, vfloat32m1_t op2, size_t vl)
{
  return vfredmax_vs_f32m4_f32m1_tam(mask, op1, op2, vl);
}

/*
** test_vfredmax_vs_f32m4_f32m1_tam_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m4_f32m1_tam_vl31(vbool8_t mask, vfloat32m1_t maskedoff, vfloat32m4_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32m4_f32m1_tam(mask, op1, op2, 31);
}

/*
** test_vfredmax_vs_f32m8_f32m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m8_f32m1_tam(vbool4_t mask, vfloat32m1_t maskedoff, vfloat32m8_t op1, vfloat32m1_t op2, size_t vl)
{
  return vfredmax_vs_f32m8_f32m1_tam(mask, op1, op2, vl);
}

/*
** test_vfredmax_vs_f32m8_f32m1_tam_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m8_f32m1_tam_vl31(vbool4_t mask, vfloat32m1_t maskedoff, vfloat32m8_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32m8_f32m1_tam(mask, op1, op2, 31);
}

/*
** test_vfredmax_vs_f64m1_f64m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m1_f64m1_tam(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t op1, vfloat64m1_t op2, size_t vl)
{
  return vfredmax_vs_f64m1_f64m1_tam(mask, op1, op2, vl);
}

/*
** test_vfredmax_vs_f64m1_f64m1_tam_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m1_f64m1_tam_vl31(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t op1, vfloat64m1_t op2)
{
  return vfredmax_vs_f64m1_f64m1_tam(mask, op1, op2, 31);
}

/*
** test_vfredmax_vs_f64m2_f64m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m2_f64m1_tam(vbool32_t mask, vfloat64m1_t maskedoff, vfloat64m2_t op1, vfloat64m1_t op2, size_t vl)
{
  return vfredmax_vs_f64m2_f64m1_tam(mask, op1, op2, vl);
}

/*
** test_vfredmax_vs_f64m2_f64m1_tam_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m2_f64m1_tam_vl31(vbool32_t mask, vfloat64m1_t maskedoff, vfloat64m2_t op1, vfloat64m1_t op2)
{
  return vfredmax_vs_f64m2_f64m1_tam(mask, op1, op2, 31);
}

/*
** test_vfredmax_vs_f64m4_f64m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m4_f64m1_tam(vbool16_t mask, vfloat64m1_t maskedoff, vfloat64m4_t op1, vfloat64m1_t op2, size_t vl)
{
  return vfredmax_vs_f64m4_f64m1_tam(mask, op1, op2, vl);
}

/*
** test_vfredmax_vs_f64m4_f64m1_tam_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m4_f64m1_tam_vl31(vbool16_t mask, vfloat64m1_t maskedoff, vfloat64m4_t op1, vfloat64m1_t op2)
{
  return vfredmax_vs_f64m4_f64m1_tam(mask, op1, op2, 31);
}

/*
** test_vfredmax_vs_f64m8_f64m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m8_f64m1_tam(vbool8_t mask, vfloat64m1_t maskedoff, vfloat64m8_t op1, vfloat64m1_t op2, size_t vl)
{
  return vfredmax_vs_f64m8_f64m1_tam(mask, op1, op2, vl);
}

/*
** test_vfredmax_vs_f64m8_f64m1_tam_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m8_f64m1_tam_vl31(vbool8_t mask, vfloat64m1_t maskedoff, vfloat64m8_t op1, vfloat64m1_t op2)
{
  return vfredmax_vs_f64m8_f64m1_tam(mask, op1, op2, 31);
}

/*
** test_vfredmax_vs_f16mf4_f16m1_tam_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16mf4_f16m1_tam_vl32(vbool64_t mask, vfloat16m1_t maskedoff, vfloat16mf4_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16mf4_f16m1_tam(mask, op1, op2, 32);
}

/*
** test_vfredmax_vs_f16mf2_f16m1_tam_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16mf2_f16m1_tam_vl32(vbool32_t mask, vfloat16m1_t maskedoff, vfloat16mf2_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16mf2_f16m1_tam(mask, op1, op2, 32);
}

/*
** test_vfredmax_vs_f16m1_f16m1_tam_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m1_f16m1_tam_vl32(vbool16_t mask, vfloat16m1_t maskedoff, vfloat16m1_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16m1_f16m1_tam(mask, op1, op2, 32);
}

/*
** test_vfredmax_vs_f16m2_f16m1_tam_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m2_f16m1_tam_vl32(vbool8_t mask, vfloat16m1_t maskedoff, vfloat16m2_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16m2_f16m1_tam(mask, op1, op2, 32);
}

/*
** test_vfredmax_vs_f16m4_f16m1_tam_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m4_f16m1_tam_vl32(vbool4_t mask, vfloat16m1_t maskedoff, vfloat16m4_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16m4_f16m1_tam(mask, op1, op2, 32);
}

/*
** test_vfredmax_vs_f16m8_f16m1_tam_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m8_f16m1_tam_vl32(vbool2_t mask, vfloat16m1_t maskedoff, vfloat16m8_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16m8_f16m1_tam(mask, op1, op2, 32);
}

/*
** test_vfredmax_vs_f32mf2_f32m1_tam_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32mf2_f32m1_tam_vl32(vbool64_t mask, vfloat32m1_t maskedoff, vfloat32mf2_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32mf2_f32m1_tam(mask, op1, op2, 32);
}

/*
** test_vfredmax_vs_f32m1_f32m1_tam_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m1_f32m1_tam_vl32(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32m1_f32m1_tam(mask, op1, op2, 32);
}

/*
** test_vfredmax_vs_f32m2_f32m1_tam_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m2_f32m1_tam_vl32(vbool16_t mask, vfloat32m1_t maskedoff, vfloat32m2_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32m2_f32m1_tam(mask, op1, op2, 32);
}

/*
** test_vfredmax_vs_f32m4_f32m1_tam_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m4_f32m1_tam_vl32(vbool8_t mask, vfloat32m1_t maskedoff, vfloat32m4_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32m4_f32m1_tam(mask, op1, op2, 32);
}

/*
** test_vfredmax_vs_f32m8_f32m1_tam_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m8_f32m1_tam_vl32(vbool4_t mask, vfloat32m1_t maskedoff, vfloat32m8_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32m8_f32m1_tam(mask, op1, op2, 32);
}

/*
** test_vfredmax_vs_f64m1_f64m1_tam_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m1_f64m1_tam_vl32(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t op1, vfloat64m1_t op2)
{
  return vfredmax_vs_f64m1_f64m1_tam(mask, op1, op2, 32);
}

/*
** test_vfredmax_vs_f64m2_f64m1_tam_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m2_f64m1_tam_vl32(vbool32_t mask, vfloat64m1_t maskedoff, vfloat64m2_t op1, vfloat64m1_t op2)
{
  return vfredmax_vs_f64m2_f64m1_tam(mask, op1, op2, 32);
}

/*
** test_vfredmax_vs_f64m4_f64m1_tam_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m4_f64m1_tam_vl32(vbool16_t mask, vfloat64m1_t maskedoff, vfloat64m4_t op1, vfloat64m1_t op2)
{
  return vfredmax_vs_f64m4_f64m1_tam(mask, op1, op2, 32);
}

/*
** test_vfredmax_vs_f64m8_f64m1_tam_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m8_f64m1_tam_vl32(vbool8_t mask, vfloat64m1_t maskedoff, vfloat64m8_t op1, vfloat64m1_t op2)
{
  return vfredmax_vs_f64m8_f64m1_tam(mask, op1, op2, 32);
}

/*
** test_vfredmax_vs_f16mf4_f16m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16mf4_f16m1_tum(vbool64_t mask, vfloat16m1_t maskedoff, vfloat16mf4_t op1, vfloat16m1_t op2, size_t vl)
{
  return vfredmax_vs_f16mf4_f16m1_tum(mask, maskedoff, op1, op2, vl);
}

/*
** test_vfredmax_vs_f16mf4_f16m1_tum_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16mf4_f16m1_tum_vl31(vbool64_t mask, vfloat16m1_t maskedoff, vfloat16mf4_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16mf4_f16m1_tum(mask, maskedoff, op1, op2, 31);
}

/*
** test_vfredmax_vs_f16mf2_f16m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16mf2_f16m1_tum(vbool32_t mask, vfloat16m1_t maskedoff, vfloat16mf2_t op1, vfloat16m1_t op2, size_t vl)
{
  return vfredmax_vs_f16mf2_f16m1_tum(mask, maskedoff, op1, op2, vl);
}

/*
** test_vfredmax_vs_f16mf2_f16m1_tum_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16mf2_f16m1_tum_vl31(vbool32_t mask, vfloat16m1_t maskedoff, vfloat16mf2_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16mf2_f16m1_tum(mask, maskedoff, op1, op2, 31);
}

/*
** test_vfredmax_vs_f16m1_f16m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m1_f16m1_tum(vbool16_t mask, vfloat16m1_t maskedoff, vfloat16m1_t op1, vfloat16m1_t op2, size_t vl)
{
  return vfredmax_vs_f16m1_f16m1_tum(mask, maskedoff, op1, op2, vl);
}

/*
** test_vfredmax_vs_f16m1_f16m1_tum_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m1_f16m1_tum_vl31(vbool16_t mask, vfloat16m1_t maskedoff, vfloat16m1_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16m1_f16m1_tum(mask, maskedoff, op1, op2, 31);
}

/*
** test_vfredmax_vs_f16m2_f16m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m2_f16m1_tum(vbool8_t mask, vfloat16m1_t maskedoff, vfloat16m2_t op1, vfloat16m1_t op2, size_t vl)
{
  return vfredmax_vs_f16m2_f16m1_tum(mask, maskedoff, op1, op2, vl);
}

/*
** test_vfredmax_vs_f16m2_f16m1_tum_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m2_f16m1_tum_vl31(vbool8_t mask, vfloat16m1_t maskedoff, vfloat16m2_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16m2_f16m1_tum(mask, maskedoff, op1, op2, 31);
}

/*
** test_vfredmax_vs_f16m4_f16m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m4_f16m1_tum(vbool4_t mask, vfloat16m1_t maskedoff, vfloat16m4_t op1, vfloat16m1_t op2, size_t vl)
{
  return vfredmax_vs_f16m4_f16m1_tum(mask, maskedoff, op1, op2, vl);
}

/*
** test_vfredmax_vs_f16m4_f16m1_tum_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m4_f16m1_tum_vl31(vbool4_t mask, vfloat16m1_t maskedoff, vfloat16m4_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16m4_f16m1_tum(mask, maskedoff, op1, op2, 31);
}

/*
** test_vfredmax_vs_f16m8_f16m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m8_f16m1_tum(vbool2_t mask, vfloat16m1_t maskedoff, vfloat16m8_t op1, vfloat16m1_t op2, size_t vl)
{
  return vfredmax_vs_f16m8_f16m1_tum(mask, maskedoff, op1, op2, vl);
}

/*
** test_vfredmax_vs_f16m8_f16m1_tum_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m8_f16m1_tum_vl31(vbool2_t mask, vfloat16m1_t maskedoff, vfloat16m8_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16m8_f16m1_tum(mask, maskedoff, op1, op2, 31);
}

/*
** test_vfredmax_vs_f32mf2_f32m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32mf2_f32m1_tum(vbool64_t mask, vfloat32m1_t maskedoff, vfloat32mf2_t op1, vfloat32m1_t op2, size_t vl)
{
  return vfredmax_vs_f32mf2_f32m1_tum(mask, maskedoff, op1, op2, vl);
}

/*
** test_vfredmax_vs_f32mf2_f32m1_tum_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32mf2_f32m1_tum_vl31(vbool64_t mask, vfloat32m1_t maskedoff, vfloat32mf2_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32mf2_f32m1_tum(mask, maskedoff, op1, op2, 31);
}

/*
** test_vfredmax_vs_f32m1_f32m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m1_f32m1_tum(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t op1, vfloat32m1_t op2, size_t vl)
{
  return vfredmax_vs_f32m1_f32m1_tum(mask, maskedoff, op1, op2, vl);
}

/*
** test_vfredmax_vs_f32m1_f32m1_tum_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m1_f32m1_tum_vl31(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32m1_f32m1_tum(mask, maskedoff, op1, op2, 31);
}

/*
** test_vfredmax_vs_f32m2_f32m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m2_f32m1_tum(vbool16_t mask, vfloat32m1_t maskedoff, vfloat32m2_t op1, vfloat32m1_t op2, size_t vl)
{
  return vfredmax_vs_f32m2_f32m1_tum(mask, maskedoff, op1, op2, vl);
}

/*
** test_vfredmax_vs_f32m2_f32m1_tum_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m2_f32m1_tum_vl31(vbool16_t mask, vfloat32m1_t maskedoff, vfloat32m2_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32m2_f32m1_tum(mask, maskedoff, op1, op2, 31);
}

/*
** test_vfredmax_vs_f32m4_f32m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m4_f32m1_tum(vbool8_t mask, vfloat32m1_t maskedoff, vfloat32m4_t op1, vfloat32m1_t op2, size_t vl)
{
  return vfredmax_vs_f32m4_f32m1_tum(mask, maskedoff, op1, op2, vl);
}

/*
** test_vfredmax_vs_f32m4_f32m1_tum_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m4_f32m1_tum_vl31(vbool8_t mask, vfloat32m1_t maskedoff, vfloat32m4_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32m4_f32m1_tum(mask, maskedoff, op1, op2, 31);
}

/*
** test_vfredmax_vs_f32m8_f32m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m8_f32m1_tum(vbool4_t mask, vfloat32m1_t maskedoff, vfloat32m8_t op1, vfloat32m1_t op2, size_t vl)
{
  return vfredmax_vs_f32m8_f32m1_tum(mask, maskedoff, op1, op2, vl);
}

/*
** test_vfredmax_vs_f32m8_f32m1_tum_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m8_f32m1_tum_vl31(vbool4_t mask, vfloat32m1_t maskedoff, vfloat32m8_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32m8_f32m1_tum(mask, maskedoff, op1, op2, 31);
}

/*
** test_vfredmax_vs_f64m1_f64m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m1_f64m1_tum(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t op1, vfloat64m1_t op2, size_t vl)
{
  return vfredmax_vs_f64m1_f64m1_tum(mask, maskedoff, op1, op2, vl);
}

/*
** test_vfredmax_vs_f64m1_f64m1_tum_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m1_f64m1_tum_vl31(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t op1, vfloat64m1_t op2)
{
  return vfredmax_vs_f64m1_f64m1_tum(mask, maskedoff, op1, op2, 31);
}

/*
** test_vfredmax_vs_f64m2_f64m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m2_f64m1_tum(vbool32_t mask, vfloat64m1_t maskedoff, vfloat64m2_t op1, vfloat64m1_t op2, size_t vl)
{
  return vfredmax_vs_f64m2_f64m1_tum(mask, maskedoff, op1, op2, vl);
}

/*
** test_vfredmax_vs_f64m2_f64m1_tum_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m2_f64m1_tum_vl31(vbool32_t mask, vfloat64m1_t maskedoff, vfloat64m2_t op1, vfloat64m1_t op2)
{
  return vfredmax_vs_f64m2_f64m1_tum(mask, maskedoff, op1, op2, 31);
}

/*
** test_vfredmax_vs_f64m4_f64m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m4_f64m1_tum(vbool16_t mask, vfloat64m1_t maskedoff, vfloat64m4_t op1, vfloat64m1_t op2, size_t vl)
{
  return vfredmax_vs_f64m4_f64m1_tum(mask, maskedoff, op1, op2, vl);
}

/*
** test_vfredmax_vs_f64m4_f64m1_tum_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m4_f64m1_tum_vl31(vbool16_t mask, vfloat64m1_t maskedoff, vfloat64m4_t op1, vfloat64m1_t op2)
{
  return vfredmax_vs_f64m4_f64m1_tum(mask, maskedoff, op1, op2, 31);
}

/*
** test_vfredmax_vs_f64m8_f64m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m8_f64m1_tum(vbool8_t mask, vfloat64m1_t maskedoff, vfloat64m8_t op1, vfloat64m1_t op2, size_t vl)
{
  return vfredmax_vs_f64m8_f64m1_tum(mask, maskedoff, op1, op2, vl);
}

/*
** test_vfredmax_vs_f64m8_f64m1_tum_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m8_f64m1_tum_vl31(vbool8_t mask, vfloat64m1_t maskedoff, vfloat64m8_t op1, vfloat64m1_t op2)
{
  return vfredmax_vs_f64m8_f64m1_tum(mask, maskedoff, op1, op2, 31);
}

/*
** test_vfredmax_vs_f16mf4_f16m1_tum_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16mf4_f16m1_tum_vl32(vbool64_t mask, vfloat16m1_t maskedoff, vfloat16mf4_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16mf4_f16m1_tum(mask, maskedoff, op1, op2, 32);
}

/*
** test_vfredmax_vs_f16mf2_f16m1_tum_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16mf2_f16m1_tum_vl32(vbool32_t mask, vfloat16m1_t maskedoff, vfloat16mf2_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16mf2_f16m1_tum(mask, maskedoff, op1, op2, 32);
}

/*
** test_vfredmax_vs_f16m1_f16m1_tum_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m1_f16m1_tum_vl32(vbool16_t mask, vfloat16m1_t maskedoff, vfloat16m1_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16m1_f16m1_tum(mask, maskedoff, op1, op2, 32);
}

/*
** test_vfredmax_vs_f16m2_f16m1_tum_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m2_f16m1_tum_vl32(vbool8_t mask, vfloat16m1_t maskedoff, vfloat16m2_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16m2_f16m1_tum(mask, maskedoff, op1, op2, 32);
}

/*
** test_vfredmax_vs_f16m4_f16m1_tum_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m4_f16m1_tum_vl32(vbool4_t mask, vfloat16m1_t maskedoff, vfloat16m4_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16m4_f16m1_tum(mask, maskedoff, op1, op2, 32);
}

/*
** test_vfredmax_vs_f16m8_f16m1_tum_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m8_f16m1_tum_vl32(vbool2_t mask, vfloat16m1_t maskedoff, vfloat16m8_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16m8_f16m1_tum(mask, maskedoff, op1, op2, 32);
}

/*
** test_vfredmax_vs_f32mf2_f32m1_tum_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32mf2_f32m1_tum_vl32(vbool64_t mask, vfloat32m1_t maskedoff, vfloat32mf2_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32mf2_f32m1_tum(mask, maskedoff, op1, op2, 32);
}

/*
** test_vfredmax_vs_f32m1_f32m1_tum_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m1_f32m1_tum_vl32(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32m1_f32m1_tum(mask, maskedoff, op1, op2, 32);
}

/*
** test_vfredmax_vs_f32m2_f32m1_tum_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m2_f32m1_tum_vl32(vbool16_t mask, vfloat32m1_t maskedoff, vfloat32m2_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32m2_f32m1_tum(mask, maskedoff, op1, op2, 32);
}

/*
** test_vfredmax_vs_f32m4_f32m1_tum_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m4_f32m1_tum_vl32(vbool8_t mask, vfloat32m1_t maskedoff, vfloat32m4_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32m4_f32m1_tum(mask, maskedoff, op1, op2, 32);
}

/*
** test_vfredmax_vs_f32m8_f32m1_tum_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m8_f32m1_tum_vl32(vbool4_t mask, vfloat32m1_t maskedoff, vfloat32m8_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32m8_f32m1_tum(mask, maskedoff, op1, op2, 32);
}

/*
** test_vfredmax_vs_f64m1_f64m1_tum_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m1_f64m1_tum_vl32(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t op1, vfloat64m1_t op2)
{
  return vfredmax_vs_f64m1_f64m1_tum(mask, maskedoff, op1, op2, 32);
}

/*
** test_vfredmax_vs_f64m2_f64m1_tum_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m2_f64m1_tum_vl32(vbool32_t mask, vfloat64m1_t maskedoff, vfloat64m2_t op1, vfloat64m1_t op2)
{
  return vfredmax_vs_f64m2_f64m1_tum(mask, maskedoff, op1, op2, 32);
}

/*
** test_vfredmax_vs_f64m4_f64m1_tum_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m4_f64m1_tum_vl32(vbool16_t mask, vfloat64m1_t maskedoff, vfloat64m4_t op1, vfloat64m1_t op2)
{
  return vfredmax_vs_f64m4_f64m1_tum(mask, maskedoff, op1, op2, 32);
}

/*
** test_vfredmax_vs_f64m8_f64m1_tum_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m8_f64m1_tum_vl32(vbool8_t mask, vfloat64m1_t maskedoff, vfloat64m8_t op1, vfloat64m1_t op2)
{
  return vfredmax_vs_f64m8_f64m1_tum(mask, maskedoff, op1, op2, 32);
}

/*
** test_vfredmax_vs_f16mf4_f16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16mf4_f16m1_ta(vfloat16mf4_t op1, vfloat16m1_t op2, size_t vl)
{
  return vfredmax_vs_f16mf4_f16m1_ta(op1, op2, vl);
}

/*
** test_vfredmax_vs_f16mf4_f16m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16mf4_f16m1_ta_vl31(vfloat16mf4_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16mf4_f16m1_ta(op1, op2, 31);
}

/*
** test_vfredmax_vs_f16mf2_f16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16mf2_f16m1_ta(vfloat16mf2_t op1, vfloat16m1_t op2, size_t vl)
{
  return vfredmax_vs_f16mf2_f16m1_ta(op1, op2, vl);
}

/*
** test_vfredmax_vs_f16mf2_f16m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16mf2_f16m1_ta_vl31(vfloat16mf2_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16mf2_f16m1_ta(op1, op2, 31);
}

/*
** test_vfredmax_vs_f16m1_f16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m1_f16m1_ta(vfloat16m1_t op1, vfloat16m1_t op2, size_t vl)
{
  return vfredmax_vs_f16m1_f16m1_ta(op1, op2, vl);
}

/*
** test_vfredmax_vs_f16m1_f16m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m1_f16m1_ta_vl31(vfloat16m1_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16m1_f16m1_ta(op1, op2, 31);
}

/*
** test_vfredmax_vs_f16m2_f16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m2_f16m1_ta(vfloat16m2_t op1, vfloat16m1_t op2, size_t vl)
{
  return vfredmax_vs_f16m2_f16m1_ta(op1, op2, vl);
}

/*
** test_vfredmax_vs_f16m2_f16m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m2_f16m1_ta_vl31(vfloat16m2_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16m2_f16m1_ta(op1, op2, 31);
}

/*
** test_vfredmax_vs_f16m4_f16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m4_f16m1_ta(vfloat16m4_t op1, vfloat16m1_t op2, size_t vl)
{
  return vfredmax_vs_f16m4_f16m1_ta(op1, op2, vl);
}

/*
** test_vfredmax_vs_f16m4_f16m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m4_f16m1_ta_vl31(vfloat16m4_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16m4_f16m1_ta(op1, op2, 31);
}

/*
** test_vfredmax_vs_f16m8_f16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m8_f16m1_ta(vfloat16m8_t op1, vfloat16m1_t op2, size_t vl)
{
  return vfredmax_vs_f16m8_f16m1_ta(op1, op2, vl);
}

/*
** test_vfredmax_vs_f16m8_f16m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m8_f16m1_ta_vl31(vfloat16m8_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16m8_f16m1_ta(op1, op2, 31);
}

/*
** test_vfredmax_vs_f32mf2_f32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32mf2_f32m1_ta(vfloat32mf2_t op1, vfloat32m1_t op2, size_t vl)
{
  return vfredmax_vs_f32mf2_f32m1_ta(op1, op2, vl);
}

/*
** test_vfredmax_vs_f32mf2_f32m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32mf2_f32m1_ta_vl31(vfloat32mf2_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32mf2_f32m1_ta(op1, op2, 31);
}

/*
** test_vfredmax_vs_f32m1_f32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m1_f32m1_ta(vfloat32m1_t op1, vfloat32m1_t op2, size_t vl)
{
  return vfredmax_vs_f32m1_f32m1_ta(op1, op2, vl);
}

/*
** test_vfredmax_vs_f32m1_f32m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m1_f32m1_ta_vl31(vfloat32m1_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32m1_f32m1_ta(op1, op2, 31);
}

/*
** test_vfredmax_vs_f32m2_f32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m2_f32m1_ta(vfloat32m2_t op1, vfloat32m1_t op2, size_t vl)
{
  return vfredmax_vs_f32m2_f32m1_ta(op1, op2, vl);
}

/*
** test_vfredmax_vs_f32m2_f32m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m2_f32m1_ta_vl31(vfloat32m2_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32m2_f32m1_ta(op1, op2, 31);
}

/*
** test_vfredmax_vs_f32m4_f32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m4_f32m1_ta(vfloat32m4_t op1, vfloat32m1_t op2, size_t vl)
{
  return vfredmax_vs_f32m4_f32m1_ta(op1, op2, vl);
}

/*
** test_vfredmax_vs_f32m4_f32m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m4_f32m1_ta_vl31(vfloat32m4_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32m4_f32m1_ta(op1, op2, 31);
}

/*
** test_vfredmax_vs_f32m8_f32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m8_f32m1_ta(vfloat32m8_t op1, vfloat32m1_t op2, size_t vl)
{
  return vfredmax_vs_f32m8_f32m1_ta(op1, op2, vl);
}

/*
** test_vfredmax_vs_f32m8_f32m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m8_f32m1_ta_vl31(vfloat32m8_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32m8_f32m1_ta(op1, op2, 31);
}

/*
** test_vfredmax_vs_f64m1_f64m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m1_f64m1_ta(vfloat64m1_t op1, vfloat64m1_t op2, size_t vl)
{
  return vfredmax_vs_f64m1_f64m1_ta(op1, op2, vl);
}

/*
** test_vfredmax_vs_f64m1_f64m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m1_f64m1_ta_vl31(vfloat64m1_t op1, vfloat64m1_t op2)
{
  return vfredmax_vs_f64m1_f64m1_ta(op1, op2, 31);
}

/*
** test_vfredmax_vs_f64m2_f64m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m2_f64m1_ta(vfloat64m2_t op1, vfloat64m1_t op2, size_t vl)
{
  return vfredmax_vs_f64m2_f64m1_ta(op1, op2, vl);
}

/*
** test_vfredmax_vs_f64m2_f64m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m2_f64m1_ta_vl31(vfloat64m2_t op1, vfloat64m1_t op2)
{
  return vfredmax_vs_f64m2_f64m1_ta(op1, op2, 31);
}

/*
** test_vfredmax_vs_f64m4_f64m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m4_f64m1_ta(vfloat64m4_t op1, vfloat64m1_t op2, size_t vl)
{
  return vfredmax_vs_f64m4_f64m1_ta(op1, op2, vl);
}

/*
** test_vfredmax_vs_f64m4_f64m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m4_f64m1_ta_vl31(vfloat64m4_t op1, vfloat64m1_t op2)
{
  return vfredmax_vs_f64m4_f64m1_ta(op1, op2, 31);
}

/*
** test_vfredmax_vs_f64m8_f64m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m8_f64m1_ta(vfloat64m8_t op1, vfloat64m1_t op2, size_t vl)
{
  return vfredmax_vs_f64m8_f64m1_ta(op1, op2, vl);
}

/*
** test_vfredmax_vs_f64m8_f64m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m8_f64m1_ta_vl31(vfloat64m8_t op1, vfloat64m1_t op2)
{
  return vfredmax_vs_f64m8_f64m1_ta(op1, op2, 31);
}

/*
** test_vfredmax_vs_f16mf4_f16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16mf4_f16m1_tu(vfloat16m1_t dest, vfloat16mf4_t op1, vfloat16m1_t op2, size_t vl)
{
  return vfredmax_vs_f16mf4_f16m1_tu(dest, op1, op2, vl);
}

/*
** test_vfredmax_vs_f16mf4_f16m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16mf4_f16m1_tu_vl31(vfloat16m1_t dest, vfloat16mf4_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16mf4_f16m1_tu(dest, op1, op2, 31);
}

/*
** test_vfredmax_vs_f16mf2_f16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16mf2_f16m1_tu(vfloat16m1_t dest, vfloat16mf2_t op1, vfloat16m1_t op2, size_t vl)
{
  return vfredmax_vs_f16mf2_f16m1_tu(dest, op1, op2, vl);
}

/*
** test_vfredmax_vs_f16mf2_f16m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16mf2_f16m1_tu_vl31(vfloat16m1_t dest, vfloat16mf2_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16mf2_f16m1_tu(dest, op1, op2, 31);
}

/*
** test_vfredmax_vs_f16m1_f16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m1_f16m1_tu(vfloat16m1_t dest, vfloat16m1_t op1, vfloat16m1_t op2, size_t vl)
{
  return vfredmax_vs_f16m1_f16m1_tu(dest, op1, op2, vl);
}

/*
** test_vfredmax_vs_f16m1_f16m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m1_f16m1_tu_vl31(vfloat16m1_t dest, vfloat16m1_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16m1_f16m1_tu(dest, op1, op2, 31);
}

/*
** test_vfredmax_vs_f16m2_f16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m2_f16m1_tu(vfloat16m1_t dest, vfloat16m2_t op1, vfloat16m1_t op2, size_t vl)
{
  return vfredmax_vs_f16m2_f16m1_tu(dest, op1, op2, vl);
}

/*
** test_vfredmax_vs_f16m2_f16m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m2_f16m1_tu_vl31(vfloat16m1_t dest, vfloat16m2_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16m2_f16m1_tu(dest, op1, op2, 31);
}

/*
** test_vfredmax_vs_f16m4_f16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m4_f16m1_tu(vfloat16m1_t dest, vfloat16m4_t op1, vfloat16m1_t op2, size_t vl)
{
  return vfredmax_vs_f16m4_f16m1_tu(dest, op1, op2, vl);
}

/*
** test_vfredmax_vs_f16m4_f16m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m4_f16m1_tu_vl31(vfloat16m1_t dest, vfloat16m4_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16m4_f16m1_tu(dest, op1, op2, 31);
}

/*
** test_vfredmax_vs_f16m8_f16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m8_f16m1_tu(vfloat16m1_t dest, vfloat16m8_t op1, vfloat16m1_t op2, size_t vl)
{
  return vfredmax_vs_f16m8_f16m1_tu(dest, op1, op2, vl);
}

/*
** test_vfredmax_vs_f16m8_f16m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m8_f16m1_tu_vl31(vfloat16m1_t dest, vfloat16m8_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16m8_f16m1_tu(dest, op1, op2, 31);
}

/*
** test_vfredmax_vs_f32mf2_f32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32mf2_f32m1_tu(vfloat32m1_t dest, vfloat32mf2_t op1, vfloat32m1_t op2, size_t vl)
{
  return vfredmax_vs_f32mf2_f32m1_tu(dest, op1, op2, vl);
}

/*
** test_vfredmax_vs_f32mf2_f32m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32mf2_f32m1_tu_vl31(vfloat32m1_t dest, vfloat32mf2_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32mf2_f32m1_tu(dest, op1, op2, 31);
}

/*
** test_vfredmax_vs_f32m1_f32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m1_f32m1_tu(vfloat32m1_t dest, vfloat32m1_t op1, vfloat32m1_t op2, size_t vl)
{
  return vfredmax_vs_f32m1_f32m1_tu(dest, op1, op2, vl);
}

/*
** test_vfredmax_vs_f32m1_f32m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m1_f32m1_tu_vl31(vfloat32m1_t dest, vfloat32m1_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32m1_f32m1_tu(dest, op1, op2, 31);
}

/*
** test_vfredmax_vs_f32m2_f32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m2_f32m1_tu(vfloat32m1_t dest, vfloat32m2_t op1, vfloat32m1_t op2, size_t vl)
{
  return vfredmax_vs_f32m2_f32m1_tu(dest, op1, op2, vl);
}

/*
** test_vfredmax_vs_f32m2_f32m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m2_f32m1_tu_vl31(vfloat32m1_t dest, vfloat32m2_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32m2_f32m1_tu(dest, op1, op2, 31);
}

/*
** test_vfredmax_vs_f32m4_f32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m4_f32m1_tu(vfloat32m1_t dest, vfloat32m4_t op1, vfloat32m1_t op2, size_t vl)
{
  return vfredmax_vs_f32m4_f32m1_tu(dest, op1, op2, vl);
}

/*
** test_vfredmax_vs_f32m4_f32m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m4_f32m1_tu_vl31(vfloat32m1_t dest, vfloat32m4_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32m4_f32m1_tu(dest, op1, op2, 31);
}

/*
** test_vfredmax_vs_f32m8_f32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m8_f32m1_tu(vfloat32m1_t dest, vfloat32m8_t op1, vfloat32m1_t op2, size_t vl)
{
  return vfredmax_vs_f32m8_f32m1_tu(dest, op1, op2, vl);
}

/*
** test_vfredmax_vs_f32m8_f32m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m8_f32m1_tu_vl31(vfloat32m1_t dest, vfloat32m8_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32m8_f32m1_tu(dest, op1, op2, 31);
}

/*
** test_vfredmax_vs_f64m1_f64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m1_f64m1_tu(vfloat64m1_t dest, vfloat64m1_t op1, vfloat64m1_t op2, size_t vl)
{
  return vfredmax_vs_f64m1_f64m1_tu(dest, op1, op2, vl);
}

/*
** test_vfredmax_vs_f64m1_f64m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m1_f64m1_tu_vl31(vfloat64m1_t dest, vfloat64m1_t op1, vfloat64m1_t op2)
{
  return vfredmax_vs_f64m1_f64m1_tu(dest, op1, op2, 31);
}

/*
** test_vfredmax_vs_f64m2_f64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m2_f64m1_tu(vfloat64m1_t dest, vfloat64m2_t op1, vfloat64m1_t op2, size_t vl)
{
  return vfredmax_vs_f64m2_f64m1_tu(dest, op1, op2, vl);
}

/*
** test_vfredmax_vs_f64m2_f64m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m2_f64m1_tu_vl31(vfloat64m1_t dest, vfloat64m2_t op1, vfloat64m1_t op2)
{
  return vfredmax_vs_f64m2_f64m1_tu(dest, op1, op2, 31);
}

/*
** test_vfredmax_vs_f64m4_f64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m4_f64m1_tu(vfloat64m1_t dest, vfloat64m4_t op1, vfloat64m1_t op2, size_t vl)
{
  return vfredmax_vs_f64m4_f64m1_tu(dest, op1, op2, vl);
}

/*
** test_vfredmax_vs_f64m4_f64m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m4_f64m1_tu_vl31(vfloat64m1_t dest, vfloat64m4_t op1, vfloat64m1_t op2)
{
  return vfredmax_vs_f64m4_f64m1_tu(dest, op1, op2, 31);
}

/*
** test_vfredmax_vs_f64m8_f64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m8_f64m1_tu(vfloat64m1_t dest, vfloat64m8_t op1, vfloat64m1_t op2, size_t vl)
{
  return vfredmax_vs_f64m8_f64m1_tu(dest, op1, op2, vl);
}

/*
** test_vfredmax_vs_f64m8_f64m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m8_f64m1_tu_vl31(vfloat64m1_t dest, vfloat64m8_t op1, vfloat64m1_t op2)
{
  return vfredmax_vs_f64m8_f64m1_tu(dest, op1, op2, 31);
}

/*
** test_vfredmax_vs_f16mf4_f16m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16mf4_f16m1_ta_vl32(vfloat16mf4_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16mf4_f16m1_ta(op1, op2, 32);
}

/*
** test_vfredmax_vs_f16mf2_f16m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16mf2_f16m1_ta_vl32(vfloat16mf2_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16mf2_f16m1_ta(op1, op2, 32);
}

/*
** test_vfredmax_vs_f16m1_f16m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m1_f16m1_ta_vl32(vfloat16m1_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16m1_f16m1_ta(op1, op2, 32);
}

/*
** test_vfredmax_vs_f16m2_f16m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m2_f16m1_ta_vl32(vfloat16m2_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16m2_f16m1_ta(op1, op2, 32);
}

/*
** test_vfredmax_vs_f16m4_f16m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m4_f16m1_ta_vl32(vfloat16m4_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16m4_f16m1_ta(op1, op2, 32);
}

/*
** test_vfredmax_vs_f16m8_f16m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m8_f16m1_ta_vl32(vfloat16m8_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16m8_f16m1_ta(op1, op2, 32);
}

/*
** test_vfredmax_vs_f32mf2_f32m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32mf2_f32m1_ta_vl32(vfloat32mf2_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32mf2_f32m1_ta(op1, op2, 32);
}

/*
** test_vfredmax_vs_f32m1_f32m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m1_f32m1_ta_vl32(vfloat32m1_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32m1_f32m1_ta(op1, op2, 32);
}

/*
** test_vfredmax_vs_f32m2_f32m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m2_f32m1_ta_vl32(vfloat32m2_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32m2_f32m1_ta(op1, op2, 32);
}

/*
** test_vfredmax_vs_f32m4_f32m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m4_f32m1_ta_vl32(vfloat32m4_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32m4_f32m1_ta(op1, op2, 32);
}

/*
** test_vfredmax_vs_f32m8_f32m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m8_f32m1_ta_vl32(vfloat32m8_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32m8_f32m1_ta(op1, op2, 32);
}

/*
** test_vfredmax_vs_f64m1_f64m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m1_f64m1_ta_vl32(vfloat64m1_t op1, vfloat64m1_t op2)
{
  return vfredmax_vs_f64m1_f64m1_ta(op1, op2, 32);
}

/*
** test_vfredmax_vs_f64m2_f64m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m2_f64m1_ta_vl32(vfloat64m2_t op1, vfloat64m1_t op2)
{
  return vfredmax_vs_f64m2_f64m1_ta(op1, op2, 32);
}

/*
** test_vfredmax_vs_f64m4_f64m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m4_f64m1_ta_vl32(vfloat64m4_t op1, vfloat64m1_t op2)
{
  return vfredmax_vs_f64m4_f64m1_ta(op1, op2, 32);
}

/*
** test_vfredmax_vs_f64m8_f64m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m8_f64m1_ta_vl32(vfloat64m8_t op1, vfloat64m1_t op2)
{
  return vfredmax_vs_f64m8_f64m1_ta(op1, op2, 32);
}

/*
** test_vfredmax_vs_f16mf4_f16m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16mf4_f16m1_tu_vl32(vfloat16m1_t dest, vfloat16mf4_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16mf4_f16m1_tu(dest, op1, op2, 32);
}

/*
** test_vfredmax_vs_f16mf2_f16m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16mf2_f16m1_tu_vl32(vfloat16m1_t dest, vfloat16mf2_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16mf2_f16m1_tu(dest, op1, op2, 32);
}

/*
** test_vfredmax_vs_f16m1_f16m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m1_f16m1_tu_vl32(vfloat16m1_t dest, vfloat16m1_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16m1_f16m1_tu(dest, op1, op2, 32);
}

/*
** test_vfredmax_vs_f16m2_f16m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m2_f16m1_tu_vl32(vfloat16m1_t dest, vfloat16m2_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16m2_f16m1_tu(dest, op1, op2, 32);
}

/*
** test_vfredmax_vs_f16m4_f16m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m4_f16m1_tu_vl32(vfloat16m1_t dest, vfloat16m4_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16m4_f16m1_tu(dest, op1, op2, 32);
}

/*
** test_vfredmax_vs_f16m8_f16m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m8_f16m1_tu_vl32(vfloat16m1_t dest, vfloat16m8_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16m8_f16m1_tu(dest, op1, op2, 32);
}

/*
** test_vfredmax_vs_f32mf2_f32m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32mf2_f32m1_tu_vl32(vfloat32m1_t dest, vfloat32mf2_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32mf2_f32m1_tu(dest, op1, op2, 32);
}

/*
** test_vfredmax_vs_f32m1_f32m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m1_f32m1_tu_vl32(vfloat32m1_t dest, vfloat32m1_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32m1_f32m1_tu(dest, op1, op2, 32);
}

/*
** test_vfredmax_vs_f32m2_f32m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m2_f32m1_tu_vl32(vfloat32m1_t dest, vfloat32m2_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32m2_f32m1_tu(dest, op1, op2, 32);
}

/*
** test_vfredmax_vs_f32m4_f32m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m4_f32m1_tu_vl32(vfloat32m1_t dest, vfloat32m4_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32m4_f32m1_tu(dest, op1, op2, 32);
}

/*
** test_vfredmax_vs_f32m8_f32m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m8_f32m1_tu_vl32(vfloat32m1_t dest, vfloat32m8_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32m8_f32m1_tu(dest, op1, op2, 32);
}

/*
** test_vfredmax_vs_f64m1_f64m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m1_f64m1_tu_vl32(vfloat64m1_t dest, vfloat64m1_t op1, vfloat64m1_t op2)
{
  return vfredmax_vs_f64m1_f64m1_tu(dest, op1, op2, 32);
}

/*
** test_vfredmax_vs_f64m2_f64m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m2_f64m1_tu_vl32(vfloat64m1_t dest, vfloat64m2_t op1, vfloat64m1_t op2)
{
  return vfredmax_vs_f64m2_f64m1_tu(dest, op1, op2, 32);
}

/*
** test_vfredmax_vs_f64m4_f64m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m4_f64m1_tu_vl32(vfloat64m1_t dest, vfloat64m4_t op1, vfloat64m1_t op2)
{
  return vfredmax_vs_f64m4_f64m1_tu(dest, op1, op2, 32);
}

/*
** test_vfredmax_vs_f64m8_f64m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m8_f64m1_tu_vl32(vfloat64m1_t dest, vfloat64m8_t op1, vfloat64m1_t op2)
{
  return vfredmax_vs_f64m8_f64m1_tu(dest, op1, op2, 32);
}

/*
** test_vfredmax_vs_f16mf4_f16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16mf4_f16m1_vl32(vfloat16m1_t dest, vfloat16mf4_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16mf4_f16m1(dest, op1, op2, 32);
}

/*
** test_vfredmax_vs_f16mf2_f16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16mf2_f16m1_vl32(vfloat16m1_t dest, vfloat16mf2_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16mf2_f16m1(dest, op1, op2, 32);
}

/*
** test_vfredmax_vs_f16m1_f16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m1_f16m1_vl32(vfloat16m1_t dest, vfloat16m1_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16m1_f16m1(dest, op1, op2, 32);
}

/*
** test_vfredmax_vs_f16m2_f16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m2_f16m1_vl32(vfloat16m1_t dest, vfloat16m2_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16m2_f16m1(dest, op1, op2, 32);
}

/*
** test_vfredmax_vs_f16m4_f16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m4_f16m1_vl32(vfloat16m1_t dest, vfloat16m4_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16m4_f16m1(dest, op1, op2, 32);
}

/*
** test_vfredmax_vs_f16m8_f16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vfredmax_vs_f16m8_f16m1_vl32(vfloat16m1_t dest, vfloat16m8_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16m8_f16m1(dest, op1, op2, 32);
}

/*
** test_vfredmax_vs_f32mf2_f32m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32mf2_f32m1_vl32(vfloat32m1_t dest, vfloat32mf2_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32mf2_f32m1(dest, op1, op2, 32);
}

/*
** test_vfredmax_vs_f32m1_f32m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m1_f32m1_vl32(vfloat32m1_t dest, vfloat32m1_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32m1_f32m1(dest, op1, op2, 32);
}

/*
** test_vfredmax_vs_f32m2_f32m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m2_f32m1_vl32(vfloat32m1_t dest, vfloat32m2_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32m2_f32m1(dest, op1, op2, 32);
}

/*
** test_vfredmax_vs_f32m4_f32m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m4_f32m1_vl32(vfloat32m1_t dest, vfloat32m4_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32m4_f32m1(dest, op1, op2, 32);
}

/*
** test_vfredmax_vs_f32m8_f32m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfredmax_vs_f32m8_f32m1_vl32(vfloat32m1_t dest, vfloat32m8_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32m8_f32m1(dest, op1, op2, 32);
}

/*
** test_vfredmax_vs_f64m1_f64m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m1_f64m1_vl32(vfloat64m1_t dest, vfloat64m1_t op1, vfloat64m1_t op2)
{
  return vfredmax_vs_f64m1_f64m1(dest, op1, op2, 32);
}

/*
** test_vfredmax_vs_f64m2_f64m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m2_f64m1_vl32(vfloat64m1_t dest, vfloat64m2_t op1, vfloat64m1_t op2)
{
  return vfredmax_vs_f64m2_f64m1(dest, op1, op2, 32);
}

/*
** test_vfredmax_vs_f64m4_f64m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m4_f64m1_vl32(vfloat64m1_t dest, vfloat64m4_t op1, vfloat64m1_t op2)
{
  return vfredmax_vs_f64m4_f64m1(dest, op1, op2, 32);
}

/*
** test_vfredmax_vs_f64m8_f64m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vfredmax_vs_f64m8_f64m1_vl32(vfloat64m1_t dest, vfloat64m8_t op1, vfloat64m1_t op2)
{
  return vfredmax_vs_f64m8_f64m1(dest, op1, op2, 32);
}

