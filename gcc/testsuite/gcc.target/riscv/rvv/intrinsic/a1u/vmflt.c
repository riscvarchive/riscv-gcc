/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>


/*
** test_vmflt_vf_f16mf4_b64:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmflt_vf_f16mf4_b64(vfloat16mf4_t op1, float16_t op2, size_t vl)
{
  return vmflt_vf_f16mf4_b64(op1, op2, vl);
}

/*
** test_vmflt_vf_f16mf4_b64_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmflt_vf_f16mf4_b64_vl31(vfloat16mf4_t op1, float16_t op2)
{
  return vmflt_vf_f16mf4_b64(op1, op2, 31);
}

/*
** test_vmflt_vf_f16mf2_b32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmflt_vf_f16mf2_b32(vfloat16mf2_t op1, float16_t op2, size_t vl)
{
  return vmflt_vf_f16mf2_b32(op1, op2, vl);
}

/*
** test_vmflt_vf_f16mf2_b32_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmflt_vf_f16mf2_b32_vl31(vfloat16mf2_t op1, float16_t op2)
{
  return vmflt_vf_f16mf2_b32(op1, op2, 31);
}

/*
** test_vmflt_vf_f16m1_b16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmflt_vf_f16m1_b16(vfloat16m1_t op1, float16_t op2, size_t vl)
{
  return vmflt_vf_f16m1_b16(op1, op2, vl);
}

/*
** test_vmflt_vf_f16m1_b16_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmflt_vf_f16m1_b16_vl31(vfloat16m1_t op1, float16_t op2)
{
  return vmflt_vf_f16m1_b16(op1, op2, 31);
}

/*
** test_vmflt_vf_f16m2_b8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmflt_vf_f16m2_b8(vfloat16m2_t op1, float16_t op2, size_t vl)
{
  return vmflt_vf_f16m2_b8(op1, op2, vl);
}

/*
** test_vmflt_vf_f16m2_b8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmflt_vf_f16m2_b8_vl31(vfloat16m2_t op1, float16_t op2)
{
  return vmflt_vf_f16m2_b8(op1, op2, 31);
}

/*
** test_vmflt_vf_f16m4_b4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
vbool4_t 
test_vmflt_vf_f16m4_b4(vfloat16m4_t op1, float16_t op2, size_t vl)
{
  return vmflt_vf_f16m4_b4(op1, op2, vl);
}

/*
** test_vmflt_vf_f16m4_b4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
vbool4_t 
test_vmflt_vf_f16m4_b4_vl31(vfloat16m4_t op1, float16_t op2)
{
  return vmflt_vf_f16m4_b4(op1, op2, 31);
}

/*
** test_vmflt_vf_f16m8_b2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
vbool2_t 
test_vmflt_vf_f16m8_b2(vfloat16m8_t op1, float16_t op2, size_t vl)
{
  return vmflt_vf_f16m8_b2(op1, op2, vl);
}

/*
** test_vmflt_vf_f16m8_b2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
vbool2_t 
test_vmflt_vf_f16m8_b2_vl31(vfloat16m8_t op1, float16_t op2)
{
  return vmflt_vf_f16m8_b2(op1, op2, 31);
}

/*
** test_vmflt_vf_f32mf2_b64:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmflt_vf_f32mf2_b64(vfloat32mf2_t op1, float32_t op2, size_t vl)
{
  return vmflt_vf_f32mf2_b64(op1, op2, vl);
}

/*
** test_vmflt_vf_f32mf2_b64_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmflt_vf_f32mf2_b64_vl31(vfloat32mf2_t op1, float32_t op2)
{
  return vmflt_vf_f32mf2_b64(op1, op2, 31);
}

/*
** test_vmflt_vf_f32m1_b32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmflt_vf_f32m1_b32(vfloat32m1_t op1, float32_t op2, size_t vl)
{
  return vmflt_vf_f32m1_b32(op1, op2, vl);
}

/*
** test_vmflt_vf_f32m1_b32_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmflt_vf_f32m1_b32_vl31(vfloat32m1_t op1, float32_t op2)
{
  return vmflt_vf_f32m1_b32(op1, op2, 31);
}

/*
** test_vmflt_vf_f32m2_b16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmflt_vf_f32m2_b16(vfloat32m2_t op1, float32_t op2, size_t vl)
{
  return vmflt_vf_f32m2_b16(op1, op2, vl);
}

/*
** test_vmflt_vf_f32m2_b16_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmflt_vf_f32m2_b16_vl31(vfloat32m2_t op1, float32_t op2)
{
  return vmflt_vf_f32m2_b16(op1, op2, 31);
}

/*
** test_vmflt_vf_f32m4_b8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmflt_vf_f32m4_b8(vfloat32m4_t op1, float32_t op2, size_t vl)
{
  return vmflt_vf_f32m4_b8(op1, op2, vl);
}

/*
** test_vmflt_vf_f32m4_b8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmflt_vf_f32m4_b8_vl31(vfloat32m4_t op1, float32_t op2)
{
  return vmflt_vf_f32m4_b8(op1, op2, 31);
}

/*
** test_vmflt_vf_f32m8_b4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
vbool4_t 
test_vmflt_vf_f32m8_b4(vfloat32m8_t op1, float32_t op2, size_t vl)
{
  return vmflt_vf_f32m8_b4(op1, op2, vl);
}

/*
** test_vmflt_vf_f32m8_b4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
vbool4_t 
test_vmflt_vf_f32m8_b4_vl31(vfloat32m8_t op1, float32_t op2)
{
  return vmflt_vf_f32m8_b4(op1, op2, 31);
}

/*
** test_vmflt_vf_f64m1_b64:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmflt_vf_f64m1_b64(vfloat64m1_t op1, float64_t op2, size_t vl)
{
  return vmflt_vf_f64m1_b64(op1, op2, vl);
}

/*
** test_vmflt_vf_f64m1_b64_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmflt_vf_f64m1_b64_vl31(vfloat64m1_t op1, float64_t op2)
{
  return vmflt_vf_f64m1_b64(op1, op2, 31);
}

/*
** test_vmflt_vf_f64m2_b32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmflt_vf_f64m2_b32(vfloat64m2_t op1, float64_t op2, size_t vl)
{
  return vmflt_vf_f64m2_b32(op1, op2, vl);
}

/*
** test_vmflt_vf_f64m2_b32_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmflt_vf_f64m2_b32_vl31(vfloat64m2_t op1, float64_t op2)
{
  return vmflt_vf_f64m2_b32(op1, op2, 31);
}

/*
** test_vmflt_vf_f64m4_b16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmflt_vf_f64m4_b16(vfloat64m4_t op1, float64_t op2, size_t vl)
{
  return vmflt_vf_f64m4_b16(op1, op2, vl);
}

/*
** test_vmflt_vf_f64m4_b16_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmflt_vf_f64m4_b16_vl31(vfloat64m4_t op1, float64_t op2)
{
  return vmflt_vf_f64m4_b16(op1, op2, 31);
}

/*
** test_vmflt_vf_f64m8_b8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmflt_vf_f64m8_b8(vfloat64m8_t op1, float64_t op2, size_t vl)
{
  return vmflt_vf_f64m8_b8(op1, op2, vl);
}

/*
** test_vmflt_vf_f64m8_b8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmflt_vf_f64m8_b8_vl31(vfloat64m8_t op1, float64_t op2)
{
  return vmflt_vf_f64m8_b8(op1, op2, 31);
}

/*
** test_vmflt_vf_f16mf4_b64_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmflt_vf_f16mf4_b64_m(vbool64_t mask, vbool64_t maskedoff, vfloat16mf4_t op1, float16_t op2, size_t vl)
{
  return vmflt_vf_f16mf4_b64_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmflt_vf_f16mf4_b64_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmflt_vf_f16mf4_b64_m_vl31(vbool64_t mask, vbool64_t maskedoff, vfloat16mf4_t op1, float16_t op2)
{
  return vmflt_vf_f16mf4_b64_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmflt_vf_f16mf2_b32_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmflt_vf_f16mf2_b32_m(vbool32_t mask, vbool32_t maskedoff, vfloat16mf2_t op1, float16_t op2, size_t vl)
{
  return vmflt_vf_f16mf2_b32_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmflt_vf_f16mf2_b32_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmflt_vf_f16mf2_b32_m_vl31(vbool32_t mask, vbool32_t maskedoff, vfloat16mf2_t op1, float16_t op2)
{
  return vmflt_vf_f16mf2_b32_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmflt_vf_f16m1_b16_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmflt_vf_f16m1_b16_m(vbool16_t mask, vbool16_t maskedoff, vfloat16m1_t op1, float16_t op2, size_t vl)
{
  return vmflt_vf_f16m1_b16_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmflt_vf_f16m1_b16_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmflt_vf_f16m1_b16_m_vl31(vbool16_t mask, vbool16_t maskedoff, vfloat16m1_t op1, float16_t op2)
{
  return vmflt_vf_f16m1_b16_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmflt_vf_f16m2_b8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmflt_vf_f16m2_b8_m(vbool8_t mask, vbool8_t maskedoff, vfloat16m2_t op1, float16_t op2, size_t vl)
{
  return vmflt_vf_f16m2_b8_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmflt_vf_f16m2_b8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmflt_vf_f16m2_b8_m_vl31(vbool8_t mask, vbool8_t maskedoff, vfloat16m2_t op1, float16_t op2)
{
  return vmflt_vf_f16m2_b8_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmflt_vf_f16m4_b4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmflt_vf_f16m4_b4_m(vbool4_t mask, vbool4_t maskedoff, vfloat16m4_t op1, float16_t op2, size_t vl)
{
  return vmflt_vf_f16m4_b4_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmflt_vf_f16m4_b4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmflt_vf_f16m4_b4_m_vl31(vbool4_t mask, vbool4_t maskedoff, vfloat16m4_t op1, float16_t op2)
{
  return vmflt_vf_f16m4_b4_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmflt_vf_f16m8_b2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*mu
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool2_t 
test_vmflt_vf_f16m8_b2_m(vbool2_t mask, vbool2_t maskedoff, vfloat16m8_t op1, float16_t op2, size_t vl)
{
  return vmflt_vf_f16m8_b2_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmflt_vf_f16m8_b2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*mu
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool2_t 
test_vmflt_vf_f16m8_b2_m_vl31(vbool2_t mask, vbool2_t maskedoff, vfloat16m8_t op1, float16_t op2)
{
  return vmflt_vf_f16m8_b2_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmflt_vf_f32mf2_b64_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmflt_vf_f32mf2_b64_m(vbool64_t mask, vbool64_t maskedoff, vfloat32mf2_t op1, float32_t op2, size_t vl)
{
  return vmflt_vf_f32mf2_b64_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmflt_vf_f32mf2_b64_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmflt_vf_f32mf2_b64_m_vl31(vbool64_t mask, vbool64_t maskedoff, vfloat32mf2_t op1, float32_t op2)
{
  return vmflt_vf_f32mf2_b64_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmflt_vf_f32m1_b32_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmflt_vf_f32m1_b32_m(vbool32_t mask, vbool32_t maskedoff, vfloat32m1_t op1, float32_t op2, size_t vl)
{
  return vmflt_vf_f32m1_b32_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmflt_vf_f32m1_b32_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmflt_vf_f32m1_b32_m_vl31(vbool32_t mask, vbool32_t maskedoff, vfloat32m1_t op1, float32_t op2)
{
  return vmflt_vf_f32m1_b32_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmflt_vf_f32m2_b16_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmflt_vf_f32m2_b16_m(vbool16_t mask, vbool16_t maskedoff, vfloat32m2_t op1, float32_t op2, size_t vl)
{
  return vmflt_vf_f32m2_b16_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmflt_vf_f32m2_b16_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmflt_vf_f32m2_b16_m_vl31(vbool16_t mask, vbool16_t maskedoff, vfloat32m2_t op1, float32_t op2)
{
  return vmflt_vf_f32m2_b16_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmflt_vf_f32m4_b8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmflt_vf_f32m4_b8_m(vbool8_t mask, vbool8_t maskedoff, vfloat32m4_t op1, float32_t op2, size_t vl)
{
  return vmflt_vf_f32m4_b8_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmflt_vf_f32m4_b8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmflt_vf_f32m4_b8_m_vl31(vbool8_t mask, vbool8_t maskedoff, vfloat32m4_t op1, float32_t op2)
{
  return vmflt_vf_f32m4_b8_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmflt_vf_f32m8_b4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmflt_vf_f32m8_b4_m(vbool4_t mask, vbool4_t maskedoff, vfloat32m8_t op1, float32_t op2, size_t vl)
{
  return vmflt_vf_f32m8_b4_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmflt_vf_f32m8_b4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*mu
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmflt_vf_f32m8_b4_m_vl31(vbool4_t mask, vbool4_t maskedoff, vfloat32m8_t op1, float32_t op2)
{
  return vmflt_vf_f32m8_b4_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmflt_vf_f64m1_b64_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmflt_vf_f64m1_b64_m(vbool64_t mask, vbool64_t maskedoff, vfloat64m1_t op1, float64_t op2, size_t vl)
{
  return vmflt_vf_f64m1_b64_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmflt_vf_f64m1_b64_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmflt_vf_f64m1_b64_m_vl31(vbool64_t mask, vbool64_t maskedoff, vfloat64m1_t op1, float64_t op2)
{
  return vmflt_vf_f64m1_b64_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmflt_vf_f64m2_b32_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmflt_vf_f64m2_b32_m(vbool32_t mask, vbool32_t maskedoff, vfloat64m2_t op1, float64_t op2, size_t vl)
{
  return vmflt_vf_f64m2_b32_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmflt_vf_f64m2_b32_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmflt_vf_f64m2_b32_m_vl31(vbool32_t mask, vbool32_t maskedoff, vfloat64m2_t op1, float64_t op2)
{
  return vmflt_vf_f64m2_b32_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmflt_vf_f64m4_b16_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmflt_vf_f64m4_b16_m(vbool16_t mask, vbool16_t maskedoff, vfloat64m4_t op1, float64_t op2, size_t vl)
{
  return vmflt_vf_f64m4_b16_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmflt_vf_f64m4_b16_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmflt_vf_f64m4_b16_m_vl31(vbool16_t mask, vbool16_t maskedoff, vfloat64m4_t op1, float64_t op2)
{
  return vmflt_vf_f64m4_b16_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmflt_vf_f64m8_b8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmflt_vf_f64m8_b8_m(vbool8_t mask, vbool8_t maskedoff, vfloat64m8_t op1, float64_t op2, size_t vl)
{
  return vmflt_vf_f64m8_b8_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmflt_vf_f64m8_b8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*mu
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmflt_vf_f64m8_b8_m_vl31(vbool8_t mask, vbool8_t maskedoff, vfloat64m8_t op1, float64_t op2)
{
  return vmflt_vf_f64m8_b8_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmflt_vf_f16mf4_b64_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmflt_vf_f16mf4_b64_m_vl32(vbool64_t mask, vbool64_t maskedoff, vfloat16mf4_t op1, float16_t op2)
{
  return vmflt_vf_f16mf4_b64_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmflt_vf_f16mf2_b32_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmflt_vf_f16mf2_b32_m_vl32(vbool32_t mask, vbool32_t maskedoff, vfloat16mf2_t op1, float16_t op2)
{
  return vmflt_vf_f16mf2_b32_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmflt_vf_f16m1_b16_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmflt_vf_f16m1_b16_m_vl32(vbool16_t mask, vbool16_t maskedoff, vfloat16m1_t op1, float16_t op2)
{
  return vmflt_vf_f16m1_b16_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmflt_vf_f16m2_b8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmflt_vf_f16m2_b8_m_vl32(vbool8_t mask, vbool8_t maskedoff, vfloat16m2_t op1, float16_t op2)
{
  return vmflt_vf_f16m2_b8_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmflt_vf_f16m4_b4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmflt_vf_f16m4_b4_m_vl32(vbool4_t mask, vbool4_t maskedoff, vfloat16m4_t op1, float16_t op2)
{
  return vmflt_vf_f16m4_b4_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmflt_vf_f16m8_b2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*mu
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool2_t 
test_vmflt_vf_f16m8_b2_m_vl32(vbool2_t mask, vbool2_t maskedoff, vfloat16m8_t op1, float16_t op2)
{
  return vmflt_vf_f16m8_b2_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmflt_vf_f32mf2_b64_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmflt_vf_f32mf2_b64_m_vl32(vbool64_t mask, vbool64_t maskedoff, vfloat32mf2_t op1, float32_t op2)
{
  return vmflt_vf_f32mf2_b64_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmflt_vf_f32m1_b32_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmflt_vf_f32m1_b32_m_vl32(vbool32_t mask, vbool32_t maskedoff, vfloat32m1_t op1, float32_t op2)
{
  return vmflt_vf_f32m1_b32_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmflt_vf_f32m2_b16_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmflt_vf_f32m2_b16_m_vl32(vbool16_t mask, vbool16_t maskedoff, vfloat32m2_t op1, float32_t op2)
{
  return vmflt_vf_f32m2_b16_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmflt_vf_f32m4_b8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmflt_vf_f32m4_b8_m_vl32(vbool8_t mask, vbool8_t maskedoff, vfloat32m4_t op1, float32_t op2)
{
  return vmflt_vf_f32m4_b8_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmflt_vf_f32m8_b4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmflt_vf_f32m8_b4_m_vl32(vbool4_t mask, vbool4_t maskedoff, vfloat32m8_t op1, float32_t op2)
{
  return vmflt_vf_f32m8_b4_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmflt_vf_f64m1_b64_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmflt_vf_f64m1_b64_m_vl32(vbool64_t mask, vbool64_t maskedoff, vfloat64m1_t op1, float64_t op2)
{
  return vmflt_vf_f64m1_b64_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmflt_vf_f64m2_b32_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmflt_vf_f64m2_b32_m_vl32(vbool32_t mask, vbool32_t maskedoff, vfloat64m2_t op1, float64_t op2)
{
  return vmflt_vf_f64m2_b32_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmflt_vf_f64m4_b16_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmflt_vf_f64m4_b16_m_vl32(vbool16_t mask, vbool16_t maskedoff, vfloat64m4_t op1, float64_t op2)
{
  return vmflt_vf_f64m4_b16_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmflt_vf_f64m8_b8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmflt_vf_f64m8_b8_m_vl32(vbool8_t mask, vbool8_t maskedoff, vfloat64m8_t op1, float64_t op2)
{
  return vmflt_vf_f64m8_b8_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmflt_vf_f16mf4_b64_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmflt_vf_f16mf4_b64_vl32(vfloat16mf4_t op1, float16_t op2)
{
  return vmflt_vf_f16mf4_b64(op1, op2, 32);
}

/*
** test_vmflt_vf_f16mf2_b32_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmflt_vf_f16mf2_b32_vl32(vfloat16mf2_t op1, float16_t op2)
{
  return vmflt_vf_f16mf2_b32(op1, op2, 32);
}

/*
** test_vmflt_vf_f16m1_b16_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmflt_vf_f16m1_b16_vl32(vfloat16m1_t op1, float16_t op2)
{
  return vmflt_vf_f16m1_b16(op1, op2, 32);
}

/*
** test_vmflt_vf_f16m2_b8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmflt_vf_f16m2_b8_vl32(vfloat16m2_t op1, float16_t op2)
{
  return vmflt_vf_f16m2_b8(op1, op2, 32);
}

/*
** test_vmflt_vf_f16m4_b4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
vbool4_t 
test_vmflt_vf_f16m4_b4_vl32(vfloat16m4_t op1, float16_t op2)
{
  return vmflt_vf_f16m4_b4(op1, op2, 32);
}

/*
** test_vmflt_vf_f16m8_b2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
vbool2_t 
test_vmflt_vf_f16m8_b2_vl32(vfloat16m8_t op1, float16_t op2)
{
  return vmflt_vf_f16m8_b2(op1, op2, 32);
}

/*
** test_vmflt_vf_f32mf2_b64_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmflt_vf_f32mf2_b64_vl32(vfloat32mf2_t op1, float32_t op2)
{
  return vmflt_vf_f32mf2_b64(op1, op2, 32);
}

/*
** test_vmflt_vf_f32m1_b32_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmflt_vf_f32m1_b32_vl32(vfloat32m1_t op1, float32_t op2)
{
  return vmflt_vf_f32m1_b32(op1, op2, 32);
}

/*
** test_vmflt_vf_f32m2_b16_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmflt_vf_f32m2_b16_vl32(vfloat32m2_t op1, float32_t op2)
{
  return vmflt_vf_f32m2_b16(op1, op2, 32);
}

/*
** test_vmflt_vf_f32m4_b8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmflt_vf_f32m4_b8_vl32(vfloat32m4_t op1, float32_t op2)
{
  return vmflt_vf_f32m4_b8(op1, op2, 32);
}

/*
** test_vmflt_vf_f32m8_b4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
vbool4_t 
test_vmflt_vf_f32m8_b4_vl32(vfloat32m8_t op1, float32_t op2)
{
  return vmflt_vf_f32m8_b4(op1, op2, 32);
}

/*
** test_vmflt_vf_f64m1_b64_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmflt_vf_f64m1_b64_vl32(vfloat64m1_t op1, float64_t op2)
{
  return vmflt_vf_f64m1_b64(op1, op2, 32);
}

/*
** test_vmflt_vf_f64m2_b32_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmflt_vf_f64m2_b32_vl32(vfloat64m2_t op1, float64_t op2)
{
  return vmflt_vf_f64m2_b32(op1, op2, 32);
}

/*
** test_vmflt_vf_f64m4_b16_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmflt_vf_f64m4_b16_vl32(vfloat64m4_t op1, float64_t op2)
{
  return vmflt_vf_f64m4_b16(op1, op2, 32);
}

/*
** test_vmflt_vf_f64m8_b8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmflt_vf_f64m8_b8_vl32(vfloat64m8_t op1, float64_t op2)
{
  return vmflt_vf_f64m8_b8(op1, op2, 32);
}

/*
** test_vmflt_vv_f16mf4_b64:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmflt_vv_f16mf4_b64(vfloat16mf4_t op1, vfloat16mf4_t op2, size_t vl)
{
  return vmflt_vv_f16mf4_b64(op1, op2, vl);
}

/*
** test_vmflt_vv_f16mf4_b64_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmflt_vv_f16mf4_b64_vl31(vfloat16mf4_t op1, vfloat16mf4_t op2)
{
  return vmflt_vv_f16mf4_b64(op1, op2, 31);
}

/*
** test_vmflt_vv_f16mf2_b32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool32_t 
test_vmflt_vv_f16mf2_b32(vfloat16mf2_t op1, vfloat16mf2_t op2, size_t vl)
{
  return vmflt_vv_f16mf2_b32(op1, op2, vl);
}

/*
** test_vmflt_vv_f16mf2_b32_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool32_t 
test_vmflt_vv_f16mf2_b32_vl31(vfloat16mf2_t op1, vfloat16mf2_t op2)
{
  return vmflt_vv_f16mf2_b32(op1, op2, 31);
}

/*
** test_vmflt_vv_f16m1_b16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool16_t 
test_vmflt_vv_f16m1_b16(vfloat16m1_t op1, vfloat16m1_t op2, size_t vl)
{
  return vmflt_vv_f16m1_b16(op1, op2, vl);
}

/*
** test_vmflt_vv_f16m1_b16_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool16_t 
test_vmflt_vv_f16m1_b16_vl31(vfloat16m1_t op1, vfloat16m1_t op2)
{
  return vmflt_vv_f16m1_b16(op1, op2, 31);
}

/*
** test_vmflt_vv_f16m2_b8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool8_t 
test_vmflt_vv_f16m2_b8(vfloat16m2_t op1, vfloat16m2_t op2, size_t vl)
{
  return vmflt_vv_f16m2_b8(op1, op2, vl);
}

/*
** test_vmflt_vv_f16m2_b8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool8_t 
test_vmflt_vv_f16m2_b8_vl31(vfloat16m2_t op1, vfloat16m2_t op2)
{
  return vmflt_vv_f16m2_b8(op1, op2, 31);
}

/*
** test_vmflt_vv_f16m4_b4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool4_t 
test_vmflt_vv_f16m4_b4(vfloat16m4_t op1, vfloat16m4_t op2, size_t vl)
{
  return vmflt_vv_f16m4_b4(op1, op2, vl);
}

/*
** test_vmflt_vv_f16m4_b4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool4_t 
test_vmflt_vv_f16m4_b4_vl31(vfloat16m4_t op1, vfloat16m4_t op2)
{
  return vmflt_vv_f16m4_b4(op1, op2, 31);
}

/*
** test_vmflt_vv_f16m8_b2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool2_t 
test_vmflt_vv_f16m8_b2(vfloat16m8_t op1, vfloat16m8_t op2, size_t vl)
{
  return vmflt_vv_f16m8_b2(op1, op2, vl);
}

/*
** test_vmflt_vv_f16m8_b2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool2_t 
test_vmflt_vv_f16m8_b2_vl31(vfloat16m8_t op1, vfloat16m8_t op2)
{
  return vmflt_vv_f16m8_b2(op1, op2, 31);
}

/*
** test_vmflt_vv_f32mf2_b64:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmflt_vv_f32mf2_b64(vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl)
{
  return vmflt_vv_f32mf2_b64(op1, op2, vl);
}

/*
** test_vmflt_vv_f32mf2_b64_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmflt_vv_f32mf2_b64_vl31(vfloat32mf2_t op1, vfloat32mf2_t op2)
{
  return vmflt_vv_f32mf2_b64(op1, op2, 31);
}

/*
** test_vmflt_vv_f32m1_b32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool32_t 
test_vmflt_vv_f32m1_b32(vfloat32m1_t op1, vfloat32m1_t op2, size_t vl)
{
  return vmflt_vv_f32m1_b32(op1, op2, vl);
}

/*
** test_vmflt_vv_f32m1_b32_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool32_t 
test_vmflt_vv_f32m1_b32_vl31(vfloat32m1_t op1, vfloat32m1_t op2)
{
  return vmflt_vv_f32m1_b32(op1, op2, 31);
}

/*
** test_vmflt_vv_f32m2_b16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool16_t 
test_vmflt_vv_f32m2_b16(vfloat32m2_t op1, vfloat32m2_t op2, size_t vl)
{
  return vmflt_vv_f32m2_b16(op1, op2, vl);
}

/*
** test_vmflt_vv_f32m2_b16_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool16_t 
test_vmflt_vv_f32m2_b16_vl31(vfloat32m2_t op1, vfloat32m2_t op2)
{
  return vmflt_vv_f32m2_b16(op1, op2, 31);
}

/*
** test_vmflt_vv_f32m4_b8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool8_t 
test_vmflt_vv_f32m4_b8(vfloat32m4_t op1, vfloat32m4_t op2, size_t vl)
{
  return vmflt_vv_f32m4_b8(op1, op2, vl);
}

/*
** test_vmflt_vv_f32m4_b8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool8_t 
test_vmflt_vv_f32m4_b8_vl31(vfloat32m4_t op1, vfloat32m4_t op2)
{
  return vmflt_vv_f32m4_b8(op1, op2, 31);
}

/*
** test_vmflt_vv_f32m8_b4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool4_t 
test_vmflt_vv_f32m8_b4(vfloat32m8_t op1, vfloat32m8_t op2, size_t vl)
{
  return vmflt_vv_f32m8_b4(op1, op2, vl);
}

/*
** test_vmflt_vv_f32m8_b4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool4_t 
test_vmflt_vv_f32m8_b4_vl31(vfloat32m8_t op1, vfloat32m8_t op2)
{
  return vmflt_vv_f32m8_b4(op1, op2, 31);
}

/*
** test_vmflt_vv_f64m1_b64:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmflt_vv_f64m1_b64(vfloat64m1_t op1, vfloat64m1_t op2, size_t vl)
{
  return vmflt_vv_f64m1_b64(op1, op2, vl);
}

/*
** test_vmflt_vv_f64m1_b64_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmflt_vv_f64m1_b64_vl31(vfloat64m1_t op1, vfloat64m1_t op2)
{
  return vmflt_vv_f64m1_b64(op1, op2, 31);
}

/*
** test_vmflt_vv_f64m2_b32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool32_t 
test_vmflt_vv_f64m2_b32(vfloat64m2_t op1, vfloat64m2_t op2, size_t vl)
{
  return vmflt_vv_f64m2_b32(op1, op2, vl);
}

/*
** test_vmflt_vv_f64m2_b32_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool32_t 
test_vmflt_vv_f64m2_b32_vl31(vfloat64m2_t op1, vfloat64m2_t op2)
{
  return vmflt_vv_f64m2_b32(op1, op2, 31);
}

/*
** test_vmflt_vv_f64m4_b16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool16_t 
test_vmflt_vv_f64m4_b16(vfloat64m4_t op1, vfloat64m4_t op2, size_t vl)
{
  return vmflt_vv_f64m4_b16(op1, op2, vl);
}

/*
** test_vmflt_vv_f64m4_b16_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool16_t 
test_vmflt_vv_f64m4_b16_vl31(vfloat64m4_t op1, vfloat64m4_t op2)
{
  return vmflt_vv_f64m4_b16(op1, op2, 31);
}

/*
** test_vmflt_vv_f64m8_b8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool8_t 
test_vmflt_vv_f64m8_b8(vfloat64m8_t op1, vfloat64m8_t op2, size_t vl)
{
  return vmflt_vv_f64m8_b8(op1, op2, vl);
}

/*
** test_vmflt_vv_f64m8_b8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool8_t 
test_vmflt_vv_f64m8_b8_vl31(vfloat64m8_t op1, vfloat64m8_t op2)
{
  return vmflt_vv_f64m8_b8(op1, op2, 31);
}

/*
** test_vmflt_vv_f16mf4_b64_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmflt_vv_f16mf4_b64_m(vbool64_t mask, vbool64_t maskedoff, vfloat16mf4_t op1, vfloat16mf4_t op2, size_t vl)
{
  return vmflt_vv_f16mf4_b64_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmflt_vv_f16mf4_b64_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmflt_vv_f16mf4_b64_m_vl31(vbool64_t mask, vbool64_t maskedoff, vfloat16mf4_t op1, vfloat16mf4_t op2)
{
  return vmflt_vv_f16mf4_b64_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmflt_vv_f16mf2_b32_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmflt_vv_f16mf2_b32_m(vbool32_t mask, vbool32_t maskedoff, vfloat16mf2_t op1, vfloat16mf2_t op2, size_t vl)
{
  return vmflt_vv_f16mf2_b32_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmflt_vv_f16mf2_b32_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmflt_vv_f16mf2_b32_m_vl31(vbool32_t mask, vbool32_t maskedoff, vfloat16mf2_t op1, vfloat16mf2_t op2)
{
  return vmflt_vv_f16mf2_b32_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmflt_vv_f16m1_b16_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmflt_vv_f16m1_b16_m(vbool16_t mask, vbool16_t maskedoff, vfloat16m1_t op1, vfloat16m1_t op2, size_t vl)
{
  return vmflt_vv_f16m1_b16_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmflt_vv_f16m1_b16_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmflt_vv_f16m1_b16_m_vl31(vbool16_t mask, vbool16_t maskedoff, vfloat16m1_t op1, vfloat16m1_t op2)
{
  return vmflt_vv_f16m1_b16_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmflt_vv_f16m2_b8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmflt_vv_f16m2_b8_m(vbool8_t mask, vbool8_t maskedoff, vfloat16m2_t op1, vfloat16m2_t op2, size_t vl)
{
  return vmflt_vv_f16m2_b8_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmflt_vv_f16m2_b8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmflt_vv_f16m2_b8_m_vl31(vbool8_t mask, vbool8_t maskedoff, vfloat16m2_t op1, vfloat16m2_t op2)
{
  return vmflt_vv_f16m2_b8_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmflt_vv_f16m4_b4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmflt_vv_f16m4_b4_m(vbool4_t mask, vbool4_t maskedoff, vfloat16m4_t op1, vfloat16m4_t op2, size_t vl)
{
  return vmflt_vv_f16m4_b4_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmflt_vv_f16m4_b4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmflt_vv_f16m4_b4_m_vl31(vbool4_t mask, vbool4_t maskedoff, vfloat16m4_t op1, vfloat16m4_t op2)
{
  return vmflt_vv_f16m4_b4_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmflt_vv_f16m8_b2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*mu
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vbool2_t 
test_vmflt_vv_f16m8_b2_m(vbool2_t mask, vbool2_t maskedoff, vfloat16m8_t op1, vfloat16m8_t op2, size_t vl)
{
  return vmflt_vv_f16m8_b2_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmflt_vv_f16m8_b2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*mu
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vbool2_t 
test_vmflt_vv_f16m8_b2_m_vl31(vbool2_t mask, vbool2_t maskedoff, vfloat16m8_t op1, vfloat16m8_t op2)
{
  return vmflt_vv_f16m8_b2_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmflt_vv_f32mf2_b64_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmflt_vv_f32mf2_b64_m(vbool64_t mask, vbool64_t maskedoff, vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl)
{
  return vmflt_vv_f32mf2_b64_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmflt_vv_f32mf2_b64_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmflt_vv_f32mf2_b64_m_vl31(vbool64_t mask, vbool64_t maskedoff, vfloat32mf2_t op1, vfloat32mf2_t op2)
{
  return vmflt_vv_f32mf2_b64_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmflt_vv_f32m1_b32_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmflt_vv_f32m1_b32_m(vbool32_t mask, vbool32_t maskedoff, vfloat32m1_t op1, vfloat32m1_t op2, size_t vl)
{
  return vmflt_vv_f32m1_b32_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmflt_vv_f32m1_b32_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmflt_vv_f32m1_b32_m_vl31(vbool32_t mask, vbool32_t maskedoff, vfloat32m1_t op1, vfloat32m1_t op2)
{
  return vmflt_vv_f32m1_b32_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmflt_vv_f32m2_b16_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmflt_vv_f32m2_b16_m(vbool16_t mask, vbool16_t maskedoff, vfloat32m2_t op1, vfloat32m2_t op2, size_t vl)
{
  return vmflt_vv_f32m2_b16_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmflt_vv_f32m2_b16_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmflt_vv_f32m2_b16_m_vl31(vbool16_t mask, vbool16_t maskedoff, vfloat32m2_t op1, vfloat32m2_t op2)
{
  return vmflt_vv_f32m2_b16_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmflt_vv_f32m4_b8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmflt_vv_f32m4_b8_m(vbool8_t mask, vbool8_t maskedoff, vfloat32m4_t op1, vfloat32m4_t op2, size_t vl)
{
  return vmflt_vv_f32m4_b8_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmflt_vv_f32m4_b8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmflt_vv_f32m4_b8_m_vl31(vbool8_t mask, vbool8_t maskedoff, vfloat32m4_t op1, vfloat32m4_t op2)
{
  return vmflt_vv_f32m4_b8_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmflt_vv_f32m8_b4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmflt_vv_f32m8_b4_m(vbool4_t mask, vbool4_t maskedoff, vfloat32m8_t op1, vfloat32m8_t op2, size_t vl)
{
  return vmflt_vv_f32m8_b4_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmflt_vv_f32m8_b4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*mu
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmflt_vv_f32m8_b4_m_vl31(vbool4_t mask, vbool4_t maskedoff, vfloat32m8_t op1, vfloat32m8_t op2)
{
  return vmflt_vv_f32m8_b4_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmflt_vv_f64m1_b64_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmflt_vv_f64m1_b64_m(vbool64_t mask, vbool64_t maskedoff, vfloat64m1_t op1, vfloat64m1_t op2, size_t vl)
{
  return vmflt_vv_f64m1_b64_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmflt_vv_f64m1_b64_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmflt_vv_f64m1_b64_m_vl31(vbool64_t mask, vbool64_t maskedoff, vfloat64m1_t op1, vfloat64m1_t op2)
{
  return vmflt_vv_f64m1_b64_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmflt_vv_f64m2_b32_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmflt_vv_f64m2_b32_m(vbool32_t mask, vbool32_t maskedoff, vfloat64m2_t op1, vfloat64m2_t op2, size_t vl)
{
  return vmflt_vv_f64m2_b32_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmflt_vv_f64m2_b32_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmflt_vv_f64m2_b32_m_vl31(vbool32_t mask, vbool32_t maskedoff, vfloat64m2_t op1, vfloat64m2_t op2)
{
  return vmflt_vv_f64m2_b32_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmflt_vv_f64m4_b16_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmflt_vv_f64m4_b16_m(vbool16_t mask, vbool16_t maskedoff, vfloat64m4_t op1, vfloat64m4_t op2, size_t vl)
{
  return vmflt_vv_f64m4_b16_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmflt_vv_f64m4_b16_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmflt_vv_f64m4_b16_m_vl31(vbool16_t mask, vbool16_t maskedoff, vfloat64m4_t op1, vfloat64m4_t op2)
{
  return vmflt_vv_f64m4_b16_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmflt_vv_f64m8_b8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmflt_vv_f64m8_b8_m(vbool8_t mask, vbool8_t maskedoff, vfloat64m8_t op1, vfloat64m8_t op2, size_t vl)
{
  return vmflt_vv_f64m8_b8_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmflt_vv_f64m8_b8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*mu
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmflt_vv_f64m8_b8_m_vl31(vbool8_t mask, vbool8_t maskedoff, vfloat64m8_t op1, vfloat64m8_t op2)
{
  return vmflt_vv_f64m8_b8_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmflt_vv_f16mf4_b64_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmflt_vv_f16mf4_b64_m_vl32(vbool64_t mask, vbool64_t maskedoff, vfloat16mf4_t op1, vfloat16mf4_t op2)
{
  return vmflt_vv_f16mf4_b64_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmflt_vv_f16mf2_b32_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmflt_vv_f16mf2_b32_m_vl32(vbool32_t mask, vbool32_t maskedoff, vfloat16mf2_t op1, vfloat16mf2_t op2)
{
  return vmflt_vv_f16mf2_b32_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmflt_vv_f16m1_b16_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmflt_vv_f16m1_b16_m_vl32(vbool16_t mask, vbool16_t maskedoff, vfloat16m1_t op1, vfloat16m1_t op2)
{
  return vmflt_vv_f16m1_b16_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmflt_vv_f16m2_b8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmflt_vv_f16m2_b8_m_vl32(vbool8_t mask, vbool8_t maskedoff, vfloat16m2_t op1, vfloat16m2_t op2)
{
  return vmflt_vv_f16m2_b8_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmflt_vv_f16m4_b4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmflt_vv_f16m4_b4_m_vl32(vbool4_t mask, vbool4_t maskedoff, vfloat16m4_t op1, vfloat16m4_t op2)
{
  return vmflt_vv_f16m4_b4_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmflt_vv_f16m8_b2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*mu
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vbool2_t 
test_vmflt_vv_f16m8_b2_m_vl32(vbool2_t mask, vbool2_t maskedoff, vfloat16m8_t op1, vfloat16m8_t op2)
{
  return vmflt_vv_f16m8_b2_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmflt_vv_f32mf2_b64_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmflt_vv_f32mf2_b64_m_vl32(vbool64_t mask, vbool64_t maskedoff, vfloat32mf2_t op1, vfloat32mf2_t op2)
{
  return vmflt_vv_f32mf2_b64_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmflt_vv_f32m1_b32_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmflt_vv_f32m1_b32_m_vl32(vbool32_t mask, vbool32_t maskedoff, vfloat32m1_t op1, vfloat32m1_t op2)
{
  return vmflt_vv_f32m1_b32_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmflt_vv_f32m2_b16_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmflt_vv_f32m2_b16_m_vl32(vbool16_t mask, vbool16_t maskedoff, vfloat32m2_t op1, vfloat32m2_t op2)
{
  return vmflt_vv_f32m2_b16_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmflt_vv_f32m4_b8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmflt_vv_f32m4_b8_m_vl32(vbool8_t mask, vbool8_t maskedoff, vfloat32m4_t op1, vfloat32m4_t op2)
{
  return vmflt_vv_f32m4_b8_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmflt_vv_f32m8_b4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmflt_vv_f32m8_b4_m_vl32(vbool4_t mask, vbool4_t maskedoff, vfloat32m8_t op1, vfloat32m8_t op2)
{
  return vmflt_vv_f32m8_b4_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmflt_vv_f64m1_b64_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmflt_vv_f64m1_b64_m_vl32(vbool64_t mask, vbool64_t maskedoff, vfloat64m1_t op1, vfloat64m1_t op2)
{
  return vmflt_vv_f64m1_b64_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmflt_vv_f64m2_b32_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmflt_vv_f64m2_b32_m_vl32(vbool32_t mask, vbool32_t maskedoff, vfloat64m2_t op1, vfloat64m2_t op2)
{
  return vmflt_vv_f64m2_b32_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmflt_vv_f64m4_b16_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmflt_vv_f64m4_b16_m_vl32(vbool16_t mask, vbool16_t maskedoff, vfloat64m4_t op1, vfloat64m4_t op2)
{
  return vmflt_vv_f64m4_b16_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmflt_vv_f64m8_b8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmflt_vv_f64m8_b8_m_vl32(vbool8_t mask, vbool8_t maskedoff, vfloat64m8_t op1, vfloat64m8_t op2)
{
  return vmflt_vv_f64m8_b8_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmflt_vv_f16mf4_b64_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmflt_vv_f16mf4_b64_vl32(vfloat16mf4_t op1, vfloat16mf4_t op2)
{
  return vmflt_vv_f16mf4_b64(op1, op2, 32);
}

/*
** test_vmflt_vv_f16mf2_b32_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool32_t 
test_vmflt_vv_f16mf2_b32_vl32(vfloat16mf2_t op1, vfloat16mf2_t op2)
{
  return vmflt_vv_f16mf2_b32(op1, op2, 32);
}

/*
** test_vmflt_vv_f16m1_b16_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool16_t 
test_vmflt_vv_f16m1_b16_vl32(vfloat16m1_t op1, vfloat16m1_t op2)
{
  return vmflt_vv_f16m1_b16(op1, op2, 32);
}

/*
** test_vmflt_vv_f16m2_b8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool8_t 
test_vmflt_vv_f16m2_b8_vl32(vfloat16m2_t op1, vfloat16m2_t op2)
{
  return vmflt_vv_f16m2_b8(op1, op2, 32);
}

/*
** test_vmflt_vv_f16m4_b4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool4_t 
test_vmflt_vv_f16m4_b4_vl32(vfloat16m4_t op1, vfloat16m4_t op2)
{
  return vmflt_vv_f16m4_b4(op1, op2, 32);
}

/*
** test_vmflt_vv_f16m8_b2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool2_t 
test_vmflt_vv_f16m8_b2_vl32(vfloat16m8_t op1, vfloat16m8_t op2)
{
  return vmflt_vv_f16m8_b2(op1, op2, 32);
}

/*
** test_vmflt_vv_f32mf2_b64_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmflt_vv_f32mf2_b64_vl32(vfloat32mf2_t op1, vfloat32mf2_t op2)
{
  return vmflt_vv_f32mf2_b64(op1, op2, 32);
}

/*
** test_vmflt_vv_f32m1_b32_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool32_t 
test_vmflt_vv_f32m1_b32_vl32(vfloat32m1_t op1, vfloat32m1_t op2)
{
  return vmflt_vv_f32m1_b32(op1, op2, 32);
}

/*
** test_vmflt_vv_f32m2_b16_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool16_t 
test_vmflt_vv_f32m2_b16_vl32(vfloat32m2_t op1, vfloat32m2_t op2)
{
  return vmflt_vv_f32m2_b16(op1, op2, 32);
}

/*
** test_vmflt_vv_f32m4_b8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool8_t 
test_vmflt_vv_f32m4_b8_vl32(vfloat32m4_t op1, vfloat32m4_t op2)
{
  return vmflt_vv_f32m4_b8(op1, op2, 32);
}

/*
** test_vmflt_vv_f32m8_b4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool4_t 
test_vmflt_vv_f32m8_b4_vl32(vfloat32m8_t op1, vfloat32m8_t op2)
{
  return vmflt_vv_f32m8_b4(op1, op2, 32);
}

/*
** test_vmflt_vv_f64m1_b64_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmflt_vv_f64m1_b64_vl32(vfloat64m1_t op1, vfloat64m1_t op2)
{
  return vmflt_vv_f64m1_b64(op1, op2, 32);
}

/*
** test_vmflt_vv_f64m2_b32_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool32_t 
test_vmflt_vv_f64m2_b32_vl32(vfloat64m2_t op1, vfloat64m2_t op2)
{
  return vmflt_vv_f64m2_b32(op1, op2, 32);
}

/*
** test_vmflt_vv_f64m4_b16_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool16_t 
test_vmflt_vv_f64m4_b16_vl32(vfloat64m4_t op1, vfloat64m4_t op2)
{
  return vmflt_vv_f64m4_b16(op1, op2, 32);
}

/*
** test_vmflt_vv_f64m8_b8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmflt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool8_t 
test_vmflt_vv_f64m8_b8_vl32(vfloat64m8_t op1, vfloat64m8_t op2)
{
  return vmflt_vv_f64m8_b8(op1, op2, 32);
}

