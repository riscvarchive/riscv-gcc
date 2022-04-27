/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>

/*
** test_vfmv_f_s_f16mf4_f16:
**  ...
**	vsetivli\s+zero,\s*0,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vfmv\.f\.s\s+(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" float16_t
test_vfmv_f_s_f16mf4_f16(vfloat16mf4_t src)
{
  return vfmv_f(src);
}


/*
** test_vfmv_f_s_f16mf2_f16:
**  ...
**	vsetivli\s+zero,\s*0,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vfmv\.f\.s\s+(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" float16_t
test_vfmv_f_s_f16mf2_f16(vfloat16mf2_t src)
{
  return vfmv_f(src);
}


/*
** test_vfmv_f_s_f16m1_f16:
**  ...
**	vsetivli\s+zero,\s*0,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vfmv\.f\.s\s+(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" float16_t
test_vfmv_f_s_f16m1_f16(vfloat16m1_t src)
{
  return vfmv_f(src);
}


/*
** test_vfmv_f_s_f16m2_f16:
**  ...
**	vsetivli\s+zero,\s*0,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vfmv\.f\.s\s+(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" float16_t
test_vfmv_f_s_f16m2_f16(vfloat16m2_t src)
{
  return vfmv_f(src);
}


/*
** test_vfmv_f_s_f16m4_f16:
**  ...
**	vsetivli\s+zero,\s*0,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vfmv\.f\.s\s+(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" float16_t
test_vfmv_f_s_f16m4_f16(vfloat16m4_t src)
{
  return vfmv_f(src);
}


/*
** test_vfmv_f_s_f16m8_f16:
**  ...
**	vsetivli\s+zero,\s*0,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vfmv\.f\.s\s+(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" float16_t
test_vfmv_f_s_f16m8_f16(vfloat16m8_t src)
{
  return vfmv_f(src);
}


/*
** test_vfmv_f_s_f32mf2_f32:
**  ...
**	vsetivli\s+zero,\s*0,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vfmv\.f\.s\s+(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" float32_t
test_vfmv_f_s_f32mf2_f32(vfloat32mf2_t src)
{
  return vfmv_f(src);
}


/*
** test_vfmv_f_s_f32m1_f32:
**  ...
**	vsetivli\s+zero,\s*0,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vfmv\.f\.s\s+(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" float32_t
test_vfmv_f_s_f32m1_f32(vfloat32m1_t src)
{
  return vfmv_f(src);
}


/*
** test_vfmv_f_s_f32m2_f32:
**  ...
**	vsetivli\s+zero,\s*0,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vfmv\.f\.s\s+(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" float32_t
test_vfmv_f_s_f32m2_f32(vfloat32m2_t src)
{
  return vfmv_f(src);
}


/*
** test_vfmv_f_s_f32m4_f32:
**  ...
**	vsetivli\s+zero,\s*0,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vfmv\.f\.s\s+(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" float32_t
test_vfmv_f_s_f32m4_f32(vfloat32m4_t src)
{
  return vfmv_f(src);
}


/*
** test_vfmv_f_s_f32m8_f32:
**  ...
**	vsetivli\s+zero,\s*0,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vfmv\.f\.s\s+(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" float32_t
test_vfmv_f_s_f32m8_f32(vfloat32m8_t src)
{
  return vfmv_f(src);
}


/*
** test_vfmv_f_s_f64m1_f64:
**  ...
**	vsetivli\s+zero,\s*0,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vfmv\.f\.s\s+(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" float64_t
test_vfmv_f_s_f64m1_f64(vfloat64m1_t src)
{
  return vfmv_f(src);
}


/*
** test_vfmv_f_s_f64m2_f64:
**  ...
**	vsetivli\s+zero,\s*0,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vfmv\.f\.s\s+(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" float64_t
test_vfmv_f_s_f64m2_f64(vfloat64m2_t src)
{
  return vfmv_f(src);
}


/*
** test_vfmv_f_s_f64m4_f64:
**  ...
**	vsetivli\s+zero,\s*0,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vfmv\.f\.s\s+(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" float64_t
test_vfmv_f_s_f64m4_f64(vfloat64m4_t src)
{
  return vfmv_f(src);
}


/*
** test_vfmv_f_s_f64m8_f64:
**  ...
**	vsetivli\s+zero,\s*0,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vfmv\.f\.s\s+(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" float64_t
test_vfmv_f_s_f64m8_f64(vfloat64m8_t src)
{
  return vfmv_f(src);
}


/*
** test_vfmv_s_f_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vfmv\.s\.f\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat16mf4_t 
test_vfmv_s_f_f16mf4(vfloat16mf4_t dest, float16_t op1, size_t vl)
{
  return vfmv_s(dest, op1, vl);
}


/*
** test_vfmv_s_f_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vfmv\.s\.f\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat16mf2_t 
test_vfmv_s_f_f16mf2(vfloat16mf2_t dest, float16_t op1, size_t vl)
{
  return vfmv_s(dest, op1, vl);
}


/*
** test_vfmv_s_f_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vfmv\.s\.f\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat16m1_t 
test_vfmv_s_f_f16m1(vfloat16m1_t dest, float16_t op1, size_t vl)
{
  return vfmv_s(dest, op1, vl);
}


/*
** test_vfmv_s_f_f16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vfmv\.s\.f\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat16m2_t 
test_vfmv_s_f_f16m2(vfloat16m2_t dest, float16_t op1, size_t vl)
{
  return vfmv_s(dest, op1, vl);
}


/*
** test_vfmv_s_f_f16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vfmv\.s\.f\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat16m4_t 
test_vfmv_s_f_f16m4(vfloat16m4_t dest, float16_t op1, size_t vl)
{
  return vfmv_s(dest, op1, vl);
}


/*
** test_vfmv_s_f_f16m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vfmv\.s\.f\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat16m8_t 
test_vfmv_s_f_f16m8(vfloat16m8_t dest, float16_t op1, size_t vl)
{
  return vfmv_s(dest, op1, vl);
}


/*
** test_vfmv_s_f_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vfmv\.s\.f\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat32mf2_t 
test_vfmv_s_f_f32mf2(vfloat32mf2_t dest, float32_t op1, size_t vl)
{
  return vfmv_s(dest, op1, vl);
}


/*
** test_vfmv_s_f_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vfmv\.s\.f\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat32m1_t 
test_vfmv_s_f_f32m1(vfloat32m1_t dest, float32_t op1, size_t vl)
{
  return vfmv_s(dest, op1, vl);
}


/*
** test_vfmv_s_f_f32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vfmv\.s\.f\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat32m2_t 
test_vfmv_s_f_f32m2(vfloat32m2_t dest, float32_t op1, size_t vl)
{
  return vfmv_s(dest, op1, vl);
}


/*
** test_vfmv_s_f_f32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vfmv\.s\.f\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat32m4_t 
test_vfmv_s_f_f32m4(vfloat32m4_t dest, float32_t op1, size_t vl)
{
  return vfmv_s(dest, op1, vl);
}


/*
** test_vfmv_s_f_f32m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vfmv\.s\.f\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat32m8_t 
test_vfmv_s_f_f32m8(vfloat32m8_t dest, float32_t op1, size_t vl)
{
  return vfmv_s(dest, op1, vl);
}


/*
** test_vfmv_s_f_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vfmv\.s\.f\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat64m1_t 
test_vfmv_s_f_f64m1(vfloat64m1_t dest, float64_t op1, size_t vl)
{
  return vfmv_s(dest, op1, vl);
}


/*
** test_vfmv_s_f_f64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vfmv\.s\.f\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat64m2_t 
test_vfmv_s_f_f64m2(vfloat64m2_t dest, float64_t op1, size_t vl)
{
  return vfmv_s(dest, op1, vl);
}


/*
** test_vfmv_s_f_f64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vfmv\.s\.f\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat64m4_t 
test_vfmv_s_f_f64m4(vfloat64m4_t dest, float64_t op1, size_t vl)
{
  return vfmv_s(dest, op1, vl);
}


/*
** test_vfmv_s_f_f64m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vfmv\.s\.f\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat64m8_t 
test_vfmv_s_f_f64m8(vfloat64m8_t dest, float64_t op1, size_t vl)
{
  return vfmv_s(dest, op1, vl);
}


/*
** test_vfmv_s_f_f16mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vfmv\.s\.f\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat16mf4_t 
test_vfmv_s_f_f16mf4_tu(vfloat16mf4_t dest, float16_t op1, size_t vl)
{
  return vfmv_s_tu(dest, op1, vl);
}


/*
** test_vfmv_s_f_f16mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vfmv\.s\.f\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat16mf2_t 
test_vfmv_s_f_f16mf2_tu(vfloat16mf2_t dest, float16_t op1, size_t vl)
{
  return vfmv_s_tu(dest, op1, vl);
}


/*
** test_vfmv_s_f_f16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vfmv\.s\.f\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat16m1_t 
test_vfmv_s_f_f16m1_tu(vfloat16m1_t dest, float16_t op1, size_t vl)
{
  return vfmv_s_tu(dest, op1, vl);
}


/*
** test_vfmv_s_f_f16m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vfmv\.s\.f\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat16m2_t 
test_vfmv_s_f_f16m2_tu(vfloat16m2_t dest, float16_t op1, size_t vl)
{
  return vfmv_s_tu(dest, op1, vl);
}


/*
** test_vfmv_s_f_f16m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vfmv\.s\.f\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat16m4_t 
test_vfmv_s_f_f16m4_tu(vfloat16m4_t dest, float16_t op1, size_t vl)
{
  return vfmv_s_tu(dest, op1, vl);
}


/*
** test_vfmv_s_f_f16m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vfmv\.s\.f\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat16m8_t 
test_vfmv_s_f_f16m8_tu(vfloat16m8_t dest, float16_t op1, size_t vl)
{
  return vfmv_s_tu(dest, op1, vl);
}


/*
** test_vfmv_s_f_f32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vfmv\.s\.f\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat32mf2_t 
test_vfmv_s_f_f32mf2_tu(vfloat32mf2_t dest, float32_t op1, size_t vl)
{
  return vfmv_s_tu(dest, op1, vl);
}


/*
** test_vfmv_s_f_f32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vfmv\.s\.f\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat32m1_t 
test_vfmv_s_f_f32m1_tu(vfloat32m1_t dest, float32_t op1, size_t vl)
{
  return vfmv_s_tu(dest, op1, vl);
}


/*
** test_vfmv_s_f_f32m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vfmv\.s\.f\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat32m2_t 
test_vfmv_s_f_f32m2_tu(vfloat32m2_t dest, float32_t op1, size_t vl)
{
  return vfmv_s_tu(dest, op1, vl);
}


/*
** test_vfmv_s_f_f32m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vfmv\.s\.f\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat32m4_t 
test_vfmv_s_f_f32m4_tu(vfloat32m4_t dest, float32_t op1, size_t vl)
{
  return vfmv_s_tu(dest, op1, vl);
}


/*
** test_vfmv_s_f_f32m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vfmv\.s\.f\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat32m8_t 
test_vfmv_s_f_f32m8_tu(vfloat32m8_t dest, float32_t op1, size_t vl)
{
  return vfmv_s_tu(dest, op1, vl);
}


/*
** test_vfmv_s_f_f64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vfmv\.s\.f\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat64m1_t 
test_vfmv_s_f_f64m1_tu(vfloat64m1_t dest, float64_t op1, size_t vl)
{
  return vfmv_s_tu(dest, op1, vl);
}


/*
** test_vfmv_s_f_f64m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vfmv\.s\.f\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat64m2_t 
test_vfmv_s_f_f64m2_tu(vfloat64m2_t dest, float64_t op1, size_t vl)
{
  return vfmv_s_tu(dest, op1, vl);
}


/*
** test_vfmv_s_f_f64m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vfmv\.s\.f\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat64m4_t 
test_vfmv_s_f_f64m4_tu(vfloat64m4_t dest, float64_t op1, size_t vl)
{
  return vfmv_s_tu(dest, op1, vl);
}


/*
** test_vfmv_s_f_f64m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vfmv\.s\.f\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat64m8_t 
test_vfmv_s_f_f64m8_tu(vfloat64m8_t dest, float64_t op1, size_t vl)
{
  return vfmv_s_tu(dest, op1, vl);
}


/*
** test_vfmv_v_f_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vfmv\.v\.f\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat16mf4_t 
test_vfmv_v_f_f16mf4(float16_t op1, size_t vl)
{
  return vfmv_v_f_f16mf4(op1, vl);
}


/*
** test_vfmv_v_f_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vfmv\.v\.f\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat16mf2_t 
test_vfmv_v_f_f16mf2(float16_t op1, size_t vl)
{
  return vfmv_v_f_f16mf2(op1, vl);
}


/*
** test_vfmv_v_f_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vfmv\.v\.f\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat16m1_t 
test_vfmv_v_f_f16m1(float16_t op1, size_t vl)
{
  return vfmv_v_f_f16m1(op1, vl);
}


/*
** test_vfmv_v_f_f16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vfmv\.v\.f\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat16m2_t 
test_vfmv_v_f_f16m2(float16_t op1, size_t vl)
{
  return vfmv_v_f_f16m2(op1, vl);
}


/*
** test_vfmv_v_f_f16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vfmv\.v\.f\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat16m4_t 
test_vfmv_v_f_f16m4(float16_t op1, size_t vl)
{
  return vfmv_v_f_f16m4(op1, vl);
}


/*
** test_vfmv_v_f_f16m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vfmv\.v\.f\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat16m8_t 
test_vfmv_v_f_f16m8(float16_t op1, size_t vl)
{
  return vfmv_v_f_f16m8(op1, vl);
}


/*
** test_vfmv_v_f_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vfmv\.v\.f\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat32mf2_t 
test_vfmv_v_f_f32mf2(float32_t op1, size_t vl)
{
  return vfmv_v_f_f32mf2(op1, vl);
}


/*
** test_vfmv_v_f_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vfmv\.v\.f\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat32m1_t 
test_vfmv_v_f_f32m1(float32_t op1, size_t vl)
{
  return vfmv_v_f_f32m1(op1, vl);
}


/*
** test_vfmv_v_f_f32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vfmv\.v\.f\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat32m2_t 
test_vfmv_v_f_f32m2(float32_t op1, size_t vl)
{
  return vfmv_v_f_f32m2(op1, vl);
}


/*
** test_vfmv_v_f_f32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vfmv\.v\.f\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat32m4_t 
test_vfmv_v_f_f32m4(float32_t op1, size_t vl)
{
  return vfmv_v_f_f32m4(op1, vl);
}


/*
** test_vfmv_v_f_f32m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vfmv\.v\.f\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat32m8_t 
test_vfmv_v_f_f32m8(float32_t op1, size_t vl)
{
  return vfmv_v_f_f32m8(op1, vl);
}


/*
** test_vfmv_v_f_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vfmv\.v\.f\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat64m1_t 
test_vfmv_v_f_f64m1(float64_t op1, size_t vl)
{
  return vfmv_v_f_f64m1(op1, vl);
}


/*
** test_vfmv_v_f_f64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vfmv\.v\.f\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat64m2_t 
test_vfmv_v_f_f64m2(float64_t op1, size_t vl)
{
  return vfmv_v_f_f64m2(op1, vl);
}


/*
** test_vfmv_v_f_f64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vfmv\.v\.f\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat64m4_t 
test_vfmv_v_f_f64m4(float64_t op1, size_t vl)
{
  return vfmv_v_f_f64m4(op1, vl);
}


/*
** test_vfmv_v_f_f64m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vfmv\.v\.f\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat64m8_t 
test_vfmv_v_f_f64m8(float64_t op1, size_t vl)
{
  return vfmv_v_f_f64m8(op1, vl);
}


/*
** test_vfmv_v_f_f16mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vfmv\.v\.f\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat16mf4_t 
test_vfmv_v_f_f16mf4_tu(vfloat16mf4_t dest, float16_t op1, size_t vl)
{
  return vfmv_v_tu(dest, op1, vl);
}


/*
** test_vfmv_v_f_f16mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vfmv\.v\.f\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat16mf2_t 
test_vfmv_v_f_f16mf2_tu(vfloat16mf2_t dest, float16_t op1, size_t vl)
{
  return vfmv_v_tu(dest, op1, vl);
}


/*
** test_vfmv_v_f_f16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vfmv\.v\.f\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat16m1_t 
test_vfmv_v_f_f16m1_tu(vfloat16m1_t dest, float16_t op1, size_t vl)
{
  return vfmv_v_tu(dest, op1, vl);
}


/*
** test_vfmv_v_f_f16m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vfmv\.v\.f\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat16m2_t 
test_vfmv_v_f_f16m2_tu(vfloat16m2_t dest, float16_t op1, size_t vl)
{
  return vfmv_v_tu(dest, op1, vl);
}


/*
** test_vfmv_v_f_f16m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vfmv\.v\.f\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat16m4_t 
test_vfmv_v_f_f16m4_tu(vfloat16m4_t dest, float16_t op1, size_t vl)
{
  return vfmv_v_tu(dest, op1, vl);
}


/*
** test_vfmv_v_f_f16m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vfmv\.v\.f\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat16m8_t 
test_vfmv_v_f_f16m8_tu(vfloat16m8_t dest, float16_t op1, size_t vl)
{
  return vfmv_v_tu(dest, op1, vl);
}


/*
** test_vfmv_v_f_f32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vfmv\.v\.f\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat32mf2_t 
test_vfmv_v_f_f32mf2_tu(vfloat32mf2_t dest, float32_t op1, size_t vl)
{
  return vfmv_v_tu(dest, op1, vl);
}


/*
** test_vfmv_v_f_f32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vfmv\.v\.f\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat32m1_t 
test_vfmv_v_f_f32m1_tu(vfloat32m1_t dest, float32_t op1, size_t vl)
{
  return vfmv_v_tu(dest, op1, vl);
}


/*
** test_vfmv_v_f_f32m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vfmv\.v\.f\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat32m2_t 
test_vfmv_v_f_f32m2_tu(vfloat32m2_t dest, float32_t op1, size_t vl)
{
  return vfmv_v_tu(dest, op1, vl);
}


/*
** test_vfmv_v_f_f32m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vfmv\.v\.f\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat32m4_t 
test_vfmv_v_f_f32m4_tu(vfloat32m4_t dest, float32_t op1, size_t vl)
{
  return vfmv_v_tu(dest, op1, vl);
}


/*
** test_vfmv_v_f_f32m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vfmv\.v\.f\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat32m8_t 
test_vfmv_v_f_f32m8_tu(vfloat32m8_t dest, float32_t op1, size_t vl)
{
  return vfmv_v_tu(dest, op1, vl);
}


/*
** test_vfmv_v_f_f64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vfmv\.v\.f\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat64m1_t 
test_vfmv_v_f_f64m1_tu(vfloat64m1_t dest, float64_t op1, size_t vl)
{
  return vfmv_v_tu(dest, op1, vl);
}


/*
** test_vfmv_v_f_f64m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vfmv\.v\.f\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat64m2_t 
test_vfmv_v_f_f64m2_tu(vfloat64m2_t dest, float64_t op1, size_t vl)
{
  return vfmv_v_tu(dest, op1, vl);
}


/*
** test_vfmv_v_f_f64m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vfmv\.v\.f\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat64m4_t 
test_vfmv_v_f_f64m4_tu(vfloat64m4_t dest, float64_t op1, size_t vl)
{
  return vfmv_v_tu(dest, op1, vl);
}


/*
** test_vfmv_v_f_f64m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vfmv\.v\.f\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])
**  ...
**  ret
*/
extern "C" vfloat64m8_t 
test_vfmv_v_f_f64m8_tu(vfloat64m8_t dest, float64_t op1, size_t vl)
{
  return vfmv_v_tu(dest, op1, vl);
}

