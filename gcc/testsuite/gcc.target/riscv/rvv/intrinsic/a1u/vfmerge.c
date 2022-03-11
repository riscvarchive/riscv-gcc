/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>


/*
** test_vfmerge_vfm_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat16mf4_t 
test_vfmerge_vfm_f16mf4(vbool64_t mask, vfloat16mf4_t op1, float16_t op2, size_t vl)
{
  return vfmerge_vfm_f16mf4(mask, op1, op2, vl);
}

/*
** test_vfmerge_vfm_f16mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat16mf4_t 
test_vfmerge_vfm_f16mf4_vl31(vbool64_t mask, vfloat16mf4_t op1, float16_t op2)
{
  return vfmerge_vfm_f16mf4(mask, op1, op2, 31);
}

/*
** test_vfmerge_vfm_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat16mf2_t 
test_vfmerge_vfm_f16mf2(vbool32_t mask, vfloat16mf2_t op1, float16_t op2, size_t vl)
{
  return vfmerge_vfm_f16mf2(mask, op1, op2, vl);
}

/*
** test_vfmerge_vfm_f16mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat16mf2_t 
test_vfmerge_vfm_f16mf2_vl31(vbool32_t mask, vfloat16mf2_t op1, float16_t op2)
{
  return vfmerge_vfm_f16mf2(mask, op1, op2, 31);
}

/*
** test_vfmerge_vfm_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat16m1_t 
test_vfmerge_vfm_f16m1(vbool16_t mask, vfloat16m1_t op1, float16_t op2, size_t vl)
{
  return vfmerge_vfm_f16m1(mask, op1, op2, vl);
}

/*
** test_vfmerge_vfm_f16m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat16m1_t 
test_vfmerge_vfm_f16m1_vl31(vbool16_t mask, vfloat16m1_t op1, float16_t op2)
{
  return vfmerge_vfm_f16m1(mask, op1, op2, 31);
}

/*
** test_vfmerge_vfm_f16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat16m2_t 
test_vfmerge_vfm_f16m2(vbool8_t mask, vfloat16m2_t op1, float16_t op2, size_t vl)
{
  return vfmerge_vfm_f16m2(mask, op1, op2, vl);
}

/*
** test_vfmerge_vfm_f16m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat16m2_t 
test_vfmerge_vfm_f16m2_vl31(vbool8_t mask, vfloat16m2_t op1, float16_t op2)
{
  return vfmerge_vfm_f16m2(mask, op1, op2, 31);
}

/*
** test_vfmerge_vfm_f16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat16m4_t 
test_vfmerge_vfm_f16m4(vbool4_t mask, vfloat16m4_t op1, float16_t op2, size_t vl)
{
  return vfmerge_vfm_f16m4(mask, op1, op2, vl);
}

/*
** test_vfmerge_vfm_f16m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat16m4_t 
test_vfmerge_vfm_f16m4_vl31(vbool4_t mask, vfloat16m4_t op1, float16_t op2)
{
  return vfmerge_vfm_f16m4(mask, op1, op2, 31);
}

/*
** test_vfmerge_vfm_f16m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat16m8_t 
test_vfmerge_vfm_f16m8(vbool2_t mask, vfloat16m8_t op1, float16_t op2, size_t vl)
{
  return vfmerge_vfm_f16m8(mask, op1, op2, vl);
}

/*
** test_vfmerge_vfm_f16m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat16m8_t 
test_vfmerge_vfm_f16m8_vl31(vbool2_t mask, vfloat16m8_t op1, float16_t op2)
{
  return vfmerge_vfm_f16m8(mask, op1, op2, 31);
}

/*
** test_vfmerge_vfm_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfmerge_vfm_f32mf2(vbool64_t mask, vfloat32mf2_t op1, float32_t op2, size_t vl)
{
  return vfmerge_vfm_f32mf2(mask, op1, op2, vl);
}

/*
** test_vfmerge_vfm_f32mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfmerge_vfm_f32mf2_vl31(vbool64_t mask, vfloat32mf2_t op1, float32_t op2)
{
  return vfmerge_vfm_f32mf2(mask, op1, op2, 31);
}

/*
** test_vfmerge_vfm_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat32m1_t 
test_vfmerge_vfm_f32m1(vbool32_t mask, vfloat32m1_t op1, float32_t op2, size_t vl)
{
  return vfmerge_vfm_f32m1(mask, op1, op2, vl);
}

/*
** test_vfmerge_vfm_f32m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat32m1_t 
test_vfmerge_vfm_f32m1_vl31(vbool32_t mask, vfloat32m1_t op1, float32_t op2)
{
  return vfmerge_vfm_f32m1(mask, op1, op2, 31);
}

/*
** test_vfmerge_vfm_f32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat32m2_t 
test_vfmerge_vfm_f32m2(vbool16_t mask, vfloat32m2_t op1, float32_t op2, size_t vl)
{
  return vfmerge_vfm_f32m2(mask, op1, op2, vl);
}

/*
** test_vfmerge_vfm_f32m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat32m2_t 
test_vfmerge_vfm_f32m2_vl31(vbool16_t mask, vfloat32m2_t op1, float32_t op2)
{
  return vfmerge_vfm_f32m2(mask, op1, op2, 31);
}

/*
** test_vfmerge_vfm_f32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat32m4_t 
test_vfmerge_vfm_f32m4(vbool8_t mask, vfloat32m4_t op1, float32_t op2, size_t vl)
{
  return vfmerge_vfm_f32m4(mask, op1, op2, vl);
}

/*
** test_vfmerge_vfm_f32m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat32m4_t 
test_vfmerge_vfm_f32m4_vl31(vbool8_t mask, vfloat32m4_t op1, float32_t op2)
{
  return vfmerge_vfm_f32m4(mask, op1, op2, 31);
}

/*
** test_vfmerge_vfm_f32m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat32m8_t 
test_vfmerge_vfm_f32m8(vbool4_t mask, vfloat32m8_t op1, float32_t op2, size_t vl)
{
  return vfmerge_vfm_f32m8(mask, op1, op2, vl);
}

/*
** test_vfmerge_vfm_f32m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat32m8_t 
test_vfmerge_vfm_f32m8_vl31(vbool4_t mask, vfloat32m8_t op1, float32_t op2)
{
  return vfmerge_vfm_f32m8(mask, op1, op2, 31);
}

/*
** test_vfmerge_vfm_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat64m1_t 
test_vfmerge_vfm_f64m1(vbool64_t mask, vfloat64m1_t op1, float64_t op2, size_t vl)
{
  return vfmerge_vfm_f64m1(mask, op1, op2, vl);
}

/*
** test_vfmerge_vfm_f64m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat64m1_t 
test_vfmerge_vfm_f64m1_vl31(vbool64_t mask, vfloat64m1_t op1, float64_t op2)
{
  return vfmerge_vfm_f64m1(mask, op1, op2, 31);
}

/*
** test_vfmerge_vfm_f64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat64m2_t 
test_vfmerge_vfm_f64m2(vbool32_t mask, vfloat64m2_t op1, float64_t op2, size_t vl)
{
  return vfmerge_vfm_f64m2(mask, op1, op2, vl);
}

/*
** test_vfmerge_vfm_f64m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat64m2_t 
test_vfmerge_vfm_f64m2_vl31(vbool32_t mask, vfloat64m2_t op1, float64_t op2)
{
  return vfmerge_vfm_f64m2(mask, op1, op2, 31);
}

/*
** test_vfmerge_vfm_f64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat64m4_t 
test_vfmerge_vfm_f64m4(vbool16_t mask, vfloat64m4_t op1, float64_t op2, size_t vl)
{
  return vfmerge_vfm_f64m4(mask, op1, op2, vl);
}

/*
** test_vfmerge_vfm_f64m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat64m4_t 
test_vfmerge_vfm_f64m4_vl31(vbool16_t mask, vfloat64m4_t op1, float64_t op2)
{
  return vfmerge_vfm_f64m4(mask, op1, op2, 31);
}

/*
** test_vfmerge_vfm_f64m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat64m8_t 
test_vfmerge_vfm_f64m8(vbool8_t mask, vfloat64m8_t op1, float64_t op2, size_t vl)
{
  return vfmerge_vfm_f64m8(mask, op1, op2, vl);
}

/*
** test_vfmerge_vfm_f64m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat64m8_t 
test_vfmerge_vfm_f64m8_vl31(vbool8_t mask, vfloat64m8_t op1, float64_t op2)
{
  return vfmerge_vfm_f64m8(mask, op1, op2, 31);
}

/*
** test_vfmerge_vfm_f16mf4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat16mf4_t 
test_vfmerge_vfm_f16mf4_ta(vbool64_t mask, vfloat16mf4_t op1, float16_t op2, size_t vl)
{
  return vfmerge_vfm_f16mf4_ta(mask, op1, op2, vl);
}

/*
** test_vfmerge_vfm_f16mf4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat16mf4_t 
test_vfmerge_vfm_f16mf4_ta_vl31(vbool64_t mask, vfloat16mf4_t op1, float16_t op2)
{
  return vfmerge_vfm_f16mf4_ta(mask, op1, op2, 31);
}

/*
** test_vfmerge_vfm_f16mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat16mf2_t 
test_vfmerge_vfm_f16mf2_ta(vbool32_t mask, vfloat16mf2_t op1, float16_t op2, size_t vl)
{
  return vfmerge_vfm_f16mf2_ta(mask, op1, op2, vl);
}

/*
** test_vfmerge_vfm_f16mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat16mf2_t 
test_vfmerge_vfm_f16mf2_ta_vl31(vbool32_t mask, vfloat16mf2_t op1, float16_t op2)
{
  return vfmerge_vfm_f16mf2_ta(mask, op1, op2, 31);
}

/*
** test_vfmerge_vfm_f16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat16m1_t 
test_vfmerge_vfm_f16m1_ta(vbool16_t mask, vfloat16m1_t op1, float16_t op2, size_t vl)
{
  return vfmerge_vfm_f16m1_ta(mask, op1, op2, vl);
}

/*
** test_vfmerge_vfm_f16m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat16m1_t 
test_vfmerge_vfm_f16m1_ta_vl31(vbool16_t mask, vfloat16m1_t op1, float16_t op2)
{
  return vfmerge_vfm_f16m1_ta(mask, op1, op2, 31);
}

/*
** test_vfmerge_vfm_f16m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat16m2_t 
test_vfmerge_vfm_f16m2_ta(vbool8_t mask, vfloat16m2_t op1, float16_t op2, size_t vl)
{
  return vfmerge_vfm_f16m2_ta(mask, op1, op2, vl);
}

/*
** test_vfmerge_vfm_f16m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat16m2_t 
test_vfmerge_vfm_f16m2_ta_vl31(vbool8_t mask, vfloat16m2_t op1, float16_t op2)
{
  return vfmerge_vfm_f16m2_ta(mask, op1, op2, 31);
}

/*
** test_vfmerge_vfm_f16m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat16m4_t 
test_vfmerge_vfm_f16m4_ta(vbool4_t mask, vfloat16m4_t op1, float16_t op2, size_t vl)
{
  return vfmerge_vfm_f16m4_ta(mask, op1, op2, vl);
}

/*
** test_vfmerge_vfm_f16m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat16m4_t 
test_vfmerge_vfm_f16m4_ta_vl31(vbool4_t mask, vfloat16m4_t op1, float16_t op2)
{
  return vfmerge_vfm_f16m4_ta(mask, op1, op2, 31);
}

/*
** test_vfmerge_vfm_f16m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat16m8_t 
test_vfmerge_vfm_f16m8_ta(vbool2_t mask, vfloat16m8_t op1, float16_t op2, size_t vl)
{
  return vfmerge_vfm_f16m8_ta(mask, op1, op2, vl);
}

/*
** test_vfmerge_vfm_f16m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat16m8_t 
test_vfmerge_vfm_f16m8_ta_vl31(vbool2_t mask, vfloat16m8_t op1, float16_t op2)
{
  return vfmerge_vfm_f16m8_ta(mask, op1, op2, 31);
}

/*
** test_vfmerge_vfm_f32mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfmerge_vfm_f32mf2_ta(vbool64_t mask, vfloat32mf2_t op1, float32_t op2, size_t vl)
{
  return vfmerge_vfm_f32mf2_ta(mask, op1, op2, vl);
}

/*
** test_vfmerge_vfm_f32mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfmerge_vfm_f32mf2_ta_vl31(vbool64_t mask, vfloat32mf2_t op1, float32_t op2)
{
  return vfmerge_vfm_f32mf2_ta(mask, op1, op2, 31);
}

/*
** test_vfmerge_vfm_f32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat32m1_t 
test_vfmerge_vfm_f32m1_ta(vbool32_t mask, vfloat32m1_t op1, float32_t op2, size_t vl)
{
  return vfmerge_vfm_f32m1_ta(mask, op1, op2, vl);
}

/*
** test_vfmerge_vfm_f32m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat32m1_t 
test_vfmerge_vfm_f32m1_ta_vl31(vbool32_t mask, vfloat32m1_t op1, float32_t op2)
{
  return vfmerge_vfm_f32m1_ta(mask, op1, op2, 31);
}

/*
** test_vfmerge_vfm_f32m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat32m2_t 
test_vfmerge_vfm_f32m2_ta(vbool16_t mask, vfloat32m2_t op1, float32_t op2, size_t vl)
{
  return vfmerge_vfm_f32m2_ta(mask, op1, op2, vl);
}

/*
** test_vfmerge_vfm_f32m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat32m2_t 
test_vfmerge_vfm_f32m2_ta_vl31(vbool16_t mask, vfloat32m2_t op1, float32_t op2)
{
  return vfmerge_vfm_f32m2_ta(mask, op1, op2, 31);
}

/*
** test_vfmerge_vfm_f32m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat32m4_t 
test_vfmerge_vfm_f32m4_ta(vbool8_t mask, vfloat32m4_t op1, float32_t op2, size_t vl)
{
  return vfmerge_vfm_f32m4_ta(mask, op1, op2, vl);
}

/*
** test_vfmerge_vfm_f32m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat32m4_t 
test_vfmerge_vfm_f32m4_ta_vl31(vbool8_t mask, vfloat32m4_t op1, float32_t op2)
{
  return vfmerge_vfm_f32m4_ta(mask, op1, op2, 31);
}

/*
** test_vfmerge_vfm_f32m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat32m8_t 
test_vfmerge_vfm_f32m8_ta(vbool4_t mask, vfloat32m8_t op1, float32_t op2, size_t vl)
{
  return vfmerge_vfm_f32m8_ta(mask, op1, op2, vl);
}

/*
** test_vfmerge_vfm_f32m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat32m8_t 
test_vfmerge_vfm_f32m8_ta_vl31(vbool4_t mask, vfloat32m8_t op1, float32_t op2)
{
  return vfmerge_vfm_f32m8_ta(mask, op1, op2, 31);
}

/*
** test_vfmerge_vfm_f64m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat64m1_t 
test_vfmerge_vfm_f64m1_ta(vbool64_t mask, vfloat64m1_t op1, float64_t op2, size_t vl)
{
  return vfmerge_vfm_f64m1_ta(mask, op1, op2, vl);
}

/*
** test_vfmerge_vfm_f64m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat64m1_t 
test_vfmerge_vfm_f64m1_ta_vl31(vbool64_t mask, vfloat64m1_t op1, float64_t op2)
{
  return vfmerge_vfm_f64m1_ta(mask, op1, op2, 31);
}

/*
** test_vfmerge_vfm_f64m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat64m2_t 
test_vfmerge_vfm_f64m2_ta(vbool32_t mask, vfloat64m2_t op1, float64_t op2, size_t vl)
{
  return vfmerge_vfm_f64m2_ta(mask, op1, op2, vl);
}

/*
** test_vfmerge_vfm_f64m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat64m2_t 
test_vfmerge_vfm_f64m2_ta_vl31(vbool32_t mask, vfloat64m2_t op1, float64_t op2)
{
  return vfmerge_vfm_f64m2_ta(mask, op1, op2, 31);
}

/*
** test_vfmerge_vfm_f64m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat64m4_t 
test_vfmerge_vfm_f64m4_ta(vbool16_t mask, vfloat64m4_t op1, float64_t op2, size_t vl)
{
  return vfmerge_vfm_f64m4_ta(mask, op1, op2, vl);
}

/*
** test_vfmerge_vfm_f64m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat64m4_t 
test_vfmerge_vfm_f64m4_ta_vl31(vbool16_t mask, vfloat64m4_t op1, float64_t op2)
{
  return vfmerge_vfm_f64m4_ta(mask, op1, op2, 31);
}

/*
** test_vfmerge_vfm_f64m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat64m8_t 
test_vfmerge_vfm_f64m8_ta(vbool8_t mask, vfloat64m8_t op1, float64_t op2, size_t vl)
{
  return vfmerge_vfm_f64m8_ta(mask, op1, op2, vl);
}

/*
** test_vfmerge_vfm_f64m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat64m8_t 
test_vfmerge_vfm_f64m8_ta_vl31(vbool8_t mask, vfloat64m8_t op1, float64_t op2)
{
  return vfmerge_vfm_f64m8_ta(mask, op1, op2, 31);
}

/*
** test_vfmerge_vfm_f16mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat16mf4_t 
test_vfmerge_vfm_f16mf4_tu(vfloat16mf4_t dest, vbool64_t mask, vfloat16mf4_t op1, float16_t op2, size_t vl)
{
  return vfmerge_vfm_f16mf4_tu(mask, dest, op1, op2, vl);
}

/*
** test_vfmerge_vfm_f16mf4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat16mf4_t 
test_vfmerge_vfm_f16mf4_tu_vl31(vfloat16mf4_t dest, vbool64_t mask, vfloat16mf4_t op1, float16_t op2)
{
  return vfmerge_vfm_f16mf4_tu(mask, dest, op1, op2, 31);
}

/*
** test_vfmerge_vfm_f16mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat16mf2_t 
test_vfmerge_vfm_f16mf2_tu(vfloat16mf2_t dest, vbool32_t mask, vfloat16mf2_t op1, float16_t op2, size_t vl)
{
  return vfmerge_vfm_f16mf2_tu(mask, dest, op1, op2, vl);
}

/*
** test_vfmerge_vfm_f16mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat16mf2_t 
test_vfmerge_vfm_f16mf2_tu_vl31(vfloat16mf2_t dest, vbool32_t mask, vfloat16mf2_t op1, float16_t op2)
{
  return vfmerge_vfm_f16mf2_tu(mask, dest, op1, op2, 31);
}

/*
** test_vfmerge_vfm_f16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat16m1_t 
test_vfmerge_vfm_f16m1_tu(vfloat16m1_t dest, vbool16_t mask, vfloat16m1_t op1, float16_t op2, size_t vl)
{
  return vfmerge_vfm_f16m1_tu(mask, dest, op1, op2, vl);
}

/*
** test_vfmerge_vfm_f16m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat16m1_t 
test_vfmerge_vfm_f16m1_tu_vl31(vfloat16m1_t dest, vbool16_t mask, vfloat16m1_t op1, float16_t op2)
{
  return vfmerge_vfm_f16m1_tu(mask, dest, op1, op2, 31);
}

/*
** test_vfmerge_vfm_f16m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat16m2_t 
test_vfmerge_vfm_f16m2_tu(vfloat16m2_t dest, vbool8_t mask, vfloat16m2_t op1, float16_t op2, size_t vl)
{
  return vfmerge_vfm_f16m2_tu(mask, dest, op1, op2, vl);
}

/*
** test_vfmerge_vfm_f16m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat16m2_t 
test_vfmerge_vfm_f16m2_tu_vl31(vfloat16m2_t dest, vbool8_t mask, vfloat16m2_t op1, float16_t op2)
{
  return vfmerge_vfm_f16m2_tu(mask, dest, op1, op2, 31);
}

/*
** test_vfmerge_vfm_f16m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat16m4_t 
test_vfmerge_vfm_f16m4_tu(vfloat16m4_t dest, vbool4_t mask, vfloat16m4_t op1, float16_t op2, size_t vl)
{
  return vfmerge_vfm_f16m4_tu(mask, dest, op1, op2, vl);
}

/*
** test_vfmerge_vfm_f16m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat16m4_t 
test_vfmerge_vfm_f16m4_tu_vl31(vfloat16m4_t dest, vbool4_t mask, vfloat16m4_t op1, float16_t op2)
{
  return vfmerge_vfm_f16m4_tu(mask, dest, op1, op2, 31);
}

/*
** test_vfmerge_vfm_f16m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat16m8_t 
test_vfmerge_vfm_f16m8_tu(vfloat16m8_t dest, vbool2_t mask, vfloat16m8_t op1, float16_t op2, size_t vl)
{
  return vfmerge_vfm_f16m8_tu(mask, dest, op1, op2, vl);
}

/*
** test_vfmerge_vfm_f16m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat16m8_t 
test_vfmerge_vfm_f16m8_tu_vl31(vfloat16m8_t dest, vbool2_t mask, vfloat16m8_t op1, float16_t op2)
{
  return vfmerge_vfm_f16m8_tu(mask, dest, op1, op2, 31);
}

/*
** test_vfmerge_vfm_f32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfmerge_vfm_f32mf2_tu(vfloat32mf2_t dest, vbool64_t mask, vfloat32mf2_t op1, float32_t op2, size_t vl)
{
  return vfmerge_vfm_f32mf2_tu(mask, dest, op1, op2, vl);
}

/*
** test_vfmerge_vfm_f32mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfmerge_vfm_f32mf2_tu_vl31(vfloat32mf2_t dest, vbool64_t mask, vfloat32mf2_t op1, float32_t op2)
{
  return vfmerge_vfm_f32mf2_tu(mask, dest, op1, op2, 31);
}

/*
** test_vfmerge_vfm_f32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat32m1_t 
test_vfmerge_vfm_f32m1_tu(vfloat32m1_t dest, vbool32_t mask, vfloat32m1_t op1, float32_t op2, size_t vl)
{
  return vfmerge_vfm_f32m1_tu(mask, dest, op1, op2, vl);
}

/*
** test_vfmerge_vfm_f32m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat32m1_t 
test_vfmerge_vfm_f32m1_tu_vl31(vfloat32m1_t dest, vbool32_t mask, vfloat32m1_t op1, float32_t op2)
{
  return vfmerge_vfm_f32m1_tu(mask, dest, op1, op2, 31);
}

/*
** test_vfmerge_vfm_f32m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat32m2_t 
test_vfmerge_vfm_f32m2_tu(vfloat32m2_t dest, vbool16_t mask, vfloat32m2_t op1, float32_t op2, size_t vl)
{
  return vfmerge_vfm_f32m2_tu(mask, dest, op1, op2, vl);
}

/*
** test_vfmerge_vfm_f32m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat32m2_t 
test_vfmerge_vfm_f32m2_tu_vl31(vfloat32m2_t dest, vbool16_t mask, vfloat32m2_t op1, float32_t op2)
{
  return vfmerge_vfm_f32m2_tu(mask, dest, op1, op2, 31);
}

/*
** test_vfmerge_vfm_f32m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat32m4_t 
test_vfmerge_vfm_f32m4_tu(vfloat32m4_t dest, vbool8_t mask, vfloat32m4_t op1, float32_t op2, size_t vl)
{
  return vfmerge_vfm_f32m4_tu(mask, dest, op1, op2, vl);
}

/*
** test_vfmerge_vfm_f32m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat32m4_t 
test_vfmerge_vfm_f32m4_tu_vl31(vfloat32m4_t dest, vbool8_t mask, vfloat32m4_t op1, float32_t op2)
{
  return vfmerge_vfm_f32m4_tu(mask, dest, op1, op2, 31);
}

/*
** test_vfmerge_vfm_f32m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat32m8_t 
test_vfmerge_vfm_f32m8_tu(vfloat32m8_t dest, vbool4_t mask, vfloat32m8_t op1, float32_t op2, size_t vl)
{
  return vfmerge_vfm_f32m8_tu(mask, dest, op1, op2, vl);
}

/*
** test_vfmerge_vfm_f32m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat32m8_t 
test_vfmerge_vfm_f32m8_tu_vl31(vfloat32m8_t dest, vbool4_t mask, vfloat32m8_t op1, float32_t op2)
{
  return vfmerge_vfm_f32m8_tu(mask, dest, op1, op2, 31);
}

/*
** test_vfmerge_vfm_f64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat64m1_t 
test_vfmerge_vfm_f64m1_tu(vfloat64m1_t dest, vbool64_t mask, vfloat64m1_t op1, float64_t op2, size_t vl)
{
  return vfmerge_vfm_f64m1_tu(mask, dest, op1, op2, vl);
}

/*
** test_vfmerge_vfm_f64m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat64m1_t 
test_vfmerge_vfm_f64m1_tu_vl31(vfloat64m1_t dest, vbool64_t mask, vfloat64m1_t op1, float64_t op2)
{
  return vfmerge_vfm_f64m1_tu(mask, dest, op1, op2, 31);
}

/*
** test_vfmerge_vfm_f64m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat64m2_t 
test_vfmerge_vfm_f64m2_tu(vfloat64m2_t dest, vbool32_t mask, vfloat64m2_t op1, float64_t op2, size_t vl)
{
  return vfmerge_vfm_f64m2_tu(mask, dest, op1, op2, vl);
}

/*
** test_vfmerge_vfm_f64m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat64m2_t 
test_vfmerge_vfm_f64m2_tu_vl31(vfloat64m2_t dest, vbool32_t mask, vfloat64m2_t op1, float64_t op2)
{
  return vfmerge_vfm_f64m2_tu(mask, dest, op1, op2, 31);
}

/*
** test_vfmerge_vfm_f64m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat64m4_t 
test_vfmerge_vfm_f64m4_tu(vfloat64m4_t dest, vbool16_t mask, vfloat64m4_t op1, float64_t op2, size_t vl)
{
  return vfmerge_vfm_f64m4_tu(mask, dest, op1, op2, vl);
}

/*
** test_vfmerge_vfm_f64m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat64m4_t 
test_vfmerge_vfm_f64m4_tu_vl31(vfloat64m4_t dest, vbool16_t mask, vfloat64m4_t op1, float64_t op2)
{
  return vfmerge_vfm_f64m4_tu(mask, dest, op1, op2, 31);
}

/*
** test_vfmerge_vfm_f64m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat64m8_t 
test_vfmerge_vfm_f64m8_tu(vfloat64m8_t dest, vbool8_t mask, vfloat64m8_t op1, float64_t op2, size_t vl)
{
  return vfmerge_vfm_f64m8_tu(mask, dest, op1, op2, vl);
}

/*
** test_vfmerge_vfm_f64m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat64m8_t 
test_vfmerge_vfm_f64m8_tu_vl31(vfloat64m8_t dest, vbool8_t mask, vfloat64m8_t op1, float64_t op2)
{
  return vfmerge_vfm_f64m8_tu(mask, dest, op1, op2, 31);
}

/*
** test_vfmerge_vfm_f16mf4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat16mf4_t 
test_vfmerge_vfm_f16mf4_ta_vl32(vbool64_t mask, vfloat16mf4_t op1, float16_t op2)
{
  return vfmerge_vfm_f16mf4_ta(mask, op1, op2, 32);
}

/*
** test_vfmerge_vfm_f16mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat16mf2_t 
test_vfmerge_vfm_f16mf2_ta_vl32(vbool32_t mask, vfloat16mf2_t op1, float16_t op2)
{
  return vfmerge_vfm_f16mf2_ta(mask, op1, op2, 32);
}

/*
** test_vfmerge_vfm_f16m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat16m1_t 
test_vfmerge_vfm_f16m1_ta_vl32(vbool16_t mask, vfloat16m1_t op1, float16_t op2)
{
  return vfmerge_vfm_f16m1_ta(mask, op1, op2, 32);
}

/*
** test_vfmerge_vfm_f16m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat16m2_t 
test_vfmerge_vfm_f16m2_ta_vl32(vbool8_t mask, vfloat16m2_t op1, float16_t op2)
{
  return vfmerge_vfm_f16m2_ta(mask, op1, op2, 32);
}

/*
** test_vfmerge_vfm_f16m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat16m4_t 
test_vfmerge_vfm_f16m4_ta_vl32(vbool4_t mask, vfloat16m4_t op1, float16_t op2)
{
  return vfmerge_vfm_f16m4_ta(mask, op1, op2, 32);
}

/*
** test_vfmerge_vfm_f16m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat16m8_t 
test_vfmerge_vfm_f16m8_ta_vl32(vbool2_t mask, vfloat16m8_t op1, float16_t op2)
{
  return vfmerge_vfm_f16m8_ta(mask, op1, op2, 32);
}

/*
** test_vfmerge_vfm_f32mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfmerge_vfm_f32mf2_ta_vl32(vbool64_t mask, vfloat32mf2_t op1, float32_t op2)
{
  return vfmerge_vfm_f32mf2_ta(mask, op1, op2, 32);
}

/*
** test_vfmerge_vfm_f32m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat32m1_t 
test_vfmerge_vfm_f32m1_ta_vl32(vbool32_t mask, vfloat32m1_t op1, float32_t op2)
{
  return vfmerge_vfm_f32m1_ta(mask, op1, op2, 32);
}

/*
** test_vfmerge_vfm_f32m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat32m2_t 
test_vfmerge_vfm_f32m2_ta_vl32(vbool16_t mask, vfloat32m2_t op1, float32_t op2)
{
  return vfmerge_vfm_f32m2_ta(mask, op1, op2, 32);
}

/*
** test_vfmerge_vfm_f32m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat32m4_t 
test_vfmerge_vfm_f32m4_ta_vl32(vbool8_t mask, vfloat32m4_t op1, float32_t op2)
{
  return vfmerge_vfm_f32m4_ta(mask, op1, op2, 32);
}

/*
** test_vfmerge_vfm_f32m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat32m8_t 
test_vfmerge_vfm_f32m8_ta_vl32(vbool4_t mask, vfloat32m8_t op1, float32_t op2)
{
  return vfmerge_vfm_f32m8_ta(mask, op1, op2, 32);
}

/*
** test_vfmerge_vfm_f64m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat64m1_t 
test_vfmerge_vfm_f64m1_ta_vl32(vbool64_t mask, vfloat64m1_t op1, float64_t op2)
{
  return vfmerge_vfm_f64m1_ta(mask, op1, op2, 32);
}

/*
** test_vfmerge_vfm_f64m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat64m2_t 
test_vfmerge_vfm_f64m2_ta_vl32(vbool32_t mask, vfloat64m2_t op1, float64_t op2)
{
  return vfmerge_vfm_f64m2_ta(mask, op1, op2, 32);
}

/*
** test_vfmerge_vfm_f64m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat64m4_t 
test_vfmerge_vfm_f64m4_ta_vl32(vbool16_t mask, vfloat64m4_t op1, float64_t op2)
{
  return vfmerge_vfm_f64m4_ta(mask, op1, op2, 32);
}

/*
** test_vfmerge_vfm_f64m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat64m8_t 
test_vfmerge_vfm_f64m8_ta_vl32(vbool8_t mask, vfloat64m8_t op1, float64_t op2)
{
  return vfmerge_vfm_f64m8_ta(mask, op1, op2, 32);
}

/*
** test_vfmerge_vfm_f16mf4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat16mf4_t 
test_vfmerge_vfm_f16mf4_tu_vl32(vfloat16mf4_t dest, vbool64_t mask, vfloat16mf4_t op1, float16_t op2)
{
  return vfmerge_vfm_f16mf4_tu(mask, dest, op1, op2, 32);
}

/*
** test_vfmerge_vfm_f16mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat16mf2_t 
test_vfmerge_vfm_f16mf2_tu_vl32(vfloat16mf2_t dest, vbool32_t mask, vfloat16mf2_t op1, float16_t op2)
{
  return vfmerge_vfm_f16mf2_tu(mask, dest, op1, op2, 32);
}

/*
** test_vfmerge_vfm_f16m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat16m1_t 
test_vfmerge_vfm_f16m1_tu_vl32(vfloat16m1_t dest, vbool16_t mask, vfloat16m1_t op1, float16_t op2)
{
  return vfmerge_vfm_f16m1_tu(mask, dest, op1, op2, 32);
}

/*
** test_vfmerge_vfm_f16m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat16m2_t 
test_vfmerge_vfm_f16m2_tu_vl32(vfloat16m2_t dest, vbool8_t mask, vfloat16m2_t op1, float16_t op2)
{
  return vfmerge_vfm_f16m2_tu(mask, dest, op1, op2, 32);
}

/*
** test_vfmerge_vfm_f16m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat16m4_t 
test_vfmerge_vfm_f16m4_tu_vl32(vfloat16m4_t dest, vbool4_t mask, vfloat16m4_t op1, float16_t op2)
{
  return vfmerge_vfm_f16m4_tu(mask, dest, op1, op2, 32);
}

/*
** test_vfmerge_vfm_f16m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat16m8_t 
test_vfmerge_vfm_f16m8_tu_vl32(vfloat16m8_t dest, vbool2_t mask, vfloat16m8_t op1, float16_t op2)
{
  return vfmerge_vfm_f16m8_tu(mask, dest, op1, op2, 32);
}

/*
** test_vfmerge_vfm_f32mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfmerge_vfm_f32mf2_tu_vl32(vfloat32mf2_t dest, vbool64_t mask, vfloat32mf2_t op1, float32_t op2)
{
  return vfmerge_vfm_f32mf2_tu(mask, dest, op1, op2, 32);
}

/*
** test_vfmerge_vfm_f32m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat32m1_t 
test_vfmerge_vfm_f32m1_tu_vl32(vfloat32m1_t dest, vbool32_t mask, vfloat32m1_t op1, float32_t op2)
{
  return vfmerge_vfm_f32m1_tu(mask, dest, op1, op2, 32);
}

/*
** test_vfmerge_vfm_f32m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat32m2_t 
test_vfmerge_vfm_f32m2_tu_vl32(vfloat32m2_t dest, vbool16_t mask, vfloat32m2_t op1, float32_t op2)
{
  return vfmerge_vfm_f32m2_tu(mask, dest, op1, op2, 32);
}

/*
** test_vfmerge_vfm_f32m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat32m4_t 
test_vfmerge_vfm_f32m4_tu_vl32(vfloat32m4_t dest, vbool8_t mask, vfloat32m4_t op1, float32_t op2)
{
  return vfmerge_vfm_f32m4_tu(mask, dest, op1, op2, 32);
}

/*
** test_vfmerge_vfm_f32m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat32m8_t 
test_vfmerge_vfm_f32m8_tu_vl32(vfloat32m8_t dest, vbool4_t mask, vfloat32m8_t op1, float32_t op2)
{
  return vfmerge_vfm_f32m8_tu(mask, dest, op1, op2, 32);
}

/*
** test_vfmerge_vfm_f64m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat64m1_t 
test_vfmerge_vfm_f64m1_tu_vl32(vfloat64m1_t dest, vbool64_t mask, vfloat64m1_t op1, float64_t op2)
{
  return vfmerge_vfm_f64m1_tu(mask, dest, op1, op2, 32);
}

/*
** test_vfmerge_vfm_f64m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat64m2_t 
test_vfmerge_vfm_f64m2_tu_vl32(vfloat64m2_t dest, vbool32_t mask, vfloat64m2_t op1, float64_t op2)
{
  return vfmerge_vfm_f64m2_tu(mask, dest, op1, op2, 32);
}

/*
** test_vfmerge_vfm_f64m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat64m4_t 
test_vfmerge_vfm_f64m4_tu_vl32(vfloat64m4_t dest, vbool16_t mask, vfloat64m4_t op1, float64_t op2)
{
  return vfmerge_vfm_f64m4_tu(mask, dest, op1, op2, 32);
}

/*
** test_vfmerge_vfm_f64m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat64m8_t 
test_vfmerge_vfm_f64m8_tu_vl32(vfloat64m8_t dest, vbool8_t mask, vfloat64m8_t op1, float64_t op2)
{
  return vfmerge_vfm_f64m8_tu(mask, dest, op1, op2, 32);
}

/*
** test_vfmerge_vfm_f16mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat16mf4_t 
test_vfmerge_vfm_f16mf4_vl32(vbool64_t mask, vfloat16mf4_t op1, float16_t op2)
{
  return vfmerge_vfm_f16mf4(mask, op1, op2, 32);
}

/*
** test_vfmerge_vfm_f16mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat16mf2_t 
test_vfmerge_vfm_f16mf2_vl32(vbool32_t mask, vfloat16mf2_t op1, float16_t op2)
{
  return vfmerge_vfm_f16mf2(mask, op1, op2, 32);
}

/*
** test_vfmerge_vfm_f16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat16m1_t 
test_vfmerge_vfm_f16m1_vl32(vbool16_t mask, vfloat16m1_t op1, float16_t op2)
{
  return vfmerge_vfm_f16m1(mask, op1, op2, 32);
}

/*
** test_vfmerge_vfm_f16m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat16m2_t 
test_vfmerge_vfm_f16m2_vl32(vbool8_t mask, vfloat16m2_t op1, float16_t op2)
{
  return vfmerge_vfm_f16m2(mask, op1, op2, 32);
}

/*
** test_vfmerge_vfm_f16m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat16m4_t 
test_vfmerge_vfm_f16m4_vl32(vbool4_t mask, vfloat16m4_t op1, float16_t op2)
{
  return vfmerge_vfm_f16m4(mask, op1, op2, 32);
}

/*
** test_vfmerge_vfm_f16m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat16m8_t 
test_vfmerge_vfm_f16m8_vl32(vbool2_t mask, vfloat16m8_t op1, float16_t op2)
{
  return vfmerge_vfm_f16m8(mask, op1, op2, 32);
}

/*
** test_vfmerge_vfm_f32mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfmerge_vfm_f32mf2_vl32(vbool64_t mask, vfloat32mf2_t op1, float32_t op2)
{
  return vfmerge_vfm_f32mf2(mask, op1, op2, 32);
}

/*
** test_vfmerge_vfm_f32m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat32m1_t 
test_vfmerge_vfm_f32m1_vl32(vbool32_t mask, vfloat32m1_t op1, float32_t op2)
{
  return vfmerge_vfm_f32m1(mask, op1, op2, 32);
}

/*
** test_vfmerge_vfm_f32m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat32m2_t 
test_vfmerge_vfm_f32m2_vl32(vbool16_t mask, vfloat32m2_t op1, float32_t op2)
{
  return vfmerge_vfm_f32m2(mask, op1, op2, 32);
}

/*
** test_vfmerge_vfm_f32m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat32m4_t 
test_vfmerge_vfm_f32m4_vl32(vbool8_t mask, vfloat32m4_t op1, float32_t op2)
{
  return vfmerge_vfm_f32m4(mask, op1, op2, 32);
}

/*
** test_vfmerge_vfm_f32m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat32m8_t 
test_vfmerge_vfm_f32m8_vl32(vbool4_t mask, vfloat32m8_t op1, float32_t op2)
{
  return vfmerge_vfm_f32m8(mask, op1, op2, 32);
}

/*
** test_vfmerge_vfm_f64m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat64m1_t 
test_vfmerge_vfm_f64m1_vl32(vbool64_t mask, vfloat64m1_t op1, float64_t op2)
{
  return vfmerge_vfm_f64m1(mask, op1, op2, 32);
}

/*
** test_vfmerge_vfm_f64m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat64m2_t 
test_vfmerge_vfm_f64m2_vl32(vbool32_t mask, vfloat64m2_t op1, float64_t op2)
{
  return vfmerge_vfm_f64m2(mask, op1, op2, 32);
}

/*
** test_vfmerge_vfm_f64m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat64m4_t 
test_vfmerge_vfm_f64m4_vl32(vbool16_t mask, vfloat64m4_t op1, float64_t op2)
{
  return vfmerge_vfm_f64m4(mask, op1, op2, 32);
}

/*
** test_vfmerge_vfm_f64m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vfmerge\.vfm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0
**  ...
**  ret
*/
vfloat64m8_t 
test_vfmerge_vfm_f64m8_vl32(vbool8_t mask, vfloat64m8_t op1, float64_t op2)
{
  return vfmerge_vfm_f64m8(mask, op1, op2, 32);
}

