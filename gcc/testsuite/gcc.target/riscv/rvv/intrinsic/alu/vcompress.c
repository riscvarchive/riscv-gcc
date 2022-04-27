/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>


/*
** test_vcompress_vm_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4_t 
test_vcompress_vm_f16mf4(vbool64_t mask, vfloat16mf4_t maskedoff, vfloat16mf4_t op1, size_t vl)
{
  return vcompress_vm_f16mf4(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_f16mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4_t 
test_vcompress_vm_f16mf4_vl31(vbool64_t mask, vfloat16mf4_t maskedoff, vfloat16mf4_t op1)
{
  return vcompress_vm_f16mf4(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2_t 
test_vcompress_vm_f16mf2(vbool32_t mask, vfloat16mf2_t maskedoff, vfloat16mf2_t op1, size_t vl)
{
  return vcompress_vm_f16mf2(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_f16mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2_t 
test_vcompress_vm_f16mf2_vl31(vbool32_t mask, vfloat16mf2_t maskedoff, vfloat16mf2_t op1)
{
  return vcompress_vm_f16mf2(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vcompress_vm_f16m1(vbool16_t mask, vfloat16m1_t maskedoff, vfloat16m1_t op1, size_t vl)
{
  return vcompress_vm_f16m1(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_f16m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vcompress_vm_f16m1_vl31(vbool16_t mask, vfloat16m1_t maskedoff, vfloat16m1_t op1)
{
  return vcompress_vm_f16m1(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_f16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m2_t 
test_vcompress_vm_f16m2(vbool8_t mask, vfloat16m2_t maskedoff, vfloat16m2_t op1, size_t vl)
{
  return vcompress_vm_f16m2(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_f16m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m2_t 
test_vcompress_vm_f16m2_vl31(vbool8_t mask, vfloat16m2_t maskedoff, vfloat16m2_t op1)
{
  return vcompress_vm_f16m2(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_f16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m4_t 
test_vcompress_vm_f16m4(vbool4_t mask, vfloat16m4_t maskedoff, vfloat16m4_t op1, size_t vl)
{
  return vcompress_vm_f16m4(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_f16m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m4_t 
test_vcompress_vm_f16m4_vl31(vbool4_t mask, vfloat16m4_t maskedoff, vfloat16m4_t op1)
{
  return vcompress_vm_f16m4(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_f16m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m8_t 
test_vcompress_vm_f16m8(vbool2_t mask, vfloat16m8_t maskedoff, vfloat16m8_t op1, size_t vl)
{
  return vcompress_vm_f16m8(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_f16m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m8_t 
test_vcompress_vm_f16m8_vl31(vbool2_t mask, vfloat16m8_t maskedoff, vfloat16m8_t op1)
{
  return vcompress_vm_f16m8(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2_t 
test_vcompress_vm_f32mf2(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat32mf2_t op1, size_t vl)
{
  return vcompress_vm_f32mf2(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_f32mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2_t 
test_vcompress_vm_f32mf2_vl31(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat32mf2_t op1)
{
  return vcompress_vm_f32mf2(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vcompress_vm_f32m1(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t op1, size_t vl)
{
  return vcompress_vm_f32m1(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_f32m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vcompress_vm_f32m1_vl31(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t op1)
{
  return vcompress_vm_f32m1(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_f32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2_t 
test_vcompress_vm_f32m2(vbool16_t mask, vfloat32m2_t maskedoff, vfloat32m2_t op1, size_t vl)
{
  return vcompress_vm_f32m2(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_f32m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2_t 
test_vcompress_vm_f32m2_vl31(vbool16_t mask, vfloat32m2_t maskedoff, vfloat32m2_t op1)
{
  return vcompress_vm_f32m2(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_f32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m4_t 
test_vcompress_vm_f32m4(vbool8_t mask, vfloat32m4_t maskedoff, vfloat32m4_t op1, size_t vl)
{
  return vcompress_vm_f32m4(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_f32m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m4_t 
test_vcompress_vm_f32m4_vl31(vbool8_t mask, vfloat32m4_t maskedoff, vfloat32m4_t op1)
{
  return vcompress_vm_f32m4(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_f32m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m8_t 
test_vcompress_vm_f32m8(vbool4_t mask, vfloat32m8_t maskedoff, vfloat32m8_t op1, size_t vl)
{
  return vcompress_vm_f32m8(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_f32m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m8_t 
test_vcompress_vm_f32m8_vl31(vbool4_t mask, vfloat32m8_t maskedoff, vfloat32m8_t op1)
{
  return vcompress_vm_f32m8(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vcompress_vm_f64m1(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t op1, size_t vl)
{
  return vcompress_vm_f64m1(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_f64m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vcompress_vm_f64m1_vl31(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t op1)
{
  return vcompress_vm_f64m1(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_f64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2_t 
test_vcompress_vm_f64m2(vbool32_t mask, vfloat64m2_t maskedoff, vfloat64m2_t op1, size_t vl)
{
  return vcompress_vm_f64m2(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_f64m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2_t 
test_vcompress_vm_f64m2_vl31(vbool32_t mask, vfloat64m2_t maskedoff, vfloat64m2_t op1)
{
  return vcompress_vm_f64m2(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_f64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m4_t 
test_vcompress_vm_f64m4(vbool16_t mask, vfloat64m4_t maskedoff, vfloat64m4_t op1, size_t vl)
{
  return vcompress_vm_f64m4(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_f64m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m4_t 
test_vcompress_vm_f64m4_vl31(vbool16_t mask, vfloat64m4_t maskedoff, vfloat64m4_t op1)
{
  return vcompress_vm_f64m4(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_f64m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m8_t 
test_vcompress_vm_f64m8(vbool8_t mask, vfloat64m8_t maskedoff, vfloat64m8_t op1, size_t vl)
{
  return vcompress_vm_f64m8(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_f64m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m8_t 
test_vcompress_vm_f64m8_vl31(vbool8_t mask, vfloat64m8_t maskedoff, vfloat64m8_t op1)
{
  return vcompress_vm_f64m8(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_f16mf4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4_t 
test_vcompress_vm_f16mf4_ta(vbool64_t mask, vfloat16mf4_t maskedoff, vfloat16mf4_t op1, size_t vl)
{
  return vcompress_vm_f16mf4_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_f16mf4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4_t 
test_vcompress_vm_f16mf4_ta_vl31(vbool64_t mask, vfloat16mf4_t maskedoff, vfloat16mf4_t op1)
{
  return vcompress_vm_f16mf4_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_f16mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2_t 
test_vcompress_vm_f16mf2_ta(vbool32_t mask, vfloat16mf2_t maskedoff, vfloat16mf2_t op1, size_t vl)
{
  return vcompress_vm_f16mf2_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_f16mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2_t 
test_vcompress_vm_f16mf2_ta_vl31(vbool32_t mask, vfloat16mf2_t maskedoff, vfloat16mf2_t op1)
{
  return vcompress_vm_f16mf2_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_f16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vcompress_vm_f16m1_ta(vbool16_t mask, vfloat16m1_t maskedoff, vfloat16m1_t op1, size_t vl)
{
  return vcompress_vm_f16m1_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_f16m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vcompress_vm_f16m1_ta_vl31(vbool16_t mask, vfloat16m1_t maskedoff, vfloat16m1_t op1)
{
  return vcompress_vm_f16m1_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_f16m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m2_t 
test_vcompress_vm_f16m2_ta(vbool8_t mask, vfloat16m2_t maskedoff, vfloat16m2_t op1, size_t vl)
{
  return vcompress_vm_f16m2_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_f16m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m2_t 
test_vcompress_vm_f16m2_ta_vl31(vbool8_t mask, vfloat16m2_t maskedoff, vfloat16m2_t op1)
{
  return vcompress_vm_f16m2_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_f16m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m4_t 
test_vcompress_vm_f16m4_ta(vbool4_t mask, vfloat16m4_t maskedoff, vfloat16m4_t op1, size_t vl)
{
  return vcompress_vm_f16m4_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_f16m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m4_t 
test_vcompress_vm_f16m4_ta_vl31(vbool4_t mask, vfloat16m4_t maskedoff, vfloat16m4_t op1)
{
  return vcompress_vm_f16m4_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_f16m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m8_t 
test_vcompress_vm_f16m8_ta(vbool2_t mask, vfloat16m8_t maskedoff, vfloat16m8_t op1, size_t vl)
{
  return vcompress_vm_f16m8_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_f16m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m8_t 
test_vcompress_vm_f16m8_ta_vl31(vbool2_t mask, vfloat16m8_t maskedoff, vfloat16m8_t op1)
{
  return vcompress_vm_f16m8_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_f32mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2_t 
test_vcompress_vm_f32mf2_ta(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat32mf2_t op1, size_t vl)
{
  return vcompress_vm_f32mf2_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_f32mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2_t 
test_vcompress_vm_f32mf2_ta_vl31(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat32mf2_t op1)
{
  return vcompress_vm_f32mf2_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_f32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vcompress_vm_f32m1_ta(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t op1, size_t vl)
{
  return vcompress_vm_f32m1_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_f32m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vcompress_vm_f32m1_ta_vl31(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t op1)
{
  return vcompress_vm_f32m1_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_f32m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2_t 
test_vcompress_vm_f32m2_ta(vbool16_t mask, vfloat32m2_t maskedoff, vfloat32m2_t op1, size_t vl)
{
  return vcompress_vm_f32m2_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_f32m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2_t 
test_vcompress_vm_f32m2_ta_vl31(vbool16_t mask, vfloat32m2_t maskedoff, vfloat32m2_t op1)
{
  return vcompress_vm_f32m2_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_f32m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m4_t 
test_vcompress_vm_f32m4_ta(vbool8_t mask, vfloat32m4_t maskedoff, vfloat32m4_t op1, size_t vl)
{
  return vcompress_vm_f32m4_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_f32m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m4_t 
test_vcompress_vm_f32m4_ta_vl31(vbool8_t mask, vfloat32m4_t maskedoff, vfloat32m4_t op1)
{
  return vcompress_vm_f32m4_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_f32m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m8_t 
test_vcompress_vm_f32m8_ta(vbool4_t mask, vfloat32m8_t maskedoff, vfloat32m8_t op1, size_t vl)
{
  return vcompress_vm_f32m8_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_f32m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m8_t 
test_vcompress_vm_f32m8_ta_vl31(vbool4_t mask, vfloat32m8_t maskedoff, vfloat32m8_t op1)
{
  return vcompress_vm_f32m8_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_f64m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vcompress_vm_f64m1_ta(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t op1, size_t vl)
{
  return vcompress_vm_f64m1_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_f64m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vcompress_vm_f64m1_ta_vl31(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t op1)
{
  return vcompress_vm_f64m1_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_f64m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2_t 
test_vcompress_vm_f64m2_ta(vbool32_t mask, vfloat64m2_t maskedoff, vfloat64m2_t op1, size_t vl)
{
  return vcompress_vm_f64m2_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_f64m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2_t 
test_vcompress_vm_f64m2_ta_vl31(vbool32_t mask, vfloat64m2_t maskedoff, vfloat64m2_t op1)
{
  return vcompress_vm_f64m2_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_f64m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m4_t 
test_vcompress_vm_f64m4_ta(vbool16_t mask, vfloat64m4_t maskedoff, vfloat64m4_t op1, size_t vl)
{
  return vcompress_vm_f64m4_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_f64m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m4_t 
test_vcompress_vm_f64m4_ta_vl31(vbool16_t mask, vfloat64m4_t maskedoff, vfloat64m4_t op1)
{
  return vcompress_vm_f64m4_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_f64m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m8_t 
test_vcompress_vm_f64m8_ta(vbool8_t mask, vfloat64m8_t maskedoff, vfloat64m8_t op1, size_t vl)
{
  return vcompress_vm_f64m8_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_f64m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m8_t 
test_vcompress_vm_f64m8_ta_vl31(vbool8_t mask, vfloat64m8_t maskedoff, vfloat64m8_t op1)
{
  return vcompress_vm_f64m8_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_f16mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4_t 
test_vcompress_vm_f16mf4_tu(vbool64_t mask, vfloat16mf4_t maskedoff, vfloat16mf4_t op1, size_t vl)
{
  return vcompress_vm_f16mf4_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_f16mf4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4_t 
test_vcompress_vm_f16mf4_tu_vl31(vbool64_t mask, vfloat16mf4_t maskedoff, vfloat16mf4_t op1)
{
  return vcompress_vm_f16mf4_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_f16mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2_t 
test_vcompress_vm_f16mf2_tu(vbool32_t mask, vfloat16mf2_t maskedoff, vfloat16mf2_t op1, size_t vl)
{
  return vcompress_vm_f16mf2_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_f16mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2_t 
test_vcompress_vm_f16mf2_tu_vl31(vbool32_t mask, vfloat16mf2_t maskedoff, vfloat16mf2_t op1)
{
  return vcompress_vm_f16mf2_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_f16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vcompress_vm_f16m1_tu(vbool16_t mask, vfloat16m1_t maskedoff, vfloat16m1_t op1, size_t vl)
{
  return vcompress_vm_f16m1_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_f16m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vcompress_vm_f16m1_tu_vl31(vbool16_t mask, vfloat16m1_t maskedoff, vfloat16m1_t op1)
{
  return vcompress_vm_f16m1_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_f16m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m2_t 
test_vcompress_vm_f16m2_tu(vbool8_t mask, vfloat16m2_t maskedoff, vfloat16m2_t op1, size_t vl)
{
  return vcompress_vm_f16m2_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_f16m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m2_t 
test_vcompress_vm_f16m2_tu_vl31(vbool8_t mask, vfloat16m2_t maskedoff, vfloat16m2_t op1)
{
  return vcompress_vm_f16m2_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_f16m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m4_t 
test_vcompress_vm_f16m4_tu(vbool4_t mask, vfloat16m4_t maskedoff, vfloat16m4_t op1, size_t vl)
{
  return vcompress_vm_f16m4_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_f16m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m4_t 
test_vcompress_vm_f16m4_tu_vl31(vbool4_t mask, vfloat16m4_t maskedoff, vfloat16m4_t op1)
{
  return vcompress_vm_f16m4_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_f16m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m8_t 
test_vcompress_vm_f16m8_tu(vbool2_t mask, vfloat16m8_t maskedoff, vfloat16m8_t op1, size_t vl)
{
  return vcompress_vm_f16m8_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_f16m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m8_t 
test_vcompress_vm_f16m8_tu_vl31(vbool2_t mask, vfloat16m8_t maskedoff, vfloat16m8_t op1)
{
  return vcompress_vm_f16m8_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_f32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2_t 
test_vcompress_vm_f32mf2_tu(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat32mf2_t op1, size_t vl)
{
  return vcompress_vm_f32mf2_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_f32mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2_t 
test_vcompress_vm_f32mf2_tu_vl31(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat32mf2_t op1)
{
  return vcompress_vm_f32mf2_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_f32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vcompress_vm_f32m1_tu(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t op1, size_t vl)
{
  return vcompress_vm_f32m1_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_f32m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vcompress_vm_f32m1_tu_vl31(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t op1)
{
  return vcompress_vm_f32m1_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_f32m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2_t 
test_vcompress_vm_f32m2_tu(vbool16_t mask, vfloat32m2_t maskedoff, vfloat32m2_t op1, size_t vl)
{
  return vcompress_vm_f32m2_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_f32m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2_t 
test_vcompress_vm_f32m2_tu_vl31(vbool16_t mask, vfloat32m2_t maskedoff, vfloat32m2_t op1)
{
  return vcompress_vm_f32m2_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_f32m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m4_t 
test_vcompress_vm_f32m4_tu(vbool8_t mask, vfloat32m4_t maskedoff, vfloat32m4_t op1, size_t vl)
{
  return vcompress_vm_f32m4_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_f32m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m4_t 
test_vcompress_vm_f32m4_tu_vl31(vbool8_t mask, vfloat32m4_t maskedoff, vfloat32m4_t op1)
{
  return vcompress_vm_f32m4_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_f32m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m8_t 
test_vcompress_vm_f32m8_tu(vbool4_t mask, vfloat32m8_t maskedoff, vfloat32m8_t op1, size_t vl)
{
  return vcompress_vm_f32m8_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_f32m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m8_t 
test_vcompress_vm_f32m8_tu_vl31(vbool4_t mask, vfloat32m8_t maskedoff, vfloat32m8_t op1)
{
  return vcompress_vm_f32m8_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_f64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vcompress_vm_f64m1_tu(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t op1, size_t vl)
{
  return vcompress_vm_f64m1_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_f64m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vcompress_vm_f64m1_tu_vl31(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t op1)
{
  return vcompress_vm_f64m1_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_f64m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2_t 
test_vcompress_vm_f64m2_tu(vbool32_t mask, vfloat64m2_t maskedoff, vfloat64m2_t op1, size_t vl)
{
  return vcompress_vm_f64m2_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_f64m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2_t 
test_vcompress_vm_f64m2_tu_vl31(vbool32_t mask, vfloat64m2_t maskedoff, vfloat64m2_t op1)
{
  return vcompress_vm_f64m2_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_f64m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m4_t 
test_vcompress_vm_f64m4_tu(vbool16_t mask, vfloat64m4_t maskedoff, vfloat64m4_t op1, size_t vl)
{
  return vcompress_vm_f64m4_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_f64m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m4_t 
test_vcompress_vm_f64m4_tu_vl31(vbool16_t mask, vfloat64m4_t maskedoff, vfloat64m4_t op1)
{
  return vcompress_vm_f64m4_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_f64m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m8_t 
test_vcompress_vm_f64m8_tu(vbool8_t mask, vfloat64m8_t maskedoff, vfloat64m8_t op1, size_t vl)
{
  return vcompress_vm_f64m8_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_f64m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m8_t 
test_vcompress_vm_f64m8_tu_vl31(vbool8_t mask, vfloat64m8_t maskedoff, vfloat64m8_t op1)
{
  return vcompress_vm_f64m8_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_f16mf4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4_t 
test_vcompress_vm_f16mf4_ta_vl32(vbool64_t mask, vfloat16mf4_t maskedoff, vfloat16mf4_t op1)
{
  return vcompress_vm_f16mf4_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_f16mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2_t 
test_vcompress_vm_f16mf2_ta_vl32(vbool32_t mask, vfloat16mf2_t maskedoff, vfloat16mf2_t op1)
{
  return vcompress_vm_f16mf2_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_f16m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vcompress_vm_f16m1_ta_vl32(vbool16_t mask, vfloat16m1_t maskedoff, vfloat16m1_t op1)
{
  return vcompress_vm_f16m1_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_f16m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m2_t 
test_vcompress_vm_f16m2_ta_vl32(vbool8_t mask, vfloat16m2_t maskedoff, vfloat16m2_t op1)
{
  return vcompress_vm_f16m2_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_f16m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m4_t 
test_vcompress_vm_f16m4_ta_vl32(vbool4_t mask, vfloat16m4_t maskedoff, vfloat16m4_t op1)
{
  return vcompress_vm_f16m4_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_f16m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m8_t 
test_vcompress_vm_f16m8_ta_vl32(vbool2_t mask, vfloat16m8_t maskedoff, vfloat16m8_t op1)
{
  return vcompress_vm_f16m8_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_f32mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2_t 
test_vcompress_vm_f32mf2_ta_vl32(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat32mf2_t op1)
{
  return vcompress_vm_f32mf2_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_f32m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vcompress_vm_f32m1_ta_vl32(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t op1)
{
  return vcompress_vm_f32m1_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_f32m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2_t 
test_vcompress_vm_f32m2_ta_vl32(vbool16_t mask, vfloat32m2_t maskedoff, vfloat32m2_t op1)
{
  return vcompress_vm_f32m2_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_f32m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m4_t 
test_vcompress_vm_f32m4_ta_vl32(vbool8_t mask, vfloat32m4_t maskedoff, vfloat32m4_t op1)
{
  return vcompress_vm_f32m4_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_f32m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m8_t 
test_vcompress_vm_f32m8_ta_vl32(vbool4_t mask, vfloat32m8_t maskedoff, vfloat32m8_t op1)
{
  return vcompress_vm_f32m8_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_f64m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vcompress_vm_f64m1_ta_vl32(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t op1)
{
  return vcompress_vm_f64m1_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_f64m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2_t 
test_vcompress_vm_f64m2_ta_vl32(vbool32_t mask, vfloat64m2_t maskedoff, vfloat64m2_t op1)
{
  return vcompress_vm_f64m2_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_f64m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m4_t 
test_vcompress_vm_f64m4_ta_vl32(vbool16_t mask, vfloat64m4_t maskedoff, vfloat64m4_t op1)
{
  return vcompress_vm_f64m4_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_f64m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m8_t 
test_vcompress_vm_f64m8_ta_vl32(vbool8_t mask, vfloat64m8_t maskedoff, vfloat64m8_t op1)
{
  return vcompress_vm_f64m8_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_f16mf4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4_t 
test_vcompress_vm_f16mf4_tu_vl32(vbool64_t mask, vfloat16mf4_t maskedoff, vfloat16mf4_t op1)
{
  return vcompress_vm_f16mf4_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_f16mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2_t 
test_vcompress_vm_f16mf2_tu_vl32(vbool32_t mask, vfloat16mf2_t maskedoff, vfloat16mf2_t op1)
{
  return vcompress_vm_f16mf2_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_f16m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vcompress_vm_f16m1_tu_vl32(vbool16_t mask, vfloat16m1_t maskedoff, vfloat16m1_t op1)
{
  return vcompress_vm_f16m1_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_f16m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m2_t 
test_vcompress_vm_f16m2_tu_vl32(vbool8_t mask, vfloat16m2_t maskedoff, vfloat16m2_t op1)
{
  return vcompress_vm_f16m2_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_f16m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m4_t 
test_vcompress_vm_f16m4_tu_vl32(vbool4_t mask, vfloat16m4_t maskedoff, vfloat16m4_t op1)
{
  return vcompress_vm_f16m4_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_f16m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m8_t 
test_vcompress_vm_f16m8_tu_vl32(vbool2_t mask, vfloat16m8_t maskedoff, vfloat16m8_t op1)
{
  return vcompress_vm_f16m8_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_f32mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2_t 
test_vcompress_vm_f32mf2_tu_vl32(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat32mf2_t op1)
{
  return vcompress_vm_f32mf2_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_f32m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vcompress_vm_f32m1_tu_vl32(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t op1)
{
  return vcompress_vm_f32m1_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_f32m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2_t 
test_vcompress_vm_f32m2_tu_vl32(vbool16_t mask, vfloat32m2_t maskedoff, vfloat32m2_t op1)
{
  return vcompress_vm_f32m2_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_f32m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m4_t 
test_vcompress_vm_f32m4_tu_vl32(vbool8_t mask, vfloat32m4_t maskedoff, vfloat32m4_t op1)
{
  return vcompress_vm_f32m4_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_f32m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m8_t 
test_vcompress_vm_f32m8_tu_vl32(vbool4_t mask, vfloat32m8_t maskedoff, vfloat32m8_t op1)
{
  return vcompress_vm_f32m8_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_f64m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vcompress_vm_f64m1_tu_vl32(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t op1)
{
  return vcompress_vm_f64m1_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_f64m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2_t 
test_vcompress_vm_f64m2_tu_vl32(vbool32_t mask, vfloat64m2_t maskedoff, vfloat64m2_t op1)
{
  return vcompress_vm_f64m2_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_f64m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m4_t 
test_vcompress_vm_f64m4_tu_vl32(vbool16_t mask, vfloat64m4_t maskedoff, vfloat64m4_t op1)
{
  return vcompress_vm_f64m4_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_f64m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m8_t 
test_vcompress_vm_f64m8_tu_vl32(vbool8_t mask, vfloat64m8_t maskedoff, vfloat64m8_t op1)
{
  return vcompress_vm_f64m8_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_f16mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4_t 
test_vcompress_vm_f16mf4_vl32(vbool64_t mask, vfloat16mf4_t maskedoff, vfloat16mf4_t op1)
{
  return vcompress_vm_f16mf4(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_f16mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2_t 
test_vcompress_vm_f16mf2_vl32(vbool32_t mask, vfloat16mf2_t maskedoff, vfloat16mf2_t op1)
{
  return vcompress_vm_f16mf2(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_f16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t 
test_vcompress_vm_f16m1_vl32(vbool16_t mask, vfloat16m1_t maskedoff, vfloat16m1_t op1)
{
  return vcompress_vm_f16m1(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_f16m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m2_t 
test_vcompress_vm_f16m2_vl32(vbool8_t mask, vfloat16m2_t maskedoff, vfloat16m2_t op1)
{
  return vcompress_vm_f16m2(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_f16m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m4_t 
test_vcompress_vm_f16m4_vl32(vbool4_t mask, vfloat16m4_t maskedoff, vfloat16m4_t op1)
{
  return vcompress_vm_f16m4(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_f16m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m8_t 
test_vcompress_vm_f16m8_vl32(vbool2_t mask, vfloat16m8_t maskedoff, vfloat16m8_t op1)
{
  return vcompress_vm_f16m8(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_f32mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2_t 
test_vcompress_vm_f32mf2_vl32(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat32mf2_t op1)
{
  return vcompress_vm_f32mf2(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_f32m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vcompress_vm_f32m1_vl32(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t op1)
{
  return vcompress_vm_f32m1(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_f32m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2_t 
test_vcompress_vm_f32m2_vl32(vbool16_t mask, vfloat32m2_t maskedoff, vfloat32m2_t op1)
{
  return vcompress_vm_f32m2(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_f32m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m4_t 
test_vcompress_vm_f32m4_vl32(vbool8_t mask, vfloat32m4_t maskedoff, vfloat32m4_t op1)
{
  return vcompress_vm_f32m4(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_f32m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m8_t 
test_vcompress_vm_f32m8_vl32(vbool4_t mask, vfloat32m8_t maskedoff, vfloat32m8_t op1)
{
  return vcompress_vm_f32m8(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_f64m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vcompress_vm_f64m1_vl32(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t op1)
{
  return vcompress_vm_f64m1(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_f64m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2_t 
test_vcompress_vm_f64m2_vl32(vbool32_t mask, vfloat64m2_t maskedoff, vfloat64m2_t op1)
{
  return vcompress_vm_f64m2(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_f64m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m4_t 
test_vcompress_vm_f64m4_vl32(vbool16_t mask, vfloat64m4_t maskedoff, vfloat64m4_t op1)
{
  return vcompress_vm_f64m4(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_f64m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m8_t 
test_vcompress_vm_f64m8_vl32(vbool8_t mask, vfloat64m8_t maskedoff, vfloat64m8_t op1)
{
  return vcompress_vm_f64m8(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8_t 
test_vcompress_vm_i8mf8(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1, size_t vl)
{
  return vcompress_vm_i8mf8(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_i8mf8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8_t 
test_vcompress_vm_i8mf8_vl31(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1)
{
  return vcompress_vm_i8mf8(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4_t 
test_vcompress_vm_i8mf4(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1, size_t vl)
{
  return vcompress_vm_i8mf4(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_i8mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4_t 
test_vcompress_vm_i8mf4_vl31(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1)
{
  return vcompress_vm_i8mf4(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf2_t 
test_vcompress_vm_i8mf2(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1, size_t vl)
{
  return vcompress_vm_i8mf2(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_i8mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf2_t 
test_vcompress_vm_i8mf2_vl31(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1)
{
  return vcompress_vm_i8mf2(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vcompress_vm_i8m1(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, size_t vl)
{
  return vcompress_vm_i8m1(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_i8m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vcompress_vm_i8m1_vl31(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1)
{
  return vcompress_vm_i8m1(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_i8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m2_t 
test_vcompress_vm_i8m2(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1, size_t vl)
{
  return vcompress_vm_i8m2(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_i8m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m2_t 
test_vcompress_vm_i8m2_vl31(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1)
{
  return vcompress_vm_i8m2(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_i8m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m4_t 
test_vcompress_vm_i8m4(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1, size_t vl)
{
  return vcompress_vm_i8m4(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_i8m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m4_t 
test_vcompress_vm_i8m4_vl31(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1)
{
  return vcompress_vm_i8m4(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_i8m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m8_t 
test_vcompress_vm_i8m8(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1, size_t vl)
{
  return vcompress_vm_i8m8(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_i8m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m8_t 
test_vcompress_vm_i8m8_vl31(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1)
{
  return vcompress_vm_i8m8(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4_t 
test_vcompress_vm_i16mf4(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, size_t vl)
{
  return vcompress_vm_i16mf4(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_i16mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4_t 
test_vcompress_vm_i16mf4_vl31(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1)
{
  return vcompress_vm_i16mf4(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2_t 
test_vcompress_vm_i16mf2(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, size_t vl)
{
  return vcompress_vm_i16mf2(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_i16mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2_t 
test_vcompress_vm_i16mf2_vl31(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1)
{
  return vcompress_vm_i16mf2(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vcompress_vm_i16m1(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, size_t vl)
{
  return vcompress_vm_i16m1(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_i16m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vcompress_vm_i16m1_vl31(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1)
{
  return vcompress_vm_i16m1(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_i16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m2_t 
test_vcompress_vm_i16m2(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, size_t vl)
{
  return vcompress_vm_i16m2(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_i16m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m2_t 
test_vcompress_vm_i16m2_vl31(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1)
{
  return vcompress_vm_i16m2(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_i16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m4_t 
test_vcompress_vm_i16m4(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, size_t vl)
{
  return vcompress_vm_i16m4(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_i16m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m4_t 
test_vcompress_vm_i16m4_vl31(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1)
{
  return vcompress_vm_i16m4(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_i16m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m8_t 
test_vcompress_vm_i16m8(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, size_t vl)
{
  return vcompress_vm_i16m8(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_i16m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m8_t 
test_vcompress_vm_i16m8_vl31(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1)
{
  return vcompress_vm_i16m8(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2_t 
test_vcompress_vm_i32mf2(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, size_t vl)
{
  return vcompress_vm_i32mf2(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_i32mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2_t 
test_vcompress_vm_i32mf2_vl31(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1)
{
  return vcompress_vm_i32mf2(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vcompress_vm_i32m1(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, size_t vl)
{
  return vcompress_vm_i32m1(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_i32m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vcompress_vm_i32m1_vl31(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1)
{
  return vcompress_vm_i32m1(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_i32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m2_t 
test_vcompress_vm_i32m2(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, size_t vl)
{
  return vcompress_vm_i32m2(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_i32m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m2_t 
test_vcompress_vm_i32m2_vl31(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1)
{
  return vcompress_vm_i32m2(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_i32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m4_t 
test_vcompress_vm_i32m4(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, size_t vl)
{
  return vcompress_vm_i32m4(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_i32m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m4_t 
test_vcompress_vm_i32m4_vl31(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1)
{
  return vcompress_vm_i32m4(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_i32m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m8_t 
test_vcompress_vm_i32m8(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, size_t vl)
{
  return vcompress_vm_i32m8(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_i32m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m8_t 
test_vcompress_vm_i32m8_vl31(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1)
{
  return vcompress_vm_i32m8(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t 
test_vcompress_vm_i64m1(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, size_t vl)
{
  return vcompress_vm_i64m1(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_i64m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t 
test_vcompress_vm_i64m1_vl31(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1)
{
  return vcompress_vm_i64m1(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_i64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m2_t 
test_vcompress_vm_i64m2(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, size_t vl)
{
  return vcompress_vm_i64m2(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_i64m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m2_t 
test_vcompress_vm_i64m2_vl31(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1)
{
  return vcompress_vm_i64m2(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_i64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m4_t 
test_vcompress_vm_i64m4(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, size_t vl)
{
  return vcompress_vm_i64m4(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_i64m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m4_t 
test_vcompress_vm_i64m4_vl31(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1)
{
  return vcompress_vm_i64m4(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_i64m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m8_t 
test_vcompress_vm_i64m8(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, size_t vl)
{
  return vcompress_vm_i64m8(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_i64m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m8_t 
test_vcompress_vm_i64m8_vl31(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1)
{
  return vcompress_vm_i64m8(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_i8mf8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8_t 
test_vcompress_vm_i8mf8_ta(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1, size_t vl)
{
  return vcompress_vm_i8mf8_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_i8mf8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8_t 
test_vcompress_vm_i8mf8_ta_vl31(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1)
{
  return vcompress_vm_i8mf8_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_i8mf4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4_t 
test_vcompress_vm_i8mf4_ta(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1, size_t vl)
{
  return vcompress_vm_i8mf4_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_i8mf4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4_t 
test_vcompress_vm_i8mf4_ta_vl31(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1)
{
  return vcompress_vm_i8mf4_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_i8mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf2_t 
test_vcompress_vm_i8mf2_ta(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1, size_t vl)
{
  return vcompress_vm_i8mf2_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_i8mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf2_t 
test_vcompress_vm_i8mf2_ta_vl31(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1)
{
  return vcompress_vm_i8mf2_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_i8m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vcompress_vm_i8m1_ta(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, size_t vl)
{
  return vcompress_vm_i8m1_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_i8m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vcompress_vm_i8m1_ta_vl31(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1)
{
  return vcompress_vm_i8m1_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_i8m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m2_t 
test_vcompress_vm_i8m2_ta(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1, size_t vl)
{
  return vcompress_vm_i8m2_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_i8m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m2_t 
test_vcompress_vm_i8m2_ta_vl31(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1)
{
  return vcompress_vm_i8m2_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_i8m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m4_t 
test_vcompress_vm_i8m4_ta(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1, size_t vl)
{
  return vcompress_vm_i8m4_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_i8m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m4_t 
test_vcompress_vm_i8m4_ta_vl31(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1)
{
  return vcompress_vm_i8m4_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_i8m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m8_t 
test_vcompress_vm_i8m8_ta(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1, size_t vl)
{
  return vcompress_vm_i8m8_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_i8m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m8_t 
test_vcompress_vm_i8m8_ta_vl31(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1)
{
  return vcompress_vm_i8m8_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_i16mf4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4_t 
test_vcompress_vm_i16mf4_ta(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, size_t vl)
{
  return vcompress_vm_i16mf4_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_i16mf4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4_t 
test_vcompress_vm_i16mf4_ta_vl31(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1)
{
  return vcompress_vm_i16mf4_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_i16mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2_t 
test_vcompress_vm_i16mf2_ta(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, size_t vl)
{
  return vcompress_vm_i16mf2_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_i16mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2_t 
test_vcompress_vm_i16mf2_ta_vl31(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1)
{
  return vcompress_vm_i16mf2_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_i16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vcompress_vm_i16m1_ta(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, size_t vl)
{
  return vcompress_vm_i16m1_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_i16m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vcompress_vm_i16m1_ta_vl31(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1)
{
  return vcompress_vm_i16m1_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_i16m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m2_t 
test_vcompress_vm_i16m2_ta(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, size_t vl)
{
  return vcompress_vm_i16m2_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_i16m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m2_t 
test_vcompress_vm_i16m2_ta_vl31(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1)
{
  return vcompress_vm_i16m2_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_i16m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m4_t 
test_vcompress_vm_i16m4_ta(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, size_t vl)
{
  return vcompress_vm_i16m4_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_i16m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m4_t 
test_vcompress_vm_i16m4_ta_vl31(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1)
{
  return vcompress_vm_i16m4_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_i16m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m8_t 
test_vcompress_vm_i16m8_ta(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, size_t vl)
{
  return vcompress_vm_i16m8_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_i16m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m8_t 
test_vcompress_vm_i16m8_ta_vl31(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1)
{
  return vcompress_vm_i16m8_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_i32mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2_t 
test_vcompress_vm_i32mf2_ta(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, size_t vl)
{
  return vcompress_vm_i32mf2_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_i32mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2_t 
test_vcompress_vm_i32mf2_ta_vl31(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1)
{
  return vcompress_vm_i32mf2_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_i32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vcompress_vm_i32m1_ta(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, size_t vl)
{
  return vcompress_vm_i32m1_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_i32m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vcompress_vm_i32m1_ta_vl31(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1)
{
  return vcompress_vm_i32m1_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_i32m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m2_t 
test_vcompress_vm_i32m2_ta(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, size_t vl)
{
  return vcompress_vm_i32m2_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_i32m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m2_t 
test_vcompress_vm_i32m2_ta_vl31(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1)
{
  return vcompress_vm_i32m2_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_i32m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m4_t 
test_vcompress_vm_i32m4_ta(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, size_t vl)
{
  return vcompress_vm_i32m4_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_i32m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m4_t 
test_vcompress_vm_i32m4_ta_vl31(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1)
{
  return vcompress_vm_i32m4_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_i32m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m8_t 
test_vcompress_vm_i32m8_ta(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, size_t vl)
{
  return vcompress_vm_i32m8_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_i32m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m8_t 
test_vcompress_vm_i32m8_ta_vl31(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1)
{
  return vcompress_vm_i32m8_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_i64m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t 
test_vcompress_vm_i64m1_ta(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, size_t vl)
{
  return vcompress_vm_i64m1_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_i64m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t 
test_vcompress_vm_i64m1_ta_vl31(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1)
{
  return vcompress_vm_i64m1_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_i64m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m2_t 
test_vcompress_vm_i64m2_ta(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, size_t vl)
{
  return vcompress_vm_i64m2_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_i64m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m2_t 
test_vcompress_vm_i64m2_ta_vl31(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1)
{
  return vcompress_vm_i64m2_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_i64m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m4_t 
test_vcompress_vm_i64m4_ta(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, size_t vl)
{
  return vcompress_vm_i64m4_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_i64m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m4_t 
test_vcompress_vm_i64m4_ta_vl31(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1)
{
  return vcompress_vm_i64m4_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_i64m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m8_t 
test_vcompress_vm_i64m8_ta(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, size_t vl)
{
  return vcompress_vm_i64m8_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_i64m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m8_t 
test_vcompress_vm_i64m8_ta_vl31(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1)
{
  return vcompress_vm_i64m8_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_i8mf8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8_t 
test_vcompress_vm_i8mf8_tu(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1, size_t vl)
{
  return vcompress_vm_i8mf8_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_i8mf8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8_t 
test_vcompress_vm_i8mf8_tu_vl31(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1)
{
  return vcompress_vm_i8mf8_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_i8mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4_t 
test_vcompress_vm_i8mf4_tu(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1, size_t vl)
{
  return vcompress_vm_i8mf4_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_i8mf4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4_t 
test_vcompress_vm_i8mf4_tu_vl31(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1)
{
  return vcompress_vm_i8mf4_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_i8mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf2_t 
test_vcompress_vm_i8mf2_tu(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1, size_t vl)
{
  return vcompress_vm_i8mf2_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_i8mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf2_t 
test_vcompress_vm_i8mf2_tu_vl31(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1)
{
  return vcompress_vm_i8mf2_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_i8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vcompress_vm_i8m1_tu(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, size_t vl)
{
  return vcompress_vm_i8m1_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_i8m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vcompress_vm_i8m1_tu_vl31(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1)
{
  return vcompress_vm_i8m1_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_i8m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m2_t 
test_vcompress_vm_i8m2_tu(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1, size_t vl)
{
  return vcompress_vm_i8m2_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_i8m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m2_t 
test_vcompress_vm_i8m2_tu_vl31(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1)
{
  return vcompress_vm_i8m2_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_i8m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m4_t 
test_vcompress_vm_i8m4_tu(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1, size_t vl)
{
  return vcompress_vm_i8m4_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_i8m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m4_t 
test_vcompress_vm_i8m4_tu_vl31(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1)
{
  return vcompress_vm_i8m4_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_i8m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m8_t 
test_vcompress_vm_i8m8_tu(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1, size_t vl)
{
  return vcompress_vm_i8m8_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_i8m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m8_t 
test_vcompress_vm_i8m8_tu_vl31(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1)
{
  return vcompress_vm_i8m8_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_i16mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4_t 
test_vcompress_vm_i16mf4_tu(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, size_t vl)
{
  return vcompress_vm_i16mf4_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_i16mf4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4_t 
test_vcompress_vm_i16mf4_tu_vl31(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1)
{
  return vcompress_vm_i16mf4_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_i16mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2_t 
test_vcompress_vm_i16mf2_tu(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, size_t vl)
{
  return vcompress_vm_i16mf2_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_i16mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2_t 
test_vcompress_vm_i16mf2_tu_vl31(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1)
{
  return vcompress_vm_i16mf2_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_i16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vcompress_vm_i16m1_tu(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, size_t vl)
{
  return vcompress_vm_i16m1_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_i16m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vcompress_vm_i16m1_tu_vl31(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1)
{
  return vcompress_vm_i16m1_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_i16m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m2_t 
test_vcompress_vm_i16m2_tu(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, size_t vl)
{
  return vcompress_vm_i16m2_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_i16m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m2_t 
test_vcompress_vm_i16m2_tu_vl31(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1)
{
  return vcompress_vm_i16m2_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_i16m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m4_t 
test_vcompress_vm_i16m4_tu(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, size_t vl)
{
  return vcompress_vm_i16m4_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_i16m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m4_t 
test_vcompress_vm_i16m4_tu_vl31(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1)
{
  return vcompress_vm_i16m4_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_i16m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m8_t 
test_vcompress_vm_i16m8_tu(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, size_t vl)
{
  return vcompress_vm_i16m8_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_i16m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m8_t 
test_vcompress_vm_i16m8_tu_vl31(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1)
{
  return vcompress_vm_i16m8_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_i32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2_t 
test_vcompress_vm_i32mf2_tu(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, size_t vl)
{
  return vcompress_vm_i32mf2_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_i32mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2_t 
test_vcompress_vm_i32mf2_tu_vl31(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1)
{
  return vcompress_vm_i32mf2_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_i32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vcompress_vm_i32m1_tu(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, size_t vl)
{
  return vcompress_vm_i32m1_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_i32m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vcompress_vm_i32m1_tu_vl31(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1)
{
  return vcompress_vm_i32m1_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_i32m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m2_t 
test_vcompress_vm_i32m2_tu(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, size_t vl)
{
  return vcompress_vm_i32m2_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_i32m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m2_t 
test_vcompress_vm_i32m2_tu_vl31(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1)
{
  return vcompress_vm_i32m2_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_i32m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m4_t 
test_vcompress_vm_i32m4_tu(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, size_t vl)
{
  return vcompress_vm_i32m4_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_i32m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m4_t 
test_vcompress_vm_i32m4_tu_vl31(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1)
{
  return vcompress_vm_i32m4_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_i32m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m8_t 
test_vcompress_vm_i32m8_tu(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, size_t vl)
{
  return vcompress_vm_i32m8_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_i32m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m8_t 
test_vcompress_vm_i32m8_tu_vl31(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1)
{
  return vcompress_vm_i32m8_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_i64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t 
test_vcompress_vm_i64m1_tu(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, size_t vl)
{
  return vcompress_vm_i64m1_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_i64m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t 
test_vcompress_vm_i64m1_tu_vl31(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1)
{
  return vcompress_vm_i64m1_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_i64m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m2_t 
test_vcompress_vm_i64m2_tu(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, size_t vl)
{
  return vcompress_vm_i64m2_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_i64m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m2_t 
test_vcompress_vm_i64m2_tu_vl31(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1)
{
  return vcompress_vm_i64m2_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_i64m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m4_t 
test_vcompress_vm_i64m4_tu(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, size_t vl)
{
  return vcompress_vm_i64m4_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_i64m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m4_t 
test_vcompress_vm_i64m4_tu_vl31(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1)
{
  return vcompress_vm_i64m4_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_i64m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m8_t 
test_vcompress_vm_i64m8_tu(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, size_t vl)
{
  return vcompress_vm_i64m8_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_i64m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m8_t 
test_vcompress_vm_i64m8_tu_vl31(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1)
{
  return vcompress_vm_i64m8_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_i8mf8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8_t 
test_vcompress_vm_i8mf8_ta_vl32(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1)
{
  return vcompress_vm_i8mf8_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_i8mf4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4_t 
test_vcompress_vm_i8mf4_ta_vl32(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1)
{
  return vcompress_vm_i8mf4_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_i8mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf2_t 
test_vcompress_vm_i8mf2_ta_vl32(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1)
{
  return vcompress_vm_i8mf2_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_i8m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vcompress_vm_i8m1_ta_vl32(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1)
{
  return vcompress_vm_i8m1_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_i8m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m2_t 
test_vcompress_vm_i8m2_ta_vl32(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1)
{
  return vcompress_vm_i8m2_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_i8m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m4_t 
test_vcompress_vm_i8m4_ta_vl32(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1)
{
  return vcompress_vm_i8m4_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_i8m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m8_t 
test_vcompress_vm_i8m8_ta_vl32(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1)
{
  return vcompress_vm_i8m8_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_i16mf4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4_t 
test_vcompress_vm_i16mf4_ta_vl32(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1)
{
  return vcompress_vm_i16mf4_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_i16mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2_t 
test_vcompress_vm_i16mf2_ta_vl32(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1)
{
  return vcompress_vm_i16mf2_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_i16m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vcompress_vm_i16m1_ta_vl32(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1)
{
  return vcompress_vm_i16m1_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_i16m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m2_t 
test_vcompress_vm_i16m2_ta_vl32(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1)
{
  return vcompress_vm_i16m2_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_i16m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m4_t 
test_vcompress_vm_i16m4_ta_vl32(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1)
{
  return vcompress_vm_i16m4_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_i16m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m8_t 
test_vcompress_vm_i16m8_ta_vl32(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1)
{
  return vcompress_vm_i16m8_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_i32mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2_t 
test_vcompress_vm_i32mf2_ta_vl32(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1)
{
  return vcompress_vm_i32mf2_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_i32m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vcompress_vm_i32m1_ta_vl32(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1)
{
  return vcompress_vm_i32m1_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_i32m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m2_t 
test_vcompress_vm_i32m2_ta_vl32(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1)
{
  return vcompress_vm_i32m2_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_i32m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m4_t 
test_vcompress_vm_i32m4_ta_vl32(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1)
{
  return vcompress_vm_i32m4_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_i32m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m8_t 
test_vcompress_vm_i32m8_ta_vl32(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1)
{
  return vcompress_vm_i32m8_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_i64m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t 
test_vcompress_vm_i64m1_ta_vl32(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1)
{
  return vcompress_vm_i64m1_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_i64m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m2_t 
test_vcompress_vm_i64m2_ta_vl32(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1)
{
  return vcompress_vm_i64m2_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_i64m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m4_t 
test_vcompress_vm_i64m4_ta_vl32(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1)
{
  return vcompress_vm_i64m4_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_i64m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m8_t 
test_vcompress_vm_i64m8_ta_vl32(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1)
{
  return vcompress_vm_i64m8_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_i8mf8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8_t 
test_vcompress_vm_i8mf8_tu_vl32(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1)
{
  return vcompress_vm_i8mf8_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_i8mf4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4_t 
test_vcompress_vm_i8mf4_tu_vl32(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1)
{
  return vcompress_vm_i8mf4_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_i8mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf2_t 
test_vcompress_vm_i8mf2_tu_vl32(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1)
{
  return vcompress_vm_i8mf2_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_i8m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vcompress_vm_i8m1_tu_vl32(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1)
{
  return vcompress_vm_i8m1_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_i8m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m2_t 
test_vcompress_vm_i8m2_tu_vl32(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1)
{
  return vcompress_vm_i8m2_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_i8m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m4_t 
test_vcompress_vm_i8m4_tu_vl32(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1)
{
  return vcompress_vm_i8m4_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_i8m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m8_t 
test_vcompress_vm_i8m8_tu_vl32(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1)
{
  return vcompress_vm_i8m8_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_i16mf4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4_t 
test_vcompress_vm_i16mf4_tu_vl32(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1)
{
  return vcompress_vm_i16mf4_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_i16mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2_t 
test_vcompress_vm_i16mf2_tu_vl32(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1)
{
  return vcompress_vm_i16mf2_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_i16m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vcompress_vm_i16m1_tu_vl32(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1)
{
  return vcompress_vm_i16m1_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_i16m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m2_t 
test_vcompress_vm_i16m2_tu_vl32(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1)
{
  return vcompress_vm_i16m2_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_i16m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m4_t 
test_vcompress_vm_i16m4_tu_vl32(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1)
{
  return vcompress_vm_i16m4_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_i16m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m8_t 
test_vcompress_vm_i16m8_tu_vl32(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1)
{
  return vcompress_vm_i16m8_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_i32mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2_t 
test_vcompress_vm_i32mf2_tu_vl32(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1)
{
  return vcompress_vm_i32mf2_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_i32m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vcompress_vm_i32m1_tu_vl32(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1)
{
  return vcompress_vm_i32m1_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_i32m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m2_t 
test_vcompress_vm_i32m2_tu_vl32(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1)
{
  return vcompress_vm_i32m2_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_i32m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m4_t 
test_vcompress_vm_i32m4_tu_vl32(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1)
{
  return vcompress_vm_i32m4_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_i32m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m8_t 
test_vcompress_vm_i32m8_tu_vl32(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1)
{
  return vcompress_vm_i32m8_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_i64m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t 
test_vcompress_vm_i64m1_tu_vl32(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1)
{
  return vcompress_vm_i64m1_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_i64m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m2_t 
test_vcompress_vm_i64m2_tu_vl32(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1)
{
  return vcompress_vm_i64m2_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_i64m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m4_t 
test_vcompress_vm_i64m4_tu_vl32(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1)
{
  return vcompress_vm_i64m4_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_i64m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m8_t 
test_vcompress_vm_i64m8_tu_vl32(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1)
{
  return vcompress_vm_i64m8_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_i8mf8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8_t 
test_vcompress_vm_i8mf8_vl32(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1)
{
  return vcompress_vm_i8mf8(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_i8mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4_t 
test_vcompress_vm_i8mf4_vl32(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1)
{
  return vcompress_vm_i8mf4(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_i8mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf2_t 
test_vcompress_vm_i8mf2_vl32(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1)
{
  return vcompress_vm_i8mf2(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_i8m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vcompress_vm_i8m1_vl32(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1)
{
  return vcompress_vm_i8m1(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_i8m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m2_t 
test_vcompress_vm_i8m2_vl32(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1)
{
  return vcompress_vm_i8m2(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_i8m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m4_t 
test_vcompress_vm_i8m4_vl32(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1)
{
  return vcompress_vm_i8m4(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_i8m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m8_t 
test_vcompress_vm_i8m8_vl32(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1)
{
  return vcompress_vm_i8m8(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_i16mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4_t 
test_vcompress_vm_i16mf4_vl32(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1)
{
  return vcompress_vm_i16mf4(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_i16mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2_t 
test_vcompress_vm_i16mf2_vl32(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1)
{
  return vcompress_vm_i16mf2(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_i16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vcompress_vm_i16m1_vl32(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1)
{
  return vcompress_vm_i16m1(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_i16m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m2_t 
test_vcompress_vm_i16m2_vl32(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1)
{
  return vcompress_vm_i16m2(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_i16m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m4_t 
test_vcompress_vm_i16m4_vl32(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1)
{
  return vcompress_vm_i16m4(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_i16m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m8_t 
test_vcompress_vm_i16m8_vl32(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1)
{
  return vcompress_vm_i16m8(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_i32mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2_t 
test_vcompress_vm_i32mf2_vl32(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1)
{
  return vcompress_vm_i32mf2(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_i32m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vcompress_vm_i32m1_vl32(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1)
{
  return vcompress_vm_i32m1(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_i32m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m2_t 
test_vcompress_vm_i32m2_vl32(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1)
{
  return vcompress_vm_i32m2(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_i32m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m4_t 
test_vcompress_vm_i32m4_vl32(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1)
{
  return vcompress_vm_i32m4(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_i32m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m8_t 
test_vcompress_vm_i32m8_vl32(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1)
{
  return vcompress_vm_i32m8(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_i64m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t 
test_vcompress_vm_i64m1_vl32(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1)
{
  return vcompress_vm_i64m1(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_i64m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m2_t 
test_vcompress_vm_i64m2_vl32(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1)
{
  return vcompress_vm_i64m2(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_i64m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m4_t 
test_vcompress_vm_i64m4_vl32(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1)
{
  return vcompress_vm_i64m4(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_i64m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m8_t 
test_vcompress_vm_i64m8_vl32(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1)
{
  return vcompress_vm_i64m8(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8_t 
test_vcompress_vm_u8mf8(vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t op1, size_t vl)
{
  return vcompress_vm_u8mf8(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_u8mf8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8_t 
test_vcompress_vm_u8mf8_vl31(vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t op1)
{
  return vcompress_vm_u8mf8(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4_t 
test_vcompress_vm_u8mf4(vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t op1, size_t vl)
{
  return vcompress_vm_u8mf4(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_u8mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4_t 
test_vcompress_vm_u8mf4_vl31(vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t op1)
{
  return vcompress_vm_u8mf4(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2_t 
test_vcompress_vm_u8mf2(vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t op1, size_t vl)
{
  return vcompress_vm_u8mf2(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_u8mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2_t 
test_vcompress_vm_u8mf2_vl31(vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t op1)
{
  return vcompress_vm_u8mf2(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vcompress_vm_u8m1(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1, size_t vl)
{
  return vcompress_vm_u8m1(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_u8m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vcompress_vm_u8m1_vl31(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1)
{
  return vcompress_vm_u8m1(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_u8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m2_t 
test_vcompress_vm_u8m2(vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t op1, size_t vl)
{
  return vcompress_vm_u8m2(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_u8m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m2_t 
test_vcompress_vm_u8m2_vl31(vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t op1)
{
  return vcompress_vm_u8m2(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_u8m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m4_t 
test_vcompress_vm_u8m4(vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t op1, size_t vl)
{
  return vcompress_vm_u8m4(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_u8m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m4_t 
test_vcompress_vm_u8m4_vl31(vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t op1)
{
  return vcompress_vm_u8m4(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_u8m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m8_t 
test_vcompress_vm_u8m8(vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t op1, size_t vl)
{
  return vcompress_vm_u8m8(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_u8m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m8_t 
test_vcompress_vm_u8m8_vl31(vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t op1)
{
  return vcompress_vm_u8m8(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4_t 
test_vcompress_vm_u16mf4(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1, size_t vl)
{
  return vcompress_vm_u16mf4(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_u16mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4_t 
test_vcompress_vm_u16mf4_vl31(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1)
{
  return vcompress_vm_u16mf4(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2_t 
test_vcompress_vm_u16mf2(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1, size_t vl)
{
  return vcompress_vm_u16mf2(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_u16mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2_t 
test_vcompress_vm_u16mf2_vl31(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1)
{
  return vcompress_vm_u16mf2(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vcompress_vm_u16m1(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, size_t vl)
{
  return vcompress_vm_u16m1(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_u16m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vcompress_vm_u16m1_vl31(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1)
{
  return vcompress_vm_u16m1(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_u16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m2_t 
test_vcompress_vm_u16m2(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1, size_t vl)
{
  return vcompress_vm_u16m2(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_u16m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m2_t 
test_vcompress_vm_u16m2_vl31(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1)
{
  return vcompress_vm_u16m2(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_u16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m4_t 
test_vcompress_vm_u16m4(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1, size_t vl)
{
  return vcompress_vm_u16m4(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_u16m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m4_t 
test_vcompress_vm_u16m4_vl31(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1)
{
  return vcompress_vm_u16m4(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_u16m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m8_t 
test_vcompress_vm_u16m8(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1, size_t vl)
{
  return vcompress_vm_u16m8(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_u16m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m8_t 
test_vcompress_vm_u16m8_vl31(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1)
{
  return vcompress_vm_u16m8(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2_t 
test_vcompress_vm_u32mf2(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1, size_t vl)
{
  return vcompress_vm_u32mf2(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_u32mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2_t 
test_vcompress_vm_u32mf2_vl31(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1)
{
  return vcompress_vm_u32mf2(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vcompress_vm_u32m1(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, size_t vl)
{
  return vcompress_vm_u32m1(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_u32m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vcompress_vm_u32m1_vl31(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1)
{
  return vcompress_vm_u32m1(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_u32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m2_t 
test_vcompress_vm_u32m2(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1, size_t vl)
{
  return vcompress_vm_u32m2(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_u32m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m2_t 
test_vcompress_vm_u32m2_vl31(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1)
{
  return vcompress_vm_u32m2(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_u32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m4_t 
test_vcompress_vm_u32m4(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1, size_t vl)
{
  return vcompress_vm_u32m4(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_u32m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m4_t 
test_vcompress_vm_u32m4_vl31(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1)
{
  return vcompress_vm_u32m4(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_u32m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m8_t 
test_vcompress_vm_u32m8(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1, size_t vl)
{
  return vcompress_vm_u32m8(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_u32m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m8_t 
test_vcompress_vm_u32m8_vl31(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1)
{
  return vcompress_vm_u32m8(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vcompress_vm_u64m1(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, size_t vl)
{
  return vcompress_vm_u64m1(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_u64m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vcompress_vm_u64m1_vl31(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1)
{
  return vcompress_vm_u64m1(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_u64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2_t 
test_vcompress_vm_u64m2(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, size_t vl)
{
  return vcompress_vm_u64m2(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_u64m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2_t 
test_vcompress_vm_u64m2_vl31(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1)
{
  return vcompress_vm_u64m2(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_u64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m4_t 
test_vcompress_vm_u64m4(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, size_t vl)
{
  return vcompress_vm_u64m4(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_u64m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m4_t 
test_vcompress_vm_u64m4_vl31(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1)
{
  return vcompress_vm_u64m4(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_u64m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m8_t 
test_vcompress_vm_u64m8(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, size_t vl)
{
  return vcompress_vm_u64m8(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_u64m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m8_t 
test_vcompress_vm_u64m8_vl31(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1)
{
  return vcompress_vm_u64m8(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_u8mf8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8_t 
test_vcompress_vm_u8mf8_ta(vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t op1, size_t vl)
{
  return vcompress_vm_u8mf8_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_u8mf8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8_t 
test_vcompress_vm_u8mf8_ta_vl31(vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t op1)
{
  return vcompress_vm_u8mf8_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_u8mf4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4_t 
test_vcompress_vm_u8mf4_ta(vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t op1, size_t vl)
{
  return vcompress_vm_u8mf4_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_u8mf4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4_t 
test_vcompress_vm_u8mf4_ta_vl31(vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t op1)
{
  return vcompress_vm_u8mf4_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_u8mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2_t 
test_vcompress_vm_u8mf2_ta(vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t op1, size_t vl)
{
  return vcompress_vm_u8mf2_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_u8mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2_t 
test_vcompress_vm_u8mf2_ta_vl31(vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t op1)
{
  return vcompress_vm_u8mf2_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_u8m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vcompress_vm_u8m1_ta(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1, size_t vl)
{
  return vcompress_vm_u8m1_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_u8m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vcompress_vm_u8m1_ta_vl31(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1)
{
  return vcompress_vm_u8m1_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_u8m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m2_t 
test_vcompress_vm_u8m2_ta(vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t op1, size_t vl)
{
  return vcompress_vm_u8m2_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_u8m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m2_t 
test_vcompress_vm_u8m2_ta_vl31(vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t op1)
{
  return vcompress_vm_u8m2_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_u8m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m4_t 
test_vcompress_vm_u8m4_ta(vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t op1, size_t vl)
{
  return vcompress_vm_u8m4_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_u8m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m4_t 
test_vcompress_vm_u8m4_ta_vl31(vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t op1)
{
  return vcompress_vm_u8m4_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_u8m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m8_t 
test_vcompress_vm_u8m8_ta(vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t op1, size_t vl)
{
  return vcompress_vm_u8m8_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_u8m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m8_t 
test_vcompress_vm_u8m8_ta_vl31(vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t op1)
{
  return vcompress_vm_u8m8_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_u16mf4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4_t 
test_vcompress_vm_u16mf4_ta(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1, size_t vl)
{
  return vcompress_vm_u16mf4_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_u16mf4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4_t 
test_vcompress_vm_u16mf4_ta_vl31(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1)
{
  return vcompress_vm_u16mf4_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_u16mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2_t 
test_vcompress_vm_u16mf2_ta(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1, size_t vl)
{
  return vcompress_vm_u16mf2_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_u16mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2_t 
test_vcompress_vm_u16mf2_ta_vl31(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1)
{
  return vcompress_vm_u16mf2_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_u16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vcompress_vm_u16m1_ta(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, size_t vl)
{
  return vcompress_vm_u16m1_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_u16m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vcompress_vm_u16m1_ta_vl31(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1)
{
  return vcompress_vm_u16m1_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_u16m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m2_t 
test_vcompress_vm_u16m2_ta(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1, size_t vl)
{
  return vcompress_vm_u16m2_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_u16m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m2_t 
test_vcompress_vm_u16m2_ta_vl31(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1)
{
  return vcompress_vm_u16m2_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_u16m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m4_t 
test_vcompress_vm_u16m4_ta(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1, size_t vl)
{
  return vcompress_vm_u16m4_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_u16m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m4_t 
test_vcompress_vm_u16m4_ta_vl31(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1)
{
  return vcompress_vm_u16m4_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_u16m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m8_t 
test_vcompress_vm_u16m8_ta(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1, size_t vl)
{
  return vcompress_vm_u16m8_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_u16m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m8_t 
test_vcompress_vm_u16m8_ta_vl31(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1)
{
  return vcompress_vm_u16m8_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_u32mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2_t 
test_vcompress_vm_u32mf2_ta(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1, size_t vl)
{
  return vcompress_vm_u32mf2_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_u32mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2_t 
test_vcompress_vm_u32mf2_ta_vl31(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1)
{
  return vcompress_vm_u32mf2_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_u32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vcompress_vm_u32m1_ta(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, size_t vl)
{
  return vcompress_vm_u32m1_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_u32m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vcompress_vm_u32m1_ta_vl31(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1)
{
  return vcompress_vm_u32m1_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_u32m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m2_t 
test_vcompress_vm_u32m2_ta(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1, size_t vl)
{
  return vcompress_vm_u32m2_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_u32m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m2_t 
test_vcompress_vm_u32m2_ta_vl31(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1)
{
  return vcompress_vm_u32m2_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_u32m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m4_t 
test_vcompress_vm_u32m4_ta(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1, size_t vl)
{
  return vcompress_vm_u32m4_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_u32m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m4_t 
test_vcompress_vm_u32m4_ta_vl31(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1)
{
  return vcompress_vm_u32m4_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_u32m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m8_t 
test_vcompress_vm_u32m8_ta(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1, size_t vl)
{
  return vcompress_vm_u32m8_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_u32m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m8_t 
test_vcompress_vm_u32m8_ta_vl31(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1)
{
  return vcompress_vm_u32m8_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_u64m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vcompress_vm_u64m1_ta(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, size_t vl)
{
  return vcompress_vm_u64m1_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_u64m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vcompress_vm_u64m1_ta_vl31(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1)
{
  return vcompress_vm_u64m1_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_u64m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2_t 
test_vcompress_vm_u64m2_ta(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, size_t vl)
{
  return vcompress_vm_u64m2_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_u64m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2_t 
test_vcompress_vm_u64m2_ta_vl31(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1)
{
  return vcompress_vm_u64m2_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_u64m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m4_t 
test_vcompress_vm_u64m4_ta(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, size_t vl)
{
  return vcompress_vm_u64m4_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_u64m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m4_t 
test_vcompress_vm_u64m4_ta_vl31(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1)
{
  return vcompress_vm_u64m4_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_u64m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m8_t 
test_vcompress_vm_u64m8_ta(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, size_t vl)
{
  return vcompress_vm_u64m8_ta(mask, op1, vl);
}

/*
** test_vcompress_vm_u64m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m8_t 
test_vcompress_vm_u64m8_ta_vl31(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1)
{
  return vcompress_vm_u64m8_ta(mask, op1, 31);
}

/*
** test_vcompress_vm_u8mf8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8_t 
test_vcompress_vm_u8mf8_tu(vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t op1, size_t vl)
{
  return vcompress_vm_u8mf8_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_u8mf8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8_t 
test_vcompress_vm_u8mf8_tu_vl31(vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t op1)
{
  return vcompress_vm_u8mf8_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_u8mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4_t 
test_vcompress_vm_u8mf4_tu(vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t op1, size_t vl)
{
  return vcompress_vm_u8mf4_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_u8mf4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4_t 
test_vcompress_vm_u8mf4_tu_vl31(vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t op1)
{
  return vcompress_vm_u8mf4_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_u8mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2_t 
test_vcompress_vm_u8mf2_tu(vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t op1, size_t vl)
{
  return vcompress_vm_u8mf2_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_u8mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2_t 
test_vcompress_vm_u8mf2_tu_vl31(vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t op1)
{
  return vcompress_vm_u8mf2_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_u8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vcompress_vm_u8m1_tu(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1, size_t vl)
{
  return vcompress_vm_u8m1_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_u8m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vcompress_vm_u8m1_tu_vl31(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1)
{
  return vcompress_vm_u8m1_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_u8m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m2_t 
test_vcompress_vm_u8m2_tu(vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t op1, size_t vl)
{
  return vcompress_vm_u8m2_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_u8m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m2_t 
test_vcompress_vm_u8m2_tu_vl31(vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t op1)
{
  return vcompress_vm_u8m2_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_u8m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m4_t 
test_vcompress_vm_u8m4_tu(vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t op1, size_t vl)
{
  return vcompress_vm_u8m4_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_u8m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m4_t 
test_vcompress_vm_u8m4_tu_vl31(vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t op1)
{
  return vcompress_vm_u8m4_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_u8m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m8_t 
test_vcompress_vm_u8m8_tu(vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t op1, size_t vl)
{
  return vcompress_vm_u8m8_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_u8m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m8_t 
test_vcompress_vm_u8m8_tu_vl31(vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t op1)
{
  return vcompress_vm_u8m8_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_u16mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4_t 
test_vcompress_vm_u16mf4_tu(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1, size_t vl)
{
  return vcompress_vm_u16mf4_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_u16mf4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4_t 
test_vcompress_vm_u16mf4_tu_vl31(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1)
{
  return vcompress_vm_u16mf4_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_u16mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2_t 
test_vcompress_vm_u16mf2_tu(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1, size_t vl)
{
  return vcompress_vm_u16mf2_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_u16mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2_t 
test_vcompress_vm_u16mf2_tu_vl31(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1)
{
  return vcompress_vm_u16mf2_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_u16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vcompress_vm_u16m1_tu(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, size_t vl)
{
  return vcompress_vm_u16m1_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_u16m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vcompress_vm_u16m1_tu_vl31(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1)
{
  return vcompress_vm_u16m1_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_u16m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m2_t 
test_vcompress_vm_u16m2_tu(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1, size_t vl)
{
  return vcompress_vm_u16m2_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_u16m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m2_t 
test_vcompress_vm_u16m2_tu_vl31(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1)
{
  return vcompress_vm_u16m2_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_u16m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m4_t 
test_vcompress_vm_u16m4_tu(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1, size_t vl)
{
  return vcompress_vm_u16m4_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_u16m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m4_t 
test_vcompress_vm_u16m4_tu_vl31(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1)
{
  return vcompress_vm_u16m4_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_u16m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m8_t 
test_vcompress_vm_u16m8_tu(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1, size_t vl)
{
  return vcompress_vm_u16m8_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_u16m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m8_t 
test_vcompress_vm_u16m8_tu_vl31(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1)
{
  return vcompress_vm_u16m8_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_u32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2_t 
test_vcompress_vm_u32mf2_tu(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1, size_t vl)
{
  return vcompress_vm_u32mf2_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_u32mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2_t 
test_vcompress_vm_u32mf2_tu_vl31(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1)
{
  return vcompress_vm_u32mf2_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_u32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vcompress_vm_u32m1_tu(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, size_t vl)
{
  return vcompress_vm_u32m1_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_u32m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vcompress_vm_u32m1_tu_vl31(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1)
{
  return vcompress_vm_u32m1_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_u32m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m2_t 
test_vcompress_vm_u32m2_tu(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1, size_t vl)
{
  return vcompress_vm_u32m2_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_u32m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m2_t 
test_vcompress_vm_u32m2_tu_vl31(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1)
{
  return vcompress_vm_u32m2_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_u32m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m4_t 
test_vcompress_vm_u32m4_tu(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1, size_t vl)
{
  return vcompress_vm_u32m4_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_u32m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m4_t 
test_vcompress_vm_u32m4_tu_vl31(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1)
{
  return vcompress_vm_u32m4_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_u32m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m8_t 
test_vcompress_vm_u32m8_tu(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1, size_t vl)
{
  return vcompress_vm_u32m8_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_u32m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m8_t 
test_vcompress_vm_u32m8_tu_vl31(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1)
{
  return vcompress_vm_u32m8_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_u64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vcompress_vm_u64m1_tu(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, size_t vl)
{
  return vcompress_vm_u64m1_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_u64m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vcompress_vm_u64m1_tu_vl31(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1)
{
  return vcompress_vm_u64m1_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_u64m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2_t 
test_vcompress_vm_u64m2_tu(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, size_t vl)
{
  return vcompress_vm_u64m2_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_u64m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2_t 
test_vcompress_vm_u64m2_tu_vl31(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1)
{
  return vcompress_vm_u64m2_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_u64m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m4_t 
test_vcompress_vm_u64m4_tu(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, size_t vl)
{
  return vcompress_vm_u64m4_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_u64m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m4_t 
test_vcompress_vm_u64m4_tu_vl31(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1)
{
  return vcompress_vm_u64m4_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_u64m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m8_t 
test_vcompress_vm_u64m8_tu(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, size_t vl)
{
  return vcompress_vm_u64m8_tu(mask, maskedoff, op1, vl);
}

/*
** test_vcompress_vm_u64m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m8_t 
test_vcompress_vm_u64m8_tu_vl31(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1)
{
  return vcompress_vm_u64m8_tu(mask, maskedoff, op1, 31);
}

/*
** test_vcompress_vm_u8mf8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8_t 
test_vcompress_vm_u8mf8_ta_vl32(vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t op1)
{
  return vcompress_vm_u8mf8_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_u8mf4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4_t 
test_vcompress_vm_u8mf4_ta_vl32(vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t op1)
{
  return vcompress_vm_u8mf4_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_u8mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2_t 
test_vcompress_vm_u8mf2_ta_vl32(vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t op1)
{
  return vcompress_vm_u8mf2_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_u8m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vcompress_vm_u8m1_ta_vl32(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1)
{
  return vcompress_vm_u8m1_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_u8m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m2_t 
test_vcompress_vm_u8m2_ta_vl32(vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t op1)
{
  return vcompress_vm_u8m2_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_u8m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m4_t 
test_vcompress_vm_u8m4_ta_vl32(vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t op1)
{
  return vcompress_vm_u8m4_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_u8m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m8_t 
test_vcompress_vm_u8m8_ta_vl32(vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t op1)
{
  return vcompress_vm_u8m8_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_u16mf4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4_t 
test_vcompress_vm_u16mf4_ta_vl32(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1)
{
  return vcompress_vm_u16mf4_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_u16mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2_t 
test_vcompress_vm_u16mf2_ta_vl32(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1)
{
  return vcompress_vm_u16mf2_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_u16m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vcompress_vm_u16m1_ta_vl32(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1)
{
  return vcompress_vm_u16m1_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_u16m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m2_t 
test_vcompress_vm_u16m2_ta_vl32(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1)
{
  return vcompress_vm_u16m2_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_u16m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m4_t 
test_vcompress_vm_u16m4_ta_vl32(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1)
{
  return vcompress_vm_u16m4_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_u16m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m8_t 
test_vcompress_vm_u16m8_ta_vl32(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1)
{
  return vcompress_vm_u16m8_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_u32mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2_t 
test_vcompress_vm_u32mf2_ta_vl32(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1)
{
  return vcompress_vm_u32mf2_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_u32m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vcompress_vm_u32m1_ta_vl32(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1)
{
  return vcompress_vm_u32m1_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_u32m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m2_t 
test_vcompress_vm_u32m2_ta_vl32(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1)
{
  return vcompress_vm_u32m2_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_u32m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m4_t 
test_vcompress_vm_u32m4_ta_vl32(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1)
{
  return vcompress_vm_u32m4_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_u32m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m8_t 
test_vcompress_vm_u32m8_ta_vl32(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1)
{
  return vcompress_vm_u32m8_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_u64m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vcompress_vm_u64m1_ta_vl32(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1)
{
  return vcompress_vm_u64m1_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_u64m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2_t 
test_vcompress_vm_u64m2_ta_vl32(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1)
{
  return vcompress_vm_u64m2_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_u64m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m4_t 
test_vcompress_vm_u64m4_ta_vl32(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1)
{
  return vcompress_vm_u64m4_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_u64m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m8_t 
test_vcompress_vm_u64m8_ta_vl32(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1)
{
  return vcompress_vm_u64m8_ta(mask, op1, 32);
}

/*
** test_vcompress_vm_u8mf8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8_t 
test_vcompress_vm_u8mf8_tu_vl32(vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t op1)
{
  return vcompress_vm_u8mf8_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_u8mf4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4_t 
test_vcompress_vm_u8mf4_tu_vl32(vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t op1)
{
  return vcompress_vm_u8mf4_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_u8mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2_t 
test_vcompress_vm_u8mf2_tu_vl32(vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t op1)
{
  return vcompress_vm_u8mf2_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_u8m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vcompress_vm_u8m1_tu_vl32(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1)
{
  return vcompress_vm_u8m1_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_u8m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m2_t 
test_vcompress_vm_u8m2_tu_vl32(vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t op1)
{
  return vcompress_vm_u8m2_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_u8m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m4_t 
test_vcompress_vm_u8m4_tu_vl32(vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t op1)
{
  return vcompress_vm_u8m4_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_u8m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m8_t 
test_vcompress_vm_u8m8_tu_vl32(vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t op1)
{
  return vcompress_vm_u8m8_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_u16mf4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4_t 
test_vcompress_vm_u16mf4_tu_vl32(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1)
{
  return vcompress_vm_u16mf4_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_u16mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2_t 
test_vcompress_vm_u16mf2_tu_vl32(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1)
{
  return vcompress_vm_u16mf2_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_u16m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vcompress_vm_u16m1_tu_vl32(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1)
{
  return vcompress_vm_u16m1_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_u16m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m2_t 
test_vcompress_vm_u16m2_tu_vl32(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1)
{
  return vcompress_vm_u16m2_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_u16m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m4_t 
test_vcompress_vm_u16m4_tu_vl32(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1)
{
  return vcompress_vm_u16m4_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_u16m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m8_t 
test_vcompress_vm_u16m8_tu_vl32(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1)
{
  return vcompress_vm_u16m8_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_u32mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2_t 
test_vcompress_vm_u32mf2_tu_vl32(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1)
{
  return vcompress_vm_u32mf2_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_u32m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vcompress_vm_u32m1_tu_vl32(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1)
{
  return vcompress_vm_u32m1_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_u32m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m2_t 
test_vcompress_vm_u32m2_tu_vl32(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1)
{
  return vcompress_vm_u32m2_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_u32m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m4_t 
test_vcompress_vm_u32m4_tu_vl32(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1)
{
  return vcompress_vm_u32m4_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_u32m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m8_t 
test_vcompress_vm_u32m8_tu_vl32(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1)
{
  return vcompress_vm_u32m8_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_u64m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vcompress_vm_u64m1_tu_vl32(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1)
{
  return vcompress_vm_u64m1_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_u64m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2_t 
test_vcompress_vm_u64m2_tu_vl32(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1)
{
  return vcompress_vm_u64m2_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_u64m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m4_t 
test_vcompress_vm_u64m4_tu_vl32(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1)
{
  return vcompress_vm_u64m4_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_u64m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m8_t 
test_vcompress_vm_u64m8_tu_vl32(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1)
{
  return vcompress_vm_u64m8_tu(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_u8mf8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8_t 
test_vcompress_vm_u8mf8_vl32(vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t op1)
{
  return vcompress_vm_u8mf8(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_u8mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4_t 
test_vcompress_vm_u8mf4_vl32(vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t op1)
{
  return vcompress_vm_u8mf4(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_u8mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2_t 
test_vcompress_vm_u8mf2_vl32(vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t op1)
{
  return vcompress_vm_u8mf2(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_u8m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vcompress_vm_u8m1_vl32(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1)
{
  return vcompress_vm_u8m1(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_u8m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m2_t 
test_vcompress_vm_u8m2_vl32(vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t op1)
{
  return vcompress_vm_u8m2(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_u8m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m4_t 
test_vcompress_vm_u8m4_vl32(vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t op1)
{
  return vcompress_vm_u8m4(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_u8m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m8_t 
test_vcompress_vm_u8m8_vl32(vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t op1)
{
  return vcompress_vm_u8m8(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_u16mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4_t 
test_vcompress_vm_u16mf4_vl32(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1)
{
  return vcompress_vm_u16mf4(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_u16mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2_t 
test_vcompress_vm_u16mf2_vl32(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1)
{
  return vcompress_vm_u16mf2(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_u16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vcompress_vm_u16m1_vl32(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1)
{
  return vcompress_vm_u16m1(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_u16m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m2_t 
test_vcompress_vm_u16m2_vl32(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1)
{
  return vcompress_vm_u16m2(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_u16m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m4_t 
test_vcompress_vm_u16m4_vl32(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1)
{
  return vcompress_vm_u16m4(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_u16m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m8_t 
test_vcompress_vm_u16m8_vl32(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1)
{
  return vcompress_vm_u16m8(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_u32mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2_t 
test_vcompress_vm_u32mf2_vl32(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1)
{
  return vcompress_vm_u32mf2(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_u32m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vcompress_vm_u32m1_vl32(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1)
{
  return vcompress_vm_u32m1(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_u32m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m2_t 
test_vcompress_vm_u32m2_vl32(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1)
{
  return vcompress_vm_u32m2(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_u32m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m4_t 
test_vcompress_vm_u32m4_vl32(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1)
{
  return vcompress_vm_u32m4(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_u32m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m8_t 
test_vcompress_vm_u32m8_vl32(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1)
{
  return vcompress_vm_u32m8(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_u64m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vcompress_vm_u64m1_vl32(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1)
{
  return vcompress_vm_u64m1(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_u64m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2_t 
test_vcompress_vm_u64m2_vl32(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1)
{
  return vcompress_vm_u64m2(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_u64m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m4_t 
test_vcompress_vm_u64m4_vl32(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1)
{
  return vcompress_vm_u64m4(mask, maskedoff, op1, 32);
}

/*
** test_vcompress_vm_u64m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m8_t 
test_vcompress_vm_u64m8_vl32(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1)
{
  return vcompress_vm_u64m8(mask, maskedoff, op1, 32);
}

