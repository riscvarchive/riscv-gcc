/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>


/*
** test_vmerge_vxm_i8mf8_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint8mf8_t 
test_vmerge_vxm_i8mf8_m16(vbool64_t mask, vint8mf8_t op1, size_t vl)
{
  return vmerge_vxm_i8mf8(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_i8mf8_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint8mf8_t 
test_vmerge_vxm_i8mf8_15(vbool64_t mask, vint8mf8_t op1, size_t vl)
{
  return vmerge_vxm_i8mf8(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_i8mf8_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint8mf8_t 
test_vmerge_vxm_i8mf8_vl31_m16(vbool64_t mask, vint8mf8_t op1)
{
  return vmerge_vxm_i8mf8(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_i8mf8_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint8mf8_t 
test_vmerge_vxm_i8mf8_vl31_15(vbool64_t mask, vint8mf8_t op1)
{
  return vmerge_vxm_i8mf8(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_i8mf4_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint8mf4_t 
test_vmerge_vxm_i8mf4_m16(vbool32_t mask, vint8mf4_t op1, size_t vl)
{
  return vmerge_vxm_i8mf4(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_i8mf4_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint8mf4_t 
test_vmerge_vxm_i8mf4_15(vbool32_t mask, vint8mf4_t op1, size_t vl)
{
  return vmerge_vxm_i8mf4(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_i8mf4_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint8mf4_t 
test_vmerge_vxm_i8mf4_vl31_m16(vbool32_t mask, vint8mf4_t op1)
{
  return vmerge_vxm_i8mf4(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_i8mf4_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint8mf4_t 
test_vmerge_vxm_i8mf4_vl31_15(vbool32_t mask, vint8mf4_t op1)
{
  return vmerge_vxm_i8mf4(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_i8mf2_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint8mf2_t 
test_vmerge_vxm_i8mf2_m16(vbool16_t mask, vint8mf2_t op1, size_t vl)
{
  return vmerge_vxm_i8mf2(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_i8mf2_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint8mf2_t 
test_vmerge_vxm_i8mf2_15(vbool16_t mask, vint8mf2_t op1, size_t vl)
{
  return vmerge_vxm_i8mf2(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_i8mf2_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint8mf2_t 
test_vmerge_vxm_i8mf2_vl31_m16(vbool16_t mask, vint8mf2_t op1)
{
  return vmerge_vxm_i8mf2(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_i8mf2_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint8mf2_t 
test_vmerge_vxm_i8mf2_vl31_15(vbool16_t mask, vint8mf2_t op1)
{
  return vmerge_vxm_i8mf2(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_i8m1_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint8m1_t 
test_vmerge_vxm_i8m1_m16(vbool8_t mask, vint8m1_t op1, size_t vl)
{
  return vmerge_vxm_i8m1(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_i8m1_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint8m1_t 
test_vmerge_vxm_i8m1_15(vbool8_t mask, vint8m1_t op1, size_t vl)
{
  return vmerge_vxm_i8m1(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_i8m1_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint8m1_t 
test_vmerge_vxm_i8m1_vl31_m16(vbool8_t mask, vint8m1_t op1)
{
  return vmerge_vxm_i8m1(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_i8m1_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint8m1_t 
test_vmerge_vxm_i8m1_vl31_15(vbool8_t mask, vint8m1_t op1)
{
  return vmerge_vxm_i8m1(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_i8m2_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vint8m2_t 
test_vmerge_vxm_i8m2_m16(vbool4_t mask, vint8m2_t op1, size_t vl)
{
  return vmerge_vxm_i8m2(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_i8m2_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vint8m2_t 
test_vmerge_vxm_i8m2_15(vbool4_t mask, vint8m2_t op1, size_t vl)
{
  return vmerge_vxm_i8m2(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_i8m2_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vint8m2_t 
test_vmerge_vxm_i8m2_vl31_m16(vbool4_t mask, vint8m2_t op1)
{
  return vmerge_vxm_i8m2(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_i8m2_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vint8m2_t 
test_vmerge_vxm_i8m2_vl31_15(vbool4_t mask, vint8m2_t op1)
{
  return vmerge_vxm_i8m2(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_i8m4_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vint8m4_t 
test_vmerge_vxm_i8m4_m16(vbool2_t mask, vint8m4_t op1, size_t vl)
{
  return vmerge_vxm_i8m4(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_i8m4_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vint8m4_t 
test_vmerge_vxm_i8m4_15(vbool2_t mask, vint8m4_t op1, size_t vl)
{
  return vmerge_vxm_i8m4(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_i8m4_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vint8m4_t 
test_vmerge_vxm_i8m4_vl31_m16(vbool2_t mask, vint8m4_t op1)
{
  return vmerge_vxm_i8m4(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_i8m4_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vint8m4_t 
test_vmerge_vxm_i8m4_vl31_15(vbool2_t mask, vint8m4_t op1)
{
  return vmerge_vxm_i8m4(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_i8m8_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vint8m8_t 
test_vmerge_vxm_i8m8_m16(vbool1_t mask, vint8m8_t op1, size_t vl)
{
  return vmerge_vxm_i8m8(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_i8m8_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vint8m8_t 
test_vmerge_vxm_i8m8_15(vbool1_t mask, vint8m8_t op1, size_t vl)
{
  return vmerge_vxm_i8m8(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_i8m8_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vint8m8_t 
test_vmerge_vxm_i8m8_vl31_m16(vbool1_t mask, vint8m8_t op1)
{
  return vmerge_vxm_i8m8(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_i8m8_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vint8m8_t 
test_vmerge_vxm_i8m8_vl31_15(vbool1_t mask, vint8m8_t op1)
{
  return vmerge_vxm_i8m8(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_i16mf4_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint16mf4_t 
test_vmerge_vxm_i16mf4_m16(vbool64_t mask, vint16mf4_t op1, size_t vl)
{
  return vmerge_vxm_i16mf4(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_i16mf4_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint16mf4_t 
test_vmerge_vxm_i16mf4_15(vbool64_t mask, vint16mf4_t op1, size_t vl)
{
  return vmerge_vxm_i16mf4(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_i16mf4_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint16mf4_t 
test_vmerge_vxm_i16mf4_vl31_m16(vbool64_t mask, vint16mf4_t op1)
{
  return vmerge_vxm_i16mf4(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_i16mf4_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint16mf4_t 
test_vmerge_vxm_i16mf4_vl31_15(vbool64_t mask, vint16mf4_t op1)
{
  return vmerge_vxm_i16mf4(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_i16mf2_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint16mf2_t 
test_vmerge_vxm_i16mf2_m16(vbool32_t mask, vint16mf2_t op1, size_t vl)
{
  return vmerge_vxm_i16mf2(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_i16mf2_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint16mf2_t 
test_vmerge_vxm_i16mf2_15(vbool32_t mask, vint16mf2_t op1, size_t vl)
{
  return vmerge_vxm_i16mf2(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_i16mf2_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint16mf2_t 
test_vmerge_vxm_i16mf2_vl31_m16(vbool32_t mask, vint16mf2_t op1)
{
  return vmerge_vxm_i16mf2(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_i16mf2_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint16mf2_t 
test_vmerge_vxm_i16mf2_vl31_15(vbool32_t mask, vint16mf2_t op1)
{
  return vmerge_vxm_i16mf2(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_i16m1_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint16m1_t 
test_vmerge_vxm_i16m1_m16(vbool16_t mask, vint16m1_t op1, size_t vl)
{
  return vmerge_vxm_i16m1(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_i16m1_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint16m1_t 
test_vmerge_vxm_i16m1_15(vbool16_t mask, vint16m1_t op1, size_t vl)
{
  return vmerge_vxm_i16m1(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_i16m1_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint16m1_t 
test_vmerge_vxm_i16m1_vl31_m16(vbool16_t mask, vint16m1_t op1)
{
  return vmerge_vxm_i16m1(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_i16m1_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint16m1_t 
test_vmerge_vxm_i16m1_vl31_15(vbool16_t mask, vint16m1_t op1)
{
  return vmerge_vxm_i16m1(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_i16m2_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vint16m2_t 
test_vmerge_vxm_i16m2_m16(vbool8_t mask, vint16m2_t op1, size_t vl)
{
  return vmerge_vxm_i16m2(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_i16m2_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vint16m2_t 
test_vmerge_vxm_i16m2_15(vbool8_t mask, vint16m2_t op1, size_t vl)
{
  return vmerge_vxm_i16m2(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_i16m2_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vint16m2_t 
test_vmerge_vxm_i16m2_vl31_m16(vbool8_t mask, vint16m2_t op1)
{
  return vmerge_vxm_i16m2(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_i16m2_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vint16m2_t 
test_vmerge_vxm_i16m2_vl31_15(vbool8_t mask, vint16m2_t op1)
{
  return vmerge_vxm_i16m2(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_i16m4_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vint16m4_t 
test_vmerge_vxm_i16m4_m16(vbool4_t mask, vint16m4_t op1, size_t vl)
{
  return vmerge_vxm_i16m4(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_i16m4_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vint16m4_t 
test_vmerge_vxm_i16m4_15(vbool4_t mask, vint16m4_t op1, size_t vl)
{
  return vmerge_vxm_i16m4(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_i16m4_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vint16m4_t 
test_vmerge_vxm_i16m4_vl31_m16(vbool4_t mask, vint16m4_t op1)
{
  return vmerge_vxm_i16m4(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_i16m4_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vint16m4_t 
test_vmerge_vxm_i16m4_vl31_15(vbool4_t mask, vint16m4_t op1)
{
  return vmerge_vxm_i16m4(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_i16m8_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vint16m8_t 
test_vmerge_vxm_i16m8_m16(vbool2_t mask, vint16m8_t op1, size_t vl)
{
  return vmerge_vxm_i16m8(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_i16m8_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vint16m8_t 
test_vmerge_vxm_i16m8_15(vbool2_t mask, vint16m8_t op1, size_t vl)
{
  return vmerge_vxm_i16m8(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_i16m8_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vint16m8_t 
test_vmerge_vxm_i16m8_vl31_m16(vbool2_t mask, vint16m8_t op1)
{
  return vmerge_vxm_i16m8(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_i16m8_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vint16m8_t 
test_vmerge_vxm_i16m8_vl31_15(vbool2_t mask, vint16m8_t op1)
{
  return vmerge_vxm_i16m8(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_i32mf2_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint32mf2_t 
test_vmerge_vxm_i32mf2_m16(vbool64_t mask, vint32mf2_t op1, size_t vl)
{
  return vmerge_vxm_i32mf2(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_i32mf2_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint32mf2_t 
test_vmerge_vxm_i32mf2_15(vbool64_t mask, vint32mf2_t op1, size_t vl)
{
  return vmerge_vxm_i32mf2(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_i32mf2_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint32mf2_t 
test_vmerge_vxm_i32mf2_vl31_m16(vbool64_t mask, vint32mf2_t op1)
{
  return vmerge_vxm_i32mf2(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_i32mf2_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint32mf2_t 
test_vmerge_vxm_i32mf2_vl31_15(vbool64_t mask, vint32mf2_t op1)
{
  return vmerge_vxm_i32mf2(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_i32m1_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint32m1_t 
test_vmerge_vxm_i32m1_m16(vbool32_t mask, vint32m1_t op1, size_t vl)
{
  return vmerge_vxm_i32m1(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_i32m1_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint32m1_t 
test_vmerge_vxm_i32m1_15(vbool32_t mask, vint32m1_t op1, size_t vl)
{
  return vmerge_vxm_i32m1(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_i32m1_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint32m1_t 
test_vmerge_vxm_i32m1_vl31_m16(vbool32_t mask, vint32m1_t op1)
{
  return vmerge_vxm_i32m1(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_i32m1_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint32m1_t 
test_vmerge_vxm_i32m1_vl31_15(vbool32_t mask, vint32m1_t op1)
{
  return vmerge_vxm_i32m1(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_i32m2_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vint32m2_t 
test_vmerge_vxm_i32m2_m16(vbool16_t mask, vint32m2_t op1, size_t vl)
{
  return vmerge_vxm_i32m2(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_i32m2_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vint32m2_t 
test_vmerge_vxm_i32m2_15(vbool16_t mask, vint32m2_t op1, size_t vl)
{
  return vmerge_vxm_i32m2(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_i32m2_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vint32m2_t 
test_vmerge_vxm_i32m2_vl31_m16(vbool16_t mask, vint32m2_t op1)
{
  return vmerge_vxm_i32m2(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_i32m2_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vint32m2_t 
test_vmerge_vxm_i32m2_vl31_15(vbool16_t mask, vint32m2_t op1)
{
  return vmerge_vxm_i32m2(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_i32m4_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vint32m4_t 
test_vmerge_vxm_i32m4_m16(vbool8_t mask, vint32m4_t op1, size_t vl)
{
  return vmerge_vxm_i32m4(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_i32m4_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vint32m4_t 
test_vmerge_vxm_i32m4_15(vbool8_t mask, vint32m4_t op1, size_t vl)
{
  return vmerge_vxm_i32m4(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_i32m4_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vint32m4_t 
test_vmerge_vxm_i32m4_vl31_m16(vbool8_t mask, vint32m4_t op1)
{
  return vmerge_vxm_i32m4(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_i32m4_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vint32m4_t 
test_vmerge_vxm_i32m4_vl31_15(vbool8_t mask, vint32m4_t op1)
{
  return vmerge_vxm_i32m4(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_i32m8_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vint32m8_t 
test_vmerge_vxm_i32m8_m16(vbool4_t mask, vint32m8_t op1, size_t vl)
{
  return vmerge_vxm_i32m8(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_i32m8_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vint32m8_t 
test_vmerge_vxm_i32m8_15(vbool4_t mask, vint32m8_t op1, size_t vl)
{
  return vmerge_vxm_i32m8(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_i32m8_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vint32m8_t 
test_vmerge_vxm_i32m8_vl31_m16(vbool4_t mask, vint32m8_t op1)
{
  return vmerge_vxm_i32m8(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_i32m8_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vint32m8_t 
test_vmerge_vxm_i32m8_vl31_15(vbool4_t mask, vint32m8_t op1)
{
  return vmerge_vxm_i32m8(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_i64m1_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint64m1_t 
test_vmerge_vxm_i64m1_m16(vbool64_t mask, vint64m1_t op1, size_t vl)
{
  return vmerge_vxm_i64m1(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_i64m1_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint64m1_t 
test_vmerge_vxm_i64m1_15(vbool64_t mask, vint64m1_t op1, size_t vl)
{
  return vmerge_vxm_i64m1(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_i64m1_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint64m1_t 
test_vmerge_vxm_i64m1_vl31_m16(vbool64_t mask, vint64m1_t op1)
{
  return vmerge_vxm_i64m1(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_i64m1_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint64m1_t 
test_vmerge_vxm_i64m1_vl31_15(vbool64_t mask, vint64m1_t op1)
{
  return vmerge_vxm_i64m1(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_i64m2_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vint64m2_t 
test_vmerge_vxm_i64m2_m16(vbool32_t mask, vint64m2_t op1, size_t vl)
{
  return vmerge_vxm_i64m2(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_i64m2_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vint64m2_t 
test_vmerge_vxm_i64m2_15(vbool32_t mask, vint64m2_t op1, size_t vl)
{
  return vmerge_vxm_i64m2(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_i64m2_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vint64m2_t 
test_vmerge_vxm_i64m2_vl31_m16(vbool32_t mask, vint64m2_t op1)
{
  return vmerge_vxm_i64m2(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_i64m2_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vint64m2_t 
test_vmerge_vxm_i64m2_vl31_15(vbool32_t mask, vint64m2_t op1)
{
  return vmerge_vxm_i64m2(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_i64m4_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vint64m4_t 
test_vmerge_vxm_i64m4_m16(vbool16_t mask, vint64m4_t op1, size_t vl)
{
  return vmerge_vxm_i64m4(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_i64m4_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vint64m4_t 
test_vmerge_vxm_i64m4_15(vbool16_t mask, vint64m4_t op1, size_t vl)
{
  return vmerge_vxm_i64m4(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_i64m4_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vint64m4_t 
test_vmerge_vxm_i64m4_vl31_m16(vbool16_t mask, vint64m4_t op1)
{
  return vmerge_vxm_i64m4(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_i64m4_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vint64m4_t 
test_vmerge_vxm_i64m4_vl31_15(vbool16_t mask, vint64m4_t op1)
{
  return vmerge_vxm_i64m4(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_i64m8_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vint64m8_t 
test_vmerge_vxm_i64m8_m16(vbool8_t mask, vint64m8_t op1, size_t vl)
{
  return vmerge_vxm_i64m8(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_i64m8_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vint64m8_t 
test_vmerge_vxm_i64m8_15(vbool8_t mask, vint64m8_t op1, size_t vl)
{
  return vmerge_vxm_i64m8(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_i64m8_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vint64m8_t 
test_vmerge_vxm_i64m8_vl31_m16(vbool8_t mask, vint64m8_t op1)
{
  return vmerge_vxm_i64m8(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_i64m8_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vint64m8_t 
test_vmerge_vxm_i64m8_vl31_15(vbool8_t mask, vint64m8_t op1)
{
  return vmerge_vxm_i64m8(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_i8mf8_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint8mf8_t 
test_vmerge_vxm_i8mf8_ta_m16(vbool64_t mask, vint8mf8_t op1, size_t vl)
{
  return vmerge_vxm_i8mf8_ta(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_i8mf8_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint8mf8_t 
test_vmerge_vxm_i8mf8_ta_15(vbool64_t mask, vint8mf8_t op1, size_t vl)
{
  return vmerge_vxm_i8mf8_ta(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_i8mf8_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint8mf8_t 
test_vmerge_vxm_i8mf8_ta_vl31_m16(vbool64_t mask, vint8mf8_t op1)
{
  return vmerge_vxm_i8mf8_ta(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_i8mf8_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint8mf8_t 
test_vmerge_vxm_i8mf8_ta_vl31_15(vbool64_t mask, vint8mf8_t op1)
{
  return vmerge_vxm_i8mf8_ta(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_i8mf4_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint8mf4_t 
test_vmerge_vxm_i8mf4_ta_m16(vbool32_t mask, vint8mf4_t op1, size_t vl)
{
  return vmerge_vxm_i8mf4_ta(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_i8mf4_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint8mf4_t 
test_vmerge_vxm_i8mf4_ta_15(vbool32_t mask, vint8mf4_t op1, size_t vl)
{
  return vmerge_vxm_i8mf4_ta(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_i8mf4_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint8mf4_t 
test_vmerge_vxm_i8mf4_ta_vl31_m16(vbool32_t mask, vint8mf4_t op1)
{
  return vmerge_vxm_i8mf4_ta(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_i8mf4_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint8mf4_t 
test_vmerge_vxm_i8mf4_ta_vl31_15(vbool32_t mask, vint8mf4_t op1)
{
  return vmerge_vxm_i8mf4_ta(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_i8mf2_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint8mf2_t 
test_vmerge_vxm_i8mf2_ta_m16(vbool16_t mask, vint8mf2_t op1, size_t vl)
{
  return vmerge_vxm_i8mf2_ta(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_i8mf2_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint8mf2_t 
test_vmerge_vxm_i8mf2_ta_15(vbool16_t mask, vint8mf2_t op1, size_t vl)
{
  return vmerge_vxm_i8mf2_ta(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_i8mf2_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint8mf2_t 
test_vmerge_vxm_i8mf2_ta_vl31_m16(vbool16_t mask, vint8mf2_t op1)
{
  return vmerge_vxm_i8mf2_ta(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_i8mf2_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint8mf2_t 
test_vmerge_vxm_i8mf2_ta_vl31_15(vbool16_t mask, vint8mf2_t op1)
{
  return vmerge_vxm_i8mf2_ta(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_i8m1_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint8m1_t 
test_vmerge_vxm_i8m1_ta_m16(vbool8_t mask, vint8m1_t op1, size_t vl)
{
  return vmerge_vxm_i8m1_ta(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_i8m1_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint8m1_t 
test_vmerge_vxm_i8m1_ta_15(vbool8_t mask, vint8m1_t op1, size_t vl)
{
  return vmerge_vxm_i8m1_ta(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_i8m1_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint8m1_t 
test_vmerge_vxm_i8m1_ta_vl31_m16(vbool8_t mask, vint8m1_t op1)
{
  return vmerge_vxm_i8m1_ta(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_i8m1_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint8m1_t 
test_vmerge_vxm_i8m1_ta_vl31_15(vbool8_t mask, vint8m1_t op1)
{
  return vmerge_vxm_i8m1_ta(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_i8m2_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vint8m2_t 
test_vmerge_vxm_i8m2_ta_m16(vbool4_t mask, vint8m2_t op1, size_t vl)
{
  return vmerge_vxm_i8m2_ta(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_i8m2_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vint8m2_t 
test_vmerge_vxm_i8m2_ta_15(vbool4_t mask, vint8m2_t op1, size_t vl)
{
  return vmerge_vxm_i8m2_ta(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_i8m2_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vint8m2_t 
test_vmerge_vxm_i8m2_ta_vl31_m16(vbool4_t mask, vint8m2_t op1)
{
  return vmerge_vxm_i8m2_ta(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_i8m2_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vint8m2_t 
test_vmerge_vxm_i8m2_ta_vl31_15(vbool4_t mask, vint8m2_t op1)
{
  return vmerge_vxm_i8m2_ta(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_i8m4_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vint8m4_t 
test_vmerge_vxm_i8m4_ta_m16(vbool2_t mask, vint8m4_t op1, size_t vl)
{
  return vmerge_vxm_i8m4_ta(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_i8m4_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vint8m4_t 
test_vmerge_vxm_i8m4_ta_15(vbool2_t mask, vint8m4_t op1, size_t vl)
{
  return vmerge_vxm_i8m4_ta(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_i8m4_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vint8m4_t 
test_vmerge_vxm_i8m4_ta_vl31_m16(vbool2_t mask, vint8m4_t op1)
{
  return vmerge_vxm_i8m4_ta(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_i8m4_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vint8m4_t 
test_vmerge_vxm_i8m4_ta_vl31_15(vbool2_t mask, vint8m4_t op1)
{
  return vmerge_vxm_i8m4_ta(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_i8m8_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vint8m8_t 
test_vmerge_vxm_i8m8_ta_m16(vbool1_t mask, vint8m8_t op1, size_t vl)
{
  return vmerge_vxm_i8m8_ta(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_i8m8_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vint8m8_t 
test_vmerge_vxm_i8m8_ta_15(vbool1_t mask, vint8m8_t op1, size_t vl)
{
  return vmerge_vxm_i8m8_ta(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_i8m8_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vint8m8_t 
test_vmerge_vxm_i8m8_ta_vl31_m16(vbool1_t mask, vint8m8_t op1)
{
  return vmerge_vxm_i8m8_ta(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_i8m8_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vint8m8_t 
test_vmerge_vxm_i8m8_ta_vl31_15(vbool1_t mask, vint8m8_t op1)
{
  return vmerge_vxm_i8m8_ta(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_i16mf4_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint16mf4_t 
test_vmerge_vxm_i16mf4_ta_m16(vbool64_t mask, vint16mf4_t op1, size_t vl)
{
  return vmerge_vxm_i16mf4_ta(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_i16mf4_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint16mf4_t 
test_vmerge_vxm_i16mf4_ta_15(vbool64_t mask, vint16mf4_t op1, size_t vl)
{
  return vmerge_vxm_i16mf4_ta(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_i16mf4_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint16mf4_t 
test_vmerge_vxm_i16mf4_ta_vl31_m16(vbool64_t mask, vint16mf4_t op1)
{
  return vmerge_vxm_i16mf4_ta(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_i16mf4_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint16mf4_t 
test_vmerge_vxm_i16mf4_ta_vl31_15(vbool64_t mask, vint16mf4_t op1)
{
  return vmerge_vxm_i16mf4_ta(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_i16mf2_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint16mf2_t 
test_vmerge_vxm_i16mf2_ta_m16(vbool32_t mask, vint16mf2_t op1, size_t vl)
{
  return vmerge_vxm_i16mf2_ta(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_i16mf2_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint16mf2_t 
test_vmerge_vxm_i16mf2_ta_15(vbool32_t mask, vint16mf2_t op1, size_t vl)
{
  return vmerge_vxm_i16mf2_ta(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_i16mf2_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint16mf2_t 
test_vmerge_vxm_i16mf2_ta_vl31_m16(vbool32_t mask, vint16mf2_t op1)
{
  return vmerge_vxm_i16mf2_ta(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_i16mf2_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint16mf2_t 
test_vmerge_vxm_i16mf2_ta_vl31_15(vbool32_t mask, vint16mf2_t op1)
{
  return vmerge_vxm_i16mf2_ta(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_i16m1_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint16m1_t 
test_vmerge_vxm_i16m1_ta_m16(vbool16_t mask, vint16m1_t op1, size_t vl)
{
  return vmerge_vxm_i16m1_ta(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_i16m1_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint16m1_t 
test_vmerge_vxm_i16m1_ta_15(vbool16_t mask, vint16m1_t op1, size_t vl)
{
  return vmerge_vxm_i16m1_ta(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_i16m1_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint16m1_t 
test_vmerge_vxm_i16m1_ta_vl31_m16(vbool16_t mask, vint16m1_t op1)
{
  return vmerge_vxm_i16m1_ta(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_i16m1_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint16m1_t 
test_vmerge_vxm_i16m1_ta_vl31_15(vbool16_t mask, vint16m1_t op1)
{
  return vmerge_vxm_i16m1_ta(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_i16m2_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vint16m2_t 
test_vmerge_vxm_i16m2_ta_m16(vbool8_t mask, vint16m2_t op1, size_t vl)
{
  return vmerge_vxm_i16m2_ta(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_i16m2_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vint16m2_t 
test_vmerge_vxm_i16m2_ta_15(vbool8_t mask, vint16m2_t op1, size_t vl)
{
  return vmerge_vxm_i16m2_ta(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_i16m2_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vint16m2_t 
test_vmerge_vxm_i16m2_ta_vl31_m16(vbool8_t mask, vint16m2_t op1)
{
  return vmerge_vxm_i16m2_ta(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_i16m2_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vint16m2_t 
test_vmerge_vxm_i16m2_ta_vl31_15(vbool8_t mask, vint16m2_t op1)
{
  return vmerge_vxm_i16m2_ta(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_i16m4_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vint16m4_t 
test_vmerge_vxm_i16m4_ta_m16(vbool4_t mask, vint16m4_t op1, size_t vl)
{
  return vmerge_vxm_i16m4_ta(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_i16m4_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vint16m4_t 
test_vmerge_vxm_i16m4_ta_15(vbool4_t mask, vint16m4_t op1, size_t vl)
{
  return vmerge_vxm_i16m4_ta(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_i16m4_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vint16m4_t 
test_vmerge_vxm_i16m4_ta_vl31_m16(vbool4_t mask, vint16m4_t op1)
{
  return vmerge_vxm_i16m4_ta(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_i16m4_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vint16m4_t 
test_vmerge_vxm_i16m4_ta_vl31_15(vbool4_t mask, vint16m4_t op1)
{
  return vmerge_vxm_i16m4_ta(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_i16m8_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vint16m8_t 
test_vmerge_vxm_i16m8_ta_m16(vbool2_t mask, vint16m8_t op1, size_t vl)
{
  return vmerge_vxm_i16m8_ta(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_i16m8_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vint16m8_t 
test_vmerge_vxm_i16m8_ta_15(vbool2_t mask, vint16m8_t op1, size_t vl)
{
  return vmerge_vxm_i16m8_ta(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_i16m8_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vint16m8_t 
test_vmerge_vxm_i16m8_ta_vl31_m16(vbool2_t mask, vint16m8_t op1)
{
  return vmerge_vxm_i16m8_ta(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_i16m8_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vint16m8_t 
test_vmerge_vxm_i16m8_ta_vl31_15(vbool2_t mask, vint16m8_t op1)
{
  return vmerge_vxm_i16m8_ta(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_i32mf2_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint32mf2_t 
test_vmerge_vxm_i32mf2_ta_m16(vbool64_t mask, vint32mf2_t op1, size_t vl)
{
  return vmerge_vxm_i32mf2_ta(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_i32mf2_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint32mf2_t 
test_vmerge_vxm_i32mf2_ta_15(vbool64_t mask, vint32mf2_t op1, size_t vl)
{
  return vmerge_vxm_i32mf2_ta(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_i32mf2_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint32mf2_t 
test_vmerge_vxm_i32mf2_ta_vl31_m16(vbool64_t mask, vint32mf2_t op1)
{
  return vmerge_vxm_i32mf2_ta(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_i32mf2_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint32mf2_t 
test_vmerge_vxm_i32mf2_ta_vl31_15(vbool64_t mask, vint32mf2_t op1)
{
  return vmerge_vxm_i32mf2_ta(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_i32m1_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint32m1_t 
test_vmerge_vxm_i32m1_ta_m16(vbool32_t mask, vint32m1_t op1, size_t vl)
{
  return vmerge_vxm_i32m1_ta(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_i32m1_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint32m1_t 
test_vmerge_vxm_i32m1_ta_15(vbool32_t mask, vint32m1_t op1, size_t vl)
{
  return vmerge_vxm_i32m1_ta(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_i32m1_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint32m1_t 
test_vmerge_vxm_i32m1_ta_vl31_m16(vbool32_t mask, vint32m1_t op1)
{
  return vmerge_vxm_i32m1_ta(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_i32m1_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint32m1_t 
test_vmerge_vxm_i32m1_ta_vl31_15(vbool32_t mask, vint32m1_t op1)
{
  return vmerge_vxm_i32m1_ta(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_i32m2_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vint32m2_t 
test_vmerge_vxm_i32m2_ta_m16(vbool16_t mask, vint32m2_t op1, size_t vl)
{
  return vmerge_vxm_i32m2_ta(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_i32m2_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vint32m2_t 
test_vmerge_vxm_i32m2_ta_15(vbool16_t mask, vint32m2_t op1, size_t vl)
{
  return vmerge_vxm_i32m2_ta(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_i32m2_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vint32m2_t 
test_vmerge_vxm_i32m2_ta_vl31_m16(vbool16_t mask, vint32m2_t op1)
{
  return vmerge_vxm_i32m2_ta(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_i32m2_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vint32m2_t 
test_vmerge_vxm_i32m2_ta_vl31_15(vbool16_t mask, vint32m2_t op1)
{
  return vmerge_vxm_i32m2_ta(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_i32m4_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vint32m4_t 
test_vmerge_vxm_i32m4_ta_m16(vbool8_t mask, vint32m4_t op1, size_t vl)
{
  return vmerge_vxm_i32m4_ta(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_i32m4_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vint32m4_t 
test_vmerge_vxm_i32m4_ta_15(vbool8_t mask, vint32m4_t op1, size_t vl)
{
  return vmerge_vxm_i32m4_ta(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_i32m4_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vint32m4_t 
test_vmerge_vxm_i32m4_ta_vl31_m16(vbool8_t mask, vint32m4_t op1)
{
  return vmerge_vxm_i32m4_ta(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_i32m4_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vint32m4_t 
test_vmerge_vxm_i32m4_ta_vl31_15(vbool8_t mask, vint32m4_t op1)
{
  return vmerge_vxm_i32m4_ta(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_i32m8_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vint32m8_t 
test_vmerge_vxm_i32m8_ta_m16(vbool4_t mask, vint32m8_t op1, size_t vl)
{
  return vmerge_vxm_i32m8_ta(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_i32m8_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vint32m8_t 
test_vmerge_vxm_i32m8_ta_15(vbool4_t mask, vint32m8_t op1, size_t vl)
{
  return vmerge_vxm_i32m8_ta(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_i32m8_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vint32m8_t 
test_vmerge_vxm_i32m8_ta_vl31_m16(vbool4_t mask, vint32m8_t op1)
{
  return vmerge_vxm_i32m8_ta(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_i32m8_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vint32m8_t 
test_vmerge_vxm_i32m8_ta_vl31_15(vbool4_t mask, vint32m8_t op1)
{
  return vmerge_vxm_i32m8_ta(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_i64m1_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint64m1_t 
test_vmerge_vxm_i64m1_ta_m16(vbool64_t mask, vint64m1_t op1, size_t vl)
{
  return vmerge_vxm_i64m1_ta(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_i64m1_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint64m1_t 
test_vmerge_vxm_i64m1_ta_15(vbool64_t mask, vint64m1_t op1, size_t vl)
{
  return vmerge_vxm_i64m1_ta(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_i64m1_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint64m1_t 
test_vmerge_vxm_i64m1_ta_vl31_m16(vbool64_t mask, vint64m1_t op1)
{
  return vmerge_vxm_i64m1_ta(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_i64m1_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint64m1_t 
test_vmerge_vxm_i64m1_ta_vl31_15(vbool64_t mask, vint64m1_t op1)
{
  return vmerge_vxm_i64m1_ta(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_i64m2_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vint64m2_t 
test_vmerge_vxm_i64m2_ta_m16(vbool32_t mask, vint64m2_t op1, size_t vl)
{
  return vmerge_vxm_i64m2_ta(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_i64m2_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vint64m2_t 
test_vmerge_vxm_i64m2_ta_15(vbool32_t mask, vint64m2_t op1, size_t vl)
{
  return vmerge_vxm_i64m2_ta(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_i64m2_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vint64m2_t 
test_vmerge_vxm_i64m2_ta_vl31_m16(vbool32_t mask, vint64m2_t op1)
{
  return vmerge_vxm_i64m2_ta(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_i64m2_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vint64m2_t 
test_vmerge_vxm_i64m2_ta_vl31_15(vbool32_t mask, vint64m2_t op1)
{
  return vmerge_vxm_i64m2_ta(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_i64m4_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vint64m4_t 
test_vmerge_vxm_i64m4_ta_m16(vbool16_t mask, vint64m4_t op1, size_t vl)
{
  return vmerge_vxm_i64m4_ta(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_i64m4_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vint64m4_t 
test_vmerge_vxm_i64m4_ta_15(vbool16_t mask, vint64m4_t op1, size_t vl)
{
  return vmerge_vxm_i64m4_ta(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_i64m4_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vint64m4_t 
test_vmerge_vxm_i64m4_ta_vl31_m16(vbool16_t mask, vint64m4_t op1)
{
  return vmerge_vxm_i64m4_ta(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_i64m4_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vint64m4_t 
test_vmerge_vxm_i64m4_ta_vl31_15(vbool16_t mask, vint64m4_t op1)
{
  return vmerge_vxm_i64m4_ta(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_i64m8_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vint64m8_t 
test_vmerge_vxm_i64m8_ta_m16(vbool8_t mask, vint64m8_t op1, size_t vl)
{
  return vmerge_vxm_i64m8_ta(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_i64m8_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vint64m8_t 
test_vmerge_vxm_i64m8_ta_15(vbool8_t mask, vint64m8_t op1, size_t vl)
{
  return vmerge_vxm_i64m8_ta(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_i64m8_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vint64m8_t 
test_vmerge_vxm_i64m8_ta_vl31_m16(vbool8_t mask, vint64m8_t op1)
{
  return vmerge_vxm_i64m8_ta(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_i64m8_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vint64m8_t 
test_vmerge_vxm_i64m8_ta_vl31_15(vbool8_t mask, vint64m8_t op1)
{
  return vmerge_vxm_i64m8_ta(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_i8mf8_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint8mf8_t 
test_vmerge_vxm_i8mf8_tu_m16(vint8mf8_t dest, vbool64_t mask, vint8mf8_t op1, size_t vl)
{
  return vmerge_vxm_i8mf8_tu(mask, dest, op1, -16, vl);
}

/*
** test_vmerge_vxm_i8mf8_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint8mf8_t 
test_vmerge_vxm_i8mf8_tu_15(vint8mf8_t dest, vbool64_t mask, vint8mf8_t op1, size_t vl)
{
  return vmerge_vxm_i8mf8_tu(mask, dest, op1, 15, vl);
}

/*
** test_vmerge_vxm_i8mf8_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint8mf8_t 
test_vmerge_vxm_i8mf8_tu_vl31_m16(vint8mf8_t dest, vbool64_t mask, vint8mf8_t op1)
{
  return vmerge_vxm_i8mf8_tu(mask, dest, op1, -16, 31);
}

/*
** test_vmerge_vxm_i8mf8_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint8mf8_t 
test_vmerge_vxm_i8mf8_tu_vl31_15(vint8mf8_t dest, vbool64_t mask, vint8mf8_t op1)
{
  return vmerge_vxm_i8mf8_tu(mask, dest, op1, 15, 31);
}

/*
** test_vmerge_vxm_i8mf4_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint8mf4_t 
test_vmerge_vxm_i8mf4_tu_m16(vint8mf4_t dest, vbool32_t mask, vint8mf4_t op1, size_t vl)
{
  return vmerge_vxm_i8mf4_tu(mask, dest, op1, -16, vl);
}

/*
** test_vmerge_vxm_i8mf4_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint8mf4_t 
test_vmerge_vxm_i8mf4_tu_15(vint8mf4_t dest, vbool32_t mask, vint8mf4_t op1, size_t vl)
{
  return vmerge_vxm_i8mf4_tu(mask, dest, op1, 15, vl);
}

/*
** test_vmerge_vxm_i8mf4_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint8mf4_t 
test_vmerge_vxm_i8mf4_tu_vl31_m16(vint8mf4_t dest, vbool32_t mask, vint8mf4_t op1)
{
  return vmerge_vxm_i8mf4_tu(mask, dest, op1, -16, 31);
}

/*
** test_vmerge_vxm_i8mf4_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint8mf4_t 
test_vmerge_vxm_i8mf4_tu_vl31_15(vint8mf4_t dest, vbool32_t mask, vint8mf4_t op1)
{
  return vmerge_vxm_i8mf4_tu(mask, dest, op1, 15, 31);
}

/*
** test_vmerge_vxm_i8mf2_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint8mf2_t 
test_vmerge_vxm_i8mf2_tu_m16(vint8mf2_t dest, vbool16_t mask, vint8mf2_t op1, size_t vl)
{
  return vmerge_vxm_i8mf2_tu(mask, dest, op1, -16, vl);
}

/*
** test_vmerge_vxm_i8mf2_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint8mf2_t 
test_vmerge_vxm_i8mf2_tu_15(vint8mf2_t dest, vbool16_t mask, vint8mf2_t op1, size_t vl)
{
  return vmerge_vxm_i8mf2_tu(mask, dest, op1, 15, vl);
}

/*
** test_vmerge_vxm_i8mf2_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint8mf2_t 
test_vmerge_vxm_i8mf2_tu_vl31_m16(vint8mf2_t dest, vbool16_t mask, vint8mf2_t op1)
{
  return vmerge_vxm_i8mf2_tu(mask, dest, op1, -16, 31);
}

/*
** test_vmerge_vxm_i8mf2_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint8mf2_t 
test_vmerge_vxm_i8mf2_tu_vl31_15(vint8mf2_t dest, vbool16_t mask, vint8mf2_t op1)
{
  return vmerge_vxm_i8mf2_tu(mask, dest, op1, 15, 31);
}

/*
** test_vmerge_vxm_i8m1_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint8m1_t 
test_vmerge_vxm_i8m1_tu_m16(vint8m1_t dest, vbool8_t mask, vint8m1_t op1, size_t vl)
{
  return vmerge_vxm_i8m1_tu(mask, dest, op1, -16, vl);
}

/*
** test_vmerge_vxm_i8m1_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint8m1_t 
test_vmerge_vxm_i8m1_tu_15(vint8m1_t dest, vbool8_t mask, vint8m1_t op1, size_t vl)
{
  return vmerge_vxm_i8m1_tu(mask, dest, op1, 15, vl);
}

/*
** test_vmerge_vxm_i8m1_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint8m1_t 
test_vmerge_vxm_i8m1_tu_vl31_m16(vint8m1_t dest, vbool8_t mask, vint8m1_t op1)
{
  return vmerge_vxm_i8m1_tu(mask, dest, op1, -16, 31);
}

/*
** test_vmerge_vxm_i8m1_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint8m1_t 
test_vmerge_vxm_i8m1_tu_vl31_15(vint8m1_t dest, vbool8_t mask, vint8m1_t op1)
{
  return vmerge_vxm_i8m1_tu(mask, dest, op1, 15, 31);
}

/*
** test_vmerge_vxm_i8m2_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vint8m2_t 
test_vmerge_vxm_i8m2_tu_m16(vint8m2_t dest, vbool4_t mask, vint8m2_t op1, size_t vl)
{
  return vmerge_vxm_i8m2_tu(mask, dest, op1, -16, vl);
}

/*
** test_vmerge_vxm_i8m2_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vint8m2_t 
test_vmerge_vxm_i8m2_tu_15(vint8m2_t dest, vbool4_t mask, vint8m2_t op1, size_t vl)
{
  return vmerge_vxm_i8m2_tu(mask, dest, op1, 15, vl);
}

/*
** test_vmerge_vxm_i8m2_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vint8m2_t 
test_vmerge_vxm_i8m2_tu_vl31_m16(vint8m2_t dest, vbool4_t mask, vint8m2_t op1)
{
  return vmerge_vxm_i8m2_tu(mask, dest, op1, -16, 31);
}

/*
** test_vmerge_vxm_i8m2_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vint8m2_t 
test_vmerge_vxm_i8m2_tu_vl31_15(vint8m2_t dest, vbool4_t mask, vint8m2_t op1)
{
  return vmerge_vxm_i8m2_tu(mask, dest, op1, 15, 31);
}

/*
** test_vmerge_vxm_i8m4_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vint8m4_t 
test_vmerge_vxm_i8m4_tu_m16(vint8m4_t dest, vbool2_t mask, vint8m4_t op1, size_t vl)
{
  return vmerge_vxm_i8m4_tu(mask, dest, op1, -16, vl);
}

/*
** test_vmerge_vxm_i8m4_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vint8m4_t 
test_vmerge_vxm_i8m4_tu_15(vint8m4_t dest, vbool2_t mask, vint8m4_t op1, size_t vl)
{
  return vmerge_vxm_i8m4_tu(mask, dest, op1, 15, vl);
}

/*
** test_vmerge_vxm_i8m4_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vint8m4_t 
test_vmerge_vxm_i8m4_tu_vl31_m16(vint8m4_t dest, vbool2_t mask, vint8m4_t op1)
{
  return vmerge_vxm_i8m4_tu(mask, dest, op1, -16, 31);
}

/*
** test_vmerge_vxm_i8m4_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vint8m4_t 
test_vmerge_vxm_i8m4_tu_vl31_15(vint8m4_t dest, vbool2_t mask, vint8m4_t op1)
{
  return vmerge_vxm_i8m4_tu(mask, dest, op1, 15, 31);
}

/*
** test_vmerge_vxm_i8m8_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vint8m8_t 
test_vmerge_vxm_i8m8_tu_m16(vint8m8_t dest, vbool1_t mask, vint8m8_t op1, size_t vl)
{
  return vmerge_vxm_i8m8_tu(mask, dest, op1, -16, vl);
}

/*
** test_vmerge_vxm_i8m8_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vint8m8_t 
test_vmerge_vxm_i8m8_tu_15(vint8m8_t dest, vbool1_t mask, vint8m8_t op1, size_t vl)
{
  return vmerge_vxm_i8m8_tu(mask, dest, op1, 15, vl);
}

/*
** test_vmerge_vxm_i8m8_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vint8m8_t 
test_vmerge_vxm_i8m8_tu_vl31_m16(vint8m8_t dest, vbool1_t mask, vint8m8_t op1)
{
  return vmerge_vxm_i8m8_tu(mask, dest, op1, -16, 31);
}

/*
** test_vmerge_vxm_i8m8_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vint8m8_t 
test_vmerge_vxm_i8m8_tu_vl31_15(vint8m8_t dest, vbool1_t mask, vint8m8_t op1)
{
  return vmerge_vxm_i8m8_tu(mask, dest, op1, 15, 31);
}

/*
** test_vmerge_vxm_i16mf4_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint16mf4_t 
test_vmerge_vxm_i16mf4_tu_m16(vint16mf4_t dest, vbool64_t mask, vint16mf4_t op1, size_t vl)
{
  return vmerge_vxm_i16mf4_tu(mask, dest, op1, -16, vl);
}

/*
** test_vmerge_vxm_i16mf4_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint16mf4_t 
test_vmerge_vxm_i16mf4_tu_15(vint16mf4_t dest, vbool64_t mask, vint16mf4_t op1, size_t vl)
{
  return vmerge_vxm_i16mf4_tu(mask, dest, op1, 15, vl);
}

/*
** test_vmerge_vxm_i16mf4_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint16mf4_t 
test_vmerge_vxm_i16mf4_tu_vl31_m16(vint16mf4_t dest, vbool64_t mask, vint16mf4_t op1)
{
  return vmerge_vxm_i16mf4_tu(mask, dest, op1, -16, 31);
}

/*
** test_vmerge_vxm_i16mf4_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint16mf4_t 
test_vmerge_vxm_i16mf4_tu_vl31_15(vint16mf4_t dest, vbool64_t mask, vint16mf4_t op1)
{
  return vmerge_vxm_i16mf4_tu(mask, dest, op1, 15, 31);
}

/*
** test_vmerge_vxm_i16mf2_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint16mf2_t 
test_vmerge_vxm_i16mf2_tu_m16(vint16mf2_t dest, vbool32_t mask, vint16mf2_t op1, size_t vl)
{
  return vmerge_vxm_i16mf2_tu(mask, dest, op1, -16, vl);
}

/*
** test_vmerge_vxm_i16mf2_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint16mf2_t 
test_vmerge_vxm_i16mf2_tu_15(vint16mf2_t dest, vbool32_t mask, vint16mf2_t op1, size_t vl)
{
  return vmerge_vxm_i16mf2_tu(mask, dest, op1, 15, vl);
}

/*
** test_vmerge_vxm_i16mf2_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint16mf2_t 
test_vmerge_vxm_i16mf2_tu_vl31_m16(vint16mf2_t dest, vbool32_t mask, vint16mf2_t op1)
{
  return vmerge_vxm_i16mf2_tu(mask, dest, op1, -16, 31);
}

/*
** test_vmerge_vxm_i16mf2_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint16mf2_t 
test_vmerge_vxm_i16mf2_tu_vl31_15(vint16mf2_t dest, vbool32_t mask, vint16mf2_t op1)
{
  return vmerge_vxm_i16mf2_tu(mask, dest, op1, 15, 31);
}

/*
** test_vmerge_vxm_i16m1_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint16m1_t 
test_vmerge_vxm_i16m1_tu_m16(vint16m1_t dest, vbool16_t mask, vint16m1_t op1, size_t vl)
{
  return vmerge_vxm_i16m1_tu(mask, dest, op1, -16, vl);
}

/*
** test_vmerge_vxm_i16m1_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint16m1_t 
test_vmerge_vxm_i16m1_tu_15(vint16m1_t dest, vbool16_t mask, vint16m1_t op1, size_t vl)
{
  return vmerge_vxm_i16m1_tu(mask, dest, op1, 15, vl);
}

/*
** test_vmerge_vxm_i16m1_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint16m1_t 
test_vmerge_vxm_i16m1_tu_vl31_m16(vint16m1_t dest, vbool16_t mask, vint16m1_t op1)
{
  return vmerge_vxm_i16m1_tu(mask, dest, op1, -16, 31);
}

/*
** test_vmerge_vxm_i16m1_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint16m1_t 
test_vmerge_vxm_i16m1_tu_vl31_15(vint16m1_t dest, vbool16_t mask, vint16m1_t op1)
{
  return vmerge_vxm_i16m1_tu(mask, dest, op1, 15, 31);
}

/*
** test_vmerge_vxm_i16m2_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vint16m2_t 
test_vmerge_vxm_i16m2_tu_m16(vint16m2_t dest, vbool8_t mask, vint16m2_t op1, size_t vl)
{
  return vmerge_vxm_i16m2_tu(mask, dest, op1, -16, vl);
}

/*
** test_vmerge_vxm_i16m2_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vint16m2_t 
test_vmerge_vxm_i16m2_tu_15(vint16m2_t dest, vbool8_t mask, vint16m2_t op1, size_t vl)
{
  return vmerge_vxm_i16m2_tu(mask, dest, op1, 15, vl);
}

/*
** test_vmerge_vxm_i16m2_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vint16m2_t 
test_vmerge_vxm_i16m2_tu_vl31_m16(vint16m2_t dest, vbool8_t mask, vint16m2_t op1)
{
  return vmerge_vxm_i16m2_tu(mask, dest, op1, -16, 31);
}

/*
** test_vmerge_vxm_i16m2_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vint16m2_t 
test_vmerge_vxm_i16m2_tu_vl31_15(vint16m2_t dest, vbool8_t mask, vint16m2_t op1)
{
  return vmerge_vxm_i16m2_tu(mask, dest, op1, 15, 31);
}

/*
** test_vmerge_vxm_i16m4_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vint16m4_t 
test_vmerge_vxm_i16m4_tu_m16(vint16m4_t dest, vbool4_t mask, vint16m4_t op1, size_t vl)
{
  return vmerge_vxm_i16m4_tu(mask, dest, op1, -16, vl);
}

/*
** test_vmerge_vxm_i16m4_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vint16m4_t 
test_vmerge_vxm_i16m4_tu_15(vint16m4_t dest, vbool4_t mask, vint16m4_t op1, size_t vl)
{
  return vmerge_vxm_i16m4_tu(mask, dest, op1, 15, vl);
}

/*
** test_vmerge_vxm_i16m4_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vint16m4_t 
test_vmerge_vxm_i16m4_tu_vl31_m16(vint16m4_t dest, vbool4_t mask, vint16m4_t op1)
{
  return vmerge_vxm_i16m4_tu(mask, dest, op1, -16, 31);
}

/*
** test_vmerge_vxm_i16m4_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vint16m4_t 
test_vmerge_vxm_i16m4_tu_vl31_15(vint16m4_t dest, vbool4_t mask, vint16m4_t op1)
{
  return vmerge_vxm_i16m4_tu(mask, dest, op1, 15, 31);
}

/*
** test_vmerge_vxm_i16m8_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vint16m8_t 
test_vmerge_vxm_i16m8_tu_m16(vint16m8_t dest, vbool2_t mask, vint16m8_t op1, size_t vl)
{
  return vmerge_vxm_i16m8_tu(mask, dest, op1, -16, vl);
}

/*
** test_vmerge_vxm_i16m8_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vint16m8_t 
test_vmerge_vxm_i16m8_tu_15(vint16m8_t dest, vbool2_t mask, vint16m8_t op1, size_t vl)
{
  return vmerge_vxm_i16m8_tu(mask, dest, op1, 15, vl);
}

/*
** test_vmerge_vxm_i16m8_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vint16m8_t 
test_vmerge_vxm_i16m8_tu_vl31_m16(vint16m8_t dest, vbool2_t mask, vint16m8_t op1)
{
  return vmerge_vxm_i16m8_tu(mask, dest, op1, -16, 31);
}

/*
** test_vmerge_vxm_i16m8_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vint16m8_t 
test_vmerge_vxm_i16m8_tu_vl31_15(vint16m8_t dest, vbool2_t mask, vint16m8_t op1)
{
  return vmerge_vxm_i16m8_tu(mask, dest, op1, 15, 31);
}

/*
** test_vmerge_vxm_i32mf2_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint32mf2_t 
test_vmerge_vxm_i32mf2_tu_m16(vint32mf2_t dest, vbool64_t mask, vint32mf2_t op1, size_t vl)
{
  return vmerge_vxm_i32mf2_tu(mask, dest, op1, -16, vl);
}

/*
** test_vmerge_vxm_i32mf2_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint32mf2_t 
test_vmerge_vxm_i32mf2_tu_15(vint32mf2_t dest, vbool64_t mask, vint32mf2_t op1, size_t vl)
{
  return vmerge_vxm_i32mf2_tu(mask, dest, op1, 15, vl);
}

/*
** test_vmerge_vxm_i32mf2_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint32mf2_t 
test_vmerge_vxm_i32mf2_tu_vl31_m16(vint32mf2_t dest, vbool64_t mask, vint32mf2_t op1)
{
  return vmerge_vxm_i32mf2_tu(mask, dest, op1, -16, 31);
}

/*
** test_vmerge_vxm_i32mf2_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint32mf2_t 
test_vmerge_vxm_i32mf2_tu_vl31_15(vint32mf2_t dest, vbool64_t mask, vint32mf2_t op1)
{
  return vmerge_vxm_i32mf2_tu(mask, dest, op1, 15, 31);
}

/*
** test_vmerge_vxm_i32m1_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint32m1_t 
test_vmerge_vxm_i32m1_tu_m16(vint32m1_t dest, vbool32_t mask, vint32m1_t op1, size_t vl)
{
  return vmerge_vxm_i32m1_tu(mask, dest, op1, -16, vl);
}

/*
** test_vmerge_vxm_i32m1_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint32m1_t 
test_vmerge_vxm_i32m1_tu_15(vint32m1_t dest, vbool32_t mask, vint32m1_t op1, size_t vl)
{
  return vmerge_vxm_i32m1_tu(mask, dest, op1, 15, vl);
}

/*
** test_vmerge_vxm_i32m1_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint32m1_t 
test_vmerge_vxm_i32m1_tu_vl31_m16(vint32m1_t dest, vbool32_t mask, vint32m1_t op1)
{
  return vmerge_vxm_i32m1_tu(mask, dest, op1, -16, 31);
}

/*
** test_vmerge_vxm_i32m1_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint32m1_t 
test_vmerge_vxm_i32m1_tu_vl31_15(vint32m1_t dest, vbool32_t mask, vint32m1_t op1)
{
  return vmerge_vxm_i32m1_tu(mask, dest, op1, 15, 31);
}

/*
** test_vmerge_vxm_i32m2_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vint32m2_t 
test_vmerge_vxm_i32m2_tu_m16(vint32m2_t dest, vbool16_t mask, vint32m2_t op1, size_t vl)
{
  return vmerge_vxm_i32m2_tu(mask, dest, op1, -16, vl);
}

/*
** test_vmerge_vxm_i32m2_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vint32m2_t 
test_vmerge_vxm_i32m2_tu_15(vint32m2_t dest, vbool16_t mask, vint32m2_t op1, size_t vl)
{
  return vmerge_vxm_i32m2_tu(mask, dest, op1, 15, vl);
}

/*
** test_vmerge_vxm_i32m2_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vint32m2_t 
test_vmerge_vxm_i32m2_tu_vl31_m16(vint32m2_t dest, vbool16_t mask, vint32m2_t op1)
{
  return vmerge_vxm_i32m2_tu(mask, dest, op1, -16, 31);
}

/*
** test_vmerge_vxm_i32m2_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vint32m2_t 
test_vmerge_vxm_i32m2_tu_vl31_15(vint32m2_t dest, vbool16_t mask, vint32m2_t op1)
{
  return vmerge_vxm_i32m2_tu(mask, dest, op1, 15, 31);
}

/*
** test_vmerge_vxm_i32m4_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vint32m4_t 
test_vmerge_vxm_i32m4_tu_m16(vint32m4_t dest, vbool8_t mask, vint32m4_t op1, size_t vl)
{
  return vmerge_vxm_i32m4_tu(mask, dest, op1, -16, vl);
}

/*
** test_vmerge_vxm_i32m4_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vint32m4_t 
test_vmerge_vxm_i32m4_tu_15(vint32m4_t dest, vbool8_t mask, vint32m4_t op1, size_t vl)
{
  return vmerge_vxm_i32m4_tu(mask, dest, op1, 15, vl);
}

/*
** test_vmerge_vxm_i32m4_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vint32m4_t 
test_vmerge_vxm_i32m4_tu_vl31_m16(vint32m4_t dest, vbool8_t mask, vint32m4_t op1)
{
  return vmerge_vxm_i32m4_tu(mask, dest, op1, -16, 31);
}

/*
** test_vmerge_vxm_i32m4_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vint32m4_t 
test_vmerge_vxm_i32m4_tu_vl31_15(vint32m4_t dest, vbool8_t mask, vint32m4_t op1)
{
  return vmerge_vxm_i32m4_tu(mask, dest, op1, 15, 31);
}

/*
** test_vmerge_vxm_i32m8_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vint32m8_t 
test_vmerge_vxm_i32m8_tu_m16(vint32m8_t dest, vbool4_t mask, vint32m8_t op1, size_t vl)
{
  return vmerge_vxm_i32m8_tu(mask, dest, op1, -16, vl);
}

/*
** test_vmerge_vxm_i32m8_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vint32m8_t 
test_vmerge_vxm_i32m8_tu_15(vint32m8_t dest, vbool4_t mask, vint32m8_t op1, size_t vl)
{
  return vmerge_vxm_i32m8_tu(mask, dest, op1, 15, vl);
}

/*
** test_vmerge_vxm_i32m8_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vint32m8_t 
test_vmerge_vxm_i32m8_tu_vl31_m16(vint32m8_t dest, vbool4_t mask, vint32m8_t op1)
{
  return vmerge_vxm_i32m8_tu(mask, dest, op1, -16, 31);
}

/*
** test_vmerge_vxm_i32m8_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vint32m8_t 
test_vmerge_vxm_i32m8_tu_vl31_15(vint32m8_t dest, vbool4_t mask, vint32m8_t op1)
{
  return vmerge_vxm_i32m8_tu(mask, dest, op1, 15, 31);
}

/*
** test_vmerge_vxm_i64m1_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint64m1_t 
test_vmerge_vxm_i64m1_tu_m16(vint64m1_t dest, vbool64_t mask, vint64m1_t op1, size_t vl)
{
  return vmerge_vxm_i64m1_tu(mask, dest, op1, -16, vl);
}

/*
** test_vmerge_vxm_i64m1_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint64m1_t 
test_vmerge_vxm_i64m1_tu_15(vint64m1_t dest, vbool64_t mask, vint64m1_t op1, size_t vl)
{
  return vmerge_vxm_i64m1_tu(mask, dest, op1, 15, vl);
}

/*
** test_vmerge_vxm_i64m1_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint64m1_t 
test_vmerge_vxm_i64m1_tu_vl31_m16(vint64m1_t dest, vbool64_t mask, vint64m1_t op1)
{
  return vmerge_vxm_i64m1_tu(mask, dest, op1, -16, 31);
}

/*
** test_vmerge_vxm_i64m1_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint64m1_t 
test_vmerge_vxm_i64m1_tu_vl31_15(vint64m1_t dest, vbool64_t mask, vint64m1_t op1)
{
  return vmerge_vxm_i64m1_tu(mask, dest, op1, 15, 31);
}

/*
** test_vmerge_vxm_i64m2_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vint64m2_t 
test_vmerge_vxm_i64m2_tu_m16(vint64m2_t dest, vbool32_t mask, vint64m2_t op1, size_t vl)
{
  return vmerge_vxm_i64m2_tu(mask, dest, op1, -16, vl);
}

/*
** test_vmerge_vxm_i64m2_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vint64m2_t 
test_vmerge_vxm_i64m2_tu_15(vint64m2_t dest, vbool32_t mask, vint64m2_t op1, size_t vl)
{
  return vmerge_vxm_i64m2_tu(mask, dest, op1, 15, vl);
}

/*
** test_vmerge_vxm_i64m2_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vint64m2_t 
test_vmerge_vxm_i64m2_tu_vl31_m16(vint64m2_t dest, vbool32_t mask, vint64m2_t op1)
{
  return vmerge_vxm_i64m2_tu(mask, dest, op1, -16, 31);
}

/*
** test_vmerge_vxm_i64m2_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vint64m2_t 
test_vmerge_vxm_i64m2_tu_vl31_15(vint64m2_t dest, vbool32_t mask, vint64m2_t op1)
{
  return vmerge_vxm_i64m2_tu(mask, dest, op1, 15, 31);
}

/*
** test_vmerge_vxm_i64m4_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vint64m4_t 
test_vmerge_vxm_i64m4_tu_m16(vint64m4_t dest, vbool16_t mask, vint64m4_t op1, size_t vl)
{
  return vmerge_vxm_i64m4_tu(mask, dest, op1, -16, vl);
}

/*
** test_vmerge_vxm_i64m4_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vint64m4_t 
test_vmerge_vxm_i64m4_tu_15(vint64m4_t dest, vbool16_t mask, vint64m4_t op1, size_t vl)
{
  return vmerge_vxm_i64m4_tu(mask, dest, op1, 15, vl);
}

/*
** test_vmerge_vxm_i64m4_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vint64m4_t 
test_vmerge_vxm_i64m4_tu_vl31_m16(vint64m4_t dest, vbool16_t mask, vint64m4_t op1)
{
  return vmerge_vxm_i64m4_tu(mask, dest, op1, -16, 31);
}

/*
** test_vmerge_vxm_i64m4_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vint64m4_t 
test_vmerge_vxm_i64m4_tu_vl31_15(vint64m4_t dest, vbool16_t mask, vint64m4_t op1)
{
  return vmerge_vxm_i64m4_tu(mask, dest, op1, 15, 31);
}

/*
** test_vmerge_vxm_i64m8_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vint64m8_t 
test_vmerge_vxm_i64m8_tu_m16(vint64m8_t dest, vbool8_t mask, vint64m8_t op1, size_t vl)
{
  return vmerge_vxm_i64m8_tu(mask, dest, op1, -16, vl);
}

/*
** test_vmerge_vxm_i64m8_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vint64m8_t 
test_vmerge_vxm_i64m8_tu_15(vint64m8_t dest, vbool8_t mask, vint64m8_t op1, size_t vl)
{
  return vmerge_vxm_i64m8_tu(mask, dest, op1, 15, vl);
}

/*
** test_vmerge_vxm_i64m8_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vint64m8_t 
test_vmerge_vxm_i64m8_tu_vl31_m16(vint64m8_t dest, vbool8_t mask, vint64m8_t op1)
{
  return vmerge_vxm_i64m8_tu(mask, dest, op1, -16, 31);
}

/*
** test_vmerge_vxm_i64m8_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vint64m8_t 
test_vmerge_vxm_i64m8_tu_vl31_15(vint64m8_t dest, vbool8_t mask, vint64m8_t op1)
{
  return vmerge_vxm_i64m8_tu(mask, dest, op1, 15, 31);
}

/*
** test_vmerge_vxm_i8mf8_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint8mf8_t 
test_vmerge_vxm_i8mf8_ta_vl32_m16(vbool64_t mask, vint8mf8_t op1)
{
  return vmerge_vxm_i8mf8_ta(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_i8mf8_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint8mf8_t 
test_vmerge_vxm_i8mf8_ta_vl32_15(vbool64_t mask, vint8mf8_t op1)
{
  return vmerge_vxm_i8mf8_ta(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_i8mf4_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint8mf4_t 
test_vmerge_vxm_i8mf4_ta_vl32_m16(vbool32_t mask, vint8mf4_t op1)
{
  return vmerge_vxm_i8mf4_ta(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_i8mf4_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint8mf4_t 
test_vmerge_vxm_i8mf4_ta_vl32_15(vbool32_t mask, vint8mf4_t op1)
{
  return vmerge_vxm_i8mf4_ta(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_i8mf2_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint8mf2_t 
test_vmerge_vxm_i8mf2_ta_vl32_m16(vbool16_t mask, vint8mf2_t op1)
{
  return vmerge_vxm_i8mf2_ta(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_i8mf2_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint8mf2_t 
test_vmerge_vxm_i8mf2_ta_vl32_15(vbool16_t mask, vint8mf2_t op1)
{
  return vmerge_vxm_i8mf2_ta(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_i8m1_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint8m1_t 
test_vmerge_vxm_i8m1_ta_vl32_m16(vbool8_t mask, vint8m1_t op1)
{
  return vmerge_vxm_i8m1_ta(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_i8m1_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint8m1_t 
test_vmerge_vxm_i8m1_ta_vl32_15(vbool8_t mask, vint8m1_t op1)
{
  return vmerge_vxm_i8m1_ta(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_i8m2_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vint8m2_t 
test_vmerge_vxm_i8m2_ta_vl32_m16(vbool4_t mask, vint8m2_t op1)
{
  return vmerge_vxm_i8m2_ta(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_i8m2_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vint8m2_t 
test_vmerge_vxm_i8m2_ta_vl32_15(vbool4_t mask, vint8m2_t op1)
{
  return vmerge_vxm_i8m2_ta(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_i8m4_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vint8m4_t 
test_vmerge_vxm_i8m4_ta_vl32_m16(vbool2_t mask, vint8m4_t op1)
{
  return vmerge_vxm_i8m4_ta(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_i8m4_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vint8m4_t 
test_vmerge_vxm_i8m4_ta_vl32_15(vbool2_t mask, vint8m4_t op1)
{
  return vmerge_vxm_i8m4_ta(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_i8m8_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vint8m8_t 
test_vmerge_vxm_i8m8_ta_vl32_m16(vbool1_t mask, vint8m8_t op1)
{
  return vmerge_vxm_i8m8_ta(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_i8m8_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vint8m8_t 
test_vmerge_vxm_i8m8_ta_vl32_15(vbool1_t mask, vint8m8_t op1)
{
  return vmerge_vxm_i8m8_ta(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_i16mf4_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint16mf4_t 
test_vmerge_vxm_i16mf4_ta_vl32_m16(vbool64_t mask, vint16mf4_t op1)
{
  return vmerge_vxm_i16mf4_ta(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_i16mf4_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint16mf4_t 
test_vmerge_vxm_i16mf4_ta_vl32_15(vbool64_t mask, vint16mf4_t op1)
{
  return vmerge_vxm_i16mf4_ta(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_i16mf2_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint16mf2_t 
test_vmerge_vxm_i16mf2_ta_vl32_m16(vbool32_t mask, vint16mf2_t op1)
{
  return vmerge_vxm_i16mf2_ta(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_i16mf2_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint16mf2_t 
test_vmerge_vxm_i16mf2_ta_vl32_15(vbool32_t mask, vint16mf2_t op1)
{
  return vmerge_vxm_i16mf2_ta(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_i16m1_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint16m1_t 
test_vmerge_vxm_i16m1_ta_vl32_m16(vbool16_t mask, vint16m1_t op1)
{
  return vmerge_vxm_i16m1_ta(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_i16m1_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint16m1_t 
test_vmerge_vxm_i16m1_ta_vl32_15(vbool16_t mask, vint16m1_t op1)
{
  return vmerge_vxm_i16m1_ta(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_i16m2_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vint16m2_t 
test_vmerge_vxm_i16m2_ta_vl32_m16(vbool8_t mask, vint16m2_t op1)
{
  return vmerge_vxm_i16m2_ta(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_i16m2_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vint16m2_t 
test_vmerge_vxm_i16m2_ta_vl32_15(vbool8_t mask, vint16m2_t op1)
{
  return vmerge_vxm_i16m2_ta(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_i16m4_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vint16m4_t 
test_vmerge_vxm_i16m4_ta_vl32_m16(vbool4_t mask, vint16m4_t op1)
{
  return vmerge_vxm_i16m4_ta(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_i16m4_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vint16m4_t 
test_vmerge_vxm_i16m4_ta_vl32_15(vbool4_t mask, vint16m4_t op1)
{
  return vmerge_vxm_i16m4_ta(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_i16m8_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vint16m8_t 
test_vmerge_vxm_i16m8_ta_vl32_m16(vbool2_t mask, vint16m8_t op1)
{
  return vmerge_vxm_i16m8_ta(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_i16m8_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vint16m8_t 
test_vmerge_vxm_i16m8_ta_vl32_15(vbool2_t mask, vint16m8_t op1)
{
  return vmerge_vxm_i16m8_ta(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_i32mf2_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint32mf2_t 
test_vmerge_vxm_i32mf2_ta_vl32_m16(vbool64_t mask, vint32mf2_t op1)
{
  return vmerge_vxm_i32mf2_ta(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_i32mf2_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint32mf2_t 
test_vmerge_vxm_i32mf2_ta_vl32_15(vbool64_t mask, vint32mf2_t op1)
{
  return vmerge_vxm_i32mf2_ta(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_i32m1_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint32m1_t 
test_vmerge_vxm_i32m1_ta_vl32_m16(vbool32_t mask, vint32m1_t op1)
{
  return vmerge_vxm_i32m1_ta(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_i32m1_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint32m1_t 
test_vmerge_vxm_i32m1_ta_vl32_15(vbool32_t mask, vint32m1_t op1)
{
  return vmerge_vxm_i32m1_ta(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_i32m2_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vint32m2_t 
test_vmerge_vxm_i32m2_ta_vl32_m16(vbool16_t mask, vint32m2_t op1)
{
  return vmerge_vxm_i32m2_ta(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_i32m2_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vint32m2_t 
test_vmerge_vxm_i32m2_ta_vl32_15(vbool16_t mask, vint32m2_t op1)
{
  return vmerge_vxm_i32m2_ta(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_i32m4_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vint32m4_t 
test_vmerge_vxm_i32m4_ta_vl32_m16(vbool8_t mask, vint32m4_t op1)
{
  return vmerge_vxm_i32m4_ta(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_i32m4_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vint32m4_t 
test_vmerge_vxm_i32m4_ta_vl32_15(vbool8_t mask, vint32m4_t op1)
{
  return vmerge_vxm_i32m4_ta(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_i32m8_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vint32m8_t 
test_vmerge_vxm_i32m8_ta_vl32_m16(vbool4_t mask, vint32m8_t op1)
{
  return vmerge_vxm_i32m8_ta(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_i32m8_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vint32m8_t 
test_vmerge_vxm_i32m8_ta_vl32_15(vbool4_t mask, vint32m8_t op1)
{
  return vmerge_vxm_i32m8_ta(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_i64m1_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint64m1_t 
test_vmerge_vxm_i64m1_ta_vl32_m16(vbool64_t mask, vint64m1_t op1)
{
  return vmerge_vxm_i64m1_ta(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_i64m1_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint64m1_t 
test_vmerge_vxm_i64m1_ta_vl32_15(vbool64_t mask, vint64m1_t op1)
{
  return vmerge_vxm_i64m1_ta(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_i64m2_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vint64m2_t 
test_vmerge_vxm_i64m2_ta_vl32_m16(vbool32_t mask, vint64m2_t op1)
{
  return vmerge_vxm_i64m2_ta(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_i64m2_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vint64m2_t 
test_vmerge_vxm_i64m2_ta_vl32_15(vbool32_t mask, vint64m2_t op1)
{
  return vmerge_vxm_i64m2_ta(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_i64m4_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vint64m4_t 
test_vmerge_vxm_i64m4_ta_vl32_m16(vbool16_t mask, vint64m4_t op1)
{
  return vmerge_vxm_i64m4_ta(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_i64m4_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vint64m4_t 
test_vmerge_vxm_i64m4_ta_vl32_15(vbool16_t mask, vint64m4_t op1)
{
  return vmerge_vxm_i64m4_ta(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_i64m8_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vint64m8_t 
test_vmerge_vxm_i64m8_ta_vl32_m16(vbool8_t mask, vint64m8_t op1)
{
  return vmerge_vxm_i64m8_ta(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_i64m8_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vint64m8_t 
test_vmerge_vxm_i64m8_ta_vl32_15(vbool8_t mask, vint64m8_t op1)
{
  return vmerge_vxm_i64m8_ta(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_i8mf8_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint8mf8_t 
test_vmerge_vxm_i8mf8_tu_vl32_m16(vint8mf8_t dest, vbool64_t mask, vint8mf8_t op1)
{
  return vmerge_vxm_i8mf8_tu(mask, dest, op1, -16, 32);
}

/*
** test_vmerge_vxm_i8mf8_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint8mf8_t 
test_vmerge_vxm_i8mf8_tu_vl32_15(vint8mf8_t dest, vbool64_t mask, vint8mf8_t op1)
{
  return vmerge_vxm_i8mf8_tu(mask, dest, op1, 15, 32);
}

/*
** test_vmerge_vxm_i8mf4_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint8mf4_t 
test_vmerge_vxm_i8mf4_tu_vl32_m16(vint8mf4_t dest, vbool32_t mask, vint8mf4_t op1)
{
  return vmerge_vxm_i8mf4_tu(mask, dest, op1, -16, 32);
}

/*
** test_vmerge_vxm_i8mf4_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint8mf4_t 
test_vmerge_vxm_i8mf4_tu_vl32_15(vint8mf4_t dest, vbool32_t mask, vint8mf4_t op1)
{
  return vmerge_vxm_i8mf4_tu(mask, dest, op1, 15, 32);
}

/*
** test_vmerge_vxm_i8mf2_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint8mf2_t 
test_vmerge_vxm_i8mf2_tu_vl32_m16(vint8mf2_t dest, vbool16_t mask, vint8mf2_t op1)
{
  return vmerge_vxm_i8mf2_tu(mask, dest, op1, -16, 32);
}

/*
** test_vmerge_vxm_i8mf2_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint8mf2_t 
test_vmerge_vxm_i8mf2_tu_vl32_15(vint8mf2_t dest, vbool16_t mask, vint8mf2_t op1)
{
  return vmerge_vxm_i8mf2_tu(mask, dest, op1, 15, 32);
}

/*
** test_vmerge_vxm_i8m1_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint8m1_t 
test_vmerge_vxm_i8m1_tu_vl32_m16(vint8m1_t dest, vbool8_t mask, vint8m1_t op1)
{
  return vmerge_vxm_i8m1_tu(mask, dest, op1, -16, 32);
}

/*
** test_vmerge_vxm_i8m1_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint8m1_t 
test_vmerge_vxm_i8m1_tu_vl32_15(vint8m1_t dest, vbool8_t mask, vint8m1_t op1)
{
  return vmerge_vxm_i8m1_tu(mask, dest, op1, 15, 32);
}

/*
** test_vmerge_vxm_i8m2_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vint8m2_t 
test_vmerge_vxm_i8m2_tu_vl32_m16(vint8m2_t dest, vbool4_t mask, vint8m2_t op1)
{
  return vmerge_vxm_i8m2_tu(mask, dest, op1, -16, 32);
}

/*
** test_vmerge_vxm_i8m2_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vint8m2_t 
test_vmerge_vxm_i8m2_tu_vl32_15(vint8m2_t dest, vbool4_t mask, vint8m2_t op1)
{
  return vmerge_vxm_i8m2_tu(mask, dest, op1, 15, 32);
}

/*
** test_vmerge_vxm_i8m4_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vint8m4_t 
test_vmerge_vxm_i8m4_tu_vl32_m16(vint8m4_t dest, vbool2_t mask, vint8m4_t op1)
{
  return vmerge_vxm_i8m4_tu(mask, dest, op1, -16, 32);
}

/*
** test_vmerge_vxm_i8m4_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vint8m4_t 
test_vmerge_vxm_i8m4_tu_vl32_15(vint8m4_t dest, vbool2_t mask, vint8m4_t op1)
{
  return vmerge_vxm_i8m4_tu(mask, dest, op1, 15, 32);
}

/*
** test_vmerge_vxm_i8m8_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vint8m8_t 
test_vmerge_vxm_i8m8_tu_vl32_m16(vint8m8_t dest, vbool1_t mask, vint8m8_t op1)
{
  return vmerge_vxm_i8m8_tu(mask, dest, op1, -16, 32);
}

/*
** test_vmerge_vxm_i8m8_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vint8m8_t 
test_vmerge_vxm_i8m8_tu_vl32_15(vint8m8_t dest, vbool1_t mask, vint8m8_t op1)
{
  return vmerge_vxm_i8m8_tu(mask, dest, op1, 15, 32);
}

/*
** test_vmerge_vxm_i16mf4_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint16mf4_t 
test_vmerge_vxm_i16mf4_tu_vl32_m16(vint16mf4_t dest, vbool64_t mask, vint16mf4_t op1)
{
  return vmerge_vxm_i16mf4_tu(mask, dest, op1, -16, 32);
}

/*
** test_vmerge_vxm_i16mf4_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint16mf4_t 
test_vmerge_vxm_i16mf4_tu_vl32_15(vint16mf4_t dest, vbool64_t mask, vint16mf4_t op1)
{
  return vmerge_vxm_i16mf4_tu(mask, dest, op1, 15, 32);
}

/*
** test_vmerge_vxm_i16mf2_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint16mf2_t 
test_vmerge_vxm_i16mf2_tu_vl32_m16(vint16mf2_t dest, vbool32_t mask, vint16mf2_t op1)
{
  return vmerge_vxm_i16mf2_tu(mask, dest, op1, -16, 32);
}

/*
** test_vmerge_vxm_i16mf2_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint16mf2_t 
test_vmerge_vxm_i16mf2_tu_vl32_15(vint16mf2_t dest, vbool32_t mask, vint16mf2_t op1)
{
  return vmerge_vxm_i16mf2_tu(mask, dest, op1, 15, 32);
}

/*
** test_vmerge_vxm_i16m1_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint16m1_t 
test_vmerge_vxm_i16m1_tu_vl32_m16(vint16m1_t dest, vbool16_t mask, vint16m1_t op1)
{
  return vmerge_vxm_i16m1_tu(mask, dest, op1, -16, 32);
}

/*
** test_vmerge_vxm_i16m1_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint16m1_t 
test_vmerge_vxm_i16m1_tu_vl32_15(vint16m1_t dest, vbool16_t mask, vint16m1_t op1)
{
  return vmerge_vxm_i16m1_tu(mask, dest, op1, 15, 32);
}

/*
** test_vmerge_vxm_i16m2_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vint16m2_t 
test_vmerge_vxm_i16m2_tu_vl32_m16(vint16m2_t dest, vbool8_t mask, vint16m2_t op1)
{
  return vmerge_vxm_i16m2_tu(mask, dest, op1, -16, 32);
}

/*
** test_vmerge_vxm_i16m2_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vint16m2_t 
test_vmerge_vxm_i16m2_tu_vl32_15(vint16m2_t dest, vbool8_t mask, vint16m2_t op1)
{
  return vmerge_vxm_i16m2_tu(mask, dest, op1, 15, 32);
}

/*
** test_vmerge_vxm_i16m4_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vint16m4_t 
test_vmerge_vxm_i16m4_tu_vl32_m16(vint16m4_t dest, vbool4_t mask, vint16m4_t op1)
{
  return vmerge_vxm_i16m4_tu(mask, dest, op1, -16, 32);
}

/*
** test_vmerge_vxm_i16m4_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vint16m4_t 
test_vmerge_vxm_i16m4_tu_vl32_15(vint16m4_t dest, vbool4_t mask, vint16m4_t op1)
{
  return vmerge_vxm_i16m4_tu(mask, dest, op1, 15, 32);
}

/*
** test_vmerge_vxm_i16m8_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vint16m8_t 
test_vmerge_vxm_i16m8_tu_vl32_m16(vint16m8_t dest, vbool2_t mask, vint16m8_t op1)
{
  return vmerge_vxm_i16m8_tu(mask, dest, op1, -16, 32);
}

/*
** test_vmerge_vxm_i16m8_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vint16m8_t 
test_vmerge_vxm_i16m8_tu_vl32_15(vint16m8_t dest, vbool2_t mask, vint16m8_t op1)
{
  return vmerge_vxm_i16m8_tu(mask, dest, op1, 15, 32);
}

/*
** test_vmerge_vxm_i32mf2_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint32mf2_t 
test_vmerge_vxm_i32mf2_tu_vl32_m16(vint32mf2_t dest, vbool64_t mask, vint32mf2_t op1)
{
  return vmerge_vxm_i32mf2_tu(mask, dest, op1, -16, 32);
}

/*
** test_vmerge_vxm_i32mf2_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint32mf2_t 
test_vmerge_vxm_i32mf2_tu_vl32_15(vint32mf2_t dest, vbool64_t mask, vint32mf2_t op1)
{
  return vmerge_vxm_i32mf2_tu(mask, dest, op1, 15, 32);
}

/*
** test_vmerge_vxm_i32m1_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint32m1_t 
test_vmerge_vxm_i32m1_tu_vl32_m16(vint32m1_t dest, vbool32_t mask, vint32m1_t op1)
{
  return vmerge_vxm_i32m1_tu(mask, dest, op1, -16, 32);
}

/*
** test_vmerge_vxm_i32m1_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint32m1_t 
test_vmerge_vxm_i32m1_tu_vl32_15(vint32m1_t dest, vbool32_t mask, vint32m1_t op1)
{
  return vmerge_vxm_i32m1_tu(mask, dest, op1, 15, 32);
}

/*
** test_vmerge_vxm_i32m2_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vint32m2_t 
test_vmerge_vxm_i32m2_tu_vl32_m16(vint32m2_t dest, vbool16_t mask, vint32m2_t op1)
{
  return vmerge_vxm_i32m2_tu(mask, dest, op1, -16, 32);
}

/*
** test_vmerge_vxm_i32m2_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vint32m2_t 
test_vmerge_vxm_i32m2_tu_vl32_15(vint32m2_t dest, vbool16_t mask, vint32m2_t op1)
{
  return vmerge_vxm_i32m2_tu(mask, dest, op1, 15, 32);
}

/*
** test_vmerge_vxm_i32m4_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vint32m4_t 
test_vmerge_vxm_i32m4_tu_vl32_m16(vint32m4_t dest, vbool8_t mask, vint32m4_t op1)
{
  return vmerge_vxm_i32m4_tu(mask, dest, op1, -16, 32);
}

/*
** test_vmerge_vxm_i32m4_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vint32m4_t 
test_vmerge_vxm_i32m4_tu_vl32_15(vint32m4_t dest, vbool8_t mask, vint32m4_t op1)
{
  return vmerge_vxm_i32m4_tu(mask, dest, op1, 15, 32);
}

/*
** test_vmerge_vxm_i32m8_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vint32m8_t 
test_vmerge_vxm_i32m8_tu_vl32_m16(vint32m8_t dest, vbool4_t mask, vint32m8_t op1)
{
  return vmerge_vxm_i32m8_tu(mask, dest, op1, -16, 32);
}

/*
** test_vmerge_vxm_i32m8_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vint32m8_t 
test_vmerge_vxm_i32m8_tu_vl32_15(vint32m8_t dest, vbool4_t mask, vint32m8_t op1)
{
  return vmerge_vxm_i32m8_tu(mask, dest, op1, 15, 32);
}

/*
** test_vmerge_vxm_i64m1_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint64m1_t 
test_vmerge_vxm_i64m1_tu_vl32_m16(vint64m1_t dest, vbool64_t mask, vint64m1_t op1)
{
  return vmerge_vxm_i64m1_tu(mask, dest, op1, -16, 32);
}

/*
** test_vmerge_vxm_i64m1_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint64m1_t 
test_vmerge_vxm_i64m1_tu_vl32_15(vint64m1_t dest, vbool64_t mask, vint64m1_t op1)
{
  return vmerge_vxm_i64m1_tu(mask, dest, op1, 15, 32);
}

/*
** test_vmerge_vxm_i64m2_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vint64m2_t 
test_vmerge_vxm_i64m2_tu_vl32_m16(vint64m2_t dest, vbool32_t mask, vint64m2_t op1)
{
  return vmerge_vxm_i64m2_tu(mask, dest, op1, -16, 32);
}

/*
** test_vmerge_vxm_i64m2_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vint64m2_t 
test_vmerge_vxm_i64m2_tu_vl32_15(vint64m2_t dest, vbool32_t mask, vint64m2_t op1)
{
  return vmerge_vxm_i64m2_tu(mask, dest, op1, 15, 32);
}

/*
** test_vmerge_vxm_i64m4_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vint64m4_t 
test_vmerge_vxm_i64m4_tu_vl32_m16(vint64m4_t dest, vbool16_t mask, vint64m4_t op1)
{
  return vmerge_vxm_i64m4_tu(mask, dest, op1, -16, 32);
}

/*
** test_vmerge_vxm_i64m4_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vint64m4_t 
test_vmerge_vxm_i64m4_tu_vl32_15(vint64m4_t dest, vbool16_t mask, vint64m4_t op1)
{
  return vmerge_vxm_i64m4_tu(mask, dest, op1, 15, 32);
}

/*
** test_vmerge_vxm_i64m8_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vint64m8_t 
test_vmerge_vxm_i64m8_tu_vl32_m16(vint64m8_t dest, vbool8_t mask, vint64m8_t op1)
{
  return vmerge_vxm_i64m8_tu(mask, dest, op1, -16, 32);
}

/*
** test_vmerge_vxm_i64m8_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vint64m8_t 
test_vmerge_vxm_i64m8_tu_vl32_15(vint64m8_t dest, vbool8_t mask, vint64m8_t op1)
{
  return vmerge_vxm_i64m8_tu(mask, dest, op1, 15, 32);
}

/*
** test_vmerge_vxm_i8mf8_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint8mf8_t 
test_vmerge_vxm_i8mf8_vl32_m16(vbool64_t mask, vint8mf8_t op1)
{
  return vmerge_vxm_i8mf8(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_i8mf8_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint8mf8_t 
test_vmerge_vxm_i8mf8_vl32_15(vbool64_t mask, vint8mf8_t op1)
{
  return vmerge_vxm_i8mf8(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_i8mf4_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint8mf4_t 
test_vmerge_vxm_i8mf4_vl32_m16(vbool32_t mask, vint8mf4_t op1)
{
  return vmerge_vxm_i8mf4(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_i8mf4_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint8mf4_t 
test_vmerge_vxm_i8mf4_vl32_15(vbool32_t mask, vint8mf4_t op1)
{
  return vmerge_vxm_i8mf4(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_i8mf2_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint8mf2_t 
test_vmerge_vxm_i8mf2_vl32_m16(vbool16_t mask, vint8mf2_t op1)
{
  return vmerge_vxm_i8mf2(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_i8mf2_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint8mf2_t 
test_vmerge_vxm_i8mf2_vl32_15(vbool16_t mask, vint8mf2_t op1)
{
  return vmerge_vxm_i8mf2(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_i8m1_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint8m1_t 
test_vmerge_vxm_i8m1_vl32_m16(vbool8_t mask, vint8m1_t op1)
{
  return vmerge_vxm_i8m1(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_i8m1_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint8m1_t 
test_vmerge_vxm_i8m1_vl32_15(vbool8_t mask, vint8m1_t op1)
{
  return vmerge_vxm_i8m1(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_i8m2_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vint8m2_t 
test_vmerge_vxm_i8m2_vl32_m16(vbool4_t mask, vint8m2_t op1)
{
  return vmerge_vxm_i8m2(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_i8m2_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vint8m2_t 
test_vmerge_vxm_i8m2_vl32_15(vbool4_t mask, vint8m2_t op1)
{
  return vmerge_vxm_i8m2(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_i8m4_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vint8m4_t 
test_vmerge_vxm_i8m4_vl32_m16(vbool2_t mask, vint8m4_t op1)
{
  return vmerge_vxm_i8m4(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_i8m4_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vint8m4_t 
test_vmerge_vxm_i8m4_vl32_15(vbool2_t mask, vint8m4_t op1)
{
  return vmerge_vxm_i8m4(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_i8m8_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vint8m8_t 
test_vmerge_vxm_i8m8_vl32_m16(vbool1_t mask, vint8m8_t op1)
{
  return vmerge_vxm_i8m8(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_i8m8_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vint8m8_t 
test_vmerge_vxm_i8m8_vl32_15(vbool1_t mask, vint8m8_t op1)
{
  return vmerge_vxm_i8m8(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_i16mf4_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint16mf4_t 
test_vmerge_vxm_i16mf4_vl32_m16(vbool64_t mask, vint16mf4_t op1)
{
  return vmerge_vxm_i16mf4(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_i16mf4_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint16mf4_t 
test_vmerge_vxm_i16mf4_vl32_15(vbool64_t mask, vint16mf4_t op1)
{
  return vmerge_vxm_i16mf4(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_i16mf2_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint16mf2_t 
test_vmerge_vxm_i16mf2_vl32_m16(vbool32_t mask, vint16mf2_t op1)
{
  return vmerge_vxm_i16mf2(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_i16mf2_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint16mf2_t 
test_vmerge_vxm_i16mf2_vl32_15(vbool32_t mask, vint16mf2_t op1)
{
  return vmerge_vxm_i16mf2(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_i16m1_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint16m1_t 
test_vmerge_vxm_i16m1_vl32_m16(vbool16_t mask, vint16m1_t op1)
{
  return vmerge_vxm_i16m1(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_i16m1_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint16m1_t 
test_vmerge_vxm_i16m1_vl32_15(vbool16_t mask, vint16m1_t op1)
{
  return vmerge_vxm_i16m1(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_i16m2_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vint16m2_t 
test_vmerge_vxm_i16m2_vl32_m16(vbool8_t mask, vint16m2_t op1)
{
  return vmerge_vxm_i16m2(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_i16m2_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vint16m2_t 
test_vmerge_vxm_i16m2_vl32_15(vbool8_t mask, vint16m2_t op1)
{
  return vmerge_vxm_i16m2(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_i16m4_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vint16m4_t 
test_vmerge_vxm_i16m4_vl32_m16(vbool4_t mask, vint16m4_t op1)
{
  return vmerge_vxm_i16m4(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_i16m4_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vint16m4_t 
test_vmerge_vxm_i16m4_vl32_15(vbool4_t mask, vint16m4_t op1)
{
  return vmerge_vxm_i16m4(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_i16m8_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vint16m8_t 
test_vmerge_vxm_i16m8_vl32_m16(vbool2_t mask, vint16m8_t op1)
{
  return vmerge_vxm_i16m8(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_i16m8_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vint16m8_t 
test_vmerge_vxm_i16m8_vl32_15(vbool2_t mask, vint16m8_t op1)
{
  return vmerge_vxm_i16m8(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_i32mf2_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint32mf2_t 
test_vmerge_vxm_i32mf2_vl32_m16(vbool64_t mask, vint32mf2_t op1)
{
  return vmerge_vxm_i32mf2(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_i32mf2_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint32mf2_t 
test_vmerge_vxm_i32mf2_vl32_15(vbool64_t mask, vint32mf2_t op1)
{
  return vmerge_vxm_i32mf2(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_i32m1_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint32m1_t 
test_vmerge_vxm_i32m1_vl32_m16(vbool32_t mask, vint32m1_t op1)
{
  return vmerge_vxm_i32m1(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_i32m1_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint32m1_t 
test_vmerge_vxm_i32m1_vl32_15(vbool32_t mask, vint32m1_t op1)
{
  return vmerge_vxm_i32m1(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_i32m2_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vint32m2_t 
test_vmerge_vxm_i32m2_vl32_m16(vbool16_t mask, vint32m2_t op1)
{
  return vmerge_vxm_i32m2(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_i32m2_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vint32m2_t 
test_vmerge_vxm_i32m2_vl32_15(vbool16_t mask, vint32m2_t op1)
{
  return vmerge_vxm_i32m2(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_i32m4_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vint32m4_t 
test_vmerge_vxm_i32m4_vl32_m16(vbool8_t mask, vint32m4_t op1)
{
  return vmerge_vxm_i32m4(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_i32m4_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vint32m4_t 
test_vmerge_vxm_i32m4_vl32_15(vbool8_t mask, vint32m4_t op1)
{
  return vmerge_vxm_i32m4(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_i32m8_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vint32m8_t 
test_vmerge_vxm_i32m8_vl32_m16(vbool4_t mask, vint32m8_t op1)
{
  return vmerge_vxm_i32m8(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_i32m8_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vint32m8_t 
test_vmerge_vxm_i32m8_vl32_15(vbool4_t mask, vint32m8_t op1)
{
  return vmerge_vxm_i32m8(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_i64m1_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vint64m1_t 
test_vmerge_vxm_i64m1_vl32_m16(vbool64_t mask, vint64m1_t op1)
{
  return vmerge_vxm_i64m1(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_i64m1_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vint64m1_t 
test_vmerge_vxm_i64m1_vl32_15(vbool64_t mask, vint64m1_t op1)
{
  return vmerge_vxm_i64m1(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_i64m2_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vint64m2_t 
test_vmerge_vxm_i64m2_vl32_m16(vbool32_t mask, vint64m2_t op1)
{
  return vmerge_vxm_i64m2(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_i64m2_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vint64m2_t 
test_vmerge_vxm_i64m2_vl32_15(vbool32_t mask, vint64m2_t op1)
{
  return vmerge_vxm_i64m2(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_i64m4_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vint64m4_t 
test_vmerge_vxm_i64m4_vl32_m16(vbool16_t mask, vint64m4_t op1)
{
  return vmerge_vxm_i64m4(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_i64m4_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vint64m4_t 
test_vmerge_vxm_i64m4_vl32_15(vbool16_t mask, vint64m4_t op1)
{
  return vmerge_vxm_i64m4(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_i64m8_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vint64m8_t 
test_vmerge_vxm_i64m8_vl32_m16(vbool8_t mask, vint64m8_t op1)
{
  return vmerge_vxm_i64m8(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_i64m8_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vint64m8_t 
test_vmerge_vxm_i64m8_vl32_15(vbool8_t mask, vint64m8_t op1)
{
  return vmerge_vxm_i64m8(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_u8mf8_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8mf8_t 
test_vmerge_vxm_u8mf8_m16(vbool64_t mask, vuint8mf8_t op1, size_t vl)
{
  return vmerge_vxm_u8mf8(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_u8mf8_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint8mf8_t 
test_vmerge_vxm_u8mf8_15(vbool64_t mask, vuint8mf8_t op1, size_t vl)
{
  return vmerge_vxm_u8mf8(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_u8mf8_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8mf8_t 
test_vmerge_vxm_u8mf8_vl31_m16(vbool64_t mask, vuint8mf8_t op1)
{
  return vmerge_vxm_u8mf8(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_u8mf8_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint8mf8_t 
test_vmerge_vxm_u8mf8_vl31_15(vbool64_t mask, vuint8mf8_t op1)
{
  return vmerge_vxm_u8mf8(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_u8mf4_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8mf4_t 
test_vmerge_vxm_u8mf4_m16(vbool32_t mask, vuint8mf4_t op1, size_t vl)
{
  return vmerge_vxm_u8mf4(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_u8mf4_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint8mf4_t 
test_vmerge_vxm_u8mf4_15(vbool32_t mask, vuint8mf4_t op1, size_t vl)
{
  return vmerge_vxm_u8mf4(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_u8mf4_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8mf4_t 
test_vmerge_vxm_u8mf4_vl31_m16(vbool32_t mask, vuint8mf4_t op1)
{
  return vmerge_vxm_u8mf4(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_u8mf4_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint8mf4_t 
test_vmerge_vxm_u8mf4_vl31_15(vbool32_t mask, vuint8mf4_t op1)
{
  return vmerge_vxm_u8mf4(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_u8mf2_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8mf2_t 
test_vmerge_vxm_u8mf2_m16(vbool16_t mask, vuint8mf2_t op1, size_t vl)
{
  return vmerge_vxm_u8mf2(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_u8mf2_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint8mf2_t 
test_vmerge_vxm_u8mf2_15(vbool16_t mask, vuint8mf2_t op1, size_t vl)
{
  return vmerge_vxm_u8mf2(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_u8mf2_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8mf2_t 
test_vmerge_vxm_u8mf2_vl31_m16(vbool16_t mask, vuint8mf2_t op1)
{
  return vmerge_vxm_u8mf2(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_u8mf2_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint8mf2_t 
test_vmerge_vxm_u8mf2_vl31_15(vbool16_t mask, vuint8mf2_t op1)
{
  return vmerge_vxm_u8mf2(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_u8m1_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8m1_t 
test_vmerge_vxm_u8m1_m16(vbool8_t mask, vuint8m1_t op1, size_t vl)
{
  return vmerge_vxm_u8m1(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_u8m1_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint8m1_t 
test_vmerge_vxm_u8m1_15(vbool8_t mask, vuint8m1_t op1, size_t vl)
{
  return vmerge_vxm_u8m1(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_u8m1_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8m1_t 
test_vmerge_vxm_u8m1_vl31_m16(vbool8_t mask, vuint8m1_t op1)
{
  return vmerge_vxm_u8m1(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_u8m1_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint8m1_t 
test_vmerge_vxm_u8m1_vl31_15(vbool8_t mask, vuint8m1_t op1)
{
  return vmerge_vxm_u8m1(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_u8m2_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8m2_t 
test_vmerge_vxm_u8m2_m16(vbool4_t mask, vuint8m2_t op1, size_t vl)
{
  return vmerge_vxm_u8m2(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_u8m2_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vuint8m2_t 
test_vmerge_vxm_u8m2_15(vbool4_t mask, vuint8m2_t op1, size_t vl)
{
  return vmerge_vxm_u8m2(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_u8m2_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8m2_t 
test_vmerge_vxm_u8m2_vl31_m16(vbool4_t mask, vuint8m2_t op1)
{
  return vmerge_vxm_u8m2(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_u8m2_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vuint8m2_t 
test_vmerge_vxm_u8m2_vl31_15(vbool4_t mask, vuint8m2_t op1)
{
  return vmerge_vxm_u8m2(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_u8m4_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8m4_t 
test_vmerge_vxm_u8m4_m16(vbool2_t mask, vuint8m4_t op1, size_t vl)
{
  return vmerge_vxm_u8m4(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_u8m4_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vuint8m4_t 
test_vmerge_vxm_u8m4_15(vbool2_t mask, vuint8m4_t op1, size_t vl)
{
  return vmerge_vxm_u8m4(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_u8m4_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8m4_t 
test_vmerge_vxm_u8m4_vl31_m16(vbool2_t mask, vuint8m4_t op1)
{
  return vmerge_vxm_u8m4(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_u8m4_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vuint8m4_t 
test_vmerge_vxm_u8m4_vl31_15(vbool2_t mask, vuint8m4_t op1)
{
  return vmerge_vxm_u8m4(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_u8m8_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8m8_t 
test_vmerge_vxm_u8m8_m16(vbool1_t mask, vuint8m8_t op1, size_t vl)
{
  return vmerge_vxm_u8m8(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_u8m8_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vuint8m8_t 
test_vmerge_vxm_u8m8_15(vbool1_t mask, vuint8m8_t op1, size_t vl)
{
  return vmerge_vxm_u8m8(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_u8m8_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8m8_t 
test_vmerge_vxm_u8m8_vl31_m16(vbool1_t mask, vuint8m8_t op1)
{
  return vmerge_vxm_u8m8(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_u8m8_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vuint8m8_t 
test_vmerge_vxm_u8m8_vl31_15(vbool1_t mask, vuint8m8_t op1)
{
  return vmerge_vxm_u8m8(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_u16mf4_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint16mf4_t 
test_vmerge_vxm_u16mf4_m16(vbool64_t mask, vuint16mf4_t op1, size_t vl)
{
  return vmerge_vxm_u16mf4(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_u16mf4_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint16mf4_t 
test_vmerge_vxm_u16mf4_15(vbool64_t mask, vuint16mf4_t op1, size_t vl)
{
  return vmerge_vxm_u16mf4(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_u16mf4_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint16mf4_t 
test_vmerge_vxm_u16mf4_vl31_m16(vbool64_t mask, vuint16mf4_t op1)
{
  return vmerge_vxm_u16mf4(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_u16mf4_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint16mf4_t 
test_vmerge_vxm_u16mf4_vl31_15(vbool64_t mask, vuint16mf4_t op1)
{
  return vmerge_vxm_u16mf4(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_u16mf2_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint16mf2_t 
test_vmerge_vxm_u16mf2_m16(vbool32_t mask, vuint16mf2_t op1, size_t vl)
{
  return vmerge_vxm_u16mf2(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_u16mf2_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint16mf2_t 
test_vmerge_vxm_u16mf2_15(vbool32_t mask, vuint16mf2_t op1, size_t vl)
{
  return vmerge_vxm_u16mf2(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_u16mf2_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint16mf2_t 
test_vmerge_vxm_u16mf2_vl31_m16(vbool32_t mask, vuint16mf2_t op1)
{
  return vmerge_vxm_u16mf2(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_u16mf2_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint16mf2_t 
test_vmerge_vxm_u16mf2_vl31_15(vbool32_t mask, vuint16mf2_t op1)
{
  return vmerge_vxm_u16mf2(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_u16m1_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint16m1_t 
test_vmerge_vxm_u16m1_m16(vbool16_t mask, vuint16m1_t op1, size_t vl)
{
  return vmerge_vxm_u16m1(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_u16m1_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint16m1_t 
test_vmerge_vxm_u16m1_15(vbool16_t mask, vuint16m1_t op1, size_t vl)
{
  return vmerge_vxm_u16m1(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_u16m1_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint16m1_t 
test_vmerge_vxm_u16m1_vl31_m16(vbool16_t mask, vuint16m1_t op1)
{
  return vmerge_vxm_u16m1(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_u16m1_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint16m1_t 
test_vmerge_vxm_u16m1_vl31_15(vbool16_t mask, vuint16m1_t op1)
{
  return vmerge_vxm_u16m1(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_u16m2_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vuint16m2_t 
test_vmerge_vxm_u16m2_m16(vbool8_t mask, vuint16m2_t op1, size_t vl)
{
  return vmerge_vxm_u16m2(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_u16m2_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vuint16m2_t 
test_vmerge_vxm_u16m2_15(vbool8_t mask, vuint16m2_t op1, size_t vl)
{
  return vmerge_vxm_u16m2(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_u16m2_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vuint16m2_t 
test_vmerge_vxm_u16m2_vl31_m16(vbool8_t mask, vuint16m2_t op1)
{
  return vmerge_vxm_u16m2(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_u16m2_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vuint16m2_t 
test_vmerge_vxm_u16m2_vl31_15(vbool8_t mask, vuint16m2_t op1)
{
  return vmerge_vxm_u16m2(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_u16m4_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint16m4_t 
test_vmerge_vxm_u16m4_m16(vbool4_t mask, vuint16m4_t op1, size_t vl)
{
  return vmerge_vxm_u16m4(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_u16m4_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vuint16m4_t 
test_vmerge_vxm_u16m4_15(vbool4_t mask, vuint16m4_t op1, size_t vl)
{
  return vmerge_vxm_u16m4(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_u16m4_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint16m4_t 
test_vmerge_vxm_u16m4_vl31_m16(vbool4_t mask, vuint16m4_t op1)
{
  return vmerge_vxm_u16m4(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_u16m4_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vuint16m4_t 
test_vmerge_vxm_u16m4_vl31_15(vbool4_t mask, vuint16m4_t op1)
{
  return vmerge_vxm_u16m4(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_u16m8_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vuint16m8_t 
test_vmerge_vxm_u16m8_m16(vbool2_t mask, vuint16m8_t op1, size_t vl)
{
  return vmerge_vxm_u16m8(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_u16m8_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vuint16m8_t 
test_vmerge_vxm_u16m8_15(vbool2_t mask, vuint16m8_t op1, size_t vl)
{
  return vmerge_vxm_u16m8(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_u16m8_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vuint16m8_t 
test_vmerge_vxm_u16m8_vl31_m16(vbool2_t mask, vuint16m8_t op1)
{
  return vmerge_vxm_u16m8(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_u16m8_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vuint16m8_t 
test_vmerge_vxm_u16m8_vl31_15(vbool2_t mask, vuint16m8_t op1)
{
  return vmerge_vxm_u16m8(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_u32mf2_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint32mf2_t 
test_vmerge_vxm_u32mf2_m16(vbool64_t mask, vuint32mf2_t op1, size_t vl)
{
  return vmerge_vxm_u32mf2(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_u32mf2_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint32mf2_t 
test_vmerge_vxm_u32mf2_15(vbool64_t mask, vuint32mf2_t op1, size_t vl)
{
  return vmerge_vxm_u32mf2(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_u32mf2_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint32mf2_t 
test_vmerge_vxm_u32mf2_vl31_m16(vbool64_t mask, vuint32mf2_t op1)
{
  return vmerge_vxm_u32mf2(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_u32mf2_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint32mf2_t 
test_vmerge_vxm_u32mf2_vl31_15(vbool64_t mask, vuint32mf2_t op1)
{
  return vmerge_vxm_u32mf2(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_u32m1_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint32m1_t 
test_vmerge_vxm_u32m1_m16(vbool32_t mask, vuint32m1_t op1, size_t vl)
{
  return vmerge_vxm_u32m1(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_u32m1_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint32m1_t 
test_vmerge_vxm_u32m1_15(vbool32_t mask, vuint32m1_t op1, size_t vl)
{
  return vmerge_vxm_u32m1(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_u32m1_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint32m1_t 
test_vmerge_vxm_u32m1_vl31_m16(vbool32_t mask, vuint32m1_t op1)
{
  return vmerge_vxm_u32m1(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_u32m1_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint32m1_t 
test_vmerge_vxm_u32m1_vl31_15(vbool32_t mask, vuint32m1_t op1)
{
  return vmerge_vxm_u32m1(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_u32m2_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vuint32m2_t 
test_vmerge_vxm_u32m2_m16(vbool16_t mask, vuint32m2_t op1, size_t vl)
{
  return vmerge_vxm_u32m2(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_u32m2_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vuint32m2_t 
test_vmerge_vxm_u32m2_15(vbool16_t mask, vuint32m2_t op1, size_t vl)
{
  return vmerge_vxm_u32m2(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_u32m2_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vuint32m2_t 
test_vmerge_vxm_u32m2_vl31_m16(vbool16_t mask, vuint32m2_t op1)
{
  return vmerge_vxm_u32m2(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_u32m2_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vuint32m2_t 
test_vmerge_vxm_u32m2_vl31_15(vbool16_t mask, vuint32m2_t op1)
{
  return vmerge_vxm_u32m2(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_u32m4_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint32m4_t 
test_vmerge_vxm_u32m4_m16(vbool8_t mask, vuint32m4_t op1, size_t vl)
{
  return vmerge_vxm_u32m4(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_u32m4_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vuint32m4_t 
test_vmerge_vxm_u32m4_15(vbool8_t mask, vuint32m4_t op1, size_t vl)
{
  return vmerge_vxm_u32m4(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_u32m4_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint32m4_t 
test_vmerge_vxm_u32m4_vl31_m16(vbool8_t mask, vuint32m4_t op1)
{
  return vmerge_vxm_u32m4(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_u32m4_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vuint32m4_t 
test_vmerge_vxm_u32m4_vl31_15(vbool8_t mask, vuint32m4_t op1)
{
  return vmerge_vxm_u32m4(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_u32m8_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vuint32m8_t 
test_vmerge_vxm_u32m8_m16(vbool4_t mask, vuint32m8_t op1, size_t vl)
{
  return vmerge_vxm_u32m8(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_u32m8_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vuint32m8_t 
test_vmerge_vxm_u32m8_15(vbool4_t mask, vuint32m8_t op1, size_t vl)
{
  return vmerge_vxm_u32m8(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_u32m8_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vuint32m8_t 
test_vmerge_vxm_u32m8_vl31_m16(vbool4_t mask, vuint32m8_t op1)
{
  return vmerge_vxm_u32m8(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_u32m8_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vuint32m8_t 
test_vmerge_vxm_u32m8_vl31_15(vbool4_t mask, vuint32m8_t op1)
{
  return vmerge_vxm_u32m8(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_u64m1_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint64m1_t 
test_vmerge_vxm_u64m1_m16(vbool64_t mask, vuint64m1_t op1, size_t vl)
{
  return vmerge_vxm_u64m1(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_u64m1_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint64m1_t 
test_vmerge_vxm_u64m1_15(vbool64_t mask, vuint64m1_t op1, size_t vl)
{
  return vmerge_vxm_u64m1(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_u64m1_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint64m1_t 
test_vmerge_vxm_u64m1_vl31_m16(vbool64_t mask, vuint64m1_t op1)
{
  return vmerge_vxm_u64m1(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_u64m1_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint64m1_t 
test_vmerge_vxm_u64m1_vl31_15(vbool64_t mask, vuint64m1_t op1)
{
  return vmerge_vxm_u64m1(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_u64m2_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vuint64m2_t 
test_vmerge_vxm_u64m2_m16(vbool32_t mask, vuint64m2_t op1, size_t vl)
{
  return vmerge_vxm_u64m2(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_u64m2_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vuint64m2_t 
test_vmerge_vxm_u64m2_15(vbool32_t mask, vuint64m2_t op1, size_t vl)
{
  return vmerge_vxm_u64m2(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_u64m2_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vuint64m2_t 
test_vmerge_vxm_u64m2_vl31_m16(vbool32_t mask, vuint64m2_t op1)
{
  return vmerge_vxm_u64m2(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_u64m2_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vuint64m2_t 
test_vmerge_vxm_u64m2_vl31_15(vbool32_t mask, vuint64m2_t op1)
{
  return vmerge_vxm_u64m2(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_u64m4_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint64m4_t 
test_vmerge_vxm_u64m4_m16(vbool16_t mask, vuint64m4_t op1, size_t vl)
{
  return vmerge_vxm_u64m4(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_u64m4_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vuint64m4_t 
test_vmerge_vxm_u64m4_15(vbool16_t mask, vuint64m4_t op1, size_t vl)
{
  return vmerge_vxm_u64m4(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_u64m4_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint64m4_t 
test_vmerge_vxm_u64m4_vl31_m16(vbool16_t mask, vuint64m4_t op1)
{
  return vmerge_vxm_u64m4(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_u64m4_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vuint64m4_t 
test_vmerge_vxm_u64m4_vl31_15(vbool16_t mask, vuint64m4_t op1)
{
  return vmerge_vxm_u64m4(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_u64m8_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vuint64m8_t 
test_vmerge_vxm_u64m8_m16(vbool8_t mask, vuint64m8_t op1, size_t vl)
{
  return vmerge_vxm_u64m8(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_u64m8_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vuint64m8_t 
test_vmerge_vxm_u64m8_15(vbool8_t mask, vuint64m8_t op1, size_t vl)
{
  return vmerge_vxm_u64m8(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_u64m8_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vuint64m8_t 
test_vmerge_vxm_u64m8_vl31_m16(vbool8_t mask, vuint64m8_t op1)
{
  return vmerge_vxm_u64m8(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_u64m8_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vuint64m8_t 
test_vmerge_vxm_u64m8_vl31_15(vbool8_t mask, vuint64m8_t op1)
{
  return vmerge_vxm_u64m8(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_u8mf8_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8mf8_t 
test_vmerge_vxm_u8mf8_ta_m16(vbool64_t mask, vuint8mf8_t op1, size_t vl)
{
  return vmerge_vxm_u8mf8_ta(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_u8mf8_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint8mf8_t 
test_vmerge_vxm_u8mf8_ta_15(vbool64_t mask, vuint8mf8_t op1, size_t vl)
{
  return vmerge_vxm_u8mf8_ta(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_u8mf8_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8mf8_t 
test_vmerge_vxm_u8mf8_ta_vl31_m16(vbool64_t mask, vuint8mf8_t op1)
{
  return vmerge_vxm_u8mf8_ta(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_u8mf8_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint8mf8_t 
test_vmerge_vxm_u8mf8_ta_vl31_15(vbool64_t mask, vuint8mf8_t op1)
{
  return vmerge_vxm_u8mf8_ta(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_u8mf4_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8mf4_t 
test_vmerge_vxm_u8mf4_ta_m16(vbool32_t mask, vuint8mf4_t op1, size_t vl)
{
  return vmerge_vxm_u8mf4_ta(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_u8mf4_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint8mf4_t 
test_vmerge_vxm_u8mf4_ta_15(vbool32_t mask, vuint8mf4_t op1, size_t vl)
{
  return vmerge_vxm_u8mf4_ta(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_u8mf4_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8mf4_t 
test_vmerge_vxm_u8mf4_ta_vl31_m16(vbool32_t mask, vuint8mf4_t op1)
{
  return vmerge_vxm_u8mf4_ta(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_u8mf4_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint8mf4_t 
test_vmerge_vxm_u8mf4_ta_vl31_15(vbool32_t mask, vuint8mf4_t op1)
{
  return vmerge_vxm_u8mf4_ta(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_u8mf2_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8mf2_t 
test_vmerge_vxm_u8mf2_ta_m16(vbool16_t mask, vuint8mf2_t op1, size_t vl)
{
  return vmerge_vxm_u8mf2_ta(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_u8mf2_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint8mf2_t 
test_vmerge_vxm_u8mf2_ta_15(vbool16_t mask, vuint8mf2_t op1, size_t vl)
{
  return vmerge_vxm_u8mf2_ta(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_u8mf2_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8mf2_t 
test_vmerge_vxm_u8mf2_ta_vl31_m16(vbool16_t mask, vuint8mf2_t op1)
{
  return vmerge_vxm_u8mf2_ta(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_u8mf2_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint8mf2_t 
test_vmerge_vxm_u8mf2_ta_vl31_15(vbool16_t mask, vuint8mf2_t op1)
{
  return vmerge_vxm_u8mf2_ta(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_u8m1_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8m1_t 
test_vmerge_vxm_u8m1_ta_m16(vbool8_t mask, vuint8m1_t op1, size_t vl)
{
  return vmerge_vxm_u8m1_ta(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_u8m1_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint8m1_t 
test_vmerge_vxm_u8m1_ta_15(vbool8_t mask, vuint8m1_t op1, size_t vl)
{
  return vmerge_vxm_u8m1_ta(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_u8m1_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8m1_t 
test_vmerge_vxm_u8m1_ta_vl31_m16(vbool8_t mask, vuint8m1_t op1)
{
  return vmerge_vxm_u8m1_ta(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_u8m1_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint8m1_t 
test_vmerge_vxm_u8m1_ta_vl31_15(vbool8_t mask, vuint8m1_t op1)
{
  return vmerge_vxm_u8m1_ta(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_u8m2_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8m2_t 
test_vmerge_vxm_u8m2_ta_m16(vbool4_t mask, vuint8m2_t op1, size_t vl)
{
  return vmerge_vxm_u8m2_ta(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_u8m2_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vuint8m2_t 
test_vmerge_vxm_u8m2_ta_15(vbool4_t mask, vuint8m2_t op1, size_t vl)
{
  return vmerge_vxm_u8m2_ta(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_u8m2_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8m2_t 
test_vmerge_vxm_u8m2_ta_vl31_m16(vbool4_t mask, vuint8m2_t op1)
{
  return vmerge_vxm_u8m2_ta(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_u8m2_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vuint8m2_t 
test_vmerge_vxm_u8m2_ta_vl31_15(vbool4_t mask, vuint8m2_t op1)
{
  return vmerge_vxm_u8m2_ta(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_u8m4_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8m4_t 
test_vmerge_vxm_u8m4_ta_m16(vbool2_t mask, vuint8m4_t op1, size_t vl)
{
  return vmerge_vxm_u8m4_ta(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_u8m4_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vuint8m4_t 
test_vmerge_vxm_u8m4_ta_15(vbool2_t mask, vuint8m4_t op1, size_t vl)
{
  return vmerge_vxm_u8m4_ta(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_u8m4_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8m4_t 
test_vmerge_vxm_u8m4_ta_vl31_m16(vbool2_t mask, vuint8m4_t op1)
{
  return vmerge_vxm_u8m4_ta(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_u8m4_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vuint8m4_t 
test_vmerge_vxm_u8m4_ta_vl31_15(vbool2_t mask, vuint8m4_t op1)
{
  return vmerge_vxm_u8m4_ta(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_u8m8_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8m8_t 
test_vmerge_vxm_u8m8_ta_m16(vbool1_t mask, vuint8m8_t op1, size_t vl)
{
  return vmerge_vxm_u8m8_ta(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_u8m8_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vuint8m8_t 
test_vmerge_vxm_u8m8_ta_15(vbool1_t mask, vuint8m8_t op1, size_t vl)
{
  return vmerge_vxm_u8m8_ta(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_u8m8_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8m8_t 
test_vmerge_vxm_u8m8_ta_vl31_m16(vbool1_t mask, vuint8m8_t op1)
{
  return vmerge_vxm_u8m8_ta(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_u8m8_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vuint8m8_t 
test_vmerge_vxm_u8m8_ta_vl31_15(vbool1_t mask, vuint8m8_t op1)
{
  return vmerge_vxm_u8m8_ta(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_u16mf4_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint16mf4_t 
test_vmerge_vxm_u16mf4_ta_m16(vbool64_t mask, vuint16mf4_t op1, size_t vl)
{
  return vmerge_vxm_u16mf4_ta(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_u16mf4_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint16mf4_t 
test_vmerge_vxm_u16mf4_ta_15(vbool64_t mask, vuint16mf4_t op1, size_t vl)
{
  return vmerge_vxm_u16mf4_ta(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_u16mf4_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint16mf4_t 
test_vmerge_vxm_u16mf4_ta_vl31_m16(vbool64_t mask, vuint16mf4_t op1)
{
  return vmerge_vxm_u16mf4_ta(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_u16mf4_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint16mf4_t 
test_vmerge_vxm_u16mf4_ta_vl31_15(vbool64_t mask, vuint16mf4_t op1)
{
  return vmerge_vxm_u16mf4_ta(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_u16mf2_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint16mf2_t 
test_vmerge_vxm_u16mf2_ta_m16(vbool32_t mask, vuint16mf2_t op1, size_t vl)
{
  return vmerge_vxm_u16mf2_ta(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_u16mf2_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint16mf2_t 
test_vmerge_vxm_u16mf2_ta_15(vbool32_t mask, vuint16mf2_t op1, size_t vl)
{
  return vmerge_vxm_u16mf2_ta(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_u16mf2_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint16mf2_t 
test_vmerge_vxm_u16mf2_ta_vl31_m16(vbool32_t mask, vuint16mf2_t op1)
{
  return vmerge_vxm_u16mf2_ta(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_u16mf2_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint16mf2_t 
test_vmerge_vxm_u16mf2_ta_vl31_15(vbool32_t mask, vuint16mf2_t op1)
{
  return vmerge_vxm_u16mf2_ta(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_u16m1_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint16m1_t 
test_vmerge_vxm_u16m1_ta_m16(vbool16_t mask, vuint16m1_t op1, size_t vl)
{
  return vmerge_vxm_u16m1_ta(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_u16m1_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint16m1_t 
test_vmerge_vxm_u16m1_ta_15(vbool16_t mask, vuint16m1_t op1, size_t vl)
{
  return vmerge_vxm_u16m1_ta(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_u16m1_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint16m1_t 
test_vmerge_vxm_u16m1_ta_vl31_m16(vbool16_t mask, vuint16m1_t op1)
{
  return vmerge_vxm_u16m1_ta(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_u16m1_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint16m1_t 
test_vmerge_vxm_u16m1_ta_vl31_15(vbool16_t mask, vuint16m1_t op1)
{
  return vmerge_vxm_u16m1_ta(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_u16m2_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vuint16m2_t 
test_vmerge_vxm_u16m2_ta_m16(vbool8_t mask, vuint16m2_t op1, size_t vl)
{
  return vmerge_vxm_u16m2_ta(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_u16m2_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vuint16m2_t 
test_vmerge_vxm_u16m2_ta_15(vbool8_t mask, vuint16m2_t op1, size_t vl)
{
  return vmerge_vxm_u16m2_ta(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_u16m2_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vuint16m2_t 
test_vmerge_vxm_u16m2_ta_vl31_m16(vbool8_t mask, vuint16m2_t op1)
{
  return vmerge_vxm_u16m2_ta(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_u16m2_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vuint16m2_t 
test_vmerge_vxm_u16m2_ta_vl31_15(vbool8_t mask, vuint16m2_t op1)
{
  return vmerge_vxm_u16m2_ta(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_u16m4_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint16m4_t 
test_vmerge_vxm_u16m4_ta_m16(vbool4_t mask, vuint16m4_t op1, size_t vl)
{
  return vmerge_vxm_u16m4_ta(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_u16m4_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vuint16m4_t 
test_vmerge_vxm_u16m4_ta_15(vbool4_t mask, vuint16m4_t op1, size_t vl)
{
  return vmerge_vxm_u16m4_ta(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_u16m4_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint16m4_t 
test_vmerge_vxm_u16m4_ta_vl31_m16(vbool4_t mask, vuint16m4_t op1)
{
  return vmerge_vxm_u16m4_ta(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_u16m4_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vuint16m4_t 
test_vmerge_vxm_u16m4_ta_vl31_15(vbool4_t mask, vuint16m4_t op1)
{
  return vmerge_vxm_u16m4_ta(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_u16m8_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vuint16m8_t 
test_vmerge_vxm_u16m8_ta_m16(vbool2_t mask, vuint16m8_t op1, size_t vl)
{
  return vmerge_vxm_u16m8_ta(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_u16m8_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vuint16m8_t 
test_vmerge_vxm_u16m8_ta_15(vbool2_t mask, vuint16m8_t op1, size_t vl)
{
  return vmerge_vxm_u16m8_ta(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_u16m8_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vuint16m8_t 
test_vmerge_vxm_u16m8_ta_vl31_m16(vbool2_t mask, vuint16m8_t op1)
{
  return vmerge_vxm_u16m8_ta(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_u16m8_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vuint16m8_t 
test_vmerge_vxm_u16m8_ta_vl31_15(vbool2_t mask, vuint16m8_t op1)
{
  return vmerge_vxm_u16m8_ta(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_u32mf2_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint32mf2_t 
test_vmerge_vxm_u32mf2_ta_m16(vbool64_t mask, vuint32mf2_t op1, size_t vl)
{
  return vmerge_vxm_u32mf2_ta(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_u32mf2_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint32mf2_t 
test_vmerge_vxm_u32mf2_ta_15(vbool64_t mask, vuint32mf2_t op1, size_t vl)
{
  return vmerge_vxm_u32mf2_ta(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_u32mf2_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint32mf2_t 
test_vmerge_vxm_u32mf2_ta_vl31_m16(vbool64_t mask, vuint32mf2_t op1)
{
  return vmerge_vxm_u32mf2_ta(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_u32mf2_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint32mf2_t 
test_vmerge_vxm_u32mf2_ta_vl31_15(vbool64_t mask, vuint32mf2_t op1)
{
  return vmerge_vxm_u32mf2_ta(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_u32m1_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint32m1_t 
test_vmerge_vxm_u32m1_ta_m16(vbool32_t mask, vuint32m1_t op1, size_t vl)
{
  return vmerge_vxm_u32m1_ta(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_u32m1_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint32m1_t 
test_vmerge_vxm_u32m1_ta_15(vbool32_t mask, vuint32m1_t op1, size_t vl)
{
  return vmerge_vxm_u32m1_ta(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_u32m1_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint32m1_t 
test_vmerge_vxm_u32m1_ta_vl31_m16(vbool32_t mask, vuint32m1_t op1)
{
  return vmerge_vxm_u32m1_ta(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_u32m1_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint32m1_t 
test_vmerge_vxm_u32m1_ta_vl31_15(vbool32_t mask, vuint32m1_t op1)
{
  return vmerge_vxm_u32m1_ta(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_u32m2_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vuint32m2_t 
test_vmerge_vxm_u32m2_ta_m16(vbool16_t mask, vuint32m2_t op1, size_t vl)
{
  return vmerge_vxm_u32m2_ta(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_u32m2_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vuint32m2_t 
test_vmerge_vxm_u32m2_ta_15(vbool16_t mask, vuint32m2_t op1, size_t vl)
{
  return vmerge_vxm_u32m2_ta(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_u32m2_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vuint32m2_t 
test_vmerge_vxm_u32m2_ta_vl31_m16(vbool16_t mask, vuint32m2_t op1)
{
  return vmerge_vxm_u32m2_ta(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_u32m2_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vuint32m2_t 
test_vmerge_vxm_u32m2_ta_vl31_15(vbool16_t mask, vuint32m2_t op1)
{
  return vmerge_vxm_u32m2_ta(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_u32m4_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint32m4_t 
test_vmerge_vxm_u32m4_ta_m16(vbool8_t mask, vuint32m4_t op1, size_t vl)
{
  return vmerge_vxm_u32m4_ta(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_u32m4_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vuint32m4_t 
test_vmerge_vxm_u32m4_ta_15(vbool8_t mask, vuint32m4_t op1, size_t vl)
{
  return vmerge_vxm_u32m4_ta(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_u32m4_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint32m4_t 
test_vmerge_vxm_u32m4_ta_vl31_m16(vbool8_t mask, vuint32m4_t op1)
{
  return vmerge_vxm_u32m4_ta(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_u32m4_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vuint32m4_t 
test_vmerge_vxm_u32m4_ta_vl31_15(vbool8_t mask, vuint32m4_t op1)
{
  return vmerge_vxm_u32m4_ta(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_u32m8_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vuint32m8_t 
test_vmerge_vxm_u32m8_ta_m16(vbool4_t mask, vuint32m8_t op1, size_t vl)
{
  return vmerge_vxm_u32m8_ta(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_u32m8_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vuint32m8_t 
test_vmerge_vxm_u32m8_ta_15(vbool4_t mask, vuint32m8_t op1, size_t vl)
{
  return vmerge_vxm_u32m8_ta(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_u32m8_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vuint32m8_t 
test_vmerge_vxm_u32m8_ta_vl31_m16(vbool4_t mask, vuint32m8_t op1)
{
  return vmerge_vxm_u32m8_ta(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_u32m8_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vuint32m8_t 
test_vmerge_vxm_u32m8_ta_vl31_15(vbool4_t mask, vuint32m8_t op1)
{
  return vmerge_vxm_u32m8_ta(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_u64m1_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint64m1_t 
test_vmerge_vxm_u64m1_ta_m16(vbool64_t mask, vuint64m1_t op1, size_t vl)
{
  return vmerge_vxm_u64m1_ta(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_u64m1_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint64m1_t 
test_vmerge_vxm_u64m1_ta_15(vbool64_t mask, vuint64m1_t op1, size_t vl)
{
  return vmerge_vxm_u64m1_ta(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_u64m1_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint64m1_t 
test_vmerge_vxm_u64m1_ta_vl31_m16(vbool64_t mask, vuint64m1_t op1)
{
  return vmerge_vxm_u64m1_ta(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_u64m1_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint64m1_t 
test_vmerge_vxm_u64m1_ta_vl31_15(vbool64_t mask, vuint64m1_t op1)
{
  return vmerge_vxm_u64m1_ta(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_u64m2_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vuint64m2_t 
test_vmerge_vxm_u64m2_ta_m16(vbool32_t mask, vuint64m2_t op1, size_t vl)
{
  return vmerge_vxm_u64m2_ta(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_u64m2_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vuint64m2_t 
test_vmerge_vxm_u64m2_ta_15(vbool32_t mask, vuint64m2_t op1, size_t vl)
{
  return vmerge_vxm_u64m2_ta(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_u64m2_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vuint64m2_t 
test_vmerge_vxm_u64m2_ta_vl31_m16(vbool32_t mask, vuint64m2_t op1)
{
  return vmerge_vxm_u64m2_ta(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_u64m2_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vuint64m2_t 
test_vmerge_vxm_u64m2_ta_vl31_15(vbool32_t mask, vuint64m2_t op1)
{
  return vmerge_vxm_u64m2_ta(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_u64m4_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint64m4_t 
test_vmerge_vxm_u64m4_ta_m16(vbool16_t mask, vuint64m4_t op1, size_t vl)
{
  return vmerge_vxm_u64m4_ta(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_u64m4_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vuint64m4_t 
test_vmerge_vxm_u64m4_ta_15(vbool16_t mask, vuint64m4_t op1, size_t vl)
{
  return vmerge_vxm_u64m4_ta(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_u64m4_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint64m4_t 
test_vmerge_vxm_u64m4_ta_vl31_m16(vbool16_t mask, vuint64m4_t op1)
{
  return vmerge_vxm_u64m4_ta(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_u64m4_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vuint64m4_t 
test_vmerge_vxm_u64m4_ta_vl31_15(vbool16_t mask, vuint64m4_t op1)
{
  return vmerge_vxm_u64m4_ta(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_u64m8_ta_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vuint64m8_t 
test_vmerge_vxm_u64m8_ta_m16(vbool8_t mask, vuint64m8_t op1, size_t vl)
{
  return vmerge_vxm_u64m8_ta(mask, op1, -16, vl);
}

/*
** test_vmerge_vxm_u64m8_ta_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vuint64m8_t 
test_vmerge_vxm_u64m8_ta_15(vbool8_t mask, vuint64m8_t op1, size_t vl)
{
  return vmerge_vxm_u64m8_ta(mask, op1, 15, vl);
}

/*
** test_vmerge_vxm_u64m8_ta_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vuint64m8_t 
test_vmerge_vxm_u64m8_ta_vl31_m16(vbool8_t mask, vuint64m8_t op1)
{
  return vmerge_vxm_u64m8_ta(mask, op1, -16, 31);
}

/*
** test_vmerge_vxm_u64m8_ta_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vuint64m8_t 
test_vmerge_vxm_u64m8_ta_vl31_15(vbool8_t mask, vuint64m8_t op1)
{
  return vmerge_vxm_u64m8_ta(mask, op1, 15, 31);
}

/*
** test_vmerge_vxm_u8mf8_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8mf8_t 
test_vmerge_vxm_u8mf8_tu_m16(vuint8mf8_t dest, vbool64_t mask, vuint8mf8_t op1, size_t vl)
{
  return vmerge_vxm_u8mf8_tu(mask, dest, op1, -16, vl);
}

/*
** test_vmerge_vxm_u8mf8_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint8mf8_t 
test_vmerge_vxm_u8mf8_tu_15(vuint8mf8_t dest, vbool64_t mask, vuint8mf8_t op1, size_t vl)
{
  return vmerge_vxm_u8mf8_tu(mask, dest, op1, 15, vl);
}

/*
** test_vmerge_vxm_u8mf8_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8mf8_t 
test_vmerge_vxm_u8mf8_tu_vl31_m16(vuint8mf8_t dest, vbool64_t mask, vuint8mf8_t op1)
{
  return vmerge_vxm_u8mf8_tu(mask, dest, op1, -16, 31);
}

/*
** test_vmerge_vxm_u8mf8_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint8mf8_t 
test_vmerge_vxm_u8mf8_tu_vl31_15(vuint8mf8_t dest, vbool64_t mask, vuint8mf8_t op1)
{
  return vmerge_vxm_u8mf8_tu(mask, dest, op1, 15, 31);
}

/*
** test_vmerge_vxm_u8mf4_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8mf4_t 
test_vmerge_vxm_u8mf4_tu_m16(vuint8mf4_t dest, vbool32_t mask, vuint8mf4_t op1, size_t vl)
{
  return vmerge_vxm_u8mf4_tu(mask, dest, op1, -16, vl);
}

/*
** test_vmerge_vxm_u8mf4_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint8mf4_t 
test_vmerge_vxm_u8mf4_tu_15(vuint8mf4_t dest, vbool32_t mask, vuint8mf4_t op1, size_t vl)
{
  return vmerge_vxm_u8mf4_tu(mask, dest, op1, 15, vl);
}

/*
** test_vmerge_vxm_u8mf4_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8mf4_t 
test_vmerge_vxm_u8mf4_tu_vl31_m16(vuint8mf4_t dest, vbool32_t mask, vuint8mf4_t op1)
{
  return vmerge_vxm_u8mf4_tu(mask, dest, op1, -16, 31);
}

/*
** test_vmerge_vxm_u8mf4_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint8mf4_t 
test_vmerge_vxm_u8mf4_tu_vl31_15(vuint8mf4_t dest, vbool32_t mask, vuint8mf4_t op1)
{
  return vmerge_vxm_u8mf4_tu(mask, dest, op1, 15, 31);
}

/*
** test_vmerge_vxm_u8mf2_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8mf2_t 
test_vmerge_vxm_u8mf2_tu_m16(vuint8mf2_t dest, vbool16_t mask, vuint8mf2_t op1, size_t vl)
{
  return vmerge_vxm_u8mf2_tu(mask, dest, op1, -16, vl);
}

/*
** test_vmerge_vxm_u8mf2_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint8mf2_t 
test_vmerge_vxm_u8mf2_tu_15(vuint8mf2_t dest, vbool16_t mask, vuint8mf2_t op1, size_t vl)
{
  return vmerge_vxm_u8mf2_tu(mask, dest, op1, 15, vl);
}

/*
** test_vmerge_vxm_u8mf2_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8mf2_t 
test_vmerge_vxm_u8mf2_tu_vl31_m16(vuint8mf2_t dest, vbool16_t mask, vuint8mf2_t op1)
{
  return vmerge_vxm_u8mf2_tu(mask, dest, op1, -16, 31);
}

/*
** test_vmerge_vxm_u8mf2_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint8mf2_t 
test_vmerge_vxm_u8mf2_tu_vl31_15(vuint8mf2_t dest, vbool16_t mask, vuint8mf2_t op1)
{
  return vmerge_vxm_u8mf2_tu(mask, dest, op1, 15, 31);
}

/*
** test_vmerge_vxm_u8m1_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8m1_t 
test_vmerge_vxm_u8m1_tu_m16(vuint8m1_t dest, vbool8_t mask, vuint8m1_t op1, size_t vl)
{
  return vmerge_vxm_u8m1_tu(mask, dest, op1, -16, vl);
}

/*
** test_vmerge_vxm_u8m1_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint8m1_t 
test_vmerge_vxm_u8m1_tu_15(vuint8m1_t dest, vbool8_t mask, vuint8m1_t op1, size_t vl)
{
  return vmerge_vxm_u8m1_tu(mask, dest, op1, 15, vl);
}

/*
** test_vmerge_vxm_u8m1_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8m1_t 
test_vmerge_vxm_u8m1_tu_vl31_m16(vuint8m1_t dest, vbool8_t mask, vuint8m1_t op1)
{
  return vmerge_vxm_u8m1_tu(mask, dest, op1, -16, 31);
}

/*
** test_vmerge_vxm_u8m1_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint8m1_t 
test_vmerge_vxm_u8m1_tu_vl31_15(vuint8m1_t dest, vbool8_t mask, vuint8m1_t op1)
{
  return vmerge_vxm_u8m1_tu(mask, dest, op1, 15, 31);
}

/*
** test_vmerge_vxm_u8m2_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8m2_t 
test_vmerge_vxm_u8m2_tu_m16(vuint8m2_t dest, vbool4_t mask, vuint8m2_t op1, size_t vl)
{
  return vmerge_vxm_u8m2_tu(mask, dest, op1, -16, vl);
}

/*
** test_vmerge_vxm_u8m2_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vuint8m2_t 
test_vmerge_vxm_u8m2_tu_15(vuint8m2_t dest, vbool4_t mask, vuint8m2_t op1, size_t vl)
{
  return vmerge_vxm_u8m2_tu(mask, dest, op1, 15, vl);
}

/*
** test_vmerge_vxm_u8m2_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8m2_t 
test_vmerge_vxm_u8m2_tu_vl31_m16(vuint8m2_t dest, vbool4_t mask, vuint8m2_t op1)
{
  return vmerge_vxm_u8m2_tu(mask, dest, op1, -16, 31);
}

/*
** test_vmerge_vxm_u8m2_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vuint8m2_t 
test_vmerge_vxm_u8m2_tu_vl31_15(vuint8m2_t dest, vbool4_t mask, vuint8m2_t op1)
{
  return vmerge_vxm_u8m2_tu(mask, dest, op1, 15, 31);
}

/*
** test_vmerge_vxm_u8m4_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8m4_t 
test_vmerge_vxm_u8m4_tu_m16(vuint8m4_t dest, vbool2_t mask, vuint8m4_t op1, size_t vl)
{
  return vmerge_vxm_u8m4_tu(mask, dest, op1, -16, vl);
}

/*
** test_vmerge_vxm_u8m4_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vuint8m4_t 
test_vmerge_vxm_u8m4_tu_15(vuint8m4_t dest, vbool2_t mask, vuint8m4_t op1, size_t vl)
{
  return vmerge_vxm_u8m4_tu(mask, dest, op1, 15, vl);
}

/*
** test_vmerge_vxm_u8m4_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8m4_t 
test_vmerge_vxm_u8m4_tu_vl31_m16(vuint8m4_t dest, vbool2_t mask, vuint8m4_t op1)
{
  return vmerge_vxm_u8m4_tu(mask, dest, op1, -16, 31);
}

/*
** test_vmerge_vxm_u8m4_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vuint8m4_t 
test_vmerge_vxm_u8m4_tu_vl31_15(vuint8m4_t dest, vbool2_t mask, vuint8m4_t op1)
{
  return vmerge_vxm_u8m4_tu(mask, dest, op1, 15, 31);
}

/*
** test_vmerge_vxm_u8m8_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8m8_t 
test_vmerge_vxm_u8m8_tu_m16(vuint8m8_t dest, vbool1_t mask, vuint8m8_t op1, size_t vl)
{
  return vmerge_vxm_u8m8_tu(mask, dest, op1, -16, vl);
}

/*
** test_vmerge_vxm_u8m8_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vuint8m8_t 
test_vmerge_vxm_u8m8_tu_15(vuint8m8_t dest, vbool1_t mask, vuint8m8_t op1, size_t vl)
{
  return vmerge_vxm_u8m8_tu(mask, dest, op1, 15, vl);
}

/*
** test_vmerge_vxm_u8m8_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8m8_t 
test_vmerge_vxm_u8m8_tu_vl31_m16(vuint8m8_t dest, vbool1_t mask, vuint8m8_t op1)
{
  return vmerge_vxm_u8m8_tu(mask, dest, op1, -16, 31);
}

/*
** test_vmerge_vxm_u8m8_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vuint8m8_t 
test_vmerge_vxm_u8m8_tu_vl31_15(vuint8m8_t dest, vbool1_t mask, vuint8m8_t op1)
{
  return vmerge_vxm_u8m8_tu(mask, dest, op1, 15, 31);
}

/*
** test_vmerge_vxm_u16mf4_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint16mf4_t 
test_vmerge_vxm_u16mf4_tu_m16(vuint16mf4_t dest, vbool64_t mask, vuint16mf4_t op1, size_t vl)
{
  return vmerge_vxm_u16mf4_tu(mask, dest, op1, -16, vl);
}

/*
** test_vmerge_vxm_u16mf4_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint16mf4_t 
test_vmerge_vxm_u16mf4_tu_15(vuint16mf4_t dest, vbool64_t mask, vuint16mf4_t op1, size_t vl)
{
  return vmerge_vxm_u16mf4_tu(mask, dest, op1, 15, vl);
}

/*
** test_vmerge_vxm_u16mf4_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint16mf4_t 
test_vmerge_vxm_u16mf4_tu_vl31_m16(vuint16mf4_t dest, vbool64_t mask, vuint16mf4_t op1)
{
  return vmerge_vxm_u16mf4_tu(mask, dest, op1, -16, 31);
}

/*
** test_vmerge_vxm_u16mf4_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint16mf4_t 
test_vmerge_vxm_u16mf4_tu_vl31_15(vuint16mf4_t dest, vbool64_t mask, vuint16mf4_t op1)
{
  return vmerge_vxm_u16mf4_tu(mask, dest, op1, 15, 31);
}

/*
** test_vmerge_vxm_u16mf2_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint16mf2_t 
test_vmerge_vxm_u16mf2_tu_m16(vuint16mf2_t dest, vbool32_t mask, vuint16mf2_t op1, size_t vl)
{
  return vmerge_vxm_u16mf2_tu(mask, dest, op1, -16, vl);
}

/*
** test_vmerge_vxm_u16mf2_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint16mf2_t 
test_vmerge_vxm_u16mf2_tu_15(vuint16mf2_t dest, vbool32_t mask, vuint16mf2_t op1, size_t vl)
{
  return vmerge_vxm_u16mf2_tu(mask, dest, op1, 15, vl);
}

/*
** test_vmerge_vxm_u16mf2_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint16mf2_t 
test_vmerge_vxm_u16mf2_tu_vl31_m16(vuint16mf2_t dest, vbool32_t mask, vuint16mf2_t op1)
{
  return vmerge_vxm_u16mf2_tu(mask, dest, op1, -16, 31);
}

/*
** test_vmerge_vxm_u16mf2_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint16mf2_t 
test_vmerge_vxm_u16mf2_tu_vl31_15(vuint16mf2_t dest, vbool32_t mask, vuint16mf2_t op1)
{
  return vmerge_vxm_u16mf2_tu(mask, dest, op1, 15, 31);
}

/*
** test_vmerge_vxm_u16m1_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint16m1_t 
test_vmerge_vxm_u16m1_tu_m16(vuint16m1_t dest, vbool16_t mask, vuint16m1_t op1, size_t vl)
{
  return vmerge_vxm_u16m1_tu(mask, dest, op1, -16, vl);
}

/*
** test_vmerge_vxm_u16m1_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint16m1_t 
test_vmerge_vxm_u16m1_tu_15(vuint16m1_t dest, vbool16_t mask, vuint16m1_t op1, size_t vl)
{
  return vmerge_vxm_u16m1_tu(mask, dest, op1, 15, vl);
}

/*
** test_vmerge_vxm_u16m1_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint16m1_t 
test_vmerge_vxm_u16m1_tu_vl31_m16(vuint16m1_t dest, vbool16_t mask, vuint16m1_t op1)
{
  return vmerge_vxm_u16m1_tu(mask, dest, op1, -16, 31);
}

/*
** test_vmerge_vxm_u16m1_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint16m1_t 
test_vmerge_vxm_u16m1_tu_vl31_15(vuint16m1_t dest, vbool16_t mask, vuint16m1_t op1)
{
  return vmerge_vxm_u16m1_tu(mask, dest, op1, 15, 31);
}

/*
** test_vmerge_vxm_u16m2_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vuint16m2_t 
test_vmerge_vxm_u16m2_tu_m16(vuint16m2_t dest, vbool8_t mask, vuint16m2_t op1, size_t vl)
{
  return vmerge_vxm_u16m2_tu(mask, dest, op1, -16, vl);
}

/*
** test_vmerge_vxm_u16m2_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vuint16m2_t 
test_vmerge_vxm_u16m2_tu_15(vuint16m2_t dest, vbool8_t mask, vuint16m2_t op1, size_t vl)
{
  return vmerge_vxm_u16m2_tu(mask, dest, op1, 15, vl);
}

/*
** test_vmerge_vxm_u16m2_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vuint16m2_t 
test_vmerge_vxm_u16m2_tu_vl31_m16(vuint16m2_t dest, vbool8_t mask, vuint16m2_t op1)
{
  return vmerge_vxm_u16m2_tu(mask, dest, op1, -16, 31);
}

/*
** test_vmerge_vxm_u16m2_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vuint16m2_t 
test_vmerge_vxm_u16m2_tu_vl31_15(vuint16m2_t dest, vbool8_t mask, vuint16m2_t op1)
{
  return vmerge_vxm_u16m2_tu(mask, dest, op1, 15, 31);
}

/*
** test_vmerge_vxm_u16m4_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint16m4_t 
test_vmerge_vxm_u16m4_tu_m16(vuint16m4_t dest, vbool4_t mask, vuint16m4_t op1, size_t vl)
{
  return vmerge_vxm_u16m4_tu(mask, dest, op1, -16, vl);
}

/*
** test_vmerge_vxm_u16m4_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vuint16m4_t 
test_vmerge_vxm_u16m4_tu_15(vuint16m4_t dest, vbool4_t mask, vuint16m4_t op1, size_t vl)
{
  return vmerge_vxm_u16m4_tu(mask, dest, op1, 15, vl);
}

/*
** test_vmerge_vxm_u16m4_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint16m4_t 
test_vmerge_vxm_u16m4_tu_vl31_m16(vuint16m4_t dest, vbool4_t mask, vuint16m4_t op1)
{
  return vmerge_vxm_u16m4_tu(mask, dest, op1, -16, 31);
}

/*
** test_vmerge_vxm_u16m4_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vuint16m4_t 
test_vmerge_vxm_u16m4_tu_vl31_15(vuint16m4_t dest, vbool4_t mask, vuint16m4_t op1)
{
  return vmerge_vxm_u16m4_tu(mask, dest, op1, 15, 31);
}

/*
** test_vmerge_vxm_u16m8_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vuint16m8_t 
test_vmerge_vxm_u16m8_tu_m16(vuint16m8_t dest, vbool2_t mask, vuint16m8_t op1, size_t vl)
{
  return vmerge_vxm_u16m8_tu(mask, dest, op1, -16, vl);
}

/*
** test_vmerge_vxm_u16m8_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vuint16m8_t 
test_vmerge_vxm_u16m8_tu_15(vuint16m8_t dest, vbool2_t mask, vuint16m8_t op1, size_t vl)
{
  return vmerge_vxm_u16m8_tu(mask, dest, op1, 15, vl);
}

/*
** test_vmerge_vxm_u16m8_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vuint16m8_t 
test_vmerge_vxm_u16m8_tu_vl31_m16(vuint16m8_t dest, vbool2_t mask, vuint16m8_t op1)
{
  return vmerge_vxm_u16m8_tu(mask, dest, op1, -16, 31);
}

/*
** test_vmerge_vxm_u16m8_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vuint16m8_t 
test_vmerge_vxm_u16m8_tu_vl31_15(vuint16m8_t dest, vbool2_t mask, vuint16m8_t op1)
{
  return vmerge_vxm_u16m8_tu(mask, dest, op1, 15, 31);
}

/*
** test_vmerge_vxm_u32mf2_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint32mf2_t 
test_vmerge_vxm_u32mf2_tu_m16(vuint32mf2_t dest, vbool64_t mask, vuint32mf2_t op1, size_t vl)
{
  return vmerge_vxm_u32mf2_tu(mask, dest, op1, -16, vl);
}

/*
** test_vmerge_vxm_u32mf2_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint32mf2_t 
test_vmerge_vxm_u32mf2_tu_15(vuint32mf2_t dest, vbool64_t mask, vuint32mf2_t op1, size_t vl)
{
  return vmerge_vxm_u32mf2_tu(mask, dest, op1, 15, vl);
}

/*
** test_vmerge_vxm_u32mf2_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint32mf2_t 
test_vmerge_vxm_u32mf2_tu_vl31_m16(vuint32mf2_t dest, vbool64_t mask, vuint32mf2_t op1)
{
  return vmerge_vxm_u32mf2_tu(mask, dest, op1, -16, 31);
}

/*
** test_vmerge_vxm_u32mf2_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint32mf2_t 
test_vmerge_vxm_u32mf2_tu_vl31_15(vuint32mf2_t dest, vbool64_t mask, vuint32mf2_t op1)
{
  return vmerge_vxm_u32mf2_tu(mask, dest, op1, 15, 31);
}

/*
** test_vmerge_vxm_u32m1_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint32m1_t 
test_vmerge_vxm_u32m1_tu_m16(vuint32m1_t dest, vbool32_t mask, vuint32m1_t op1, size_t vl)
{
  return vmerge_vxm_u32m1_tu(mask, dest, op1, -16, vl);
}

/*
** test_vmerge_vxm_u32m1_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint32m1_t 
test_vmerge_vxm_u32m1_tu_15(vuint32m1_t dest, vbool32_t mask, vuint32m1_t op1, size_t vl)
{
  return vmerge_vxm_u32m1_tu(mask, dest, op1, 15, vl);
}

/*
** test_vmerge_vxm_u32m1_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint32m1_t 
test_vmerge_vxm_u32m1_tu_vl31_m16(vuint32m1_t dest, vbool32_t mask, vuint32m1_t op1)
{
  return vmerge_vxm_u32m1_tu(mask, dest, op1, -16, 31);
}

/*
** test_vmerge_vxm_u32m1_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint32m1_t 
test_vmerge_vxm_u32m1_tu_vl31_15(vuint32m1_t dest, vbool32_t mask, vuint32m1_t op1)
{
  return vmerge_vxm_u32m1_tu(mask, dest, op1, 15, 31);
}

/*
** test_vmerge_vxm_u32m2_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vuint32m2_t 
test_vmerge_vxm_u32m2_tu_m16(vuint32m2_t dest, vbool16_t mask, vuint32m2_t op1, size_t vl)
{
  return vmerge_vxm_u32m2_tu(mask, dest, op1, -16, vl);
}

/*
** test_vmerge_vxm_u32m2_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vuint32m2_t 
test_vmerge_vxm_u32m2_tu_15(vuint32m2_t dest, vbool16_t mask, vuint32m2_t op1, size_t vl)
{
  return vmerge_vxm_u32m2_tu(mask, dest, op1, 15, vl);
}

/*
** test_vmerge_vxm_u32m2_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vuint32m2_t 
test_vmerge_vxm_u32m2_tu_vl31_m16(vuint32m2_t dest, vbool16_t mask, vuint32m2_t op1)
{
  return vmerge_vxm_u32m2_tu(mask, dest, op1, -16, 31);
}

/*
** test_vmerge_vxm_u32m2_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vuint32m2_t 
test_vmerge_vxm_u32m2_tu_vl31_15(vuint32m2_t dest, vbool16_t mask, vuint32m2_t op1)
{
  return vmerge_vxm_u32m2_tu(mask, dest, op1, 15, 31);
}

/*
** test_vmerge_vxm_u32m4_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint32m4_t 
test_vmerge_vxm_u32m4_tu_m16(vuint32m4_t dest, vbool8_t mask, vuint32m4_t op1, size_t vl)
{
  return vmerge_vxm_u32m4_tu(mask, dest, op1, -16, vl);
}

/*
** test_vmerge_vxm_u32m4_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vuint32m4_t 
test_vmerge_vxm_u32m4_tu_15(vuint32m4_t dest, vbool8_t mask, vuint32m4_t op1, size_t vl)
{
  return vmerge_vxm_u32m4_tu(mask, dest, op1, 15, vl);
}

/*
** test_vmerge_vxm_u32m4_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint32m4_t 
test_vmerge_vxm_u32m4_tu_vl31_m16(vuint32m4_t dest, vbool8_t mask, vuint32m4_t op1)
{
  return vmerge_vxm_u32m4_tu(mask, dest, op1, -16, 31);
}

/*
** test_vmerge_vxm_u32m4_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vuint32m4_t 
test_vmerge_vxm_u32m4_tu_vl31_15(vuint32m4_t dest, vbool8_t mask, vuint32m4_t op1)
{
  return vmerge_vxm_u32m4_tu(mask, dest, op1, 15, 31);
}

/*
** test_vmerge_vxm_u32m8_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vuint32m8_t 
test_vmerge_vxm_u32m8_tu_m16(vuint32m8_t dest, vbool4_t mask, vuint32m8_t op1, size_t vl)
{
  return vmerge_vxm_u32m8_tu(mask, dest, op1, -16, vl);
}

/*
** test_vmerge_vxm_u32m8_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vuint32m8_t 
test_vmerge_vxm_u32m8_tu_15(vuint32m8_t dest, vbool4_t mask, vuint32m8_t op1, size_t vl)
{
  return vmerge_vxm_u32m8_tu(mask, dest, op1, 15, vl);
}

/*
** test_vmerge_vxm_u32m8_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vuint32m8_t 
test_vmerge_vxm_u32m8_tu_vl31_m16(vuint32m8_t dest, vbool4_t mask, vuint32m8_t op1)
{
  return vmerge_vxm_u32m8_tu(mask, dest, op1, -16, 31);
}

/*
** test_vmerge_vxm_u32m8_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vuint32m8_t 
test_vmerge_vxm_u32m8_tu_vl31_15(vuint32m8_t dest, vbool4_t mask, vuint32m8_t op1)
{
  return vmerge_vxm_u32m8_tu(mask, dest, op1, 15, 31);
}

/*
** test_vmerge_vxm_u64m1_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint64m1_t 
test_vmerge_vxm_u64m1_tu_m16(vuint64m1_t dest, vbool64_t mask, vuint64m1_t op1, size_t vl)
{
  return vmerge_vxm_u64m1_tu(mask, dest, op1, -16, vl);
}

/*
** test_vmerge_vxm_u64m1_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint64m1_t 
test_vmerge_vxm_u64m1_tu_15(vuint64m1_t dest, vbool64_t mask, vuint64m1_t op1, size_t vl)
{
  return vmerge_vxm_u64m1_tu(mask, dest, op1, 15, vl);
}

/*
** test_vmerge_vxm_u64m1_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint64m1_t 
test_vmerge_vxm_u64m1_tu_vl31_m16(vuint64m1_t dest, vbool64_t mask, vuint64m1_t op1)
{
  return vmerge_vxm_u64m1_tu(mask, dest, op1, -16, 31);
}

/*
** test_vmerge_vxm_u64m1_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint64m1_t 
test_vmerge_vxm_u64m1_tu_vl31_15(vuint64m1_t dest, vbool64_t mask, vuint64m1_t op1)
{
  return vmerge_vxm_u64m1_tu(mask, dest, op1, 15, 31);
}

/*
** test_vmerge_vxm_u64m2_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vuint64m2_t 
test_vmerge_vxm_u64m2_tu_m16(vuint64m2_t dest, vbool32_t mask, vuint64m2_t op1, size_t vl)
{
  return vmerge_vxm_u64m2_tu(mask, dest, op1, -16, vl);
}

/*
** test_vmerge_vxm_u64m2_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vuint64m2_t 
test_vmerge_vxm_u64m2_tu_15(vuint64m2_t dest, vbool32_t mask, vuint64m2_t op1, size_t vl)
{
  return vmerge_vxm_u64m2_tu(mask, dest, op1, 15, vl);
}

/*
** test_vmerge_vxm_u64m2_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vuint64m2_t 
test_vmerge_vxm_u64m2_tu_vl31_m16(vuint64m2_t dest, vbool32_t mask, vuint64m2_t op1)
{
  return vmerge_vxm_u64m2_tu(mask, dest, op1, -16, 31);
}

/*
** test_vmerge_vxm_u64m2_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vuint64m2_t 
test_vmerge_vxm_u64m2_tu_vl31_15(vuint64m2_t dest, vbool32_t mask, vuint64m2_t op1)
{
  return vmerge_vxm_u64m2_tu(mask, dest, op1, 15, 31);
}

/*
** test_vmerge_vxm_u64m4_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint64m4_t 
test_vmerge_vxm_u64m4_tu_m16(vuint64m4_t dest, vbool16_t mask, vuint64m4_t op1, size_t vl)
{
  return vmerge_vxm_u64m4_tu(mask, dest, op1, -16, vl);
}

/*
** test_vmerge_vxm_u64m4_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vuint64m4_t 
test_vmerge_vxm_u64m4_tu_15(vuint64m4_t dest, vbool16_t mask, vuint64m4_t op1, size_t vl)
{
  return vmerge_vxm_u64m4_tu(mask, dest, op1, 15, vl);
}

/*
** test_vmerge_vxm_u64m4_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint64m4_t 
test_vmerge_vxm_u64m4_tu_vl31_m16(vuint64m4_t dest, vbool16_t mask, vuint64m4_t op1)
{
  return vmerge_vxm_u64m4_tu(mask, dest, op1, -16, 31);
}

/*
** test_vmerge_vxm_u64m4_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vuint64m4_t 
test_vmerge_vxm_u64m4_tu_vl31_15(vuint64m4_t dest, vbool16_t mask, vuint64m4_t op1)
{
  return vmerge_vxm_u64m4_tu(mask, dest, op1, 15, 31);
}

/*
** test_vmerge_vxm_u64m8_tu_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vuint64m8_t 
test_vmerge_vxm_u64m8_tu_m16(vuint64m8_t dest, vbool8_t mask, vuint64m8_t op1, size_t vl)
{
  return vmerge_vxm_u64m8_tu(mask, dest, op1, -16, vl);
}

/*
** test_vmerge_vxm_u64m8_tu_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vuint64m8_t 
test_vmerge_vxm_u64m8_tu_15(vuint64m8_t dest, vbool8_t mask, vuint64m8_t op1, size_t vl)
{
  return vmerge_vxm_u64m8_tu(mask, dest, op1, 15, vl);
}

/*
** test_vmerge_vxm_u64m8_tu_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vuint64m8_t 
test_vmerge_vxm_u64m8_tu_vl31_m16(vuint64m8_t dest, vbool8_t mask, vuint64m8_t op1)
{
  return vmerge_vxm_u64m8_tu(mask, dest, op1, -16, 31);
}

/*
** test_vmerge_vxm_u64m8_tu_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vuint64m8_t 
test_vmerge_vxm_u64m8_tu_vl31_15(vuint64m8_t dest, vbool8_t mask, vuint64m8_t op1)
{
  return vmerge_vxm_u64m8_tu(mask, dest, op1, 15, 31);
}

/*
** test_vmerge_vxm_u8mf8_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8mf8_t 
test_vmerge_vxm_u8mf8_ta_vl32_m16(vbool64_t mask, vuint8mf8_t op1)
{
  return vmerge_vxm_u8mf8_ta(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_u8mf8_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint8mf8_t 
test_vmerge_vxm_u8mf8_ta_vl32_15(vbool64_t mask, vuint8mf8_t op1)
{
  return vmerge_vxm_u8mf8_ta(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_u8mf4_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8mf4_t 
test_vmerge_vxm_u8mf4_ta_vl32_m16(vbool32_t mask, vuint8mf4_t op1)
{
  return vmerge_vxm_u8mf4_ta(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_u8mf4_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint8mf4_t 
test_vmerge_vxm_u8mf4_ta_vl32_15(vbool32_t mask, vuint8mf4_t op1)
{
  return vmerge_vxm_u8mf4_ta(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_u8mf2_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8mf2_t 
test_vmerge_vxm_u8mf2_ta_vl32_m16(vbool16_t mask, vuint8mf2_t op1)
{
  return vmerge_vxm_u8mf2_ta(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_u8mf2_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint8mf2_t 
test_vmerge_vxm_u8mf2_ta_vl32_15(vbool16_t mask, vuint8mf2_t op1)
{
  return vmerge_vxm_u8mf2_ta(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_u8m1_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8m1_t 
test_vmerge_vxm_u8m1_ta_vl32_m16(vbool8_t mask, vuint8m1_t op1)
{
  return vmerge_vxm_u8m1_ta(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_u8m1_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint8m1_t 
test_vmerge_vxm_u8m1_ta_vl32_15(vbool8_t mask, vuint8m1_t op1)
{
  return vmerge_vxm_u8m1_ta(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_u8m2_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8m2_t 
test_vmerge_vxm_u8m2_ta_vl32_m16(vbool4_t mask, vuint8m2_t op1)
{
  return vmerge_vxm_u8m2_ta(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_u8m2_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vuint8m2_t 
test_vmerge_vxm_u8m2_ta_vl32_15(vbool4_t mask, vuint8m2_t op1)
{
  return vmerge_vxm_u8m2_ta(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_u8m4_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8m4_t 
test_vmerge_vxm_u8m4_ta_vl32_m16(vbool2_t mask, vuint8m4_t op1)
{
  return vmerge_vxm_u8m4_ta(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_u8m4_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vuint8m4_t 
test_vmerge_vxm_u8m4_ta_vl32_15(vbool2_t mask, vuint8m4_t op1)
{
  return vmerge_vxm_u8m4_ta(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_u8m8_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8m8_t 
test_vmerge_vxm_u8m8_ta_vl32_m16(vbool1_t mask, vuint8m8_t op1)
{
  return vmerge_vxm_u8m8_ta(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_u8m8_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vuint8m8_t 
test_vmerge_vxm_u8m8_ta_vl32_15(vbool1_t mask, vuint8m8_t op1)
{
  return vmerge_vxm_u8m8_ta(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_u16mf4_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint16mf4_t 
test_vmerge_vxm_u16mf4_ta_vl32_m16(vbool64_t mask, vuint16mf4_t op1)
{
  return vmerge_vxm_u16mf4_ta(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_u16mf4_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint16mf4_t 
test_vmerge_vxm_u16mf4_ta_vl32_15(vbool64_t mask, vuint16mf4_t op1)
{
  return vmerge_vxm_u16mf4_ta(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_u16mf2_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint16mf2_t 
test_vmerge_vxm_u16mf2_ta_vl32_m16(vbool32_t mask, vuint16mf2_t op1)
{
  return vmerge_vxm_u16mf2_ta(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_u16mf2_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint16mf2_t 
test_vmerge_vxm_u16mf2_ta_vl32_15(vbool32_t mask, vuint16mf2_t op1)
{
  return vmerge_vxm_u16mf2_ta(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_u16m1_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint16m1_t 
test_vmerge_vxm_u16m1_ta_vl32_m16(vbool16_t mask, vuint16m1_t op1)
{
  return vmerge_vxm_u16m1_ta(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_u16m1_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint16m1_t 
test_vmerge_vxm_u16m1_ta_vl32_15(vbool16_t mask, vuint16m1_t op1)
{
  return vmerge_vxm_u16m1_ta(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_u16m2_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vuint16m2_t 
test_vmerge_vxm_u16m2_ta_vl32_m16(vbool8_t mask, vuint16m2_t op1)
{
  return vmerge_vxm_u16m2_ta(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_u16m2_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vuint16m2_t 
test_vmerge_vxm_u16m2_ta_vl32_15(vbool8_t mask, vuint16m2_t op1)
{
  return vmerge_vxm_u16m2_ta(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_u16m4_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint16m4_t 
test_vmerge_vxm_u16m4_ta_vl32_m16(vbool4_t mask, vuint16m4_t op1)
{
  return vmerge_vxm_u16m4_ta(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_u16m4_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vuint16m4_t 
test_vmerge_vxm_u16m4_ta_vl32_15(vbool4_t mask, vuint16m4_t op1)
{
  return vmerge_vxm_u16m4_ta(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_u16m8_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vuint16m8_t 
test_vmerge_vxm_u16m8_ta_vl32_m16(vbool2_t mask, vuint16m8_t op1)
{
  return vmerge_vxm_u16m8_ta(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_u16m8_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vuint16m8_t 
test_vmerge_vxm_u16m8_ta_vl32_15(vbool2_t mask, vuint16m8_t op1)
{
  return vmerge_vxm_u16m8_ta(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_u32mf2_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint32mf2_t 
test_vmerge_vxm_u32mf2_ta_vl32_m16(vbool64_t mask, vuint32mf2_t op1)
{
  return vmerge_vxm_u32mf2_ta(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_u32mf2_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint32mf2_t 
test_vmerge_vxm_u32mf2_ta_vl32_15(vbool64_t mask, vuint32mf2_t op1)
{
  return vmerge_vxm_u32mf2_ta(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_u32m1_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint32m1_t 
test_vmerge_vxm_u32m1_ta_vl32_m16(vbool32_t mask, vuint32m1_t op1)
{
  return vmerge_vxm_u32m1_ta(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_u32m1_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint32m1_t 
test_vmerge_vxm_u32m1_ta_vl32_15(vbool32_t mask, vuint32m1_t op1)
{
  return vmerge_vxm_u32m1_ta(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_u32m2_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vuint32m2_t 
test_vmerge_vxm_u32m2_ta_vl32_m16(vbool16_t mask, vuint32m2_t op1)
{
  return vmerge_vxm_u32m2_ta(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_u32m2_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vuint32m2_t 
test_vmerge_vxm_u32m2_ta_vl32_15(vbool16_t mask, vuint32m2_t op1)
{
  return vmerge_vxm_u32m2_ta(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_u32m4_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint32m4_t 
test_vmerge_vxm_u32m4_ta_vl32_m16(vbool8_t mask, vuint32m4_t op1)
{
  return vmerge_vxm_u32m4_ta(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_u32m4_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vuint32m4_t 
test_vmerge_vxm_u32m4_ta_vl32_15(vbool8_t mask, vuint32m4_t op1)
{
  return vmerge_vxm_u32m4_ta(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_u32m8_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vuint32m8_t 
test_vmerge_vxm_u32m8_ta_vl32_m16(vbool4_t mask, vuint32m8_t op1)
{
  return vmerge_vxm_u32m8_ta(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_u32m8_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vuint32m8_t 
test_vmerge_vxm_u32m8_ta_vl32_15(vbool4_t mask, vuint32m8_t op1)
{
  return vmerge_vxm_u32m8_ta(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_u64m1_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint64m1_t 
test_vmerge_vxm_u64m1_ta_vl32_m16(vbool64_t mask, vuint64m1_t op1)
{
  return vmerge_vxm_u64m1_ta(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_u64m1_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint64m1_t 
test_vmerge_vxm_u64m1_ta_vl32_15(vbool64_t mask, vuint64m1_t op1)
{
  return vmerge_vxm_u64m1_ta(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_u64m2_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vuint64m2_t 
test_vmerge_vxm_u64m2_ta_vl32_m16(vbool32_t mask, vuint64m2_t op1)
{
  return vmerge_vxm_u64m2_ta(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_u64m2_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vuint64m2_t 
test_vmerge_vxm_u64m2_ta_vl32_15(vbool32_t mask, vuint64m2_t op1)
{
  return vmerge_vxm_u64m2_ta(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_u64m4_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint64m4_t 
test_vmerge_vxm_u64m4_ta_vl32_m16(vbool16_t mask, vuint64m4_t op1)
{
  return vmerge_vxm_u64m4_ta(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_u64m4_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vuint64m4_t 
test_vmerge_vxm_u64m4_ta_vl32_15(vbool16_t mask, vuint64m4_t op1)
{
  return vmerge_vxm_u64m4_ta(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_u64m8_ta_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vuint64m8_t 
test_vmerge_vxm_u64m8_ta_vl32_m16(vbool8_t mask, vuint64m8_t op1)
{
  return vmerge_vxm_u64m8_ta(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_u64m8_ta_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vuint64m8_t 
test_vmerge_vxm_u64m8_ta_vl32_15(vbool8_t mask, vuint64m8_t op1)
{
  return vmerge_vxm_u64m8_ta(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_u8mf8_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8mf8_t 
test_vmerge_vxm_u8mf8_tu_vl32_m16(vuint8mf8_t dest, vbool64_t mask, vuint8mf8_t op1)
{
  return vmerge_vxm_u8mf8_tu(mask, dest, op1, -16, 32);
}

/*
** test_vmerge_vxm_u8mf8_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint8mf8_t 
test_vmerge_vxm_u8mf8_tu_vl32_15(vuint8mf8_t dest, vbool64_t mask, vuint8mf8_t op1)
{
  return vmerge_vxm_u8mf8_tu(mask, dest, op1, 15, 32);
}

/*
** test_vmerge_vxm_u8mf4_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8mf4_t 
test_vmerge_vxm_u8mf4_tu_vl32_m16(vuint8mf4_t dest, vbool32_t mask, vuint8mf4_t op1)
{
  return vmerge_vxm_u8mf4_tu(mask, dest, op1, -16, 32);
}

/*
** test_vmerge_vxm_u8mf4_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint8mf4_t 
test_vmerge_vxm_u8mf4_tu_vl32_15(vuint8mf4_t dest, vbool32_t mask, vuint8mf4_t op1)
{
  return vmerge_vxm_u8mf4_tu(mask, dest, op1, 15, 32);
}

/*
** test_vmerge_vxm_u8mf2_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8mf2_t 
test_vmerge_vxm_u8mf2_tu_vl32_m16(vuint8mf2_t dest, vbool16_t mask, vuint8mf2_t op1)
{
  return vmerge_vxm_u8mf2_tu(mask, dest, op1, -16, 32);
}

/*
** test_vmerge_vxm_u8mf2_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint8mf2_t 
test_vmerge_vxm_u8mf2_tu_vl32_15(vuint8mf2_t dest, vbool16_t mask, vuint8mf2_t op1)
{
  return vmerge_vxm_u8mf2_tu(mask, dest, op1, 15, 32);
}

/*
** test_vmerge_vxm_u8m1_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8m1_t 
test_vmerge_vxm_u8m1_tu_vl32_m16(vuint8m1_t dest, vbool8_t mask, vuint8m1_t op1)
{
  return vmerge_vxm_u8m1_tu(mask, dest, op1, -16, 32);
}

/*
** test_vmerge_vxm_u8m1_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint8m1_t 
test_vmerge_vxm_u8m1_tu_vl32_15(vuint8m1_t dest, vbool8_t mask, vuint8m1_t op1)
{
  return vmerge_vxm_u8m1_tu(mask, dest, op1, 15, 32);
}

/*
** test_vmerge_vxm_u8m2_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8m2_t 
test_vmerge_vxm_u8m2_tu_vl32_m16(vuint8m2_t dest, vbool4_t mask, vuint8m2_t op1)
{
  return vmerge_vxm_u8m2_tu(mask, dest, op1, -16, 32);
}

/*
** test_vmerge_vxm_u8m2_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vuint8m2_t 
test_vmerge_vxm_u8m2_tu_vl32_15(vuint8m2_t dest, vbool4_t mask, vuint8m2_t op1)
{
  return vmerge_vxm_u8m2_tu(mask, dest, op1, 15, 32);
}

/*
** test_vmerge_vxm_u8m4_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8m4_t 
test_vmerge_vxm_u8m4_tu_vl32_m16(vuint8m4_t dest, vbool2_t mask, vuint8m4_t op1)
{
  return vmerge_vxm_u8m4_tu(mask, dest, op1, -16, 32);
}

/*
** test_vmerge_vxm_u8m4_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vuint8m4_t 
test_vmerge_vxm_u8m4_tu_vl32_15(vuint8m4_t dest, vbool2_t mask, vuint8m4_t op1)
{
  return vmerge_vxm_u8m4_tu(mask, dest, op1, 15, 32);
}

/*
** test_vmerge_vxm_u8m8_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8m8_t 
test_vmerge_vxm_u8m8_tu_vl32_m16(vuint8m8_t dest, vbool1_t mask, vuint8m8_t op1)
{
  return vmerge_vxm_u8m8_tu(mask, dest, op1, -16, 32);
}

/*
** test_vmerge_vxm_u8m8_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vuint8m8_t 
test_vmerge_vxm_u8m8_tu_vl32_15(vuint8m8_t dest, vbool1_t mask, vuint8m8_t op1)
{
  return vmerge_vxm_u8m8_tu(mask, dest, op1, 15, 32);
}

/*
** test_vmerge_vxm_u16mf4_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint16mf4_t 
test_vmerge_vxm_u16mf4_tu_vl32_m16(vuint16mf4_t dest, vbool64_t mask, vuint16mf4_t op1)
{
  return vmerge_vxm_u16mf4_tu(mask, dest, op1, -16, 32);
}

/*
** test_vmerge_vxm_u16mf4_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint16mf4_t 
test_vmerge_vxm_u16mf4_tu_vl32_15(vuint16mf4_t dest, vbool64_t mask, vuint16mf4_t op1)
{
  return vmerge_vxm_u16mf4_tu(mask, dest, op1, 15, 32);
}

/*
** test_vmerge_vxm_u16mf2_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint16mf2_t 
test_vmerge_vxm_u16mf2_tu_vl32_m16(vuint16mf2_t dest, vbool32_t mask, vuint16mf2_t op1)
{
  return vmerge_vxm_u16mf2_tu(mask, dest, op1, -16, 32);
}

/*
** test_vmerge_vxm_u16mf2_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint16mf2_t 
test_vmerge_vxm_u16mf2_tu_vl32_15(vuint16mf2_t dest, vbool32_t mask, vuint16mf2_t op1)
{
  return vmerge_vxm_u16mf2_tu(mask, dest, op1, 15, 32);
}

/*
** test_vmerge_vxm_u16m1_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint16m1_t 
test_vmerge_vxm_u16m1_tu_vl32_m16(vuint16m1_t dest, vbool16_t mask, vuint16m1_t op1)
{
  return vmerge_vxm_u16m1_tu(mask, dest, op1, -16, 32);
}

/*
** test_vmerge_vxm_u16m1_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint16m1_t 
test_vmerge_vxm_u16m1_tu_vl32_15(vuint16m1_t dest, vbool16_t mask, vuint16m1_t op1)
{
  return vmerge_vxm_u16m1_tu(mask, dest, op1, 15, 32);
}

/*
** test_vmerge_vxm_u16m2_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vuint16m2_t 
test_vmerge_vxm_u16m2_tu_vl32_m16(vuint16m2_t dest, vbool8_t mask, vuint16m2_t op1)
{
  return vmerge_vxm_u16m2_tu(mask, dest, op1, -16, 32);
}

/*
** test_vmerge_vxm_u16m2_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vuint16m2_t 
test_vmerge_vxm_u16m2_tu_vl32_15(vuint16m2_t dest, vbool8_t mask, vuint16m2_t op1)
{
  return vmerge_vxm_u16m2_tu(mask, dest, op1, 15, 32);
}

/*
** test_vmerge_vxm_u16m4_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint16m4_t 
test_vmerge_vxm_u16m4_tu_vl32_m16(vuint16m4_t dest, vbool4_t mask, vuint16m4_t op1)
{
  return vmerge_vxm_u16m4_tu(mask, dest, op1, -16, 32);
}

/*
** test_vmerge_vxm_u16m4_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vuint16m4_t 
test_vmerge_vxm_u16m4_tu_vl32_15(vuint16m4_t dest, vbool4_t mask, vuint16m4_t op1)
{
  return vmerge_vxm_u16m4_tu(mask, dest, op1, 15, 32);
}

/*
** test_vmerge_vxm_u16m8_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vuint16m8_t 
test_vmerge_vxm_u16m8_tu_vl32_m16(vuint16m8_t dest, vbool2_t mask, vuint16m8_t op1)
{
  return vmerge_vxm_u16m8_tu(mask, dest, op1, -16, 32);
}

/*
** test_vmerge_vxm_u16m8_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vuint16m8_t 
test_vmerge_vxm_u16m8_tu_vl32_15(vuint16m8_t dest, vbool2_t mask, vuint16m8_t op1)
{
  return vmerge_vxm_u16m8_tu(mask, dest, op1, 15, 32);
}

/*
** test_vmerge_vxm_u32mf2_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint32mf2_t 
test_vmerge_vxm_u32mf2_tu_vl32_m16(vuint32mf2_t dest, vbool64_t mask, vuint32mf2_t op1)
{
  return vmerge_vxm_u32mf2_tu(mask, dest, op1, -16, 32);
}

/*
** test_vmerge_vxm_u32mf2_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint32mf2_t 
test_vmerge_vxm_u32mf2_tu_vl32_15(vuint32mf2_t dest, vbool64_t mask, vuint32mf2_t op1)
{
  return vmerge_vxm_u32mf2_tu(mask, dest, op1, 15, 32);
}

/*
** test_vmerge_vxm_u32m1_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint32m1_t 
test_vmerge_vxm_u32m1_tu_vl32_m16(vuint32m1_t dest, vbool32_t mask, vuint32m1_t op1)
{
  return vmerge_vxm_u32m1_tu(mask, dest, op1, -16, 32);
}

/*
** test_vmerge_vxm_u32m1_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint32m1_t 
test_vmerge_vxm_u32m1_tu_vl32_15(vuint32m1_t dest, vbool32_t mask, vuint32m1_t op1)
{
  return vmerge_vxm_u32m1_tu(mask, dest, op1, 15, 32);
}

/*
** test_vmerge_vxm_u32m2_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vuint32m2_t 
test_vmerge_vxm_u32m2_tu_vl32_m16(vuint32m2_t dest, vbool16_t mask, vuint32m2_t op1)
{
  return vmerge_vxm_u32m2_tu(mask, dest, op1, -16, 32);
}

/*
** test_vmerge_vxm_u32m2_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vuint32m2_t 
test_vmerge_vxm_u32m2_tu_vl32_15(vuint32m2_t dest, vbool16_t mask, vuint32m2_t op1)
{
  return vmerge_vxm_u32m2_tu(mask, dest, op1, 15, 32);
}

/*
** test_vmerge_vxm_u32m4_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint32m4_t 
test_vmerge_vxm_u32m4_tu_vl32_m16(vuint32m4_t dest, vbool8_t mask, vuint32m4_t op1)
{
  return vmerge_vxm_u32m4_tu(mask, dest, op1, -16, 32);
}

/*
** test_vmerge_vxm_u32m4_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vuint32m4_t 
test_vmerge_vxm_u32m4_tu_vl32_15(vuint32m4_t dest, vbool8_t mask, vuint32m4_t op1)
{
  return vmerge_vxm_u32m4_tu(mask, dest, op1, 15, 32);
}

/*
** test_vmerge_vxm_u32m8_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vuint32m8_t 
test_vmerge_vxm_u32m8_tu_vl32_m16(vuint32m8_t dest, vbool4_t mask, vuint32m8_t op1)
{
  return vmerge_vxm_u32m8_tu(mask, dest, op1, -16, 32);
}

/*
** test_vmerge_vxm_u32m8_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vuint32m8_t 
test_vmerge_vxm_u32m8_tu_vl32_15(vuint32m8_t dest, vbool4_t mask, vuint32m8_t op1)
{
  return vmerge_vxm_u32m8_tu(mask, dest, op1, 15, 32);
}

/*
** test_vmerge_vxm_u64m1_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint64m1_t 
test_vmerge_vxm_u64m1_tu_vl32_m16(vuint64m1_t dest, vbool64_t mask, vuint64m1_t op1)
{
  return vmerge_vxm_u64m1_tu(mask, dest, op1, -16, 32);
}

/*
** test_vmerge_vxm_u64m1_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint64m1_t 
test_vmerge_vxm_u64m1_tu_vl32_15(vuint64m1_t dest, vbool64_t mask, vuint64m1_t op1)
{
  return vmerge_vxm_u64m1_tu(mask, dest, op1, 15, 32);
}

/*
** test_vmerge_vxm_u64m2_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vuint64m2_t 
test_vmerge_vxm_u64m2_tu_vl32_m16(vuint64m2_t dest, vbool32_t mask, vuint64m2_t op1)
{
  return vmerge_vxm_u64m2_tu(mask, dest, op1, -16, 32);
}

/*
** test_vmerge_vxm_u64m2_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vuint64m2_t 
test_vmerge_vxm_u64m2_tu_vl32_15(vuint64m2_t dest, vbool32_t mask, vuint64m2_t op1)
{
  return vmerge_vxm_u64m2_tu(mask, dest, op1, 15, 32);
}

/*
** test_vmerge_vxm_u64m4_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint64m4_t 
test_vmerge_vxm_u64m4_tu_vl32_m16(vuint64m4_t dest, vbool16_t mask, vuint64m4_t op1)
{
  return vmerge_vxm_u64m4_tu(mask, dest, op1, -16, 32);
}

/*
** test_vmerge_vxm_u64m4_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vuint64m4_t 
test_vmerge_vxm_u64m4_tu_vl32_15(vuint64m4_t dest, vbool16_t mask, vuint64m4_t op1)
{
  return vmerge_vxm_u64m4_tu(mask, dest, op1, 15, 32);
}

/*
** test_vmerge_vxm_u64m8_tu_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vuint64m8_t 
test_vmerge_vxm_u64m8_tu_vl32_m16(vuint64m8_t dest, vbool8_t mask, vuint64m8_t op1)
{
  return vmerge_vxm_u64m8_tu(mask, dest, op1, -16, 32);
}

/*
** test_vmerge_vxm_u64m8_tu_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vuint64m8_t 
test_vmerge_vxm_u64m8_tu_vl32_15(vuint64m8_t dest, vbool8_t mask, vuint64m8_t op1)
{
  return vmerge_vxm_u64m8_tu(mask, dest, op1, 15, 32);
}

/*
** test_vmerge_vxm_u8mf8_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8mf8_t 
test_vmerge_vxm_u8mf8_vl32_m16(vbool64_t mask, vuint8mf8_t op1)
{
  return vmerge_vxm_u8mf8(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_u8mf8_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint8mf8_t 
test_vmerge_vxm_u8mf8_vl32_15(vbool64_t mask, vuint8mf8_t op1)
{
  return vmerge_vxm_u8mf8(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_u8mf4_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8mf4_t 
test_vmerge_vxm_u8mf4_vl32_m16(vbool32_t mask, vuint8mf4_t op1)
{
  return vmerge_vxm_u8mf4(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_u8mf4_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint8mf4_t 
test_vmerge_vxm_u8mf4_vl32_15(vbool32_t mask, vuint8mf4_t op1)
{
  return vmerge_vxm_u8mf4(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_u8mf2_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8mf2_t 
test_vmerge_vxm_u8mf2_vl32_m16(vbool16_t mask, vuint8mf2_t op1)
{
  return vmerge_vxm_u8mf2(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_u8mf2_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint8mf2_t 
test_vmerge_vxm_u8mf2_vl32_15(vbool16_t mask, vuint8mf2_t op1)
{
  return vmerge_vxm_u8mf2(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_u8m1_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8m1_t 
test_vmerge_vxm_u8m1_vl32_m16(vbool8_t mask, vuint8m1_t op1)
{
  return vmerge_vxm_u8m1(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_u8m1_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint8m1_t 
test_vmerge_vxm_u8m1_vl32_15(vbool8_t mask, vuint8m1_t op1)
{
  return vmerge_vxm_u8m1(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_u8m2_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8m2_t 
test_vmerge_vxm_u8m2_vl32_m16(vbool4_t mask, vuint8m2_t op1)
{
  return vmerge_vxm_u8m2(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_u8m2_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vuint8m2_t 
test_vmerge_vxm_u8m2_vl32_15(vbool4_t mask, vuint8m2_t op1)
{
  return vmerge_vxm_u8m2(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_u8m4_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8m4_t 
test_vmerge_vxm_u8m4_vl32_m16(vbool2_t mask, vuint8m4_t op1)
{
  return vmerge_vxm_u8m4(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_u8m4_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vuint8m4_t 
test_vmerge_vxm_u8m4_vl32_15(vbool2_t mask, vuint8m4_t op1)
{
  return vmerge_vxm_u8m4(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_u8m8_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vuint8m8_t 
test_vmerge_vxm_u8m8_vl32_m16(vbool1_t mask, vuint8m8_t op1)
{
  return vmerge_vxm_u8m8(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_u8m8_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vuint8m8_t 
test_vmerge_vxm_u8m8_vl32_15(vbool1_t mask, vuint8m8_t op1)
{
  return vmerge_vxm_u8m8(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_u16mf4_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint16mf4_t 
test_vmerge_vxm_u16mf4_vl32_m16(vbool64_t mask, vuint16mf4_t op1)
{
  return vmerge_vxm_u16mf4(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_u16mf4_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint16mf4_t 
test_vmerge_vxm_u16mf4_vl32_15(vbool64_t mask, vuint16mf4_t op1)
{
  return vmerge_vxm_u16mf4(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_u16mf2_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint16mf2_t 
test_vmerge_vxm_u16mf2_vl32_m16(vbool32_t mask, vuint16mf2_t op1)
{
  return vmerge_vxm_u16mf2(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_u16mf2_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint16mf2_t 
test_vmerge_vxm_u16mf2_vl32_15(vbool32_t mask, vuint16mf2_t op1)
{
  return vmerge_vxm_u16mf2(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_u16m1_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint16m1_t 
test_vmerge_vxm_u16m1_vl32_m16(vbool16_t mask, vuint16m1_t op1)
{
  return vmerge_vxm_u16m1(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_u16m1_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint16m1_t 
test_vmerge_vxm_u16m1_vl32_15(vbool16_t mask, vuint16m1_t op1)
{
  return vmerge_vxm_u16m1(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_u16m2_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vuint16m2_t 
test_vmerge_vxm_u16m2_vl32_m16(vbool8_t mask, vuint16m2_t op1)
{
  return vmerge_vxm_u16m2(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_u16m2_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vuint16m2_t 
test_vmerge_vxm_u16m2_vl32_15(vbool8_t mask, vuint16m2_t op1)
{
  return vmerge_vxm_u16m2(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_u16m4_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint16m4_t 
test_vmerge_vxm_u16m4_vl32_m16(vbool4_t mask, vuint16m4_t op1)
{
  return vmerge_vxm_u16m4(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_u16m4_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vuint16m4_t 
test_vmerge_vxm_u16m4_vl32_15(vbool4_t mask, vuint16m4_t op1)
{
  return vmerge_vxm_u16m4(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_u16m8_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vuint16m8_t 
test_vmerge_vxm_u16m8_vl32_m16(vbool2_t mask, vuint16m8_t op1)
{
  return vmerge_vxm_u16m8(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_u16m8_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vuint16m8_t 
test_vmerge_vxm_u16m8_vl32_15(vbool2_t mask, vuint16m8_t op1)
{
  return vmerge_vxm_u16m8(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_u32mf2_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint32mf2_t 
test_vmerge_vxm_u32mf2_vl32_m16(vbool64_t mask, vuint32mf2_t op1)
{
  return vmerge_vxm_u32mf2(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_u32mf2_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint32mf2_t 
test_vmerge_vxm_u32mf2_vl32_15(vbool64_t mask, vuint32mf2_t op1)
{
  return vmerge_vxm_u32mf2(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_u32m1_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint32m1_t 
test_vmerge_vxm_u32m1_vl32_m16(vbool32_t mask, vuint32m1_t op1)
{
  return vmerge_vxm_u32m1(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_u32m1_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint32m1_t 
test_vmerge_vxm_u32m1_vl32_15(vbool32_t mask, vuint32m1_t op1)
{
  return vmerge_vxm_u32m1(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_u32m2_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vuint32m2_t 
test_vmerge_vxm_u32m2_vl32_m16(vbool16_t mask, vuint32m2_t op1)
{
  return vmerge_vxm_u32m2(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_u32m2_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vuint32m2_t 
test_vmerge_vxm_u32m2_vl32_15(vbool16_t mask, vuint32m2_t op1)
{
  return vmerge_vxm_u32m2(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_u32m4_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint32m4_t 
test_vmerge_vxm_u32m4_vl32_m16(vbool8_t mask, vuint32m4_t op1)
{
  return vmerge_vxm_u32m4(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_u32m4_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vuint32m4_t 
test_vmerge_vxm_u32m4_vl32_15(vbool8_t mask, vuint32m4_t op1)
{
  return vmerge_vxm_u32m4(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_u32m8_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vuint32m8_t 
test_vmerge_vxm_u32m8_vl32_m16(vbool4_t mask, vuint32m8_t op1)
{
  return vmerge_vxm_u32m8(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_u32m8_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vuint32m8_t 
test_vmerge_vxm_u32m8_vl32_15(vbool4_t mask, vuint32m8_t op1)
{
  return vmerge_vxm_u32m8(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_u64m1_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint64m1_t 
test_vmerge_vxm_u64m1_vl32_m16(vbool64_t mask, vuint64m1_t op1)
{
  return vmerge_vxm_u64m1(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_u64m1_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0
**  ...
**  ret
*/
vuint64m1_t 
test_vmerge_vxm_u64m1_vl32_15(vbool64_t mask, vuint64m1_t op1)
{
  return vmerge_vxm_u64m1(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_u64m2_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0
**  ...
**  ret
*/
vuint64m2_t 
test_vmerge_vxm_u64m2_vl32_m16(vbool32_t mask, vuint64m2_t op1)
{
  return vmerge_vxm_u64m2(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_u64m2_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0
**  ...
**  ret
*/
vuint64m2_t 
test_vmerge_vxm_u64m2_vl32_15(vbool32_t mask, vuint64m2_t op1)
{
  return vmerge_vxm_u64m2(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_u64m4_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0
**  ...
**  ret
*/
vuint64m4_t 
test_vmerge_vxm_u64m4_vl32_m16(vbool16_t mask, vuint64m4_t op1)
{
  return vmerge_vxm_u64m4(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_u64m4_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0
**  ...
**  ret
*/
vuint64m4_t 
test_vmerge_vxm_u64m4_vl32_15(vbool16_t mask, vuint64m4_t op1)
{
  return vmerge_vxm_u64m4(mask, op1, 15, 32);
}

/*
** test_vmerge_vxm_u64m8_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0
**  ...
**  ret
*/
vuint64m8_t 
test_vmerge_vxm_u64m8_vl32_m16(vbool8_t mask, vuint64m8_t op1)
{
  return vmerge_vxm_u64m8(mask, op1, -16, 32);
}

/*
** test_vmerge_vxm_u64m8_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0
**  ...
**  ret
*/
vuint64m8_t 
test_vmerge_vxm_u64m8_vl32_15(vbool8_t mask, vuint64m8_t op1)
{
  return vmerge_vxm_u64m8(mask, op1, 15, 32);
}

/*
** test_vmerge_vvm_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vfloat16mf4_t 
test_vmerge_vvm_f16mf4(vbool64_t mask, vfloat16mf4_t op1, vfloat16mf4_t op2, size_t vl)
{
  return vmerge_vvm_f16mf4(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_f16mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vfloat16mf4_t 
test_vmerge_vvm_f16mf4_vl31(vbool64_t mask, vfloat16mf4_t op1, vfloat16mf4_t op2)
{
  return vmerge_vvm_f16mf4(mask, op1, op2, 31);
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
vfloat16mf2_t 
test_vmerge_vvm_f16mf2(vbool32_t mask, vfloat16mf2_t op1, vfloat16mf2_t op2, size_t vl)
{
  return vmerge_vvm_f16mf2(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_f16mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vfloat16mf2_t 
test_vmerge_vvm_f16mf2_vl31(vbool32_t mask, vfloat16mf2_t op1, vfloat16mf2_t op2)
{
  return vmerge_vvm_f16mf2(mask, op1, op2, 31);
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
vfloat16m1_t 
test_vmerge_vvm_f16m1(vbool16_t mask, vfloat16m1_t op1, vfloat16m1_t op2, size_t vl)
{
  return vmerge_vvm_f16m1(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_f16m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vfloat16m1_t 
test_vmerge_vvm_f16m1_vl31(vbool16_t mask, vfloat16m1_t op1, vfloat16m1_t op2)
{
  return vmerge_vvm_f16m1(mask, op1, op2, 31);
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
vfloat16m2_t 
test_vmerge_vvm_f16m2(vbool8_t mask, vfloat16m2_t op1, vfloat16m2_t op2, size_t vl)
{
  return vmerge_vvm_f16m2(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_f16m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vfloat16m2_t 
test_vmerge_vvm_f16m2_vl31(vbool8_t mask, vfloat16m2_t op1, vfloat16m2_t op2)
{
  return vmerge_vvm_f16m2(mask, op1, op2, 31);
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
vfloat16m4_t 
test_vmerge_vvm_f16m4(vbool4_t mask, vfloat16m4_t op1, vfloat16m4_t op2, size_t vl)
{
  return vmerge_vvm_f16m4(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_f16m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vfloat16m4_t 
test_vmerge_vvm_f16m4_vl31(vbool4_t mask, vfloat16m4_t op1, vfloat16m4_t op2)
{
  return vmerge_vvm_f16m4(mask, op1, op2, 31);
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
vfloat16m8_t 
test_vmerge_vvm_f16m8(vbool2_t mask, vfloat16m8_t op1, vfloat16m8_t op2, size_t vl)
{
  return vmerge_vvm_f16m8(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_f16m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vfloat16m8_t 
test_vmerge_vvm_f16m8_vl31(vbool2_t mask, vfloat16m8_t op1, vfloat16m8_t op2)
{
  return vmerge_vvm_f16m8(mask, op1, op2, 31);
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
vfloat32mf2_t 
test_vmerge_vvm_f32mf2(vbool64_t mask, vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl)
{
  return vmerge_vvm_f32mf2(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_f32mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vfloat32mf2_t 
test_vmerge_vvm_f32mf2_vl31(vbool64_t mask, vfloat32mf2_t op1, vfloat32mf2_t op2)
{
  return vmerge_vvm_f32mf2(mask, op1, op2, 31);
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
vfloat32m1_t 
test_vmerge_vvm_f32m1(vbool32_t mask, vfloat32m1_t op1, vfloat32m1_t op2, size_t vl)
{
  return vmerge_vvm_f32m1(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_f32m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vfloat32m1_t 
test_vmerge_vvm_f32m1_vl31(vbool32_t mask, vfloat32m1_t op1, vfloat32m1_t op2)
{
  return vmerge_vvm_f32m1(mask, op1, op2, 31);
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
vfloat32m2_t 
test_vmerge_vvm_f32m2(vbool16_t mask, vfloat32m2_t op1, vfloat32m2_t op2, size_t vl)
{
  return vmerge_vvm_f32m2(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_f32m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vfloat32m2_t 
test_vmerge_vvm_f32m2_vl31(vbool16_t mask, vfloat32m2_t op1, vfloat32m2_t op2)
{
  return vmerge_vvm_f32m2(mask, op1, op2, 31);
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
vfloat32m4_t 
test_vmerge_vvm_f32m4(vbool8_t mask, vfloat32m4_t op1, vfloat32m4_t op2, size_t vl)
{
  return vmerge_vvm_f32m4(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_f32m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vfloat32m4_t 
test_vmerge_vvm_f32m4_vl31(vbool8_t mask, vfloat32m4_t op1, vfloat32m4_t op2)
{
  return vmerge_vvm_f32m4(mask, op1, op2, 31);
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
vfloat32m8_t 
test_vmerge_vvm_f32m8(vbool4_t mask, vfloat32m8_t op1, vfloat32m8_t op2, size_t vl)
{
  return vmerge_vvm_f32m8(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_f32m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vfloat32m8_t 
test_vmerge_vvm_f32m8_vl31(vbool4_t mask, vfloat32m8_t op1, vfloat32m8_t op2)
{
  return vmerge_vvm_f32m8(mask, op1, op2, 31);
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
vfloat64m1_t 
test_vmerge_vvm_f64m1(vbool64_t mask, vfloat64m1_t op1, vfloat64m1_t op2, size_t vl)
{
  return vmerge_vvm_f64m1(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_f64m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vfloat64m1_t 
test_vmerge_vvm_f64m1_vl31(vbool64_t mask, vfloat64m1_t op1, vfloat64m1_t op2)
{
  return vmerge_vvm_f64m1(mask, op1, op2, 31);
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
vfloat64m2_t 
test_vmerge_vvm_f64m2(vbool32_t mask, vfloat64m2_t op1, vfloat64m2_t op2, size_t vl)
{
  return vmerge_vvm_f64m2(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_f64m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vfloat64m2_t 
test_vmerge_vvm_f64m2_vl31(vbool32_t mask, vfloat64m2_t op1, vfloat64m2_t op2)
{
  return vmerge_vvm_f64m2(mask, op1, op2, 31);
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
vfloat64m4_t 
test_vmerge_vvm_f64m4(vbool16_t mask, vfloat64m4_t op1, vfloat64m4_t op2, size_t vl)
{
  return vmerge_vvm_f64m4(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_f64m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vfloat64m4_t 
test_vmerge_vvm_f64m4_vl31(vbool16_t mask, vfloat64m4_t op1, vfloat64m4_t op2)
{
  return vmerge_vvm_f64m4(mask, op1, op2, 31);
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
vfloat64m8_t 
test_vmerge_vvm_f64m8(vbool8_t mask, vfloat64m8_t op1, vfloat64m8_t op2, size_t vl)
{
  return vmerge_vvm_f64m8(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_f64m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vfloat64m8_t 
test_vmerge_vvm_f64m8_vl31(vbool8_t mask, vfloat64m8_t op1, vfloat64m8_t op2)
{
  return vmerge_vvm_f64m8(mask, op1, op2, 31);
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
vfloat16mf4_t 
test_vmerge_vvm_f16mf4_ta(vbool64_t mask, vfloat16mf4_t op1, vfloat16mf4_t op2, size_t vl)
{
  return vmerge_vvm_f16mf4_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_f16mf4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vfloat16mf4_t 
test_vmerge_vvm_f16mf4_ta_vl31(vbool64_t mask, vfloat16mf4_t op1, vfloat16mf4_t op2)
{
  return vmerge_vvm_f16mf4_ta(mask, op1, op2, 31);
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
vfloat16mf2_t 
test_vmerge_vvm_f16mf2_ta(vbool32_t mask, vfloat16mf2_t op1, vfloat16mf2_t op2, size_t vl)
{
  return vmerge_vvm_f16mf2_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_f16mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vfloat16mf2_t 
test_vmerge_vvm_f16mf2_ta_vl31(vbool32_t mask, vfloat16mf2_t op1, vfloat16mf2_t op2)
{
  return vmerge_vvm_f16mf2_ta(mask, op1, op2, 31);
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
vfloat16m1_t 
test_vmerge_vvm_f16m1_ta(vbool16_t mask, vfloat16m1_t op1, vfloat16m1_t op2, size_t vl)
{
  return vmerge_vvm_f16m1_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_f16m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vfloat16m1_t 
test_vmerge_vvm_f16m1_ta_vl31(vbool16_t mask, vfloat16m1_t op1, vfloat16m1_t op2)
{
  return vmerge_vvm_f16m1_ta(mask, op1, op2, 31);
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
vfloat16m2_t 
test_vmerge_vvm_f16m2_ta(vbool8_t mask, vfloat16m2_t op1, vfloat16m2_t op2, size_t vl)
{
  return vmerge_vvm_f16m2_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_f16m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vfloat16m2_t 
test_vmerge_vvm_f16m2_ta_vl31(vbool8_t mask, vfloat16m2_t op1, vfloat16m2_t op2)
{
  return vmerge_vvm_f16m2_ta(mask, op1, op2, 31);
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
vfloat16m4_t 
test_vmerge_vvm_f16m4_ta(vbool4_t mask, vfloat16m4_t op1, vfloat16m4_t op2, size_t vl)
{
  return vmerge_vvm_f16m4_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_f16m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vfloat16m4_t 
test_vmerge_vvm_f16m4_ta_vl31(vbool4_t mask, vfloat16m4_t op1, vfloat16m4_t op2)
{
  return vmerge_vvm_f16m4_ta(mask, op1, op2, 31);
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
vfloat16m8_t 
test_vmerge_vvm_f16m8_ta(vbool2_t mask, vfloat16m8_t op1, vfloat16m8_t op2, size_t vl)
{
  return vmerge_vvm_f16m8_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_f16m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vfloat16m8_t 
test_vmerge_vvm_f16m8_ta_vl31(vbool2_t mask, vfloat16m8_t op1, vfloat16m8_t op2)
{
  return vmerge_vvm_f16m8_ta(mask, op1, op2, 31);
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
vfloat32mf2_t 
test_vmerge_vvm_f32mf2_ta(vbool64_t mask, vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl)
{
  return vmerge_vvm_f32mf2_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_f32mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vfloat32mf2_t 
test_vmerge_vvm_f32mf2_ta_vl31(vbool64_t mask, vfloat32mf2_t op1, vfloat32mf2_t op2)
{
  return vmerge_vvm_f32mf2_ta(mask, op1, op2, 31);
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
vfloat32m1_t 
test_vmerge_vvm_f32m1_ta(vbool32_t mask, vfloat32m1_t op1, vfloat32m1_t op2, size_t vl)
{
  return vmerge_vvm_f32m1_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_f32m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vfloat32m1_t 
test_vmerge_vvm_f32m1_ta_vl31(vbool32_t mask, vfloat32m1_t op1, vfloat32m1_t op2)
{
  return vmerge_vvm_f32m1_ta(mask, op1, op2, 31);
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
vfloat32m2_t 
test_vmerge_vvm_f32m2_ta(vbool16_t mask, vfloat32m2_t op1, vfloat32m2_t op2, size_t vl)
{
  return vmerge_vvm_f32m2_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_f32m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vfloat32m2_t 
test_vmerge_vvm_f32m2_ta_vl31(vbool16_t mask, vfloat32m2_t op1, vfloat32m2_t op2)
{
  return vmerge_vvm_f32m2_ta(mask, op1, op2, 31);
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
vfloat32m4_t 
test_vmerge_vvm_f32m4_ta(vbool8_t mask, vfloat32m4_t op1, vfloat32m4_t op2, size_t vl)
{
  return vmerge_vvm_f32m4_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_f32m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vfloat32m4_t 
test_vmerge_vvm_f32m4_ta_vl31(vbool8_t mask, vfloat32m4_t op1, vfloat32m4_t op2)
{
  return vmerge_vvm_f32m4_ta(mask, op1, op2, 31);
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
vfloat32m8_t 
test_vmerge_vvm_f32m8_ta(vbool4_t mask, vfloat32m8_t op1, vfloat32m8_t op2, size_t vl)
{
  return vmerge_vvm_f32m8_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_f32m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vfloat32m8_t 
test_vmerge_vvm_f32m8_ta_vl31(vbool4_t mask, vfloat32m8_t op1, vfloat32m8_t op2)
{
  return vmerge_vvm_f32m8_ta(mask, op1, op2, 31);
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
vfloat64m1_t 
test_vmerge_vvm_f64m1_ta(vbool64_t mask, vfloat64m1_t op1, vfloat64m1_t op2, size_t vl)
{
  return vmerge_vvm_f64m1_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_f64m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vfloat64m1_t 
test_vmerge_vvm_f64m1_ta_vl31(vbool64_t mask, vfloat64m1_t op1, vfloat64m1_t op2)
{
  return vmerge_vvm_f64m1_ta(mask, op1, op2, 31);
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
vfloat64m2_t 
test_vmerge_vvm_f64m2_ta(vbool32_t mask, vfloat64m2_t op1, vfloat64m2_t op2, size_t vl)
{
  return vmerge_vvm_f64m2_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_f64m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vfloat64m2_t 
test_vmerge_vvm_f64m2_ta_vl31(vbool32_t mask, vfloat64m2_t op1, vfloat64m2_t op2)
{
  return vmerge_vvm_f64m2_ta(mask, op1, op2, 31);
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
vfloat64m4_t 
test_vmerge_vvm_f64m4_ta(vbool16_t mask, vfloat64m4_t op1, vfloat64m4_t op2, size_t vl)
{
  return vmerge_vvm_f64m4_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_f64m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vfloat64m4_t 
test_vmerge_vvm_f64m4_ta_vl31(vbool16_t mask, vfloat64m4_t op1, vfloat64m4_t op2)
{
  return vmerge_vvm_f64m4_ta(mask, op1, op2, 31);
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
vfloat64m8_t 
test_vmerge_vvm_f64m8_ta(vbool8_t mask, vfloat64m8_t op1, vfloat64m8_t op2, size_t vl)
{
  return vmerge_vvm_f64m8_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_f64m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vfloat64m8_t 
test_vmerge_vvm_f64m8_ta_vl31(vbool8_t mask, vfloat64m8_t op1, vfloat64m8_t op2)
{
  return vmerge_vvm_f64m8_ta(mask, op1, op2, 31);
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
vfloat16mf4_t 
test_vmerge_vvm_f16mf4_tu(vfloat16mf4_t dest, vbool64_t mask, vfloat16mf4_t op1, vfloat16mf4_t op2, size_t vl)
{
  return vmerge_vvm_f16mf4_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_f16mf4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vfloat16mf4_t 
test_vmerge_vvm_f16mf4_tu_vl31(vfloat16mf4_t dest, vbool64_t mask, vfloat16mf4_t op1, vfloat16mf4_t op2)
{
  return vmerge_vvm_f16mf4_tu(mask, dest, op1, op2, 31);
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
vfloat16mf2_t 
test_vmerge_vvm_f16mf2_tu(vfloat16mf2_t dest, vbool32_t mask, vfloat16mf2_t op1, vfloat16mf2_t op2, size_t vl)
{
  return vmerge_vvm_f16mf2_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_f16mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vfloat16mf2_t 
test_vmerge_vvm_f16mf2_tu_vl31(vfloat16mf2_t dest, vbool32_t mask, vfloat16mf2_t op1, vfloat16mf2_t op2)
{
  return vmerge_vvm_f16mf2_tu(mask, dest, op1, op2, 31);
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
vfloat16m1_t 
test_vmerge_vvm_f16m1_tu(vfloat16m1_t dest, vbool16_t mask, vfloat16m1_t op1, vfloat16m1_t op2, size_t vl)
{
  return vmerge_vvm_f16m1_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_f16m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vfloat16m1_t 
test_vmerge_vvm_f16m1_tu_vl31(vfloat16m1_t dest, vbool16_t mask, vfloat16m1_t op1, vfloat16m1_t op2)
{
  return vmerge_vvm_f16m1_tu(mask, dest, op1, op2, 31);
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
vfloat16m2_t 
test_vmerge_vvm_f16m2_tu(vfloat16m2_t dest, vbool8_t mask, vfloat16m2_t op1, vfloat16m2_t op2, size_t vl)
{
  return vmerge_vvm_f16m2_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_f16m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vfloat16m2_t 
test_vmerge_vvm_f16m2_tu_vl31(vfloat16m2_t dest, vbool8_t mask, vfloat16m2_t op1, vfloat16m2_t op2)
{
  return vmerge_vvm_f16m2_tu(mask, dest, op1, op2, 31);
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
vfloat16m4_t 
test_vmerge_vvm_f16m4_tu(vfloat16m4_t dest, vbool4_t mask, vfloat16m4_t op1, vfloat16m4_t op2, size_t vl)
{
  return vmerge_vvm_f16m4_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_f16m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vfloat16m4_t 
test_vmerge_vvm_f16m4_tu_vl31(vfloat16m4_t dest, vbool4_t mask, vfloat16m4_t op1, vfloat16m4_t op2)
{
  return vmerge_vvm_f16m4_tu(mask, dest, op1, op2, 31);
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
vfloat16m8_t 
test_vmerge_vvm_f16m8_tu(vfloat16m8_t dest, vbool2_t mask, vfloat16m8_t op1, vfloat16m8_t op2, size_t vl)
{
  return vmerge_vvm_f16m8_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_f16m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vfloat16m8_t 
test_vmerge_vvm_f16m8_tu_vl31(vfloat16m8_t dest, vbool2_t mask, vfloat16m8_t op1, vfloat16m8_t op2)
{
  return vmerge_vvm_f16m8_tu(mask, dest, op1, op2, 31);
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
vfloat32mf2_t 
test_vmerge_vvm_f32mf2_tu(vfloat32mf2_t dest, vbool64_t mask, vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl)
{
  return vmerge_vvm_f32mf2_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_f32mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vfloat32mf2_t 
test_vmerge_vvm_f32mf2_tu_vl31(vfloat32mf2_t dest, vbool64_t mask, vfloat32mf2_t op1, vfloat32mf2_t op2)
{
  return vmerge_vvm_f32mf2_tu(mask, dest, op1, op2, 31);
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
vfloat32m1_t 
test_vmerge_vvm_f32m1_tu(vfloat32m1_t dest, vbool32_t mask, vfloat32m1_t op1, vfloat32m1_t op2, size_t vl)
{
  return vmerge_vvm_f32m1_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_f32m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vfloat32m1_t 
test_vmerge_vvm_f32m1_tu_vl31(vfloat32m1_t dest, vbool32_t mask, vfloat32m1_t op1, vfloat32m1_t op2)
{
  return vmerge_vvm_f32m1_tu(mask, dest, op1, op2, 31);
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
vfloat32m2_t 
test_vmerge_vvm_f32m2_tu(vfloat32m2_t dest, vbool16_t mask, vfloat32m2_t op1, vfloat32m2_t op2, size_t vl)
{
  return vmerge_vvm_f32m2_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_f32m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vfloat32m2_t 
test_vmerge_vvm_f32m2_tu_vl31(vfloat32m2_t dest, vbool16_t mask, vfloat32m2_t op1, vfloat32m2_t op2)
{
  return vmerge_vvm_f32m2_tu(mask, dest, op1, op2, 31);
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
vfloat32m4_t 
test_vmerge_vvm_f32m4_tu(vfloat32m4_t dest, vbool8_t mask, vfloat32m4_t op1, vfloat32m4_t op2, size_t vl)
{
  return vmerge_vvm_f32m4_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_f32m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vfloat32m4_t 
test_vmerge_vvm_f32m4_tu_vl31(vfloat32m4_t dest, vbool8_t mask, vfloat32m4_t op1, vfloat32m4_t op2)
{
  return vmerge_vvm_f32m4_tu(mask, dest, op1, op2, 31);
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
vfloat32m8_t 
test_vmerge_vvm_f32m8_tu(vfloat32m8_t dest, vbool4_t mask, vfloat32m8_t op1, vfloat32m8_t op2, size_t vl)
{
  return vmerge_vvm_f32m8_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_f32m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vfloat32m8_t 
test_vmerge_vvm_f32m8_tu_vl31(vfloat32m8_t dest, vbool4_t mask, vfloat32m8_t op1, vfloat32m8_t op2)
{
  return vmerge_vvm_f32m8_tu(mask, dest, op1, op2, 31);
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
vfloat64m1_t 
test_vmerge_vvm_f64m1_tu(vfloat64m1_t dest, vbool64_t mask, vfloat64m1_t op1, vfloat64m1_t op2, size_t vl)
{
  return vmerge_vvm_f64m1_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_f64m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vfloat64m1_t 
test_vmerge_vvm_f64m1_tu_vl31(vfloat64m1_t dest, vbool64_t mask, vfloat64m1_t op1, vfloat64m1_t op2)
{
  return vmerge_vvm_f64m1_tu(mask, dest, op1, op2, 31);
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
vfloat64m2_t 
test_vmerge_vvm_f64m2_tu(vfloat64m2_t dest, vbool32_t mask, vfloat64m2_t op1, vfloat64m2_t op2, size_t vl)
{
  return vmerge_vvm_f64m2_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_f64m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vfloat64m2_t 
test_vmerge_vvm_f64m2_tu_vl31(vfloat64m2_t dest, vbool32_t mask, vfloat64m2_t op1, vfloat64m2_t op2)
{
  return vmerge_vvm_f64m2_tu(mask, dest, op1, op2, 31);
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
vfloat64m4_t 
test_vmerge_vvm_f64m4_tu(vfloat64m4_t dest, vbool16_t mask, vfloat64m4_t op1, vfloat64m4_t op2, size_t vl)
{
  return vmerge_vvm_f64m4_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_f64m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vfloat64m4_t 
test_vmerge_vvm_f64m4_tu_vl31(vfloat64m4_t dest, vbool16_t mask, vfloat64m4_t op1, vfloat64m4_t op2)
{
  return vmerge_vvm_f64m4_tu(mask, dest, op1, op2, 31);
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
vfloat64m8_t 
test_vmerge_vvm_f64m8_tu(vfloat64m8_t dest, vbool8_t mask, vfloat64m8_t op1, vfloat64m8_t op2, size_t vl)
{
  return vmerge_vvm_f64m8_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_f64m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vfloat64m8_t 
test_vmerge_vvm_f64m8_tu_vl31(vfloat64m8_t dest, vbool8_t mask, vfloat64m8_t op1, vfloat64m8_t op2)
{
  return vmerge_vvm_f64m8_tu(mask, dest, op1, op2, 31);
}

/*
** test_vmerge_vvm_f16mf4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vfloat16mf4_t 
test_vmerge_vvm_f16mf4_ta_vl32(vbool64_t mask, vfloat16mf4_t op1, vfloat16mf4_t op2)
{
  return vmerge_vvm_f16mf4_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_f16mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vfloat16mf2_t 
test_vmerge_vvm_f16mf2_ta_vl32(vbool32_t mask, vfloat16mf2_t op1, vfloat16mf2_t op2)
{
  return vmerge_vvm_f16mf2_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_f16m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vfloat16m1_t 
test_vmerge_vvm_f16m1_ta_vl32(vbool16_t mask, vfloat16m1_t op1, vfloat16m1_t op2)
{
  return vmerge_vvm_f16m1_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_f16m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vfloat16m2_t 
test_vmerge_vvm_f16m2_ta_vl32(vbool8_t mask, vfloat16m2_t op1, vfloat16m2_t op2)
{
  return vmerge_vvm_f16m2_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_f16m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vfloat16m4_t 
test_vmerge_vvm_f16m4_ta_vl32(vbool4_t mask, vfloat16m4_t op1, vfloat16m4_t op2)
{
  return vmerge_vvm_f16m4_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_f16m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vfloat16m8_t 
test_vmerge_vvm_f16m8_ta_vl32(vbool2_t mask, vfloat16m8_t op1, vfloat16m8_t op2)
{
  return vmerge_vvm_f16m8_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_f32mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vfloat32mf2_t 
test_vmerge_vvm_f32mf2_ta_vl32(vbool64_t mask, vfloat32mf2_t op1, vfloat32mf2_t op2)
{
  return vmerge_vvm_f32mf2_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_f32m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vfloat32m1_t 
test_vmerge_vvm_f32m1_ta_vl32(vbool32_t mask, vfloat32m1_t op1, vfloat32m1_t op2)
{
  return vmerge_vvm_f32m1_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_f32m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vfloat32m2_t 
test_vmerge_vvm_f32m2_ta_vl32(vbool16_t mask, vfloat32m2_t op1, vfloat32m2_t op2)
{
  return vmerge_vvm_f32m2_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_f32m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vfloat32m4_t 
test_vmerge_vvm_f32m4_ta_vl32(vbool8_t mask, vfloat32m4_t op1, vfloat32m4_t op2)
{
  return vmerge_vvm_f32m4_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_f32m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vfloat32m8_t 
test_vmerge_vvm_f32m8_ta_vl32(vbool4_t mask, vfloat32m8_t op1, vfloat32m8_t op2)
{
  return vmerge_vvm_f32m8_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_f64m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vfloat64m1_t 
test_vmerge_vvm_f64m1_ta_vl32(vbool64_t mask, vfloat64m1_t op1, vfloat64m1_t op2)
{
  return vmerge_vvm_f64m1_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_f64m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vfloat64m2_t 
test_vmerge_vvm_f64m2_ta_vl32(vbool32_t mask, vfloat64m2_t op1, vfloat64m2_t op2)
{
  return vmerge_vvm_f64m2_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_f64m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vfloat64m4_t 
test_vmerge_vvm_f64m4_ta_vl32(vbool16_t mask, vfloat64m4_t op1, vfloat64m4_t op2)
{
  return vmerge_vvm_f64m4_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_f64m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vfloat64m8_t 
test_vmerge_vvm_f64m8_ta_vl32(vbool8_t mask, vfloat64m8_t op1, vfloat64m8_t op2)
{
  return vmerge_vvm_f64m8_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_f16mf4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vfloat16mf4_t 
test_vmerge_vvm_f16mf4_tu_vl32(vfloat16mf4_t dest, vbool64_t mask, vfloat16mf4_t op1, vfloat16mf4_t op2)
{
  return vmerge_vvm_f16mf4_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_f16mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vfloat16mf2_t 
test_vmerge_vvm_f16mf2_tu_vl32(vfloat16mf2_t dest, vbool32_t mask, vfloat16mf2_t op1, vfloat16mf2_t op2)
{
  return vmerge_vvm_f16mf2_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_f16m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vfloat16m1_t 
test_vmerge_vvm_f16m1_tu_vl32(vfloat16m1_t dest, vbool16_t mask, vfloat16m1_t op1, vfloat16m1_t op2)
{
  return vmerge_vvm_f16m1_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_f16m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vfloat16m2_t 
test_vmerge_vvm_f16m2_tu_vl32(vfloat16m2_t dest, vbool8_t mask, vfloat16m2_t op1, vfloat16m2_t op2)
{
  return vmerge_vvm_f16m2_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_f16m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vfloat16m4_t 
test_vmerge_vvm_f16m4_tu_vl32(vfloat16m4_t dest, vbool4_t mask, vfloat16m4_t op1, vfloat16m4_t op2)
{
  return vmerge_vvm_f16m4_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_f16m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vfloat16m8_t 
test_vmerge_vvm_f16m8_tu_vl32(vfloat16m8_t dest, vbool2_t mask, vfloat16m8_t op1, vfloat16m8_t op2)
{
  return vmerge_vvm_f16m8_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_f32mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vfloat32mf2_t 
test_vmerge_vvm_f32mf2_tu_vl32(vfloat32mf2_t dest, vbool64_t mask, vfloat32mf2_t op1, vfloat32mf2_t op2)
{
  return vmerge_vvm_f32mf2_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_f32m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vfloat32m1_t 
test_vmerge_vvm_f32m1_tu_vl32(vfloat32m1_t dest, vbool32_t mask, vfloat32m1_t op1, vfloat32m1_t op2)
{
  return vmerge_vvm_f32m1_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_f32m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vfloat32m2_t 
test_vmerge_vvm_f32m2_tu_vl32(vfloat32m2_t dest, vbool16_t mask, vfloat32m2_t op1, vfloat32m2_t op2)
{
  return vmerge_vvm_f32m2_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_f32m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vfloat32m4_t 
test_vmerge_vvm_f32m4_tu_vl32(vfloat32m4_t dest, vbool8_t mask, vfloat32m4_t op1, vfloat32m4_t op2)
{
  return vmerge_vvm_f32m4_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_f32m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vfloat32m8_t 
test_vmerge_vvm_f32m8_tu_vl32(vfloat32m8_t dest, vbool4_t mask, vfloat32m8_t op1, vfloat32m8_t op2)
{
  return vmerge_vvm_f32m8_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_f64m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vfloat64m1_t 
test_vmerge_vvm_f64m1_tu_vl32(vfloat64m1_t dest, vbool64_t mask, vfloat64m1_t op1, vfloat64m1_t op2)
{
  return vmerge_vvm_f64m1_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_f64m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vfloat64m2_t 
test_vmerge_vvm_f64m2_tu_vl32(vfloat64m2_t dest, vbool32_t mask, vfloat64m2_t op1, vfloat64m2_t op2)
{
  return vmerge_vvm_f64m2_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_f64m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vfloat64m4_t 
test_vmerge_vvm_f64m4_tu_vl32(vfloat64m4_t dest, vbool16_t mask, vfloat64m4_t op1, vfloat64m4_t op2)
{
  return vmerge_vvm_f64m4_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_f64m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vfloat64m8_t 
test_vmerge_vvm_f64m8_tu_vl32(vfloat64m8_t dest, vbool8_t mask, vfloat64m8_t op1, vfloat64m8_t op2)
{
  return vmerge_vvm_f64m8_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_f16mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vfloat16mf4_t 
test_vmerge_vvm_f16mf4_vl32(vbool64_t mask, vfloat16mf4_t op1, vfloat16mf4_t op2)
{
  return vmerge_vvm_f16mf4(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_f16mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vfloat16mf2_t 
test_vmerge_vvm_f16mf2_vl32(vbool32_t mask, vfloat16mf2_t op1, vfloat16mf2_t op2)
{
  return vmerge_vvm_f16mf2(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_f16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vfloat16m1_t 
test_vmerge_vvm_f16m1_vl32(vbool16_t mask, vfloat16m1_t op1, vfloat16m1_t op2)
{
  return vmerge_vvm_f16m1(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_f16m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vfloat16m2_t 
test_vmerge_vvm_f16m2_vl32(vbool8_t mask, vfloat16m2_t op1, vfloat16m2_t op2)
{
  return vmerge_vvm_f16m2(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_f16m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vfloat16m4_t 
test_vmerge_vvm_f16m4_vl32(vbool4_t mask, vfloat16m4_t op1, vfloat16m4_t op2)
{
  return vmerge_vvm_f16m4(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_f16m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vfloat16m8_t 
test_vmerge_vvm_f16m8_vl32(vbool2_t mask, vfloat16m8_t op1, vfloat16m8_t op2)
{
  return vmerge_vvm_f16m8(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_f32mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vfloat32mf2_t 
test_vmerge_vvm_f32mf2_vl32(vbool64_t mask, vfloat32mf2_t op1, vfloat32mf2_t op2)
{
  return vmerge_vvm_f32mf2(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_f32m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vfloat32m1_t 
test_vmerge_vvm_f32m1_vl32(vbool32_t mask, vfloat32m1_t op1, vfloat32m1_t op2)
{
  return vmerge_vvm_f32m1(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_f32m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vfloat32m2_t 
test_vmerge_vvm_f32m2_vl32(vbool16_t mask, vfloat32m2_t op1, vfloat32m2_t op2)
{
  return vmerge_vvm_f32m2(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_f32m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vfloat32m4_t 
test_vmerge_vvm_f32m4_vl32(vbool8_t mask, vfloat32m4_t op1, vfloat32m4_t op2)
{
  return vmerge_vvm_f32m4(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_f32m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vfloat32m8_t 
test_vmerge_vvm_f32m8_vl32(vbool4_t mask, vfloat32m8_t op1, vfloat32m8_t op2)
{
  return vmerge_vvm_f32m8(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_f64m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vfloat64m1_t 
test_vmerge_vvm_f64m1_vl32(vbool64_t mask, vfloat64m1_t op1, vfloat64m1_t op2)
{
  return vmerge_vvm_f64m1(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_f64m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vfloat64m2_t 
test_vmerge_vvm_f64m2_vl32(vbool32_t mask, vfloat64m2_t op1, vfloat64m2_t op2)
{
  return vmerge_vvm_f64m2(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_f64m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vfloat64m4_t 
test_vmerge_vvm_f64m4_vl32(vbool16_t mask, vfloat64m4_t op1, vfloat64m4_t op2)
{
  return vmerge_vvm_f64m4(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_f64m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vfloat64m8_t 
test_vmerge_vvm_f64m8_vl32(vbool8_t mask, vfloat64m8_t op1, vfloat64m8_t op2)
{
  return vmerge_vvm_f64m8(mask, op1, op2, 32);
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
vint8mf8_t 
test_vmerge_vvm_i8mf8(vbool64_t mask, vint8mf8_t op1, vint8mf8_t op2, size_t vl)
{
  return vmerge_vvm_i8mf8(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_i8mf8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint8mf8_t 
test_vmerge_vvm_i8mf8_vl31(vbool64_t mask, vint8mf8_t op1, vint8mf8_t op2)
{
  return vmerge_vvm_i8mf8(mask, op1, op2, 31);
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
vint8mf4_t 
test_vmerge_vvm_i8mf4(vbool32_t mask, vint8mf4_t op1, vint8mf4_t op2, size_t vl)
{
  return vmerge_vvm_i8mf4(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_i8mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint8mf4_t 
test_vmerge_vvm_i8mf4_vl31(vbool32_t mask, vint8mf4_t op1, vint8mf4_t op2)
{
  return vmerge_vvm_i8mf4(mask, op1, op2, 31);
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
vint8mf2_t 
test_vmerge_vvm_i8mf2(vbool16_t mask, vint8mf2_t op1, vint8mf2_t op2, size_t vl)
{
  return vmerge_vvm_i8mf2(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_i8mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint8mf2_t 
test_vmerge_vvm_i8mf2_vl31(vbool16_t mask, vint8mf2_t op1, vint8mf2_t op2)
{
  return vmerge_vvm_i8mf2(mask, op1, op2, 31);
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
vint8m1_t 
test_vmerge_vvm_i8m1(vbool8_t mask, vint8m1_t op1, vint8m1_t op2, size_t vl)
{
  return vmerge_vvm_i8m1(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_i8m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint8m1_t 
test_vmerge_vvm_i8m1_vl31(vbool8_t mask, vint8m1_t op1, vint8m1_t op2)
{
  return vmerge_vvm_i8m1(mask, op1, op2, 31);
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
vint8m2_t 
test_vmerge_vvm_i8m2(vbool4_t mask, vint8m2_t op1, vint8m2_t op2, size_t vl)
{
  return vmerge_vvm_i8m2(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_i8m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vint8m2_t 
test_vmerge_vvm_i8m2_vl31(vbool4_t mask, vint8m2_t op1, vint8m2_t op2)
{
  return vmerge_vvm_i8m2(mask, op1, op2, 31);
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
vint8m4_t 
test_vmerge_vvm_i8m4(vbool2_t mask, vint8m4_t op1, vint8m4_t op2, size_t vl)
{
  return vmerge_vvm_i8m4(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_i8m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vint8m4_t 
test_vmerge_vvm_i8m4_vl31(vbool2_t mask, vint8m4_t op1, vint8m4_t op2)
{
  return vmerge_vvm_i8m4(mask, op1, op2, 31);
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
vint8m8_t 
test_vmerge_vvm_i8m8(vbool1_t mask, vint8m8_t op1, vint8m8_t op2, size_t vl)
{
  return vmerge_vvm_i8m8(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_i8m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vint8m8_t 
test_vmerge_vvm_i8m8_vl31(vbool1_t mask, vint8m8_t op1, vint8m8_t op2)
{
  return vmerge_vvm_i8m8(mask, op1, op2, 31);
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
vint16mf4_t 
test_vmerge_vvm_i16mf4(vbool64_t mask, vint16mf4_t op1, vint16mf4_t op2, size_t vl)
{
  return vmerge_vvm_i16mf4(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_i16mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint16mf4_t 
test_vmerge_vvm_i16mf4_vl31(vbool64_t mask, vint16mf4_t op1, vint16mf4_t op2)
{
  return vmerge_vvm_i16mf4(mask, op1, op2, 31);
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
vint16mf2_t 
test_vmerge_vvm_i16mf2(vbool32_t mask, vint16mf2_t op1, vint16mf2_t op2, size_t vl)
{
  return vmerge_vvm_i16mf2(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_i16mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint16mf2_t 
test_vmerge_vvm_i16mf2_vl31(vbool32_t mask, vint16mf2_t op1, vint16mf2_t op2)
{
  return vmerge_vvm_i16mf2(mask, op1, op2, 31);
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
vint16m1_t 
test_vmerge_vvm_i16m1(vbool16_t mask, vint16m1_t op1, vint16m1_t op2, size_t vl)
{
  return vmerge_vvm_i16m1(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_i16m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint16m1_t 
test_vmerge_vvm_i16m1_vl31(vbool16_t mask, vint16m1_t op1, vint16m1_t op2)
{
  return vmerge_vvm_i16m1(mask, op1, op2, 31);
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
vint16m2_t 
test_vmerge_vvm_i16m2(vbool8_t mask, vint16m2_t op1, vint16m2_t op2, size_t vl)
{
  return vmerge_vvm_i16m2(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_i16m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vint16m2_t 
test_vmerge_vvm_i16m2_vl31(vbool8_t mask, vint16m2_t op1, vint16m2_t op2)
{
  return vmerge_vvm_i16m2(mask, op1, op2, 31);
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
vint16m4_t 
test_vmerge_vvm_i16m4(vbool4_t mask, vint16m4_t op1, vint16m4_t op2, size_t vl)
{
  return vmerge_vvm_i16m4(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_i16m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vint16m4_t 
test_vmerge_vvm_i16m4_vl31(vbool4_t mask, vint16m4_t op1, vint16m4_t op2)
{
  return vmerge_vvm_i16m4(mask, op1, op2, 31);
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
vint16m8_t 
test_vmerge_vvm_i16m8(vbool2_t mask, vint16m8_t op1, vint16m8_t op2, size_t vl)
{
  return vmerge_vvm_i16m8(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_i16m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vint16m8_t 
test_vmerge_vvm_i16m8_vl31(vbool2_t mask, vint16m8_t op1, vint16m8_t op2)
{
  return vmerge_vvm_i16m8(mask, op1, op2, 31);
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
vint32mf2_t 
test_vmerge_vvm_i32mf2(vbool64_t mask, vint32mf2_t op1, vint32mf2_t op2, size_t vl)
{
  return vmerge_vvm_i32mf2(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_i32mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint32mf2_t 
test_vmerge_vvm_i32mf2_vl31(vbool64_t mask, vint32mf2_t op1, vint32mf2_t op2)
{
  return vmerge_vvm_i32mf2(mask, op1, op2, 31);
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
vint32m1_t 
test_vmerge_vvm_i32m1(vbool32_t mask, vint32m1_t op1, vint32m1_t op2, size_t vl)
{
  return vmerge_vvm_i32m1(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_i32m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint32m1_t 
test_vmerge_vvm_i32m1_vl31(vbool32_t mask, vint32m1_t op1, vint32m1_t op2)
{
  return vmerge_vvm_i32m1(mask, op1, op2, 31);
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
vint32m2_t 
test_vmerge_vvm_i32m2(vbool16_t mask, vint32m2_t op1, vint32m2_t op2, size_t vl)
{
  return vmerge_vvm_i32m2(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_i32m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vint32m2_t 
test_vmerge_vvm_i32m2_vl31(vbool16_t mask, vint32m2_t op1, vint32m2_t op2)
{
  return vmerge_vvm_i32m2(mask, op1, op2, 31);
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
vint32m4_t 
test_vmerge_vvm_i32m4(vbool8_t mask, vint32m4_t op1, vint32m4_t op2, size_t vl)
{
  return vmerge_vvm_i32m4(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_i32m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vint32m4_t 
test_vmerge_vvm_i32m4_vl31(vbool8_t mask, vint32m4_t op1, vint32m4_t op2)
{
  return vmerge_vvm_i32m4(mask, op1, op2, 31);
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
vint32m8_t 
test_vmerge_vvm_i32m8(vbool4_t mask, vint32m8_t op1, vint32m8_t op2, size_t vl)
{
  return vmerge_vvm_i32m8(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_i32m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vint32m8_t 
test_vmerge_vvm_i32m8_vl31(vbool4_t mask, vint32m8_t op1, vint32m8_t op2)
{
  return vmerge_vvm_i32m8(mask, op1, op2, 31);
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
vint64m1_t 
test_vmerge_vvm_i64m1(vbool64_t mask, vint64m1_t op1, vint64m1_t op2, size_t vl)
{
  return vmerge_vvm_i64m1(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_i64m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint64m1_t 
test_vmerge_vvm_i64m1_vl31(vbool64_t mask, vint64m1_t op1, vint64m1_t op2)
{
  return vmerge_vvm_i64m1(mask, op1, op2, 31);
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
vint64m2_t 
test_vmerge_vvm_i64m2(vbool32_t mask, vint64m2_t op1, vint64m2_t op2, size_t vl)
{
  return vmerge_vvm_i64m2(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_i64m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vint64m2_t 
test_vmerge_vvm_i64m2_vl31(vbool32_t mask, vint64m2_t op1, vint64m2_t op2)
{
  return vmerge_vvm_i64m2(mask, op1, op2, 31);
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
vint64m4_t 
test_vmerge_vvm_i64m4(vbool16_t mask, vint64m4_t op1, vint64m4_t op2, size_t vl)
{
  return vmerge_vvm_i64m4(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_i64m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vint64m4_t 
test_vmerge_vvm_i64m4_vl31(vbool16_t mask, vint64m4_t op1, vint64m4_t op2)
{
  return vmerge_vvm_i64m4(mask, op1, op2, 31);
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
vint64m8_t 
test_vmerge_vvm_i64m8(vbool8_t mask, vint64m8_t op1, vint64m8_t op2, size_t vl)
{
  return vmerge_vvm_i64m8(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_i64m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vint64m8_t 
test_vmerge_vvm_i64m8_vl31(vbool8_t mask, vint64m8_t op1, vint64m8_t op2)
{
  return vmerge_vvm_i64m8(mask, op1, op2, 31);
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
vint8mf8_t 
test_vmerge_vvm_i8mf8_ta(vbool64_t mask, vint8mf8_t op1, vint8mf8_t op2, size_t vl)
{
  return vmerge_vvm_i8mf8_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_i8mf8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint8mf8_t 
test_vmerge_vvm_i8mf8_ta_vl31(vbool64_t mask, vint8mf8_t op1, vint8mf8_t op2)
{
  return vmerge_vvm_i8mf8_ta(mask, op1, op2, 31);
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
vint8mf4_t 
test_vmerge_vvm_i8mf4_ta(vbool32_t mask, vint8mf4_t op1, vint8mf4_t op2, size_t vl)
{
  return vmerge_vvm_i8mf4_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_i8mf4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint8mf4_t 
test_vmerge_vvm_i8mf4_ta_vl31(vbool32_t mask, vint8mf4_t op1, vint8mf4_t op2)
{
  return vmerge_vvm_i8mf4_ta(mask, op1, op2, 31);
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
vint8mf2_t 
test_vmerge_vvm_i8mf2_ta(vbool16_t mask, vint8mf2_t op1, vint8mf2_t op2, size_t vl)
{
  return vmerge_vvm_i8mf2_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_i8mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint8mf2_t 
test_vmerge_vvm_i8mf2_ta_vl31(vbool16_t mask, vint8mf2_t op1, vint8mf2_t op2)
{
  return vmerge_vvm_i8mf2_ta(mask, op1, op2, 31);
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
vint8m1_t 
test_vmerge_vvm_i8m1_ta(vbool8_t mask, vint8m1_t op1, vint8m1_t op2, size_t vl)
{
  return vmerge_vvm_i8m1_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_i8m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint8m1_t 
test_vmerge_vvm_i8m1_ta_vl31(vbool8_t mask, vint8m1_t op1, vint8m1_t op2)
{
  return vmerge_vvm_i8m1_ta(mask, op1, op2, 31);
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
vint8m2_t 
test_vmerge_vvm_i8m2_ta(vbool4_t mask, vint8m2_t op1, vint8m2_t op2, size_t vl)
{
  return vmerge_vvm_i8m2_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_i8m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vint8m2_t 
test_vmerge_vvm_i8m2_ta_vl31(vbool4_t mask, vint8m2_t op1, vint8m2_t op2)
{
  return vmerge_vvm_i8m2_ta(mask, op1, op2, 31);
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
vint8m4_t 
test_vmerge_vvm_i8m4_ta(vbool2_t mask, vint8m4_t op1, vint8m4_t op2, size_t vl)
{
  return vmerge_vvm_i8m4_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_i8m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vint8m4_t 
test_vmerge_vvm_i8m4_ta_vl31(vbool2_t mask, vint8m4_t op1, vint8m4_t op2)
{
  return vmerge_vvm_i8m4_ta(mask, op1, op2, 31);
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
vint8m8_t 
test_vmerge_vvm_i8m8_ta(vbool1_t mask, vint8m8_t op1, vint8m8_t op2, size_t vl)
{
  return vmerge_vvm_i8m8_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_i8m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vint8m8_t 
test_vmerge_vvm_i8m8_ta_vl31(vbool1_t mask, vint8m8_t op1, vint8m8_t op2)
{
  return vmerge_vvm_i8m8_ta(mask, op1, op2, 31);
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
vint16mf4_t 
test_vmerge_vvm_i16mf4_ta(vbool64_t mask, vint16mf4_t op1, vint16mf4_t op2, size_t vl)
{
  return vmerge_vvm_i16mf4_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_i16mf4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint16mf4_t 
test_vmerge_vvm_i16mf4_ta_vl31(vbool64_t mask, vint16mf4_t op1, vint16mf4_t op2)
{
  return vmerge_vvm_i16mf4_ta(mask, op1, op2, 31);
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
vint16mf2_t 
test_vmerge_vvm_i16mf2_ta(vbool32_t mask, vint16mf2_t op1, vint16mf2_t op2, size_t vl)
{
  return vmerge_vvm_i16mf2_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_i16mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint16mf2_t 
test_vmerge_vvm_i16mf2_ta_vl31(vbool32_t mask, vint16mf2_t op1, vint16mf2_t op2)
{
  return vmerge_vvm_i16mf2_ta(mask, op1, op2, 31);
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
vint16m1_t 
test_vmerge_vvm_i16m1_ta(vbool16_t mask, vint16m1_t op1, vint16m1_t op2, size_t vl)
{
  return vmerge_vvm_i16m1_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_i16m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint16m1_t 
test_vmerge_vvm_i16m1_ta_vl31(vbool16_t mask, vint16m1_t op1, vint16m1_t op2)
{
  return vmerge_vvm_i16m1_ta(mask, op1, op2, 31);
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
vint16m2_t 
test_vmerge_vvm_i16m2_ta(vbool8_t mask, vint16m2_t op1, vint16m2_t op2, size_t vl)
{
  return vmerge_vvm_i16m2_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_i16m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vint16m2_t 
test_vmerge_vvm_i16m2_ta_vl31(vbool8_t mask, vint16m2_t op1, vint16m2_t op2)
{
  return vmerge_vvm_i16m2_ta(mask, op1, op2, 31);
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
vint16m4_t 
test_vmerge_vvm_i16m4_ta(vbool4_t mask, vint16m4_t op1, vint16m4_t op2, size_t vl)
{
  return vmerge_vvm_i16m4_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_i16m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vint16m4_t 
test_vmerge_vvm_i16m4_ta_vl31(vbool4_t mask, vint16m4_t op1, vint16m4_t op2)
{
  return vmerge_vvm_i16m4_ta(mask, op1, op2, 31);
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
vint16m8_t 
test_vmerge_vvm_i16m8_ta(vbool2_t mask, vint16m8_t op1, vint16m8_t op2, size_t vl)
{
  return vmerge_vvm_i16m8_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_i16m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vint16m8_t 
test_vmerge_vvm_i16m8_ta_vl31(vbool2_t mask, vint16m8_t op1, vint16m8_t op2)
{
  return vmerge_vvm_i16m8_ta(mask, op1, op2, 31);
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
vint32mf2_t 
test_vmerge_vvm_i32mf2_ta(vbool64_t mask, vint32mf2_t op1, vint32mf2_t op2, size_t vl)
{
  return vmerge_vvm_i32mf2_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_i32mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint32mf2_t 
test_vmerge_vvm_i32mf2_ta_vl31(vbool64_t mask, vint32mf2_t op1, vint32mf2_t op2)
{
  return vmerge_vvm_i32mf2_ta(mask, op1, op2, 31);
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
vint32m1_t 
test_vmerge_vvm_i32m1_ta(vbool32_t mask, vint32m1_t op1, vint32m1_t op2, size_t vl)
{
  return vmerge_vvm_i32m1_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_i32m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint32m1_t 
test_vmerge_vvm_i32m1_ta_vl31(vbool32_t mask, vint32m1_t op1, vint32m1_t op2)
{
  return vmerge_vvm_i32m1_ta(mask, op1, op2, 31);
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
vint32m2_t 
test_vmerge_vvm_i32m2_ta(vbool16_t mask, vint32m2_t op1, vint32m2_t op2, size_t vl)
{
  return vmerge_vvm_i32m2_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_i32m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vint32m2_t 
test_vmerge_vvm_i32m2_ta_vl31(vbool16_t mask, vint32m2_t op1, vint32m2_t op2)
{
  return vmerge_vvm_i32m2_ta(mask, op1, op2, 31);
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
vint32m4_t 
test_vmerge_vvm_i32m4_ta(vbool8_t mask, vint32m4_t op1, vint32m4_t op2, size_t vl)
{
  return vmerge_vvm_i32m4_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_i32m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vint32m4_t 
test_vmerge_vvm_i32m4_ta_vl31(vbool8_t mask, vint32m4_t op1, vint32m4_t op2)
{
  return vmerge_vvm_i32m4_ta(mask, op1, op2, 31);
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
vint32m8_t 
test_vmerge_vvm_i32m8_ta(vbool4_t mask, vint32m8_t op1, vint32m8_t op2, size_t vl)
{
  return vmerge_vvm_i32m8_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_i32m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vint32m8_t 
test_vmerge_vvm_i32m8_ta_vl31(vbool4_t mask, vint32m8_t op1, vint32m8_t op2)
{
  return vmerge_vvm_i32m8_ta(mask, op1, op2, 31);
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
vint64m1_t 
test_vmerge_vvm_i64m1_ta(vbool64_t mask, vint64m1_t op1, vint64m1_t op2, size_t vl)
{
  return vmerge_vvm_i64m1_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_i64m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint64m1_t 
test_vmerge_vvm_i64m1_ta_vl31(vbool64_t mask, vint64m1_t op1, vint64m1_t op2)
{
  return vmerge_vvm_i64m1_ta(mask, op1, op2, 31);
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
vint64m2_t 
test_vmerge_vvm_i64m2_ta(vbool32_t mask, vint64m2_t op1, vint64m2_t op2, size_t vl)
{
  return vmerge_vvm_i64m2_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_i64m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vint64m2_t 
test_vmerge_vvm_i64m2_ta_vl31(vbool32_t mask, vint64m2_t op1, vint64m2_t op2)
{
  return vmerge_vvm_i64m2_ta(mask, op1, op2, 31);
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
vint64m4_t 
test_vmerge_vvm_i64m4_ta(vbool16_t mask, vint64m4_t op1, vint64m4_t op2, size_t vl)
{
  return vmerge_vvm_i64m4_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_i64m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vint64m4_t 
test_vmerge_vvm_i64m4_ta_vl31(vbool16_t mask, vint64m4_t op1, vint64m4_t op2)
{
  return vmerge_vvm_i64m4_ta(mask, op1, op2, 31);
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
vint64m8_t 
test_vmerge_vvm_i64m8_ta(vbool8_t mask, vint64m8_t op1, vint64m8_t op2, size_t vl)
{
  return vmerge_vvm_i64m8_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_i64m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vint64m8_t 
test_vmerge_vvm_i64m8_ta_vl31(vbool8_t mask, vint64m8_t op1, vint64m8_t op2)
{
  return vmerge_vvm_i64m8_ta(mask, op1, op2, 31);
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
vint8mf8_t 
test_vmerge_vvm_i8mf8_tu(vint8mf8_t dest, vbool64_t mask, vint8mf8_t op1, vint8mf8_t op2, size_t vl)
{
  return vmerge_vvm_i8mf8_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_i8mf8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint8mf8_t 
test_vmerge_vvm_i8mf8_tu_vl31(vint8mf8_t dest, vbool64_t mask, vint8mf8_t op1, vint8mf8_t op2)
{
  return vmerge_vvm_i8mf8_tu(mask, dest, op1, op2, 31);
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
vint8mf4_t 
test_vmerge_vvm_i8mf4_tu(vint8mf4_t dest, vbool32_t mask, vint8mf4_t op1, vint8mf4_t op2, size_t vl)
{
  return vmerge_vvm_i8mf4_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_i8mf4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint8mf4_t 
test_vmerge_vvm_i8mf4_tu_vl31(vint8mf4_t dest, vbool32_t mask, vint8mf4_t op1, vint8mf4_t op2)
{
  return vmerge_vvm_i8mf4_tu(mask, dest, op1, op2, 31);
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
vint8mf2_t 
test_vmerge_vvm_i8mf2_tu(vint8mf2_t dest, vbool16_t mask, vint8mf2_t op1, vint8mf2_t op2, size_t vl)
{
  return vmerge_vvm_i8mf2_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_i8mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint8mf2_t 
test_vmerge_vvm_i8mf2_tu_vl31(vint8mf2_t dest, vbool16_t mask, vint8mf2_t op1, vint8mf2_t op2)
{
  return vmerge_vvm_i8mf2_tu(mask, dest, op1, op2, 31);
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
vint8m1_t 
test_vmerge_vvm_i8m1_tu(vint8m1_t dest, vbool8_t mask, vint8m1_t op1, vint8m1_t op2, size_t vl)
{
  return vmerge_vvm_i8m1_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_i8m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint8m1_t 
test_vmerge_vvm_i8m1_tu_vl31(vint8m1_t dest, vbool8_t mask, vint8m1_t op1, vint8m1_t op2)
{
  return vmerge_vvm_i8m1_tu(mask, dest, op1, op2, 31);
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
vint8m2_t 
test_vmerge_vvm_i8m2_tu(vint8m2_t dest, vbool4_t mask, vint8m2_t op1, vint8m2_t op2, size_t vl)
{
  return vmerge_vvm_i8m2_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_i8m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vint8m2_t 
test_vmerge_vvm_i8m2_tu_vl31(vint8m2_t dest, vbool4_t mask, vint8m2_t op1, vint8m2_t op2)
{
  return vmerge_vvm_i8m2_tu(mask, dest, op1, op2, 31);
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
vint8m4_t 
test_vmerge_vvm_i8m4_tu(vint8m4_t dest, vbool2_t mask, vint8m4_t op1, vint8m4_t op2, size_t vl)
{
  return vmerge_vvm_i8m4_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_i8m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vint8m4_t 
test_vmerge_vvm_i8m4_tu_vl31(vint8m4_t dest, vbool2_t mask, vint8m4_t op1, vint8m4_t op2)
{
  return vmerge_vvm_i8m4_tu(mask, dest, op1, op2, 31);
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
vint8m8_t 
test_vmerge_vvm_i8m8_tu(vint8m8_t dest, vbool1_t mask, vint8m8_t op1, vint8m8_t op2, size_t vl)
{
  return vmerge_vvm_i8m8_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_i8m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vint8m8_t 
test_vmerge_vvm_i8m8_tu_vl31(vint8m8_t dest, vbool1_t mask, vint8m8_t op1, vint8m8_t op2)
{
  return vmerge_vvm_i8m8_tu(mask, dest, op1, op2, 31);
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
vint16mf4_t 
test_vmerge_vvm_i16mf4_tu(vint16mf4_t dest, vbool64_t mask, vint16mf4_t op1, vint16mf4_t op2, size_t vl)
{
  return vmerge_vvm_i16mf4_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_i16mf4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint16mf4_t 
test_vmerge_vvm_i16mf4_tu_vl31(vint16mf4_t dest, vbool64_t mask, vint16mf4_t op1, vint16mf4_t op2)
{
  return vmerge_vvm_i16mf4_tu(mask, dest, op1, op2, 31);
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
vint16mf2_t 
test_vmerge_vvm_i16mf2_tu(vint16mf2_t dest, vbool32_t mask, vint16mf2_t op1, vint16mf2_t op2, size_t vl)
{
  return vmerge_vvm_i16mf2_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_i16mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint16mf2_t 
test_vmerge_vvm_i16mf2_tu_vl31(vint16mf2_t dest, vbool32_t mask, vint16mf2_t op1, vint16mf2_t op2)
{
  return vmerge_vvm_i16mf2_tu(mask, dest, op1, op2, 31);
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
vint16m1_t 
test_vmerge_vvm_i16m1_tu(vint16m1_t dest, vbool16_t mask, vint16m1_t op1, vint16m1_t op2, size_t vl)
{
  return vmerge_vvm_i16m1_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_i16m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint16m1_t 
test_vmerge_vvm_i16m1_tu_vl31(vint16m1_t dest, vbool16_t mask, vint16m1_t op1, vint16m1_t op2)
{
  return vmerge_vvm_i16m1_tu(mask, dest, op1, op2, 31);
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
vint16m2_t 
test_vmerge_vvm_i16m2_tu(vint16m2_t dest, vbool8_t mask, vint16m2_t op1, vint16m2_t op2, size_t vl)
{
  return vmerge_vvm_i16m2_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_i16m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vint16m2_t 
test_vmerge_vvm_i16m2_tu_vl31(vint16m2_t dest, vbool8_t mask, vint16m2_t op1, vint16m2_t op2)
{
  return vmerge_vvm_i16m2_tu(mask, dest, op1, op2, 31);
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
vint16m4_t 
test_vmerge_vvm_i16m4_tu(vint16m4_t dest, vbool4_t mask, vint16m4_t op1, vint16m4_t op2, size_t vl)
{
  return vmerge_vvm_i16m4_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_i16m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vint16m4_t 
test_vmerge_vvm_i16m4_tu_vl31(vint16m4_t dest, vbool4_t mask, vint16m4_t op1, vint16m4_t op2)
{
  return vmerge_vvm_i16m4_tu(mask, dest, op1, op2, 31);
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
vint16m8_t 
test_vmerge_vvm_i16m8_tu(vint16m8_t dest, vbool2_t mask, vint16m8_t op1, vint16m8_t op2, size_t vl)
{
  return vmerge_vvm_i16m8_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_i16m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vint16m8_t 
test_vmerge_vvm_i16m8_tu_vl31(vint16m8_t dest, vbool2_t mask, vint16m8_t op1, vint16m8_t op2)
{
  return vmerge_vvm_i16m8_tu(mask, dest, op1, op2, 31);
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
vint32mf2_t 
test_vmerge_vvm_i32mf2_tu(vint32mf2_t dest, vbool64_t mask, vint32mf2_t op1, vint32mf2_t op2, size_t vl)
{
  return vmerge_vvm_i32mf2_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_i32mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint32mf2_t 
test_vmerge_vvm_i32mf2_tu_vl31(vint32mf2_t dest, vbool64_t mask, vint32mf2_t op1, vint32mf2_t op2)
{
  return vmerge_vvm_i32mf2_tu(mask, dest, op1, op2, 31);
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
vint32m1_t 
test_vmerge_vvm_i32m1_tu(vint32m1_t dest, vbool32_t mask, vint32m1_t op1, vint32m1_t op2, size_t vl)
{
  return vmerge_vvm_i32m1_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_i32m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint32m1_t 
test_vmerge_vvm_i32m1_tu_vl31(vint32m1_t dest, vbool32_t mask, vint32m1_t op1, vint32m1_t op2)
{
  return vmerge_vvm_i32m1_tu(mask, dest, op1, op2, 31);
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
vint32m2_t 
test_vmerge_vvm_i32m2_tu(vint32m2_t dest, vbool16_t mask, vint32m2_t op1, vint32m2_t op2, size_t vl)
{
  return vmerge_vvm_i32m2_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_i32m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vint32m2_t 
test_vmerge_vvm_i32m2_tu_vl31(vint32m2_t dest, vbool16_t mask, vint32m2_t op1, vint32m2_t op2)
{
  return vmerge_vvm_i32m2_tu(mask, dest, op1, op2, 31);
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
vint32m4_t 
test_vmerge_vvm_i32m4_tu(vint32m4_t dest, vbool8_t mask, vint32m4_t op1, vint32m4_t op2, size_t vl)
{
  return vmerge_vvm_i32m4_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_i32m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vint32m4_t 
test_vmerge_vvm_i32m4_tu_vl31(vint32m4_t dest, vbool8_t mask, vint32m4_t op1, vint32m4_t op2)
{
  return vmerge_vvm_i32m4_tu(mask, dest, op1, op2, 31);
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
vint32m8_t 
test_vmerge_vvm_i32m8_tu(vint32m8_t dest, vbool4_t mask, vint32m8_t op1, vint32m8_t op2, size_t vl)
{
  return vmerge_vvm_i32m8_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_i32m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vint32m8_t 
test_vmerge_vvm_i32m8_tu_vl31(vint32m8_t dest, vbool4_t mask, vint32m8_t op1, vint32m8_t op2)
{
  return vmerge_vvm_i32m8_tu(mask, dest, op1, op2, 31);
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
vint64m1_t 
test_vmerge_vvm_i64m1_tu(vint64m1_t dest, vbool64_t mask, vint64m1_t op1, vint64m1_t op2, size_t vl)
{
  return vmerge_vvm_i64m1_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_i64m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint64m1_t 
test_vmerge_vvm_i64m1_tu_vl31(vint64m1_t dest, vbool64_t mask, vint64m1_t op1, vint64m1_t op2)
{
  return vmerge_vvm_i64m1_tu(mask, dest, op1, op2, 31);
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
vint64m2_t 
test_vmerge_vvm_i64m2_tu(vint64m2_t dest, vbool32_t mask, vint64m2_t op1, vint64m2_t op2, size_t vl)
{
  return vmerge_vvm_i64m2_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_i64m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vint64m2_t 
test_vmerge_vvm_i64m2_tu_vl31(vint64m2_t dest, vbool32_t mask, vint64m2_t op1, vint64m2_t op2)
{
  return vmerge_vvm_i64m2_tu(mask, dest, op1, op2, 31);
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
vint64m4_t 
test_vmerge_vvm_i64m4_tu(vint64m4_t dest, vbool16_t mask, vint64m4_t op1, vint64m4_t op2, size_t vl)
{
  return vmerge_vvm_i64m4_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_i64m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vint64m4_t 
test_vmerge_vvm_i64m4_tu_vl31(vint64m4_t dest, vbool16_t mask, vint64m4_t op1, vint64m4_t op2)
{
  return vmerge_vvm_i64m4_tu(mask, dest, op1, op2, 31);
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
vint64m8_t 
test_vmerge_vvm_i64m8_tu(vint64m8_t dest, vbool8_t mask, vint64m8_t op1, vint64m8_t op2, size_t vl)
{
  return vmerge_vvm_i64m8_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_i64m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vint64m8_t 
test_vmerge_vvm_i64m8_tu_vl31(vint64m8_t dest, vbool8_t mask, vint64m8_t op1, vint64m8_t op2)
{
  return vmerge_vvm_i64m8_tu(mask, dest, op1, op2, 31);
}

/*
** test_vmerge_vvm_i8mf8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint8mf8_t 
test_vmerge_vvm_i8mf8_ta_vl32(vbool64_t mask, vint8mf8_t op1, vint8mf8_t op2)
{
  return vmerge_vvm_i8mf8_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_i8mf4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint8mf4_t 
test_vmerge_vvm_i8mf4_ta_vl32(vbool32_t mask, vint8mf4_t op1, vint8mf4_t op2)
{
  return vmerge_vvm_i8mf4_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_i8mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint8mf2_t 
test_vmerge_vvm_i8mf2_ta_vl32(vbool16_t mask, vint8mf2_t op1, vint8mf2_t op2)
{
  return vmerge_vvm_i8mf2_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_i8m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint8m1_t 
test_vmerge_vvm_i8m1_ta_vl32(vbool8_t mask, vint8m1_t op1, vint8m1_t op2)
{
  return vmerge_vvm_i8m1_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_i8m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vint8m2_t 
test_vmerge_vvm_i8m2_ta_vl32(vbool4_t mask, vint8m2_t op1, vint8m2_t op2)
{
  return vmerge_vvm_i8m2_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_i8m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vint8m4_t 
test_vmerge_vvm_i8m4_ta_vl32(vbool2_t mask, vint8m4_t op1, vint8m4_t op2)
{
  return vmerge_vvm_i8m4_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_i8m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vint8m8_t 
test_vmerge_vvm_i8m8_ta_vl32(vbool1_t mask, vint8m8_t op1, vint8m8_t op2)
{
  return vmerge_vvm_i8m8_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_i16mf4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint16mf4_t 
test_vmerge_vvm_i16mf4_ta_vl32(vbool64_t mask, vint16mf4_t op1, vint16mf4_t op2)
{
  return vmerge_vvm_i16mf4_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_i16mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint16mf2_t 
test_vmerge_vvm_i16mf2_ta_vl32(vbool32_t mask, vint16mf2_t op1, vint16mf2_t op2)
{
  return vmerge_vvm_i16mf2_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_i16m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint16m1_t 
test_vmerge_vvm_i16m1_ta_vl32(vbool16_t mask, vint16m1_t op1, vint16m1_t op2)
{
  return vmerge_vvm_i16m1_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_i16m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vint16m2_t 
test_vmerge_vvm_i16m2_ta_vl32(vbool8_t mask, vint16m2_t op1, vint16m2_t op2)
{
  return vmerge_vvm_i16m2_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_i16m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vint16m4_t 
test_vmerge_vvm_i16m4_ta_vl32(vbool4_t mask, vint16m4_t op1, vint16m4_t op2)
{
  return vmerge_vvm_i16m4_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_i16m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vint16m8_t 
test_vmerge_vvm_i16m8_ta_vl32(vbool2_t mask, vint16m8_t op1, vint16m8_t op2)
{
  return vmerge_vvm_i16m8_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_i32mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint32mf2_t 
test_vmerge_vvm_i32mf2_ta_vl32(vbool64_t mask, vint32mf2_t op1, vint32mf2_t op2)
{
  return vmerge_vvm_i32mf2_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_i32m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint32m1_t 
test_vmerge_vvm_i32m1_ta_vl32(vbool32_t mask, vint32m1_t op1, vint32m1_t op2)
{
  return vmerge_vvm_i32m1_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_i32m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vint32m2_t 
test_vmerge_vvm_i32m2_ta_vl32(vbool16_t mask, vint32m2_t op1, vint32m2_t op2)
{
  return vmerge_vvm_i32m2_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_i32m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vint32m4_t 
test_vmerge_vvm_i32m4_ta_vl32(vbool8_t mask, vint32m4_t op1, vint32m4_t op2)
{
  return vmerge_vvm_i32m4_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_i32m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vint32m8_t 
test_vmerge_vvm_i32m8_ta_vl32(vbool4_t mask, vint32m8_t op1, vint32m8_t op2)
{
  return vmerge_vvm_i32m8_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_i64m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint64m1_t 
test_vmerge_vvm_i64m1_ta_vl32(vbool64_t mask, vint64m1_t op1, vint64m1_t op2)
{
  return vmerge_vvm_i64m1_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_i64m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vint64m2_t 
test_vmerge_vvm_i64m2_ta_vl32(vbool32_t mask, vint64m2_t op1, vint64m2_t op2)
{
  return vmerge_vvm_i64m2_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_i64m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vint64m4_t 
test_vmerge_vvm_i64m4_ta_vl32(vbool16_t mask, vint64m4_t op1, vint64m4_t op2)
{
  return vmerge_vvm_i64m4_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_i64m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vint64m8_t 
test_vmerge_vvm_i64m8_ta_vl32(vbool8_t mask, vint64m8_t op1, vint64m8_t op2)
{
  return vmerge_vvm_i64m8_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_i8mf8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint8mf8_t 
test_vmerge_vvm_i8mf8_tu_vl32(vint8mf8_t dest, vbool64_t mask, vint8mf8_t op1, vint8mf8_t op2)
{
  return vmerge_vvm_i8mf8_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_i8mf4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint8mf4_t 
test_vmerge_vvm_i8mf4_tu_vl32(vint8mf4_t dest, vbool32_t mask, vint8mf4_t op1, vint8mf4_t op2)
{
  return vmerge_vvm_i8mf4_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_i8mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint8mf2_t 
test_vmerge_vvm_i8mf2_tu_vl32(vint8mf2_t dest, vbool16_t mask, vint8mf2_t op1, vint8mf2_t op2)
{
  return vmerge_vvm_i8mf2_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_i8m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint8m1_t 
test_vmerge_vvm_i8m1_tu_vl32(vint8m1_t dest, vbool8_t mask, vint8m1_t op1, vint8m1_t op2)
{
  return vmerge_vvm_i8m1_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_i8m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vint8m2_t 
test_vmerge_vvm_i8m2_tu_vl32(vint8m2_t dest, vbool4_t mask, vint8m2_t op1, vint8m2_t op2)
{
  return vmerge_vvm_i8m2_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_i8m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vint8m4_t 
test_vmerge_vvm_i8m4_tu_vl32(vint8m4_t dest, vbool2_t mask, vint8m4_t op1, vint8m4_t op2)
{
  return vmerge_vvm_i8m4_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_i8m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vint8m8_t 
test_vmerge_vvm_i8m8_tu_vl32(vint8m8_t dest, vbool1_t mask, vint8m8_t op1, vint8m8_t op2)
{
  return vmerge_vvm_i8m8_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_i16mf4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint16mf4_t 
test_vmerge_vvm_i16mf4_tu_vl32(vint16mf4_t dest, vbool64_t mask, vint16mf4_t op1, vint16mf4_t op2)
{
  return vmerge_vvm_i16mf4_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_i16mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint16mf2_t 
test_vmerge_vvm_i16mf2_tu_vl32(vint16mf2_t dest, vbool32_t mask, vint16mf2_t op1, vint16mf2_t op2)
{
  return vmerge_vvm_i16mf2_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_i16m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint16m1_t 
test_vmerge_vvm_i16m1_tu_vl32(vint16m1_t dest, vbool16_t mask, vint16m1_t op1, vint16m1_t op2)
{
  return vmerge_vvm_i16m1_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_i16m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vint16m2_t 
test_vmerge_vvm_i16m2_tu_vl32(vint16m2_t dest, vbool8_t mask, vint16m2_t op1, vint16m2_t op2)
{
  return vmerge_vvm_i16m2_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_i16m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vint16m4_t 
test_vmerge_vvm_i16m4_tu_vl32(vint16m4_t dest, vbool4_t mask, vint16m4_t op1, vint16m4_t op2)
{
  return vmerge_vvm_i16m4_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_i16m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vint16m8_t 
test_vmerge_vvm_i16m8_tu_vl32(vint16m8_t dest, vbool2_t mask, vint16m8_t op1, vint16m8_t op2)
{
  return vmerge_vvm_i16m8_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_i32mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint32mf2_t 
test_vmerge_vvm_i32mf2_tu_vl32(vint32mf2_t dest, vbool64_t mask, vint32mf2_t op1, vint32mf2_t op2)
{
  return vmerge_vvm_i32mf2_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_i32m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint32m1_t 
test_vmerge_vvm_i32m1_tu_vl32(vint32m1_t dest, vbool32_t mask, vint32m1_t op1, vint32m1_t op2)
{
  return vmerge_vvm_i32m1_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_i32m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vint32m2_t 
test_vmerge_vvm_i32m2_tu_vl32(vint32m2_t dest, vbool16_t mask, vint32m2_t op1, vint32m2_t op2)
{
  return vmerge_vvm_i32m2_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_i32m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vint32m4_t 
test_vmerge_vvm_i32m4_tu_vl32(vint32m4_t dest, vbool8_t mask, vint32m4_t op1, vint32m4_t op2)
{
  return vmerge_vvm_i32m4_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_i32m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vint32m8_t 
test_vmerge_vvm_i32m8_tu_vl32(vint32m8_t dest, vbool4_t mask, vint32m8_t op1, vint32m8_t op2)
{
  return vmerge_vvm_i32m8_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_i64m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint64m1_t 
test_vmerge_vvm_i64m1_tu_vl32(vint64m1_t dest, vbool64_t mask, vint64m1_t op1, vint64m1_t op2)
{
  return vmerge_vvm_i64m1_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_i64m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vint64m2_t 
test_vmerge_vvm_i64m2_tu_vl32(vint64m2_t dest, vbool32_t mask, vint64m2_t op1, vint64m2_t op2)
{
  return vmerge_vvm_i64m2_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_i64m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vint64m4_t 
test_vmerge_vvm_i64m4_tu_vl32(vint64m4_t dest, vbool16_t mask, vint64m4_t op1, vint64m4_t op2)
{
  return vmerge_vvm_i64m4_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_i64m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vint64m8_t 
test_vmerge_vvm_i64m8_tu_vl32(vint64m8_t dest, vbool8_t mask, vint64m8_t op1, vint64m8_t op2)
{
  return vmerge_vvm_i64m8_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_i8mf8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint8mf8_t 
test_vmerge_vvm_i8mf8_vl32(vbool64_t mask, vint8mf8_t op1, vint8mf8_t op2)
{
  return vmerge_vvm_i8mf8(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_i8mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint8mf4_t 
test_vmerge_vvm_i8mf4_vl32(vbool32_t mask, vint8mf4_t op1, vint8mf4_t op2)
{
  return vmerge_vvm_i8mf4(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_i8mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint8mf2_t 
test_vmerge_vvm_i8mf2_vl32(vbool16_t mask, vint8mf2_t op1, vint8mf2_t op2)
{
  return vmerge_vvm_i8mf2(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_i8m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint8m1_t 
test_vmerge_vvm_i8m1_vl32(vbool8_t mask, vint8m1_t op1, vint8m1_t op2)
{
  return vmerge_vvm_i8m1(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_i8m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vint8m2_t 
test_vmerge_vvm_i8m2_vl32(vbool4_t mask, vint8m2_t op1, vint8m2_t op2)
{
  return vmerge_vvm_i8m2(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_i8m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vint8m4_t 
test_vmerge_vvm_i8m4_vl32(vbool2_t mask, vint8m4_t op1, vint8m4_t op2)
{
  return vmerge_vvm_i8m4(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_i8m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vint8m8_t 
test_vmerge_vvm_i8m8_vl32(vbool1_t mask, vint8m8_t op1, vint8m8_t op2)
{
  return vmerge_vvm_i8m8(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_i16mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint16mf4_t 
test_vmerge_vvm_i16mf4_vl32(vbool64_t mask, vint16mf4_t op1, vint16mf4_t op2)
{
  return vmerge_vvm_i16mf4(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_i16mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint16mf2_t 
test_vmerge_vvm_i16mf2_vl32(vbool32_t mask, vint16mf2_t op1, vint16mf2_t op2)
{
  return vmerge_vvm_i16mf2(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_i16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint16m1_t 
test_vmerge_vvm_i16m1_vl32(vbool16_t mask, vint16m1_t op1, vint16m1_t op2)
{
  return vmerge_vvm_i16m1(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_i16m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vint16m2_t 
test_vmerge_vvm_i16m2_vl32(vbool8_t mask, vint16m2_t op1, vint16m2_t op2)
{
  return vmerge_vvm_i16m2(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_i16m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vint16m4_t 
test_vmerge_vvm_i16m4_vl32(vbool4_t mask, vint16m4_t op1, vint16m4_t op2)
{
  return vmerge_vvm_i16m4(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_i16m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vint16m8_t 
test_vmerge_vvm_i16m8_vl32(vbool2_t mask, vint16m8_t op1, vint16m8_t op2)
{
  return vmerge_vvm_i16m8(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_i32mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint32mf2_t 
test_vmerge_vvm_i32mf2_vl32(vbool64_t mask, vint32mf2_t op1, vint32mf2_t op2)
{
  return vmerge_vvm_i32mf2(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_i32m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint32m1_t 
test_vmerge_vvm_i32m1_vl32(vbool32_t mask, vint32m1_t op1, vint32m1_t op2)
{
  return vmerge_vvm_i32m1(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_i32m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vint32m2_t 
test_vmerge_vvm_i32m2_vl32(vbool16_t mask, vint32m2_t op1, vint32m2_t op2)
{
  return vmerge_vvm_i32m2(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_i32m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vint32m4_t 
test_vmerge_vvm_i32m4_vl32(vbool8_t mask, vint32m4_t op1, vint32m4_t op2)
{
  return vmerge_vvm_i32m4(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_i32m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vint32m8_t 
test_vmerge_vvm_i32m8_vl32(vbool4_t mask, vint32m8_t op1, vint32m8_t op2)
{
  return vmerge_vvm_i32m8(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_i64m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vint64m1_t 
test_vmerge_vvm_i64m1_vl32(vbool64_t mask, vint64m1_t op1, vint64m1_t op2)
{
  return vmerge_vvm_i64m1(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_i64m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vint64m2_t 
test_vmerge_vvm_i64m2_vl32(vbool32_t mask, vint64m2_t op1, vint64m2_t op2)
{
  return vmerge_vvm_i64m2(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_i64m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vint64m4_t 
test_vmerge_vvm_i64m4_vl32(vbool16_t mask, vint64m4_t op1, vint64m4_t op2)
{
  return vmerge_vvm_i64m4(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_i64m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vint64m8_t 
test_vmerge_vvm_i64m8_vl32(vbool8_t mask, vint64m8_t op1, vint64m8_t op2)
{
  return vmerge_vvm_i64m8(mask, op1, op2, 32);
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
vuint8mf8_t 
test_vmerge_vvm_u8mf8(vbool64_t mask, vuint8mf8_t op1, vuint8mf8_t op2, size_t vl)
{
  return vmerge_vvm_u8mf8(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_u8mf8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint8mf8_t 
test_vmerge_vvm_u8mf8_vl31(vbool64_t mask, vuint8mf8_t op1, vuint8mf8_t op2)
{
  return vmerge_vvm_u8mf8(mask, op1, op2, 31);
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
vuint8mf4_t 
test_vmerge_vvm_u8mf4(vbool32_t mask, vuint8mf4_t op1, vuint8mf4_t op2, size_t vl)
{
  return vmerge_vvm_u8mf4(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_u8mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint8mf4_t 
test_vmerge_vvm_u8mf4_vl31(vbool32_t mask, vuint8mf4_t op1, vuint8mf4_t op2)
{
  return vmerge_vvm_u8mf4(mask, op1, op2, 31);
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
vuint8mf2_t 
test_vmerge_vvm_u8mf2(vbool16_t mask, vuint8mf2_t op1, vuint8mf2_t op2, size_t vl)
{
  return vmerge_vvm_u8mf2(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_u8mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint8mf2_t 
test_vmerge_vvm_u8mf2_vl31(vbool16_t mask, vuint8mf2_t op1, vuint8mf2_t op2)
{
  return vmerge_vvm_u8mf2(mask, op1, op2, 31);
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
vuint8m1_t 
test_vmerge_vvm_u8m1(vbool8_t mask, vuint8m1_t op1, vuint8m1_t op2, size_t vl)
{
  return vmerge_vvm_u8m1(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_u8m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint8m1_t 
test_vmerge_vvm_u8m1_vl31(vbool8_t mask, vuint8m1_t op1, vuint8m1_t op2)
{
  return vmerge_vvm_u8m1(mask, op1, op2, 31);
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
vuint8m2_t 
test_vmerge_vvm_u8m2(vbool4_t mask, vuint8m2_t op1, vuint8m2_t op2, size_t vl)
{
  return vmerge_vvm_u8m2(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_u8m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vuint8m2_t 
test_vmerge_vvm_u8m2_vl31(vbool4_t mask, vuint8m2_t op1, vuint8m2_t op2)
{
  return vmerge_vvm_u8m2(mask, op1, op2, 31);
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
vuint8m4_t 
test_vmerge_vvm_u8m4(vbool2_t mask, vuint8m4_t op1, vuint8m4_t op2, size_t vl)
{
  return vmerge_vvm_u8m4(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_u8m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vuint8m4_t 
test_vmerge_vvm_u8m4_vl31(vbool2_t mask, vuint8m4_t op1, vuint8m4_t op2)
{
  return vmerge_vvm_u8m4(mask, op1, op2, 31);
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
vuint8m8_t 
test_vmerge_vvm_u8m8(vbool1_t mask, vuint8m8_t op1, vuint8m8_t op2, size_t vl)
{
  return vmerge_vvm_u8m8(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_u8m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vuint8m8_t 
test_vmerge_vvm_u8m8_vl31(vbool1_t mask, vuint8m8_t op1, vuint8m8_t op2)
{
  return vmerge_vvm_u8m8(mask, op1, op2, 31);
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
vuint16mf4_t 
test_vmerge_vvm_u16mf4(vbool64_t mask, vuint16mf4_t op1, vuint16mf4_t op2, size_t vl)
{
  return vmerge_vvm_u16mf4(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_u16mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint16mf4_t 
test_vmerge_vvm_u16mf4_vl31(vbool64_t mask, vuint16mf4_t op1, vuint16mf4_t op2)
{
  return vmerge_vvm_u16mf4(mask, op1, op2, 31);
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
vuint16mf2_t 
test_vmerge_vvm_u16mf2(vbool32_t mask, vuint16mf2_t op1, vuint16mf2_t op2, size_t vl)
{
  return vmerge_vvm_u16mf2(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_u16mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint16mf2_t 
test_vmerge_vvm_u16mf2_vl31(vbool32_t mask, vuint16mf2_t op1, vuint16mf2_t op2)
{
  return vmerge_vvm_u16mf2(mask, op1, op2, 31);
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
vuint16m1_t 
test_vmerge_vvm_u16m1(vbool16_t mask, vuint16m1_t op1, vuint16m1_t op2, size_t vl)
{
  return vmerge_vvm_u16m1(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_u16m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint16m1_t 
test_vmerge_vvm_u16m1_vl31(vbool16_t mask, vuint16m1_t op1, vuint16m1_t op2)
{
  return vmerge_vvm_u16m1(mask, op1, op2, 31);
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
vuint16m2_t 
test_vmerge_vvm_u16m2(vbool8_t mask, vuint16m2_t op1, vuint16m2_t op2, size_t vl)
{
  return vmerge_vvm_u16m2(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_u16m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vuint16m2_t 
test_vmerge_vvm_u16m2_vl31(vbool8_t mask, vuint16m2_t op1, vuint16m2_t op2)
{
  return vmerge_vvm_u16m2(mask, op1, op2, 31);
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
vuint16m4_t 
test_vmerge_vvm_u16m4(vbool4_t mask, vuint16m4_t op1, vuint16m4_t op2, size_t vl)
{
  return vmerge_vvm_u16m4(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_u16m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vuint16m4_t 
test_vmerge_vvm_u16m4_vl31(vbool4_t mask, vuint16m4_t op1, vuint16m4_t op2)
{
  return vmerge_vvm_u16m4(mask, op1, op2, 31);
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
vuint16m8_t 
test_vmerge_vvm_u16m8(vbool2_t mask, vuint16m8_t op1, vuint16m8_t op2, size_t vl)
{
  return vmerge_vvm_u16m8(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_u16m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vuint16m8_t 
test_vmerge_vvm_u16m8_vl31(vbool2_t mask, vuint16m8_t op1, vuint16m8_t op2)
{
  return vmerge_vvm_u16m8(mask, op1, op2, 31);
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
vuint32mf2_t 
test_vmerge_vvm_u32mf2(vbool64_t mask, vuint32mf2_t op1, vuint32mf2_t op2, size_t vl)
{
  return vmerge_vvm_u32mf2(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_u32mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint32mf2_t 
test_vmerge_vvm_u32mf2_vl31(vbool64_t mask, vuint32mf2_t op1, vuint32mf2_t op2)
{
  return vmerge_vvm_u32mf2(mask, op1, op2, 31);
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
vuint32m1_t 
test_vmerge_vvm_u32m1(vbool32_t mask, vuint32m1_t op1, vuint32m1_t op2, size_t vl)
{
  return vmerge_vvm_u32m1(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_u32m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint32m1_t 
test_vmerge_vvm_u32m1_vl31(vbool32_t mask, vuint32m1_t op1, vuint32m1_t op2)
{
  return vmerge_vvm_u32m1(mask, op1, op2, 31);
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
vuint32m2_t 
test_vmerge_vvm_u32m2(vbool16_t mask, vuint32m2_t op1, vuint32m2_t op2, size_t vl)
{
  return vmerge_vvm_u32m2(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_u32m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vuint32m2_t 
test_vmerge_vvm_u32m2_vl31(vbool16_t mask, vuint32m2_t op1, vuint32m2_t op2)
{
  return vmerge_vvm_u32m2(mask, op1, op2, 31);
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
vuint32m4_t 
test_vmerge_vvm_u32m4(vbool8_t mask, vuint32m4_t op1, vuint32m4_t op2, size_t vl)
{
  return vmerge_vvm_u32m4(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_u32m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vuint32m4_t 
test_vmerge_vvm_u32m4_vl31(vbool8_t mask, vuint32m4_t op1, vuint32m4_t op2)
{
  return vmerge_vvm_u32m4(mask, op1, op2, 31);
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
vuint32m8_t 
test_vmerge_vvm_u32m8(vbool4_t mask, vuint32m8_t op1, vuint32m8_t op2, size_t vl)
{
  return vmerge_vvm_u32m8(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_u32m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vuint32m8_t 
test_vmerge_vvm_u32m8_vl31(vbool4_t mask, vuint32m8_t op1, vuint32m8_t op2)
{
  return vmerge_vvm_u32m8(mask, op1, op2, 31);
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
vuint64m1_t 
test_vmerge_vvm_u64m1(vbool64_t mask, vuint64m1_t op1, vuint64m1_t op2, size_t vl)
{
  return vmerge_vvm_u64m1(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_u64m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint64m1_t 
test_vmerge_vvm_u64m1_vl31(vbool64_t mask, vuint64m1_t op1, vuint64m1_t op2)
{
  return vmerge_vvm_u64m1(mask, op1, op2, 31);
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
vuint64m2_t 
test_vmerge_vvm_u64m2(vbool32_t mask, vuint64m2_t op1, vuint64m2_t op2, size_t vl)
{
  return vmerge_vvm_u64m2(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_u64m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vuint64m2_t 
test_vmerge_vvm_u64m2_vl31(vbool32_t mask, vuint64m2_t op1, vuint64m2_t op2)
{
  return vmerge_vvm_u64m2(mask, op1, op2, 31);
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
vuint64m4_t 
test_vmerge_vvm_u64m4(vbool16_t mask, vuint64m4_t op1, vuint64m4_t op2, size_t vl)
{
  return vmerge_vvm_u64m4(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_u64m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vuint64m4_t 
test_vmerge_vvm_u64m4_vl31(vbool16_t mask, vuint64m4_t op1, vuint64m4_t op2)
{
  return vmerge_vvm_u64m4(mask, op1, op2, 31);
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
vuint64m8_t 
test_vmerge_vvm_u64m8(vbool8_t mask, vuint64m8_t op1, vuint64m8_t op2, size_t vl)
{
  return vmerge_vvm_u64m8(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_u64m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vuint64m8_t 
test_vmerge_vvm_u64m8_vl31(vbool8_t mask, vuint64m8_t op1, vuint64m8_t op2)
{
  return vmerge_vvm_u64m8(mask, op1, op2, 31);
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
vuint8mf8_t 
test_vmerge_vvm_u8mf8_ta(vbool64_t mask, vuint8mf8_t op1, vuint8mf8_t op2, size_t vl)
{
  return vmerge_vvm_u8mf8_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_u8mf8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint8mf8_t 
test_vmerge_vvm_u8mf8_ta_vl31(vbool64_t mask, vuint8mf8_t op1, vuint8mf8_t op2)
{
  return vmerge_vvm_u8mf8_ta(mask, op1, op2, 31);
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
vuint8mf4_t 
test_vmerge_vvm_u8mf4_ta(vbool32_t mask, vuint8mf4_t op1, vuint8mf4_t op2, size_t vl)
{
  return vmerge_vvm_u8mf4_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_u8mf4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint8mf4_t 
test_vmerge_vvm_u8mf4_ta_vl31(vbool32_t mask, vuint8mf4_t op1, vuint8mf4_t op2)
{
  return vmerge_vvm_u8mf4_ta(mask, op1, op2, 31);
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
vuint8mf2_t 
test_vmerge_vvm_u8mf2_ta(vbool16_t mask, vuint8mf2_t op1, vuint8mf2_t op2, size_t vl)
{
  return vmerge_vvm_u8mf2_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_u8mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint8mf2_t 
test_vmerge_vvm_u8mf2_ta_vl31(vbool16_t mask, vuint8mf2_t op1, vuint8mf2_t op2)
{
  return vmerge_vvm_u8mf2_ta(mask, op1, op2, 31);
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
vuint8m1_t 
test_vmerge_vvm_u8m1_ta(vbool8_t mask, vuint8m1_t op1, vuint8m1_t op2, size_t vl)
{
  return vmerge_vvm_u8m1_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_u8m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint8m1_t 
test_vmerge_vvm_u8m1_ta_vl31(vbool8_t mask, vuint8m1_t op1, vuint8m1_t op2)
{
  return vmerge_vvm_u8m1_ta(mask, op1, op2, 31);
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
vuint8m2_t 
test_vmerge_vvm_u8m2_ta(vbool4_t mask, vuint8m2_t op1, vuint8m2_t op2, size_t vl)
{
  return vmerge_vvm_u8m2_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_u8m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vuint8m2_t 
test_vmerge_vvm_u8m2_ta_vl31(vbool4_t mask, vuint8m2_t op1, vuint8m2_t op2)
{
  return vmerge_vvm_u8m2_ta(mask, op1, op2, 31);
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
vuint8m4_t 
test_vmerge_vvm_u8m4_ta(vbool2_t mask, vuint8m4_t op1, vuint8m4_t op2, size_t vl)
{
  return vmerge_vvm_u8m4_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_u8m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vuint8m4_t 
test_vmerge_vvm_u8m4_ta_vl31(vbool2_t mask, vuint8m4_t op1, vuint8m4_t op2)
{
  return vmerge_vvm_u8m4_ta(mask, op1, op2, 31);
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
vuint8m8_t 
test_vmerge_vvm_u8m8_ta(vbool1_t mask, vuint8m8_t op1, vuint8m8_t op2, size_t vl)
{
  return vmerge_vvm_u8m8_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_u8m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vuint8m8_t 
test_vmerge_vvm_u8m8_ta_vl31(vbool1_t mask, vuint8m8_t op1, vuint8m8_t op2)
{
  return vmerge_vvm_u8m8_ta(mask, op1, op2, 31);
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
vuint16mf4_t 
test_vmerge_vvm_u16mf4_ta(vbool64_t mask, vuint16mf4_t op1, vuint16mf4_t op2, size_t vl)
{
  return vmerge_vvm_u16mf4_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_u16mf4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint16mf4_t 
test_vmerge_vvm_u16mf4_ta_vl31(vbool64_t mask, vuint16mf4_t op1, vuint16mf4_t op2)
{
  return vmerge_vvm_u16mf4_ta(mask, op1, op2, 31);
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
vuint16mf2_t 
test_vmerge_vvm_u16mf2_ta(vbool32_t mask, vuint16mf2_t op1, vuint16mf2_t op2, size_t vl)
{
  return vmerge_vvm_u16mf2_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_u16mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint16mf2_t 
test_vmerge_vvm_u16mf2_ta_vl31(vbool32_t mask, vuint16mf2_t op1, vuint16mf2_t op2)
{
  return vmerge_vvm_u16mf2_ta(mask, op1, op2, 31);
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
vuint16m1_t 
test_vmerge_vvm_u16m1_ta(vbool16_t mask, vuint16m1_t op1, vuint16m1_t op2, size_t vl)
{
  return vmerge_vvm_u16m1_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_u16m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint16m1_t 
test_vmerge_vvm_u16m1_ta_vl31(vbool16_t mask, vuint16m1_t op1, vuint16m1_t op2)
{
  return vmerge_vvm_u16m1_ta(mask, op1, op2, 31);
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
vuint16m2_t 
test_vmerge_vvm_u16m2_ta(vbool8_t mask, vuint16m2_t op1, vuint16m2_t op2, size_t vl)
{
  return vmerge_vvm_u16m2_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_u16m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vuint16m2_t 
test_vmerge_vvm_u16m2_ta_vl31(vbool8_t mask, vuint16m2_t op1, vuint16m2_t op2)
{
  return vmerge_vvm_u16m2_ta(mask, op1, op2, 31);
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
vuint16m4_t 
test_vmerge_vvm_u16m4_ta(vbool4_t mask, vuint16m4_t op1, vuint16m4_t op2, size_t vl)
{
  return vmerge_vvm_u16m4_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_u16m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vuint16m4_t 
test_vmerge_vvm_u16m4_ta_vl31(vbool4_t mask, vuint16m4_t op1, vuint16m4_t op2)
{
  return vmerge_vvm_u16m4_ta(mask, op1, op2, 31);
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
vuint16m8_t 
test_vmerge_vvm_u16m8_ta(vbool2_t mask, vuint16m8_t op1, vuint16m8_t op2, size_t vl)
{
  return vmerge_vvm_u16m8_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_u16m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vuint16m8_t 
test_vmerge_vvm_u16m8_ta_vl31(vbool2_t mask, vuint16m8_t op1, vuint16m8_t op2)
{
  return vmerge_vvm_u16m8_ta(mask, op1, op2, 31);
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
vuint32mf2_t 
test_vmerge_vvm_u32mf2_ta(vbool64_t mask, vuint32mf2_t op1, vuint32mf2_t op2, size_t vl)
{
  return vmerge_vvm_u32mf2_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_u32mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint32mf2_t 
test_vmerge_vvm_u32mf2_ta_vl31(vbool64_t mask, vuint32mf2_t op1, vuint32mf2_t op2)
{
  return vmerge_vvm_u32mf2_ta(mask, op1, op2, 31);
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
vuint32m1_t 
test_vmerge_vvm_u32m1_ta(vbool32_t mask, vuint32m1_t op1, vuint32m1_t op2, size_t vl)
{
  return vmerge_vvm_u32m1_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_u32m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint32m1_t 
test_vmerge_vvm_u32m1_ta_vl31(vbool32_t mask, vuint32m1_t op1, vuint32m1_t op2)
{
  return vmerge_vvm_u32m1_ta(mask, op1, op2, 31);
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
vuint32m2_t 
test_vmerge_vvm_u32m2_ta(vbool16_t mask, vuint32m2_t op1, vuint32m2_t op2, size_t vl)
{
  return vmerge_vvm_u32m2_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_u32m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vuint32m2_t 
test_vmerge_vvm_u32m2_ta_vl31(vbool16_t mask, vuint32m2_t op1, vuint32m2_t op2)
{
  return vmerge_vvm_u32m2_ta(mask, op1, op2, 31);
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
vuint32m4_t 
test_vmerge_vvm_u32m4_ta(vbool8_t mask, vuint32m4_t op1, vuint32m4_t op2, size_t vl)
{
  return vmerge_vvm_u32m4_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_u32m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vuint32m4_t 
test_vmerge_vvm_u32m4_ta_vl31(vbool8_t mask, vuint32m4_t op1, vuint32m4_t op2)
{
  return vmerge_vvm_u32m4_ta(mask, op1, op2, 31);
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
vuint32m8_t 
test_vmerge_vvm_u32m8_ta(vbool4_t mask, vuint32m8_t op1, vuint32m8_t op2, size_t vl)
{
  return vmerge_vvm_u32m8_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_u32m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vuint32m8_t 
test_vmerge_vvm_u32m8_ta_vl31(vbool4_t mask, vuint32m8_t op1, vuint32m8_t op2)
{
  return vmerge_vvm_u32m8_ta(mask, op1, op2, 31);
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
vuint64m1_t 
test_vmerge_vvm_u64m1_ta(vbool64_t mask, vuint64m1_t op1, vuint64m1_t op2, size_t vl)
{
  return vmerge_vvm_u64m1_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_u64m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint64m1_t 
test_vmerge_vvm_u64m1_ta_vl31(vbool64_t mask, vuint64m1_t op1, vuint64m1_t op2)
{
  return vmerge_vvm_u64m1_ta(mask, op1, op2, 31);
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
vuint64m2_t 
test_vmerge_vvm_u64m2_ta(vbool32_t mask, vuint64m2_t op1, vuint64m2_t op2, size_t vl)
{
  return vmerge_vvm_u64m2_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_u64m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vuint64m2_t 
test_vmerge_vvm_u64m2_ta_vl31(vbool32_t mask, vuint64m2_t op1, vuint64m2_t op2)
{
  return vmerge_vvm_u64m2_ta(mask, op1, op2, 31);
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
vuint64m4_t 
test_vmerge_vvm_u64m4_ta(vbool16_t mask, vuint64m4_t op1, vuint64m4_t op2, size_t vl)
{
  return vmerge_vvm_u64m4_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_u64m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vuint64m4_t 
test_vmerge_vvm_u64m4_ta_vl31(vbool16_t mask, vuint64m4_t op1, vuint64m4_t op2)
{
  return vmerge_vvm_u64m4_ta(mask, op1, op2, 31);
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
vuint64m8_t 
test_vmerge_vvm_u64m8_ta(vbool8_t mask, vuint64m8_t op1, vuint64m8_t op2, size_t vl)
{
  return vmerge_vvm_u64m8_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vvm_u64m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vuint64m8_t 
test_vmerge_vvm_u64m8_ta_vl31(vbool8_t mask, vuint64m8_t op1, vuint64m8_t op2)
{
  return vmerge_vvm_u64m8_ta(mask, op1, op2, 31);
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
vuint8mf8_t 
test_vmerge_vvm_u8mf8_tu(vuint8mf8_t dest, vbool64_t mask, vuint8mf8_t op1, vuint8mf8_t op2, size_t vl)
{
  return vmerge_vvm_u8mf8_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_u8mf8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint8mf8_t 
test_vmerge_vvm_u8mf8_tu_vl31(vuint8mf8_t dest, vbool64_t mask, vuint8mf8_t op1, vuint8mf8_t op2)
{
  return vmerge_vvm_u8mf8_tu(mask, dest, op1, op2, 31);
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
vuint8mf4_t 
test_vmerge_vvm_u8mf4_tu(vuint8mf4_t dest, vbool32_t mask, vuint8mf4_t op1, vuint8mf4_t op2, size_t vl)
{
  return vmerge_vvm_u8mf4_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_u8mf4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint8mf4_t 
test_vmerge_vvm_u8mf4_tu_vl31(vuint8mf4_t dest, vbool32_t mask, vuint8mf4_t op1, vuint8mf4_t op2)
{
  return vmerge_vvm_u8mf4_tu(mask, dest, op1, op2, 31);
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
vuint8mf2_t 
test_vmerge_vvm_u8mf2_tu(vuint8mf2_t dest, vbool16_t mask, vuint8mf2_t op1, vuint8mf2_t op2, size_t vl)
{
  return vmerge_vvm_u8mf2_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_u8mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint8mf2_t 
test_vmerge_vvm_u8mf2_tu_vl31(vuint8mf2_t dest, vbool16_t mask, vuint8mf2_t op1, vuint8mf2_t op2)
{
  return vmerge_vvm_u8mf2_tu(mask, dest, op1, op2, 31);
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
vuint8m1_t 
test_vmerge_vvm_u8m1_tu(vuint8m1_t dest, vbool8_t mask, vuint8m1_t op1, vuint8m1_t op2, size_t vl)
{
  return vmerge_vvm_u8m1_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_u8m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint8m1_t 
test_vmerge_vvm_u8m1_tu_vl31(vuint8m1_t dest, vbool8_t mask, vuint8m1_t op1, vuint8m1_t op2)
{
  return vmerge_vvm_u8m1_tu(mask, dest, op1, op2, 31);
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
vuint8m2_t 
test_vmerge_vvm_u8m2_tu(vuint8m2_t dest, vbool4_t mask, vuint8m2_t op1, vuint8m2_t op2, size_t vl)
{
  return vmerge_vvm_u8m2_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_u8m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vuint8m2_t 
test_vmerge_vvm_u8m2_tu_vl31(vuint8m2_t dest, vbool4_t mask, vuint8m2_t op1, vuint8m2_t op2)
{
  return vmerge_vvm_u8m2_tu(mask, dest, op1, op2, 31);
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
vuint8m4_t 
test_vmerge_vvm_u8m4_tu(vuint8m4_t dest, vbool2_t mask, vuint8m4_t op1, vuint8m4_t op2, size_t vl)
{
  return vmerge_vvm_u8m4_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_u8m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vuint8m4_t 
test_vmerge_vvm_u8m4_tu_vl31(vuint8m4_t dest, vbool2_t mask, vuint8m4_t op1, vuint8m4_t op2)
{
  return vmerge_vvm_u8m4_tu(mask, dest, op1, op2, 31);
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
vuint8m8_t 
test_vmerge_vvm_u8m8_tu(vuint8m8_t dest, vbool1_t mask, vuint8m8_t op1, vuint8m8_t op2, size_t vl)
{
  return vmerge_vvm_u8m8_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_u8m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vuint8m8_t 
test_vmerge_vvm_u8m8_tu_vl31(vuint8m8_t dest, vbool1_t mask, vuint8m8_t op1, vuint8m8_t op2)
{
  return vmerge_vvm_u8m8_tu(mask, dest, op1, op2, 31);
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
vuint16mf4_t 
test_vmerge_vvm_u16mf4_tu(vuint16mf4_t dest, vbool64_t mask, vuint16mf4_t op1, vuint16mf4_t op2, size_t vl)
{
  return vmerge_vvm_u16mf4_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_u16mf4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint16mf4_t 
test_vmerge_vvm_u16mf4_tu_vl31(vuint16mf4_t dest, vbool64_t mask, vuint16mf4_t op1, vuint16mf4_t op2)
{
  return vmerge_vvm_u16mf4_tu(mask, dest, op1, op2, 31);
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
vuint16mf2_t 
test_vmerge_vvm_u16mf2_tu(vuint16mf2_t dest, vbool32_t mask, vuint16mf2_t op1, vuint16mf2_t op2, size_t vl)
{
  return vmerge_vvm_u16mf2_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_u16mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint16mf2_t 
test_vmerge_vvm_u16mf2_tu_vl31(vuint16mf2_t dest, vbool32_t mask, vuint16mf2_t op1, vuint16mf2_t op2)
{
  return vmerge_vvm_u16mf2_tu(mask, dest, op1, op2, 31);
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
vuint16m1_t 
test_vmerge_vvm_u16m1_tu(vuint16m1_t dest, vbool16_t mask, vuint16m1_t op1, vuint16m1_t op2, size_t vl)
{
  return vmerge_vvm_u16m1_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_u16m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint16m1_t 
test_vmerge_vvm_u16m1_tu_vl31(vuint16m1_t dest, vbool16_t mask, vuint16m1_t op1, vuint16m1_t op2)
{
  return vmerge_vvm_u16m1_tu(mask, dest, op1, op2, 31);
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
vuint16m2_t 
test_vmerge_vvm_u16m2_tu(vuint16m2_t dest, vbool8_t mask, vuint16m2_t op1, vuint16m2_t op2, size_t vl)
{
  return vmerge_vvm_u16m2_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_u16m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vuint16m2_t 
test_vmerge_vvm_u16m2_tu_vl31(vuint16m2_t dest, vbool8_t mask, vuint16m2_t op1, vuint16m2_t op2)
{
  return vmerge_vvm_u16m2_tu(mask, dest, op1, op2, 31);
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
vuint16m4_t 
test_vmerge_vvm_u16m4_tu(vuint16m4_t dest, vbool4_t mask, vuint16m4_t op1, vuint16m4_t op2, size_t vl)
{
  return vmerge_vvm_u16m4_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_u16m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vuint16m4_t 
test_vmerge_vvm_u16m4_tu_vl31(vuint16m4_t dest, vbool4_t mask, vuint16m4_t op1, vuint16m4_t op2)
{
  return vmerge_vvm_u16m4_tu(mask, dest, op1, op2, 31);
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
vuint16m8_t 
test_vmerge_vvm_u16m8_tu(vuint16m8_t dest, vbool2_t mask, vuint16m8_t op1, vuint16m8_t op2, size_t vl)
{
  return vmerge_vvm_u16m8_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_u16m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vuint16m8_t 
test_vmerge_vvm_u16m8_tu_vl31(vuint16m8_t dest, vbool2_t mask, vuint16m8_t op1, vuint16m8_t op2)
{
  return vmerge_vvm_u16m8_tu(mask, dest, op1, op2, 31);
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
vuint32mf2_t 
test_vmerge_vvm_u32mf2_tu(vuint32mf2_t dest, vbool64_t mask, vuint32mf2_t op1, vuint32mf2_t op2, size_t vl)
{
  return vmerge_vvm_u32mf2_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_u32mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint32mf2_t 
test_vmerge_vvm_u32mf2_tu_vl31(vuint32mf2_t dest, vbool64_t mask, vuint32mf2_t op1, vuint32mf2_t op2)
{
  return vmerge_vvm_u32mf2_tu(mask, dest, op1, op2, 31);
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
vuint32m1_t 
test_vmerge_vvm_u32m1_tu(vuint32m1_t dest, vbool32_t mask, vuint32m1_t op1, vuint32m1_t op2, size_t vl)
{
  return vmerge_vvm_u32m1_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_u32m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint32m1_t 
test_vmerge_vvm_u32m1_tu_vl31(vuint32m1_t dest, vbool32_t mask, vuint32m1_t op1, vuint32m1_t op2)
{
  return vmerge_vvm_u32m1_tu(mask, dest, op1, op2, 31);
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
vuint32m2_t 
test_vmerge_vvm_u32m2_tu(vuint32m2_t dest, vbool16_t mask, vuint32m2_t op1, vuint32m2_t op2, size_t vl)
{
  return vmerge_vvm_u32m2_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_u32m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vuint32m2_t 
test_vmerge_vvm_u32m2_tu_vl31(vuint32m2_t dest, vbool16_t mask, vuint32m2_t op1, vuint32m2_t op2)
{
  return vmerge_vvm_u32m2_tu(mask, dest, op1, op2, 31);
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
vuint32m4_t 
test_vmerge_vvm_u32m4_tu(vuint32m4_t dest, vbool8_t mask, vuint32m4_t op1, vuint32m4_t op2, size_t vl)
{
  return vmerge_vvm_u32m4_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_u32m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vuint32m4_t 
test_vmerge_vvm_u32m4_tu_vl31(vuint32m4_t dest, vbool8_t mask, vuint32m4_t op1, vuint32m4_t op2)
{
  return vmerge_vvm_u32m4_tu(mask, dest, op1, op2, 31);
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
vuint32m8_t 
test_vmerge_vvm_u32m8_tu(vuint32m8_t dest, vbool4_t mask, vuint32m8_t op1, vuint32m8_t op2, size_t vl)
{
  return vmerge_vvm_u32m8_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_u32m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vuint32m8_t 
test_vmerge_vvm_u32m8_tu_vl31(vuint32m8_t dest, vbool4_t mask, vuint32m8_t op1, vuint32m8_t op2)
{
  return vmerge_vvm_u32m8_tu(mask, dest, op1, op2, 31);
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
vuint64m1_t 
test_vmerge_vvm_u64m1_tu(vuint64m1_t dest, vbool64_t mask, vuint64m1_t op1, vuint64m1_t op2, size_t vl)
{
  return vmerge_vvm_u64m1_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_u64m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint64m1_t 
test_vmerge_vvm_u64m1_tu_vl31(vuint64m1_t dest, vbool64_t mask, vuint64m1_t op1, vuint64m1_t op2)
{
  return vmerge_vvm_u64m1_tu(mask, dest, op1, op2, 31);
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
vuint64m2_t 
test_vmerge_vvm_u64m2_tu(vuint64m2_t dest, vbool32_t mask, vuint64m2_t op1, vuint64m2_t op2, size_t vl)
{
  return vmerge_vvm_u64m2_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_u64m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vuint64m2_t 
test_vmerge_vvm_u64m2_tu_vl31(vuint64m2_t dest, vbool32_t mask, vuint64m2_t op1, vuint64m2_t op2)
{
  return vmerge_vvm_u64m2_tu(mask, dest, op1, op2, 31);
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
vuint64m4_t 
test_vmerge_vvm_u64m4_tu(vuint64m4_t dest, vbool16_t mask, vuint64m4_t op1, vuint64m4_t op2, size_t vl)
{
  return vmerge_vvm_u64m4_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_u64m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vuint64m4_t 
test_vmerge_vvm_u64m4_tu_vl31(vuint64m4_t dest, vbool16_t mask, vuint64m4_t op1, vuint64m4_t op2)
{
  return vmerge_vvm_u64m4_tu(mask, dest, op1, op2, 31);
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
vuint64m8_t 
test_vmerge_vvm_u64m8_tu(vuint64m8_t dest, vbool8_t mask, vuint64m8_t op1, vuint64m8_t op2, size_t vl)
{
  return vmerge_vvm_u64m8_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vvm_u64m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vuint64m8_t 
test_vmerge_vvm_u64m8_tu_vl31(vuint64m8_t dest, vbool8_t mask, vuint64m8_t op1, vuint64m8_t op2)
{
  return vmerge_vvm_u64m8_tu(mask, dest, op1, op2, 31);
}

/*
** test_vmerge_vvm_u8mf8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint8mf8_t 
test_vmerge_vvm_u8mf8_ta_vl32(vbool64_t mask, vuint8mf8_t op1, vuint8mf8_t op2)
{
  return vmerge_vvm_u8mf8_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_u8mf4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint8mf4_t 
test_vmerge_vvm_u8mf4_ta_vl32(vbool32_t mask, vuint8mf4_t op1, vuint8mf4_t op2)
{
  return vmerge_vvm_u8mf4_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_u8mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint8mf2_t 
test_vmerge_vvm_u8mf2_ta_vl32(vbool16_t mask, vuint8mf2_t op1, vuint8mf2_t op2)
{
  return vmerge_vvm_u8mf2_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_u8m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint8m1_t 
test_vmerge_vvm_u8m1_ta_vl32(vbool8_t mask, vuint8m1_t op1, vuint8m1_t op2)
{
  return vmerge_vvm_u8m1_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_u8m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vuint8m2_t 
test_vmerge_vvm_u8m2_ta_vl32(vbool4_t mask, vuint8m2_t op1, vuint8m2_t op2)
{
  return vmerge_vvm_u8m2_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_u8m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vuint8m4_t 
test_vmerge_vvm_u8m4_ta_vl32(vbool2_t mask, vuint8m4_t op1, vuint8m4_t op2)
{
  return vmerge_vvm_u8m4_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_u8m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vuint8m8_t 
test_vmerge_vvm_u8m8_ta_vl32(vbool1_t mask, vuint8m8_t op1, vuint8m8_t op2)
{
  return vmerge_vvm_u8m8_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_u16mf4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint16mf4_t 
test_vmerge_vvm_u16mf4_ta_vl32(vbool64_t mask, vuint16mf4_t op1, vuint16mf4_t op2)
{
  return vmerge_vvm_u16mf4_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_u16mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint16mf2_t 
test_vmerge_vvm_u16mf2_ta_vl32(vbool32_t mask, vuint16mf2_t op1, vuint16mf2_t op2)
{
  return vmerge_vvm_u16mf2_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_u16m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint16m1_t 
test_vmerge_vvm_u16m1_ta_vl32(vbool16_t mask, vuint16m1_t op1, vuint16m1_t op2)
{
  return vmerge_vvm_u16m1_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_u16m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vuint16m2_t 
test_vmerge_vvm_u16m2_ta_vl32(vbool8_t mask, vuint16m2_t op1, vuint16m2_t op2)
{
  return vmerge_vvm_u16m2_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_u16m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vuint16m4_t 
test_vmerge_vvm_u16m4_ta_vl32(vbool4_t mask, vuint16m4_t op1, vuint16m4_t op2)
{
  return vmerge_vvm_u16m4_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_u16m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vuint16m8_t 
test_vmerge_vvm_u16m8_ta_vl32(vbool2_t mask, vuint16m8_t op1, vuint16m8_t op2)
{
  return vmerge_vvm_u16m8_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_u32mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint32mf2_t 
test_vmerge_vvm_u32mf2_ta_vl32(vbool64_t mask, vuint32mf2_t op1, vuint32mf2_t op2)
{
  return vmerge_vvm_u32mf2_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_u32m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint32m1_t 
test_vmerge_vvm_u32m1_ta_vl32(vbool32_t mask, vuint32m1_t op1, vuint32m1_t op2)
{
  return vmerge_vvm_u32m1_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_u32m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vuint32m2_t 
test_vmerge_vvm_u32m2_ta_vl32(vbool16_t mask, vuint32m2_t op1, vuint32m2_t op2)
{
  return vmerge_vvm_u32m2_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_u32m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vuint32m4_t 
test_vmerge_vvm_u32m4_ta_vl32(vbool8_t mask, vuint32m4_t op1, vuint32m4_t op2)
{
  return vmerge_vvm_u32m4_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_u32m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vuint32m8_t 
test_vmerge_vvm_u32m8_ta_vl32(vbool4_t mask, vuint32m8_t op1, vuint32m8_t op2)
{
  return vmerge_vvm_u32m8_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_u64m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint64m1_t 
test_vmerge_vvm_u64m1_ta_vl32(vbool64_t mask, vuint64m1_t op1, vuint64m1_t op2)
{
  return vmerge_vvm_u64m1_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_u64m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vuint64m2_t 
test_vmerge_vvm_u64m2_ta_vl32(vbool32_t mask, vuint64m2_t op1, vuint64m2_t op2)
{
  return vmerge_vvm_u64m2_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_u64m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vuint64m4_t 
test_vmerge_vvm_u64m4_ta_vl32(vbool16_t mask, vuint64m4_t op1, vuint64m4_t op2)
{
  return vmerge_vvm_u64m4_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_u64m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vuint64m8_t 
test_vmerge_vvm_u64m8_ta_vl32(vbool8_t mask, vuint64m8_t op1, vuint64m8_t op2)
{
  return vmerge_vvm_u64m8_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_u8mf8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint8mf8_t 
test_vmerge_vvm_u8mf8_tu_vl32(vuint8mf8_t dest, vbool64_t mask, vuint8mf8_t op1, vuint8mf8_t op2)
{
  return vmerge_vvm_u8mf8_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_u8mf4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint8mf4_t 
test_vmerge_vvm_u8mf4_tu_vl32(vuint8mf4_t dest, vbool32_t mask, vuint8mf4_t op1, vuint8mf4_t op2)
{
  return vmerge_vvm_u8mf4_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_u8mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint8mf2_t 
test_vmerge_vvm_u8mf2_tu_vl32(vuint8mf2_t dest, vbool16_t mask, vuint8mf2_t op1, vuint8mf2_t op2)
{
  return vmerge_vvm_u8mf2_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_u8m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint8m1_t 
test_vmerge_vvm_u8m1_tu_vl32(vuint8m1_t dest, vbool8_t mask, vuint8m1_t op1, vuint8m1_t op2)
{
  return vmerge_vvm_u8m1_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_u8m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vuint8m2_t 
test_vmerge_vvm_u8m2_tu_vl32(vuint8m2_t dest, vbool4_t mask, vuint8m2_t op1, vuint8m2_t op2)
{
  return vmerge_vvm_u8m2_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_u8m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vuint8m4_t 
test_vmerge_vvm_u8m4_tu_vl32(vuint8m4_t dest, vbool2_t mask, vuint8m4_t op1, vuint8m4_t op2)
{
  return vmerge_vvm_u8m4_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_u8m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vuint8m8_t 
test_vmerge_vvm_u8m8_tu_vl32(vuint8m8_t dest, vbool1_t mask, vuint8m8_t op1, vuint8m8_t op2)
{
  return vmerge_vvm_u8m8_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_u16mf4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint16mf4_t 
test_vmerge_vvm_u16mf4_tu_vl32(vuint16mf4_t dest, vbool64_t mask, vuint16mf4_t op1, vuint16mf4_t op2)
{
  return vmerge_vvm_u16mf4_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_u16mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint16mf2_t 
test_vmerge_vvm_u16mf2_tu_vl32(vuint16mf2_t dest, vbool32_t mask, vuint16mf2_t op1, vuint16mf2_t op2)
{
  return vmerge_vvm_u16mf2_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_u16m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint16m1_t 
test_vmerge_vvm_u16m1_tu_vl32(vuint16m1_t dest, vbool16_t mask, vuint16m1_t op1, vuint16m1_t op2)
{
  return vmerge_vvm_u16m1_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_u16m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vuint16m2_t 
test_vmerge_vvm_u16m2_tu_vl32(vuint16m2_t dest, vbool8_t mask, vuint16m2_t op1, vuint16m2_t op2)
{
  return vmerge_vvm_u16m2_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_u16m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vuint16m4_t 
test_vmerge_vvm_u16m4_tu_vl32(vuint16m4_t dest, vbool4_t mask, vuint16m4_t op1, vuint16m4_t op2)
{
  return vmerge_vvm_u16m4_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_u16m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vuint16m8_t 
test_vmerge_vvm_u16m8_tu_vl32(vuint16m8_t dest, vbool2_t mask, vuint16m8_t op1, vuint16m8_t op2)
{
  return vmerge_vvm_u16m8_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_u32mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint32mf2_t 
test_vmerge_vvm_u32mf2_tu_vl32(vuint32mf2_t dest, vbool64_t mask, vuint32mf2_t op1, vuint32mf2_t op2)
{
  return vmerge_vvm_u32mf2_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_u32m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint32m1_t 
test_vmerge_vvm_u32m1_tu_vl32(vuint32m1_t dest, vbool32_t mask, vuint32m1_t op1, vuint32m1_t op2)
{
  return vmerge_vvm_u32m1_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_u32m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vuint32m2_t 
test_vmerge_vvm_u32m2_tu_vl32(vuint32m2_t dest, vbool16_t mask, vuint32m2_t op1, vuint32m2_t op2)
{
  return vmerge_vvm_u32m2_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_u32m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vuint32m4_t 
test_vmerge_vvm_u32m4_tu_vl32(vuint32m4_t dest, vbool8_t mask, vuint32m4_t op1, vuint32m4_t op2)
{
  return vmerge_vvm_u32m4_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_u32m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vuint32m8_t 
test_vmerge_vvm_u32m8_tu_vl32(vuint32m8_t dest, vbool4_t mask, vuint32m8_t op1, vuint32m8_t op2)
{
  return vmerge_vvm_u32m8_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_u64m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint64m1_t 
test_vmerge_vvm_u64m1_tu_vl32(vuint64m1_t dest, vbool64_t mask, vuint64m1_t op1, vuint64m1_t op2)
{
  return vmerge_vvm_u64m1_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_u64m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vuint64m2_t 
test_vmerge_vvm_u64m2_tu_vl32(vuint64m2_t dest, vbool32_t mask, vuint64m2_t op1, vuint64m2_t op2)
{
  return vmerge_vvm_u64m2_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_u64m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vuint64m4_t 
test_vmerge_vvm_u64m4_tu_vl32(vuint64m4_t dest, vbool16_t mask, vuint64m4_t op1, vuint64m4_t op2)
{
  return vmerge_vvm_u64m4_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_u64m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vuint64m8_t 
test_vmerge_vvm_u64m8_tu_vl32(vuint64m8_t dest, vbool8_t mask, vuint64m8_t op1, vuint64m8_t op2)
{
  return vmerge_vvm_u64m8_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vvm_u8mf8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint8mf8_t 
test_vmerge_vvm_u8mf8_vl32(vbool64_t mask, vuint8mf8_t op1, vuint8mf8_t op2)
{
  return vmerge_vvm_u8mf8(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_u8mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint8mf4_t 
test_vmerge_vvm_u8mf4_vl32(vbool32_t mask, vuint8mf4_t op1, vuint8mf4_t op2)
{
  return vmerge_vvm_u8mf4(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_u8mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint8mf2_t 
test_vmerge_vvm_u8mf2_vl32(vbool16_t mask, vuint8mf2_t op1, vuint8mf2_t op2)
{
  return vmerge_vvm_u8mf2(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_u8m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint8m1_t 
test_vmerge_vvm_u8m1_vl32(vbool8_t mask, vuint8m1_t op1, vuint8m1_t op2)
{
  return vmerge_vvm_u8m1(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_u8m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vuint8m2_t 
test_vmerge_vvm_u8m2_vl32(vbool4_t mask, vuint8m2_t op1, vuint8m2_t op2)
{
  return vmerge_vvm_u8m2(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_u8m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vuint8m4_t 
test_vmerge_vvm_u8m4_vl32(vbool2_t mask, vuint8m4_t op1, vuint8m4_t op2)
{
  return vmerge_vvm_u8m4(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_u8m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vuint8m8_t 
test_vmerge_vvm_u8m8_vl32(vbool1_t mask, vuint8m8_t op1, vuint8m8_t op2)
{
  return vmerge_vvm_u8m8(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_u16mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint16mf4_t 
test_vmerge_vvm_u16mf4_vl32(vbool64_t mask, vuint16mf4_t op1, vuint16mf4_t op2)
{
  return vmerge_vvm_u16mf4(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_u16mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint16mf2_t 
test_vmerge_vvm_u16mf2_vl32(vbool32_t mask, vuint16mf2_t op1, vuint16mf2_t op2)
{
  return vmerge_vvm_u16mf2(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_u16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint16m1_t 
test_vmerge_vvm_u16m1_vl32(vbool16_t mask, vuint16m1_t op1, vuint16m1_t op2)
{
  return vmerge_vvm_u16m1(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_u16m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vuint16m2_t 
test_vmerge_vvm_u16m2_vl32(vbool8_t mask, vuint16m2_t op1, vuint16m2_t op2)
{
  return vmerge_vvm_u16m2(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_u16m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vuint16m4_t 
test_vmerge_vvm_u16m4_vl32(vbool4_t mask, vuint16m4_t op1, vuint16m4_t op2)
{
  return vmerge_vvm_u16m4(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_u16m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vuint16m8_t 
test_vmerge_vvm_u16m8_vl32(vbool2_t mask, vuint16m8_t op1, vuint16m8_t op2)
{
  return vmerge_vvm_u16m8(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_u32mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint32mf2_t 
test_vmerge_vvm_u32mf2_vl32(vbool64_t mask, vuint32mf2_t op1, vuint32mf2_t op2)
{
  return vmerge_vvm_u32mf2(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_u32m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint32m1_t 
test_vmerge_vvm_u32m1_vl32(vbool32_t mask, vuint32m1_t op1, vuint32m1_t op2)
{
  return vmerge_vvm_u32m1(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_u32m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vuint32m2_t 
test_vmerge_vvm_u32m2_vl32(vbool16_t mask, vuint32m2_t op1, vuint32m2_t op2)
{
  return vmerge_vvm_u32m2(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_u32m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vuint32m4_t 
test_vmerge_vvm_u32m4_vl32(vbool8_t mask, vuint32m4_t op1, vuint32m4_t op2)
{
  return vmerge_vvm_u32m4(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_u32m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vuint32m8_t 
test_vmerge_vvm_u32m8_vl32(vbool4_t mask, vuint32m8_t op1, vuint32m8_t op2)
{
  return vmerge_vvm_u32m8(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_u64m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vuint64m1_t 
test_vmerge_vvm_u64m1_vl32(vbool64_t mask, vuint64m1_t op1, vuint64m1_t op2)
{
  return vmerge_vvm_u64m1(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_u64m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vuint64m2_t 
test_vmerge_vvm_u64m2_vl32(vbool32_t mask, vuint64m2_t op1, vuint64m2_t op2)
{
  return vmerge_vvm_u64m2(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_u64m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vuint64m4_t 
test_vmerge_vvm_u64m4_vl32(vbool16_t mask, vuint64m4_t op1, vuint64m4_t op2)
{
  return vmerge_vvm_u64m4(mask, op1, op2, 32);
}

/*
** test_vmerge_vvm_u64m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vuint64m8_t 
test_vmerge_vvm_u64m8_vl32(vbool8_t mask, vuint64m8_t op1, vuint64m8_t op2)
{
  return vmerge_vvm_u64m8(mask, op1, op2, 32);
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
vint8mf8_t 
test_vmerge_vxm_i8mf8(vbool64_t mask, vint8mf8_t op1, int8_t op2, size_t vl)
{
  return vmerge_vxm_i8mf8(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_i8mf8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint8mf8_t 
test_vmerge_vxm_i8mf8_vl31(vbool64_t mask, vint8mf8_t op1, int8_t op2)
{
  return vmerge_vxm_i8mf8(mask, op1, op2, 31);
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
vint8mf4_t 
test_vmerge_vxm_i8mf4(vbool32_t mask, vint8mf4_t op1, int8_t op2, size_t vl)
{
  return vmerge_vxm_i8mf4(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_i8mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint8mf4_t 
test_vmerge_vxm_i8mf4_vl31(vbool32_t mask, vint8mf4_t op1, int8_t op2)
{
  return vmerge_vxm_i8mf4(mask, op1, op2, 31);
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
vint8mf2_t 
test_vmerge_vxm_i8mf2(vbool16_t mask, vint8mf2_t op1, int8_t op2, size_t vl)
{
  return vmerge_vxm_i8mf2(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_i8mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint8mf2_t 
test_vmerge_vxm_i8mf2_vl31(vbool16_t mask, vint8mf2_t op1, int8_t op2)
{
  return vmerge_vxm_i8mf2(mask, op1, op2, 31);
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
vint8m1_t 
test_vmerge_vxm_i8m1(vbool8_t mask, vint8m1_t op1, int8_t op2, size_t vl)
{
  return vmerge_vxm_i8m1(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_i8m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint8m1_t 
test_vmerge_vxm_i8m1_vl31(vbool8_t mask, vint8m1_t op1, int8_t op2)
{
  return vmerge_vxm_i8m1(mask, op1, op2, 31);
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
vint8m2_t 
test_vmerge_vxm_i8m2(vbool4_t mask, vint8m2_t op1, int8_t op2, size_t vl)
{
  return vmerge_vxm_i8m2(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_i8m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint8m2_t 
test_vmerge_vxm_i8m2_vl31(vbool4_t mask, vint8m2_t op1, int8_t op2)
{
  return vmerge_vxm_i8m2(mask, op1, op2, 31);
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
vint8m4_t 
test_vmerge_vxm_i8m4(vbool2_t mask, vint8m4_t op1, int8_t op2, size_t vl)
{
  return vmerge_vxm_i8m4(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_i8m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint8m4_t 
test_vmerge_vxm_i8m4_vl31(vbool2_t mask, vint8m4_t op1, int8_t op2)
{
  return vmerge_vxm_i8m4(mask, op1, op2, 31);
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
vint8m8_t 
test_vmerge_vxm_i8m8(vbool1_t mask, vint8m8_t op1, int8_t op2, size_t vl)
{
  return vmerge_vxm_i8m8(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_i8m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint8m8_t 
test_vmerge_vxm_i8m8_vl31(vbool1_t mask, vint8m8_t op1, int8_t op2)
{
  return vmerge_vxm_i8m8(mask, op1, op2, 31);
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
vint16mf4_t 
test_vmerge_vxm_i16mf4(vbool64_t mask, vint16mf4_t op1, int16_t op2, size_t vl)
{
  return vmerge_vxm_i16mf4(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_i16mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint16mf4_t 
test_vmerge_vxm_i16mf4_vl31(vbool64_t mask, vint16mf4_t op1, int16_t op2)
{
  return vmerge_vxm_i16mf4(mask, op1, op2, 31);
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
vint16mf2_t 
test_vmerge_vxm_i16mf2(vbool32_t mask, vint16mf2_t op1, int16_t op2, size_t vl)
{
  return vmerge_vxm_i16mf2(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_i16mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint16mf2_t 
test_vmerge_vxm_i16mf2_vl31(vbool32_t mask, vint16mf2_t op1, int16_t op2)
{
  return vmerge_vxm_i16mf2(mask, op1, op2, 31);
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
vint16m1_t 
test_vmerge_vxm_i16m1(vbool16_t mask, vint16m1_t op1, int16_t op2, size_t vl)
{
  return vmerge_vxm_i16m1(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_i16m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint16m1_t 
test_vmerge_vxm_i16m1_vl31(vbool16_t mask, vint16m1_t op1, int16_t op2)
{
  return vmerge_vxm_i16m1(mask, op1, op2, 31);
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
vint16m2_t 
test_vmerge_vxm_i16m2(vbool8_t mask, vint16m2_t op1, int16_t op2, size_t vl)
{
  return vmerge_vxm_i16m2(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_i16m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint16m2_t 
test_vmerge_vxm_i16m2_vl31(vbool8_t mask, vint16m2_t op1, int16_t op2)
{
  return vmerge_vxm_i16m2(mask, op1, op2, 31);
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
vint16m4_t 
test_vmerge_vxm_i16m4(vbool4_t mask, vint16m4_t op1, int16_t op2, size_t vl)
{
  return vmerge_vxm_i16m4(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_i16m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint16m4_t 
test_vmerge_vxm_i16m4_vl31(vbool4_t mask, vint16m4_t op1, int16_t op2)
{
  return vmerge_vxm_i16m4(mask, op1, op2, 31);
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
vint16m8_t 
test_vmerge_vxm_i16m8(vbool2_t mask, vint16m8_t op1, int16_t op2, size_t vl)
{
  return vmerge_vxm_i16m8(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_i16m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint16m8_t 
test_vmerge_vxm_i16m8_vl31(vbool2_t mask, vint16m8_t op1, int16_t op2)
{
  return vmerge_vxm_i16m8(mask, op1, op2, 31);
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
vint32mf2_t 
test_vmerge_vxm_i32mf2(vbool64_t mask, vint32mf2_t op1, int32_t op2, size_t vl)
{
  return vmerge_vxm_i32mf2(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_i32mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint32mf2_t 
test_vmerge_vxm_i32mf2_vl31(vbool64_t mask, vint32mf2_t op1, int32_t op2)
{
  return vmerge_vxm_i32mf2(mask, op1, op2, 31);
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
vint32m1_t 
test_vmerge_vxm_i32m1(vbool32_t mask, vint32m1_t op1, int32_t op2, size_t vl)
{
  return vmerge_vxm_i32m1(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_i32m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint32m1_t 
test_vmerge_vxm_i32m1_vl31(vbool32_t mask, vint32m1_t op1, int32_t op2)
{
  return vmerge_vxm_i32m1(mask, op1, op2, 31);
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
vint32m2_t 
test_vmerge_vxm_i32m2(vbool16_t mask, vint32m2_t op1, int32_t op2, size_t vl)
{
  return vmerge_vxm_i32m2(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_i32m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint32m2_t 
test_vmerge_vxm_i32m2_vl31(vbool16_t mask, vint32m2_t op1, int32_t op2)
{
  return vmerge_vxm_i32m2(mask, op1, op2, 31);
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
vint32m4_t 
test_vmerge_vxm_i32m4(vbool8_t mask, vint32m4_t op1, int32_t op2, size_t vl)
{
  return vmerge_vxm_i32m4(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_i32m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint32m4_t 
test_vmerge_vxm_i32m4_vl31(vbool8_t mask, vint32m4_t op1, int32_t op2)
{
  return vmerge_vxm_i32m4(mask, op1, op2, 31);
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
vint32m8_t 
test_vmerge_vxm_i32m8(vbool4_t mask, vint32m8_t op1, int32_t op2, size_t vl)
{
  return vmerge_vxm_i32m8(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_i32m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint32m8_t 
test_vmerge_vxm_i32m8_vl31(vbool4_t mask, vint32m8_t op1, int32_t op2)
{
  return vmerge_vxm_i32m8(mask, op1, op2, 31);
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
vint64m1_t 
test_vmerge_vxm_i64m1(vbool64_t mask, vint64m1_t op1, int64_t op2, size_t vl)
{
  return vmerge_vxm_i64m1(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_i64m1_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint64m1_t 
test_vmerge_vxm_i64m1_vl31(vbool64_t mask, vint64m1_t op1, int64_t op2)
{
  return vmerge_vxm_i64m1(mask, op1, op2, 31);
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
vint64m2_t 
test_vmerge_vxm_i64m2(vbool32_t mask, vint64m2_t op1, int64_t op2, size_t vl)
{
  return vmerge_vxm_i64m2(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_i64m2_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint64m2_t 
test_vmerge_vxm_i64m2_vl31(vbool32_t mask, vint64m2_t op1, int64_t op2)
{
  return vmerge_vxm_i64m2(mask, op1, op2, 31);
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
vint64m4_t 
test_vmerge_vxm_i64m4(vbool16_t mask, vint64m4_t op1, int64_t op2, size_t vl)
{
  return vmerge_vxm_i64m4(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_i64m4_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint64m4_t 
test_vmerge_vxm_i64m4_vl31(vbool16_t mask, vint64m4_t op1, int64_t op2)
{
  return vmerge_vxm_i64m4(mask, op1, op2, 31);
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
vint64m8_t 
test_vmerge_vxm_i64m8(vbool8_t mask, vint64m8_t op1, int64_t op2, size_t vl)
{
  return vmerge_vxm_i64m8(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_i64m8_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint64m8_t 
test_vmerge_vxm_i64m8_vl31(vbool8_t mask, vint64m8_t op1, int64_t op2)
{
  return vmerge_vxm_i64m8(mask, op1, op2, 31);
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
vint8mf8_t 
test_vmerge_vxm_i8mf8_ta(vbool64_t mask, vint8mf8_t op1, int8_t op2, size_t vl)
{
  return vmerge_vxm_i8mf8_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_i8mf8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint8mf8_t 
test_vmerge_vxm_i8mf8_ta_vl31(vbool64_t mask, vint8mf8_t op1, int8_t op2)
{
  return vmerge_vxm_i8mf8_ta(mask, op1, op2, 31);
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
vint8mf4_t 
test_vmerge_vxm_i8mf4_ta(vbool32_t mask, vint8mf4_t op1, int8_t op2, size_t vl)
{
  return vmerge_vxm_i8mf4_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_i8mf4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint8mf4_t 
test_vmerge_vxm_i8mf4_ta_vl31(vbool32_t mask, vint8mf4_t op1, int8_t op2)
{
  return vmerge_vxm_i8mf4_ta(mask, op1, op2, 31);
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
vint8mf2_t 
test_vmerge_vxm_i8mf2_ta(vbool16_t mask, vint8mf2_t op1, int8_t op2, size_t vl)
{
  return vmerge_vxm_i8mf2_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_i8mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint8mf2_t 
test_vmerge_vxm_i8mf2_ta_vl31(vbool16_t mask, vint8mf2_t op1, int8_t op2)
{
  return vmerge_vxm_i8mf2_ta(mask, op1, op2, 31);
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
vint8m1_t 
test_vmerge_vxm_i8m1_ta(vbool8_t mask, vint8m1_t op1, int8_t op2, size_t vl)
{
  return vmerge_vxm_i8m1_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_i8m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint8m1_t 
test_vmerge_vxm_i8m1_ta_vl31(vbool8_t mask, vint8m1_t op1, int8_t op2)
{
  return vmerge_vxm_i8m1_ta(mask, op1, op2, 31);
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
vint8m2_t 
test_vmerge_vxm_i8m2_ta(vbool4_t mask, vint8m2_t op1, int8_t op2, size_t vl)
{
  return vmerge_vxm_i8m2_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_i8m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint8m2_t 
test_vmerge_vxm_i8m2_ta_vl31(vbool4_t mask, vint8m2_t op1, int8_t op2)
{
  return vmerge_vxm_i8m2_ta(mask, op1, op2, 31);
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
vint8m4_t 
test_vmerge_vxm_i8m4_ta(vbool2_t mask, vint8m4_t op1, int8_t op2, size_t vl)
{
  return vmerge_vxm_i8m4_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_i8m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint8m4_t 
test_vmerge_vxm_i8m4_ta_vl31(vbool2_t mask, vint8m4_t op1, int8_t op2)
{
  return vmerge_vxm_i8m4_ta(mask, op1, op2, 31);
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
vint8m8_t 
test_vmerge_vxm_i8m8_ta(vbool1_t mask, vint8m8_t op1, int8_t op2, size_t vl)
{
  return vmerge_vxm_i8m8_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_i8m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint8m8_t 
test_vmerge_vxm_i8m8_ta_vl31(vbool1_t mask, vint8m8_t op1, int8_t op2)
{
  return vmerge_vxm_i8m8_ta(mask, op1, op2, 31);
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
vint16mf4_t 
test_vmerge_vxm_i16mf4_ta(vbool64_t mask, vint16mf4_t op1, int16_t op2, size_t vl)
{
  return vmerge_vxm_i16mf4_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_i16mf4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint16mf4_t 
test_vmerge_vxm_i16mf4_ta_vl31(vbool64_t mask, vint16mf4_t op1, int16_t op2)
{
  return vmerge_vxm_i16mf4_ta(mask, op1, op2, 31);
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
vint16mf2_t 
test_vmerge_vxm_i16mf2_ta(vbool32_t mask, vint16mf2_t op1, int16_t op2, size_t vl)
{
  return vmerge_vxm_i16mf2_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_i16mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint16mf2_t 
test_vmerge_vxm_i16mf2_ta_vl31(vbool32_t mask, vint16mf2_t op1, int16_t op2)
{
  return vmerge_vxm_i16mf2_ta(mask, op1, op2, 31);
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
vint16m1_t 
test_vmerge_vxm_i16m1_ta(vbool16_t mask, vint16m1_t op1, int16_t op2, size_t vl)
{
  return vmerge_vxm_i16m1_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_i16m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint16m1_t 
test_vmerge_vxm_i16m1_ta_vl31(vbool16_t mask, vint16m1_t op1, int16_t op2)
{
  return vmerge_vxm_i16m1_ta(mask, op1, op2, 31);
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
vint16m2_t 
test_vmerge_vxm_i16m2_ta(vbool8_t mask, vint16m2_t op1, int16_t op2, size_t vl)
{
  return vmerge_vxm_i16m2_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_i16m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint16m2_t 
test_vmerge_vxm_i16m2_ta_vl31(vbool8_t mask, vint16m2_t op1, int16_t op2)
{
  return vmerge_vxm_i16m2_ta(mask, op1, op2, 31);
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
vint16m4_t 
test_vmerge_vxm_i16m4_ta(vbool4_t mask, vint16m4_t op1, int16_t op2, size_t vl)
{
  return vmerge_vxm_i16m4_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_i16m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint16m4_t 
test_vmerge_vxm_i16m4_ta_vl31(vbool4_t mask, vint16m4_t op1, int16_t op2)
{
  return vmerge_vxm_i16m4_ta(mask, op1, op2, 31);
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
vint16m8_t 
test_vmerge_vxm_i16m8_ta(vbool2_t mask, vint16m8_t op1, int16_t op2, size_t vl)
{
  return vmerge_vxm_i16m8_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_i16m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint16m8_t 
test_vmerge_vxm_i16m8_ta_vl31(vbool2_t mask, vint16m8_t op1, int16_t op2)
{
  return vmerge_vxm_i16m8_ta(mask, op1, op2, 31);
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
vint32mf2_t 
test_vmerge_vxm_i32mf2_ta(vbool64_t mask, vint32mf2_t op1, int32_t op2, size_t vl)
{
  return vmerge_vxm_i32mf2_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_i32mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint32mf2_t 
test_vmerge_vxm_i32mf2_ta_vl31(vbool64_t mask, vint32mf2_t op1, int32_t op2)
{
  return vmerge_vxm_i32mf2_ta(mask, op1, op2, 31);
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
vint32m1_t 
test_vmerge_vxm_i32m1_ta(vbool32_t mask, vint32m1_t op1, int32_t op2, size_t vl)
{
  return vmerge_vxm_i32m1_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_i32m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint32m1_t 
test_vmerge_vxm_i32m1_ta_vl31(vbool32_t mask, vint32m1_t op1, int32_t op2)
{
  return vmerge_vxm_i32m1_ta(mask, op1, op2, 31);
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
vint32m2_t 
test_vmerge_vxm_i32m2_ta(vbool16_t mask, vint32m2_t op1, int32_t op2, size_t vl)
{
  return vmerge_vxm_i32m2_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_i32m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint32m2_t 
test_vmerge_vxm_i32m2_ta_vl31(vbool16_t mask, vint32m2_t op1, int32_t op2)
{
  return vmerge_vxm_i32m2_ta(mask, op1, op2, 31);
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
vint32m4_t 
test_vmerge_vxm_i32m4_ta(vbool8_t mask, vint32m4_t op1, int32_t op2, size_t vl)
{
  return vmerge_vxm_i32m4_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_i32m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint32m4_t 
test_vmerge_vxm_i32m4_ta_vl31(vbool8_t mask, vint32m4_t op1, int32_t op2)
{
  return vmerge_vxm_i32m4_ta(mask, op1, op2, 31);
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
vint32m8_t 
test_vmerge_vxm_i32m8_ta(vbool4_t mask, vint32m8_t op1, int32_t op2, size_t vl)
{
  return vmerge_vxm_i32m8_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_i32m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint32m8_t 
test_vmerge_vxm_i32m8_ta_vl31(vbool4_t mask, vint32m8_t op1, int32_t op2)
{
  return vmerge_vxm_i32m8_ta(mask, op1, op2, 31);
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
vint64m1_t 
test_vmerge_vxm_i64m1_ta(vbool64_t mask, vint64m1_t op1, int64_t op2, size_t vl)
{
  return vmerge_vxm_i64m1_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_i64m1_ta_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint64m1_t 
test_vmerge_vxm_i64m1_ta_vl31(vbool64_t mask, vint64m1_t op1, int64_t op2)
{
  return vmerge_vxm_i64m1_ta(mask, op1, op2, 31);
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
vint64m2_t 
test_vmerge_vxm_i64m2_ta(vbool32_t mask, vint64m2_t op1, int64_t op2, size_t vl)
{
  return vmerge_vxm_i64m2_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_i64m2_ta_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint64m2_t 
test_vmerge_vxm_i64m2_ta_vl31(vbool32_t mask, vint64m2_t op1, int64_t op2)
{
  return vmerge_vxm_i64m2_ta(mask, op1, op2, 31);
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
vint64m4_t 
test_vmerge_vxm_i64m4_ta(vbool16_t mask, vint64m4_t op1, int64_t op2, size_t vl)
{
  return vmerge_vxm_i64m4_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_i64m4_ta_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint64m4_t 
test_vmerge_vxm_i64m4_ta_vl31(vbool16_t mask, vint64m4_t op1, int64_t op2)
{
  return vmerge_vxm_i64m4_ta(mask, op1, op2, 31);
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
vint64m8_t 
test_vmerge_vxm_i64m8_ta(vbool8_t mask, vint64m8_t op1, int64_t op2, size_t vl)
{
  return vmerge_vxm_i64m8_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_i64m8_ta_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint64m8_t 
test_vmerge_vxm_i64m8_ta_vl31(vbool8_t mask, vint64m8_t op1, int64_t op2)
{
  return vmerge_vxm_i64m8_ta(mask, op1, op2, 31);
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
vint8mf8_t 
test_vmerge_vxm_i8mf8_tu(vint8mf8_t dest, vbool64_t mask, vint8mf8_t op1, int8_t op2, size_t vl)
{
  return vmerge_vxm_i8mf8_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vxm_i8mf8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint8mf8_t 
test_vmerge_vxm_i8mf8_tu_vl31(vint8mf8_t dest, vbool64_t mask, vint8mf8_t op1, int8_t op2)
{
  return vmerge_vxm_i8mf8_tu(mask, dest, op1, op2, 31);
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
vint8mf4_t 
test_vmerge_vxm_i8mf4_tu(vint8mf4_t dest, vbool32_t mask, vint8mf4_t op1, int8_t op2, size_t vl)
{
  return vmerge_vxm_i8mf4_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vxm_i8mf4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint8mf4_t 
test_vmerge_vxm_i8mf4_tu_vl31(vint8mf4_t dest, vbool32_t mask, vint8mf4_t op1, int8_t op2)
{
  return vmerge_vxm_i8mf4_tu(mask, dest, op1, op2, 31);
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
vint8mf2_t 
test_vmerge_vxm_i8mf2_tu(vint8mf2_t dest, vbool16_t mask, vint8mf2_t op1, int8_t op2, size_t vl)
{
  return vmerge_vxm_i8mf2_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vxm_i8mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint8mf2_t 
test_vmerge_vxm_i8mf2_tu_vl31(vint8mf2_t dest, vbool16_t mask, vint8mf2_t op1, int8_t op2)
{
  return vmerge_vxm_i8mf2_tu(mask, dest, op1, op2, 31);
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
vint8m1_t 
test_vmerge_vxm_i8m1_tu(vint8m1_t dest, vbool8_t mask, vint8m1_t op1, int8_t op2, size_t vl)
{
  return vmerge_vxm_i8m1_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vxm_i8m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint8m1_t 
test_vmerge_vxm_i8m1_tu_vl31(vint8m1_t dest, vbool8_t mask, vint8m1_t op1, int8_t op2)
{
  return vmerge_vxm_i8m1_tu(mask, dest, op1, op2, 31);
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
vint8m2_t 
test_vmerge_vxm_i8m2_tu(vint8m2_t dest, vbool4_t mask, vint8m2_t op1, int8_t op2, size_t vl)
{
  return vmerge_vxm_i8m2_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vxm_i8m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint8m2_t 
test_vmerge_vxm_i8m2_tu_vl31(vint8m2_t dest, vbool4_t mask, vint8m2_t op1, int8_t op2)
{
  return vmerge_vxm_i8m2_tu(mask, dest, op1, op2, 31);
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
vint8m4_t 
test_vmerge_vxm_i8m4_tu(vint8m4_t dest, vbool2_t mask, vint8m4_t op1, int8_t op2, size_t vl)
{
  return vmerge_vxm_i8m4_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vxm_i8m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint8m4_t 
test_vmerge_vxm_i8m4_tu_vl31(vint8m4_t dest, vbool2_t mask, vint8m4_t op1, int8_t op2)
{
  return vmerge_vxm_i8m4_tu(mask, dest, op1, op2, 31);
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
vint8m8_t 
test_vmerge_vxm_i8m8_tu(vint8m8_t dest, vbool1_t mask, vint8m8_t op1, int8_t op2, size_t vl)
{
  return vmerge_vxm_i8m8_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vxm_i8m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint8m8_t 
test_vmerge_vxm_i8m8_tu_vl31(vint8m8_t dest, vbool1_t mask, vint8m8_t op1, int8_t op2)
{
  return vmerge_vxm_i8m8_tu(mask, dest, op1, op2, 31);
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
vint16mf4_t 
test_vmerge_vxm_i16mf4_tu(vint16mf4_t dest, vbool64_t mask, vint16mf4_t op1, int16_t op2, size_t vl)
{
  return vmerge_vxm_i16mf4_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vxm_i16mf4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint16mf4_t 
test_vmerge_vxm_i16mf4_tu_vl31(vint16mf4_t dest, vbool64_t mask, vint16mf4_t op1, int16_t op2)
{
  return vmerge_vxm_i16mf4_tu(mask, dest, op1, op2, 31);
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
vint16mf2_t 
test_vmerge_vxm_i16mf2_tu(vint16mf2_t dest, vbool32_t mask, vint16mf2_t op1, int16_t op2, size_t vl)
{
  return vmerge_vxm_i16mf2_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vxm_i16mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint16mf2_t 
test_vmerge_vxm_i16mf2_tu_vl31(vint16mf2_t dest, vbool32_t mask, vint16mf2_t op1, int16_t op2)
{
  return vmerge_vxm_i16mf2_tu(mask, dest, op1, op2, 31);
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
vint16m1_t 
test_vmerge_vxm_i16m1_tu(vint16m1_t dest, vbool16_t mask, vint16m1_t op1, int16_t op2, size_t vl)
{
  return vmerge_vxm_i16m1_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vxm_i16m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint16m1_t 
test_vmerge_vxm_i16m1_tu_vl31(vint16m1_t dest, vbool16_t mask, vint16m1_t op1, int16_t op2)
{
  return vmerge_vxm_i16m1_tu(mask, dest, op1, op2, 31);
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
vint16m2_t 
test_vmerge_vxm_i16m2_tu(vint16m2_t dest, vbool8_t mask, vint16m2_t op1, int16_t op2, size_t vl)
{
  return vmerge_vxm_i16m2_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vxm_i16m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint16m2_t 
test_vmerge_vxm_i16m2_tu_vl31(vint16m2_t dest, vbool8_t mask, vint16m2_t op1, int16_t op2)
{
  return vmerge_vxm_i16m2_tu(mask, dest, op1, op2, 31);
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
vint16m4_t 
test_vmerge_vxm_i16m4_tu(vint16m4_t dest, vbool4_t mask, vint16m4_t op1, int16_t op2, size_t vl)
{
  return vmerge_vxm_i16m4_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vxm_i16m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint16m4_t 
test_vmerge_vxm_i16m4_tu_vl31(vint16m4_t dest, vbool4_t mask, vint16m4_t op1, int16_t op2)
{
  return vmerge_vxm_i16m4_tu(mask, dest, op1, op2, 31);
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
vint16m8_t 
test_vmerge_vxm_i16m8_tu(vint16m8_t dest, vbool2_t mask, vint16m8_t op1, int16_t op2, size_t vl)
{
  return vmerge_vxm_i16m8_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vxm_i16m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint16m8_t 
test_vmerge_vxm_i16m8_tu_vl31(vint16m8_t dest, vbool2_t mask, vint16m8_t op1, int16_t op2)
{
  return vmerge_vxm_i16m8_tu(mask, dest, op1, op2, 31);
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
vint32mf2_t 
test_vmerge_vxm_i32mf2_tu(vint32mf2_t dest, vbool64_t mask, vint32mf2_t op1, int32_t op2, size_t vl)
{
  return vmerge_vxm_i32mf2_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vxm_i32mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint32mf2_t 
test_vmerge_vxm_i32mf2_tu_vl31(vint32mf2_t dest, vbool64_t mask, vint32mf2_t op1, int32_t op2)
{
  return vmerge_vxm_i32mf2_tu(mask, dest, op1, op2, 31);
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
vint32m1_t 
test_vmerge_vxm_i32m1_tu(vint32m1_t dest, vbool32_t mask, vint32m1_t op1, int32_t op2, size_t vl)
{
  return vmerge_vxm_i32m1_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vxm_i32m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint32m1_t 
test_vmerge_vxm_i32m1_tu_vl31(vint32m1_t dest, vbool32_t mask, vint32m1_t op1, int32_t op2)
{
  return vmerge_vxm_i32m1_tu(mask, dest, op1, op2, 31);
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
vint32m2_t 
test_vmerge_vxm_i32m2_tu(vint32m2_t dest, vbool16_t mask, vint32m2_t op1, int32_t op2, size_t vl)
{
  return vmerge_vxm_i32m2_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vxm_i32m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint32m2_t 
test_vmerge_vxm_i32m2_tu_vl31(vint32m2_t dest, vbool16_t mask, vint32m2_t op1, int32_t op2)
{
  return vmerge_vxm_i32m2_tu(mask, dest, op1, op2, 31);
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
vint32m4_t 
test_vmerge_vxm_i32m4_tu(vint32m4_t dest, vbool8_t mask, vint32m4_t op1, int32_t op2, size_t vl)
{
  return vmerge_vxm_i32m4_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vxm_i32m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint32m4_t 
test_vmerge_vxm_i32m4_tu_vl31(vint32m4_t dest, vbool8_t mask, vint32m4_t op1, int32_t op2)
{
  return vmerge_vxm_i32m4_tu(mask, dest, op1, op2, 31);
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
vint32m8_t 
test_vmerge_vxm_i32m8_tu(vint32m8_t dest, vbool4_t mask, vint32m8_t op1, int32_t op2, size_t vl)
{
  return vmerge_vxm_i32m8_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vxm_i32m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint32m8_t 
test_vmerge_vxm_i32m8_tu_vl31(vint32m8_t dest, vbool4_t mask, vint32m8_t op1, int32_t op2)
{
  return vmerge_vxm_i32m8_tu(mask, dest, op1, op2, 31);
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
vint64m1_t 
test_vmerge_vxm_i64m1_tu(vint64m1_t dest, vbool64_t mask, vint64m1_t op1, int64_t op2, size_t vl)
{
  return vmerge_vxm_i64m1_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vxm_i64m1_tu_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint64m1_t 
test_vmerge_vxm_i64m1_tu_vl31(vint64m1_t dest, vbool64_t mask, vint64m1_t op1, int64_t op2)
{
  return vmerge_vxm_i64m1_tu(mask, dest, op1, op2, 31);
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
vint64m2_t 
test_vmerge_vxm_i64m2_tu(vint64m2_t dest, vbool32_t mask, vint64m2_t op1, int64_t op2, size_t vl)
{
  return vmerge_vxm_i64m2_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vxm_i64m2_tu_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint64m2_t 
test_vmerge_vxm_i64m2_tu_vl31(vint64m2_t dest, vbool32_t mask, vint64m2_t op1, int64_t op2)
{
  return vmerge_vxm_i64m2_tu(mask, dest, op1, op2, 31);
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
vint64m4_t 
test_vmerge_vxm_i64m4_tu(vint64m4_t dest, vbool16_t mask, vint64m4_t op1, int64_t op2, size_t vl)
{
  return vmerge_vxm_i64m4_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vxm_i64m4_tu_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint64m4_t 
test_vmerge_vxm_i64m4_tu_vl31(vint64m4_t dest, vbool16_t mask, vint64m4_t op1, int64_t op2)
{
  return vmerge_vxm_i64m4_tu(mask, dest, op1, op2, 31);
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
vint64m8_t 
test_vmerge_vxm_i64m8_tu(vint64m8_t dest, vbool8_t mask, vint64m8_t op1, int64_t op2, size_t vl)
{
  return vmerge_vxm_i64m8_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vxm_i64m8_tu_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint64m8_t 
test_vmerge_vxm_i64m8_tu_vl31(vint64m8_t dest, vbool8_t mask, vint64m8_t op1, int64_t op2)
{
  return vmerge_vxm_i64m8_tu(mask, dest, op1, op2, 31);
}

/*
** test_vmerge_vxm_i8mf8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint8mf8_t 
test_vmerge_vxm_i8mf8_ta_vl32(vbool64_t mask, vint8mf8_t op1, int8_t op2)
{
  return vmerge_vxm_i8mf8_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_i8mf4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint8mf4_t 
test_vmerge_vxm_i8mf4_ta_vl32(vbool32_t mask, vint8mf4_t op1, int8_t op2)
{
  return vmerge_vxm_i8mf4_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_i8mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint8mf2_t 
test_vmerge_vxm_i8mf2_ta_vl32(vbool16_t mask, vint8mf2_t op1, int8_t op2)
{
  return vmerge_vxm_i8mf2_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_i8m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint8m1_t 
test_vmerge_vxm_i8m1_ta_vl32(vbool8_t mask, vint8m1_t op1, int8_t op2)
{
  return vmerge_vxm_i8m1_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_i8m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint8m2_t 
test_vmerge_vxm_i8m2_ta_vl32(vbool4_t mask, vint8m2_t op1, int8_t op2)
{
  return vmerge_vxm_i8m2_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_i8m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint8m4_t 
test_vmerge_vxm_i8m4_ta_vl32(vbool2_t mask, vint8m4_t op1, int8_t op2)
{
  return vmerge_vxm_i8m4_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_i8m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint8m8_t 
test_vmerge_vxm_i8m8_ta_vl32(vbool1_t mask, vint8m8_t op1, int8_t op2)
{
  return vmerge_vxm_i8m8_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_i16mf4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint16mf4_t 
test_vmerge_vxm_i16mf4_ta_vl32(vbool64_t mask, vint16mf4_t op1, int16_t op2)
{
  return vmerge_vxm_i16mf4_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_i16mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint16mf2_t 
test_vmerge_vxm_i16mf2_ta_vl32(vbool32_t mask, vint16mf2_t op1, int16_t op2)
{
  return vmerge_vxm_i16mf2_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_i16m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint16m1_t 
test_vmerge_vxm_i16m1_ta_vl32(vbool16_t mask, vint16m1_t op1, int16_t op2)
{
  return vmerge_vxm_i16m1_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_i16m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint16m2_t 
test_vmerge_vxm_i16m2_ta_vl32(vbool8_t mask, vint16m2_t op1, int16_t op2)
{
  return vmerge_vxm_i16m2_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_i16m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint16m4_t 
test_vmerge_vxm_i16m4_ta_vl32(vbool4_t mask, vint16m4_t op1, int16_t op2)
{
  return vmerge_vxm_i16m4_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_i16m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint16m8_t 
test_vmerge_vxm_i16m8_ta_vl32(vbool2_t mask, vint16m8_t op1, int16_t op2)
{
  return vmerge_vxm_i16m8_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_i32mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint32mf2_t 
test_vmerge_vxm_i32mf2_ta_vl32(vbool64_t mask, vint32mf2_t op1, int32_t op2)
{
  return vmerge_vxm_i32mf2_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_i32m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint32m1_t 
test_vmerge_vxm_i32m1_ta_vl32(vbool32_t mask, vint32m1_t op1, int32_t op2)
{
  return vmerge_vxm_i32m1_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_i32m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint32m2_t 
test_vmerge_vxm_i32m2_ta_vl32(vbool16_t mask, vint32m2_t op1, int32_t op2)
{
  return vmerge_vxm_i32m2_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_i32m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint32m4_t 
test_vmerge_vxm_i32m4_ta_vl32(vbool8_t mask, vint32m4_t op1, int32_t op2)
{
  return vmerge_vxm_i32m4_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_i32m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint32m8_t 
test_vmerge_vxm_i32m8_ta_vl32(vbool4_t mask, vint32m8_t op1, int32_t op2)
{
  return vmerge_vxm_i32m8_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_i64m1_ta_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint64m1_t 
test_vmerge_vxm_i64m1_ta_vl32(vbool64_t mask, vint64m1_t op1, int64_t op2)
{
  return vmerge_vxm_i64m1_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_i64m2_ta_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint64m2_t 
test_vmerge_vxm_i64m2_ta_vl32(vbool32_t mask, vint64m2_t op1, int64_t op2)
{
  return vmerge_vxm_i64m2_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_i64m4_ta_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint64m4_t 
test_vmerge_vxm_i64m4_ta_vl32(vbool16_t mask, vint64m4_t op1, int64_t op2)
{
  return vmerge_vxm_i64m4_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_i64m8_ta_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint64m8_t 
test_vmerge_vxm_i64m8_ta_vl32(vbool8_t mask, vint64m8_t op1, int64_t op2)
{
  return vmerge_vxm_i64m8_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_i8mf8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint8mf8_t 
test_vmerge_vxm_i8mf8_tu_vl32(vint8mf8_t dest, vbool64_t mask, vint8mf8_t op1, int8_t op2)
{
  return vmerge_vxm_i8mf8_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vxm_i8mf4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint8mf4_t 
test_vmerge_vxm_i8mf4_tu_vl32(vint8mf4_t dest, vbool32_t mask, vint8mf4_t op1, int8_t op2)
{
  return vmerge_vxm_i8mf4_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vxm_i8mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint8mf2_t 
test_vmerge_vxm_i8mf2_tu_vl32(vint8mf2_t dest, vbool16_t mask, vint8mf2_t op1, int8_t op2)
{
  return vmerge_vxm_i8mf2_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vxm_i8m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint8m1_t 
test_vmerge_vxm_i8m1_tu_vl32(vint8m1_t dest, vbool8_t mask, vint8m1_t op1, int8_t op2)
{
  return vmerge_vxm_i8m1_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vxm_i8m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint8m2_t 
test_vmerge_vxm_i8m2_tu_vl32(vint8m2_t dest, vbool4_t mask, vint8m2_t op1, int8_t op2)
{
  return vmerge_vxm_i8m2_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vxm_i8m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint8m4_t 
test_vmerge_vxm_i8m4_tu_vl32(vint8m4_t dest, vbool2_t mask, vint8m4_t op1, int8_t op2)
{
  return vmerge_vxm_i8m4_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vxm_i8m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint8m8_t 
test_vmerge_vxm_i8m8_tu_vl32(vint8m8_t dest, vbool1_t mask, vint8m8_t op1, int8_t op2)
{
  return vmerge_vxm_i8m8_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vxm_i16mf4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint16mf4_t 
test_vmerge_vxm_i16mf4_tu_vl32(vint16mf4_t dest, vbool64_t mask, vint16mf4_t op1, int16_t op2)
{
  return vmerge_vxm_i16mf4_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vxm_i16mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint16mf2_t 
test_vmerge_vxm_i16mf2_tu_vl32(vint16mf2_t dest, vbool32_t mask, vint16mf2_t op1, int16_t op2)
{
  return vmerge_vxm_i16mf2_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vxm_i16m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint16m1_t 
test_vmerge_vxm_i16m1_tu_vl32(vint16m1_t dest, vbool16_t mask, vint16m1_t op1, int16_t op2)
{
  return vmerge_vxm_i16m1_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vxm_i16m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint16m2_t 
test_vmerge_vxm_i16m2_tu_vl32(vint16m2_t dest, vbool8_t mask, vint16m2_t op1, int16_t op2)
{
  return vmerge_vxm_i16m2_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vxm_i16m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint16m4_t 
test_vmerge_vxm_i16m4_tu_vl32(vint16m4_t dest, vbool4_t mask, vint16m4_t op1, int16_t op2)
{
  return vmerge_vxm_i16m4_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vxm_i16m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint16m8_t 
test_vmerge_vxm_i16m8_tu_vl32(vint16m8_t dest, vbool2_t mask, vint16m8_t op1, int16_t op2)
{
  return vmerge_vxm_i16m8_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vxm_i32mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint32mf2_t 
test_vmerge_vxm_i32mf2_tu_vl32(vint32mf2_t dest, vbool64_t mask, vint32mf2_t op1, int32_t op2)
{
  return vmerge_vxm_i32mf2_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vxm_i32m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint32m1_t 
test_vmerge_vxm_i32m1_tu_vl32(vint32m1_t dest, vbool32_t mask, vint32m1_t op1, int32_t op2)
{
  return vmerge_vxm_i32m1_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vxm_i32m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint32m2_t 
test_vmerge_vxm_i32m2_tu_vl32(vint32m2_t dest, vbool16_t mask, vint32m2_t op1, int32_t op2)
{
  return vmerge_vxm_i32m2_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vxm_i32m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint32m4_t 
test_vmerge_vxm_i32m4_tu_vl32(vint32m4_t dest, vbool8_t mask, vint32m4_t op1, int32_t op2)
{
  return vmerge_vxm_i32m4_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vxm_i32m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint32m8_t 
test_vmerge_vxm_i32m8_tu_vl32(vint32m8_t dest, vbool4_t mask, vint32m8_t op1, int32_t op2)
{
  return vmerge_vxm_i32m8_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vxm_i64m1_tu_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint64m1_t 
test_vmerge_vxm_i64m1_tu_vl32(vint64m1_t dest, vbool64_t mask, vint64m1_t op1, int64_t op2)
{
  return vmerge_vxm_i64m1_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vxm_i64m2_tu_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint64m2_t 
test_vmerge_vxm_i64m2_tu_vl32(vint64m2_t dest, vbool32_t mask, vint64m2_t op1, int64_t op2)
{
  return vmerge_vxm_i64m2_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vxm_i64m4_tu_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint64m4_t 
test_vmerge_vxm_i64m4_tu_vl32(vint64m4_t dest, vbool16_t mask, vint64m4_t op1, int64_t op2)
{
  return vmerge_vxm_i64m4_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vxm_i64m8_tu_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint64m8_t 
test_vmerge_vxm_i64m8_tu_vl32(vint64m8_t dest, vbool8_t mask, vint64m8_t op1, int64_t op2)
{
  return vmerge_vxm_i64m8_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vxm_i8mf8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint8mf8_t 
test_vmerge_vxm_i8mf8_vl32(vbool64_t mask, vint8mf8_t op1, int8_t op2)
{
  return vmerge_vxm_i8mf8(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_i8mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint8mf4_t 
test_vmerge_vxm_i8mf4_vl32(vbool32_t mask, vint8mf4_t op1, int8_t op2)
{
  return vmerge_vxm_i8mf4(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_i8mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint8mf2_t 
test_vmerge_vxm_i8mf2_vl32(vbool16_t mask, vint8mf2_t op1, int8_t op2)
{
  return vmerge_vxm_i8mf2(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_i8m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint8m1_t 
test_vmerge_vxm_i8m1_vl32(vbool8_t mask, vint8m1_t op1, int8_t op2)
{
  return vmerge_vxm_i8m1(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_i8m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint8m2_t 
test_vmerge_vxm_i8m2_vl32(vbool4_t mask, vint8m2_t op1, int8_t op2)
{
  return vmerge_vxm_i8m2(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_i8m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint8m4_t 
test_vmerge_vxm_i8m4_vl32(vbool2_t mask, vint8m4_t op1, int8_t op2)
{
  return vmerge_vxm_i8m4(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_i8m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint8m8_t 
test_vmerge_vxm_i8m8_vl32(vbool1_t mask, vint8m8_t op1, int8_t op2)
{
  return vmerge_vxm_i8m8(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_i16mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint16mf4_t 
test_vmerge_vxm_i16mf4_vl32(vbool64_t mask, vint16mf4_t op1, int16_t op2)
{
  return vmerge_vxm_i16mf4(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_i16mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint16mf2_t 
test_vmerge_vxm_i16mf2_vl32(vbool32_t mask, vint16mf2_t op1, int16_t op2)
{
  return vmerge_vxm_i16mf2(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_i16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint16m1_t 
test_vmerge_vxm_i16m1_vl32(vbool16_t mask, vint16m1_t op1, int16_t op2)
{
  return vmerge_vxm_i16m1(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_i16m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint16m2_t 
test_vmerge_vxm_i16m2_vl32(vbool8_t mask, vint16m2_t op1, int16_t op2)
{
  return vmerge_vxm_i16m2(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_i16m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint16m4_t 
test_vmerge_vxm_i16m4_vl32(vbool4_t mask, vint16m4_t op1, int16_t op2)
{
  return vmerge_vxm_i16m4(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_i16m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint16m8_t 
test_vmerge_vxm_i16m8_vl32(vbool2_t mask, vint16m8_t op1, int16_t op2)
{
  return vmerge_vxm_i16m8(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_i32mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint32mf2_t 
test_vmerge_vxm_i32mf2_vl32(vbool64_t mask, vint32mf2_t op1, int32_t op2)
{
  return vmerge_vxm_i32mf2(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_i32m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint32m1_t 
test_vmerge_vxm_i32m1_vl32(vbool32_t mask, vint32m1_t op1, int32_t op2)
{
  return vmerge_vxm_i32m1(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_i32m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint32m2_t 
test_vmerge_vxm_i32m2_vl32(vbool16_t mask, vint32m2_t op1, int32_t op2)
{
  return vmerge_vxm_i32m2(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_i32m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint32m4_t 
test_vmerge_vxm_i32m4_vl32(vbool8_t mask, vint32m4_t op1, int32_t op2)
{
  return vmerge_vxm_i32m4(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_i32m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint32m8_t 
test_vmerge_vxm_i32m8_vl32(vbool4_t mask, vint32m8_t op1, int32_t op2)
{
  return vmerge_vxm_i32m8(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_i64m1_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint64m1_t 
test_vmerge_vxm_i64m1_vl32(vbool64_t mask, vint64m1_t op1, int64_t op2)
{
  return vmerge_vxm_i64m1(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_i64m2_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint64m2_t 
test_vmerge_vxm_i64m2_vl32(vbool32_t mask, vint64m2_t op1, int64_t op2)
{
  return vmerge_vxm_i64m2(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_i64m4_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint64m4_t 
test_vmerge_vxm_i64m4_vl32(vbool16_t mask, vint64m4_t op1, int64_t op2)
{
  return vmerge_vxm_i64m4(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_i64m8_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vint64m8_t 
test_vmerge_vxm_i64m8_vl32(vbool8_t mask, vint64m8_t op1, int64_t op2)
{
  return vmerge_vxm_i64m8(mask, op1, op2, 32);
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
vuint8mf8_t 
test_vmerge_vxm_u8mf8(vbool64_t mask, vuint8mf8_t op1, uint8_t op2, size_t vl)
{
  return vmerge_vxm_u8mf8(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_u8mf8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint8mf8_t 
test_vmerge_vxm_u8mf8_vl31(vbool64_t mask, vuint8mf8_t op1, uint8_t op2)
{
  return vmerge_vxm_u8mf8(mask, op1, op2, 31);
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
vuint8mf4_t 
test_vmerge_vxm_u8mf4(vbool32_t mask, vuint8mf4_t op1, uint8_t op2, size_t vl)
{
  return vmerge_vxm_u8mf4(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_u8mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint8mf4_t 
test_vmerge_vxm_u8mf4_vl31(vbool32_t mask, vuint8mf4_t op1, uint8_t op2)
{
  return vmerge_vxm_u8mf4(mask, op1, op2, 31);
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
vuint8mf2_t 
test_vmerge_vxm_u8mf2(vbool16_t mask, vuint8mf2_t op1, uint8_t op2, size_t vl)
{
  return vmerge_vxm_u8mf2(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_u8mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint8mf2_t 
test_vmerge_vxm_u8mf2_vl31(vbool16_t mask, vuint8mf2_t op1, uint8_t op2)
{
  return vmerge_vxm_u8mf2(mask, op1, op2, 31);
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
vuint8m1_t 
test_vmerge_vxm_u8m1(vbool8_t mask, vuint8m1_t op1, uint8_t op2, size_t vl)
{
  return vmerge_vxm_u8m1(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_u8m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint8m1_t 
test_vmerge_vxm_u8m1_vl31(vbool8_t mask, vuint8m1_t op1, uint8_t op2)
{
  return vmerge_vxm_u8m1(mask, op1, op2, 31);
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
vuint8m2_t 
test_vmerge_vxm_u8m2(vbool4_t mask, vuint8m2_t op1, uint8_t op2, size_t vl)
{
  return vmerge_vxm_u8m2(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_u8m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint8m2_t 
test_vmerge_vxm_u8m2_vl31(vbool4_t mask, vuint8m2_t op1, uint8_t op2)
{
  return vmerge_vxm_u8m2(mask, op1, op2, 31);
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
vuint8m4_t 
test_vmerge_vxm_u8m4(vbool2_t mask, vuint8m4_t op1, uint8_t op2, size_t vl)
{
  return vmerge_vxm_u8m4(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_u8m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint8m4_t 
test_vmerge_vxm_u8m4_vl31(vbool2_t mask, vuint8m4_t op1, uint8_t op2)
{
  return vmerge_vxm_u8m4(mask, op1, op2, 31);
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
vuint8m8_t 
test_vmerge_vxm_u8m8(vbool1_t mask, vuint8m8_t op1, uint8_t op2, size_t vl)
{
  return vmerge_vxm_u8m8(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_u8m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint8m8_t 
test_vmerge_vxm_u8m8_vl31(vbool1_t mask, vuint8m8_t op1, uint8_t op2)
{
  return vmerge_vxm_u8m8(mask, op1, op2, 31);
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
vuint16mf4_t 
test_vmerge_vxm_u16mf4(vbool64_t mask, vuint16mf4_t op1, uint16_t op2, size_t vl)
{
  return vmerge_vxm_u16mf4(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_u16mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint16mf4_t 
test_vmerge_vxm_u16mf4_vl31(vbool64_t mask, vuint16mf4_t op1, uint16_t op2)
{
  return vmerge_vxm_u16mf4(mask, op1, op2, 31);
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
vuint16mf2_t 
test_vmerge_vxm_u16mf2(vbool32_t mask, vuint16mf2_t op1, uint16_t op2, size_t vl)
{
  return vmerge_vxm_u16mf2(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_u16mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint16mf2_t 
test_vmerge_vxm_u16mf2_vl31(vbool32_t mask, vuint16mf2_t op1, uint16_t op2)
{
  return vmerge_vxm_u16mf2(mask, op1, op2, 31);
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
vuint16m1_t 
test_vmerge_vxm_u16m1(vbool16_t mask, vuint16m1_t op1, uint16_t op2, size_t vl)
{
  return vmerge_vxm_u16m1(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_u16m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint16m1_t 
test_vmerge_vxm_u16m1_vl31(vbool16_t mask, vuint16m1_t op1, uint16_t op2)
{
  return vmerge_vxm_u16m1(mask, op1, op2, 31);
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
vuint16m2_t 
test_vmerge_vxm_u16m2(vbool8_t mask, vuint16m2_t op1, uint16_t op2, size_t vl)
{
  return vmerge_vxm_u16m2(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_u16m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint16m2_t 
test_vmerge_vxm_u16m2_vl31(vbool8_t mask, vuint16m2_t op1, uint16_t op2)
{
  return vmerge_vxm_u16m2(mask, op1, op2, 31);
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
vuint16m4_t 
test_vmerge_vxm_u16m4(vbool4_t mask, vuint16m4_t op1, uint16_t op2, size_t vl)
{
  return vmerge_vxm_u16m4(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_u16m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint16m4_t 
test_vmerge_vxm_u16m4_vl31(vbool4_t mask, vuint16m4_t op1, uint16_t op2)
{
  return vmerge_vxm_u16m4(mask, op1, op2, 31);
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
vuint16m8_t 
test_vmerge_vxm_u16m8(vbool2_t mask, vuint16m8_t op1, uint16_t op2, size_t vl)
{
  return vmerge_vxm_u16m8(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_u16m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint16m8_t 
test_vmerge_vxm_u16m8_vl31(vbool2_t mask, vuint16m8_t op1, uint16_t op2)
{
  return vmerge_vxm_u16m8(mask, op1, op2, 31);
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
vuint32mf2_t 
test_vmerge_vxm_u32mf2(vbool64_t mask, vuint32mf2_t op1, uint32_t op2, size_t vl)
{
  return vmerge_vxm_u32mf2(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_u32mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint32mf2_t 
test_vmerge_vxm_u32mf2_vl31(vbool64_t mask, vuint32mf2_t op1, uint32_t op2)
{
  return vmerge_vxm_u32mf2(mask, op1, op2, 31);
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
vuint32m1_t 
test_vmerge_vxm_u32m1(vbool32_t mask, vuint32m1_t op1, uint32_t op2, size_t vl)
{
  return vmerge_vxm_u32m1(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_u32m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint32m1_t 
test_vmerge_vxm_u32m1_vl31(vbool32_t mask, vuint32m1_t op1, uint32_t op2)
{
  return vmerge_vxm_u32m1(mask, op1, op2, 31);
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
vuint32m2_t 
test_vmerge_vxm_u32m2(vbool16_t mask, vuint32m2_t op1, uint32_t op2, size_t vl)
{
  return vmerge_vxm_u32m2(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_u32m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint32m2_t 
test_vmerge_vxm_u32m2_vl31(vbool16_t mask, vuint32m2_t op1, uint32_t op2)
{
  return vmerge_vxm_u32m2(mask, op1, op2, 31);
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
vuint32m4_t 
test_vmerge_vxm_u32m4(vbool8_t mask, vuint32m4_t op1, uint32_t op2, size_t vl)
{
  return vmerge_vxm_u32m4(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_u32m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint32m4_t 
test_vmerge_vxm_u32m4_vl31(vbool8_t mask, vuint32m4_t op1, uint32_t op2)
{
  return vmerge_vxm_u32m4(mask, op1, op2, 31);
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
vuint32m8_t 
test_vmerge_vxm_u32m8(vbool4_t mask, vuint32m8_t op1, uint32_t op2, size_t vl)
{
  return vmerge_vxm_u32m8(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_u32m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint32m8_t 
test_vmerge_vxm_u32m8_vl31(vbool4_t mask, vuint32m8_t op1, uint32_t op2)
{
  return vmerge_vxm_u32m8(mask, op1, op2, 31);
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
vuint64m1_t 
test_vmerge_vxm_u64m1(vbool64_t mask, vuint64m1_t op1, uint64_t op2, size_t vl)
{
  return vmerge_vxm_u64m1(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_u64m1_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint64m1_t 
test_vmerge_vxm_u64m1_vl31(vbool64_t mask, vuint64m1_t op1, uint64_t op2)
{
  return vmerge_vxm_u64m1(mask, op1, op2, 31);
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
vuint64m2_t 
test_vmerge_vxm_u64m2(vbool32_t mask, vuint64m2_t op1, uint64_t op2, size_t vl)
{
  return vmerge_vxm_u64m2(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_u64m2_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint64m2_t 
test_vmerge_vxm_u64m2_vl31(vbool32_t mask, vuint64m2_t op1, uint64_t op2)
{
  return vmerge_vxm_u64m2(mask, op1, op2, 31);
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
vuint64m4_t 
test_vmerge_vxm_u64m4(vbool16_t mask, vuint64m4_t op1, uint64_t op2, size_t vl)
{
  return vmerge_vxm_u64m4(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_u64m4_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint64m4_t 
test_vmerge_vxm_u64m4_vl31(vbool16_t mask, vuint64m4_t op1, uint64_t op2)
{
  return vmerge_vxm_u64m4(mask, op1, op2, 31);
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
vuint64m8_t 
test_vmerge_vxm_u64m8(vbool8_t mask, vuint64m8_t op1, uint64_t op2, size_t vl)
{
  return vmerge_vxm_u64m8(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_u64m8_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint64m8_t 
test_vmerge_vxm_u64m8_vl31(vbool8_t mask, vuint64m8_t op1, uint64_t op2)
{
  return vmerge_vxm_u64m8(mask, op1, op2, 31);
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
vuint8mf8_t 
test_vmerge_vxm_u8mf8_ta(vbool64_t mask, vuint8mf8_t op1, uint8_t op2, size_t vl)
{
  return vmerge_vxm_u8mf8_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_u8mf8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint8mf8_t 
test_vmerge_vxm_u8mf8_ta_vl31(vbool64_t mask, vuint8mf8_t op1, uint8_t op2)
{
  return vmerge_vxm_u8mf8_ta(mask, op1, op2, 31);
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
vuint8mf4_t 
test_vmerge_vxm_u8mf4_ta(vbool32_t mask, vuint8mf4_t op1, uint8_t op2, size_t vl)
{
  return vmerge_vxm_u8mf4_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_u8mf4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint8mf4_t 
test_vmerge_vxm_u8mf4_ta_vl31(vbool32_t mask, vuint8mf4_t op1, uint8_t op2)
{
  return vmerge_vxm_u8mf4_ta(mask, op1, op2, 31);
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
vuint8mf2_t 
test_vmerge_vxm_u8mf2_ta(vbool16_t mask, vuint8mf2_t op1, uint8_t op2, size_t vl)
{
  return vmerge_vxm_u8mf2_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_u8mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint8mf2_t 
test_vmerge_vxm_u8mf2_ta_vl31(vbool16_t mask, vuint8mf2_t op1, uint8_t op2)
{
  return vmerge_vxm_u8mf2_ta(mask, op1, op2, 31);
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
vuint8m1_t 
test_vmerge_vxm_u8m1_ta(vbool8_t mask, vuint8m1_t op1, uint8_t op2, size_t vl)
{
  return vmerge_vxm_u8m1_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_u8m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint8m1_t 
test_vmerge_vxm_u8m1_ta_vl31(vbool8_t mask, vuint8m1_t op1, uint8_t op2)
{
  return vmerge_vxm_u8m1_ta(mask, op1, op2, 31);
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
vuint8m2_t 
test_vmerge_vxm_u8m2_ta(vbool4_t mask, vuint8m2_t op1, uint8_t op2, size_t vl)
{
  return vmerge_vxm_u8m2_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_u8m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint8m2_t 
test_vmerge_vxm_u8m2_ta_vl31(vbool4_t mask, vuint8m2_t op1, uint8_t op2)
{
  return vmerge_vxm_u8m2_ta(mask, op1, op2, 31);
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
vuint8m4_t 
test_vmerge_vxm_u8m4_ta(vbool2_t mask, vuint8m4_t op1, uint8_t op2, size_t vl)
{
  return vmerge_vxm_u8m4_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_u8m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint8m4_t 
test_vmerge_vxm_u8m4_ta_vl31(vbool2_t mask, vuint8m4_t op1, uint8_t op2)
{
  return vmerge_vxm_u8m4_ta(mask, op1, op2, 31);
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
vuint8m8_t 
test_vmerge_vxm_u8m8_ta(vbool1_t mask, vuint8m8_t op1, uint8_t op2, size_t vl)
{
  return vmerge_vxm_u8m8_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_u8m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint8m8_t 
test_vmerge_vxm_u8m8_ta_vl31(vbool1_t mask, vuint8m8_t op1, uint8_t op2)
{
  return vmerge_vxm_u8m8_ta(mask, op1, op2, 31);
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
vuint16mf4_t 
test_vmerge_vxm_u16mf4_ta(vbool64_t mask, vuint16mf4_t op1, uint16_t op2, size_t vl)
{
  return vmerge_vxm_u16mf4_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_u16mf4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint16mf4_t 
test_vmerge_vxm_u16mf4_ta_vl31(vbool64_t mask, vuint16mf4_t op1, uint16_t op2)
{
  return vmerge_vxm_u16mf4_ta(mask, op1, op2, 31);
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
vuint16mf2_t 
test_vmerge_vxm_u16mf2_ta(vbool32_t mask, vuint16mf2_t op1, uint16_t op2, size_t vl)
{
  return vmerge_vxm_u16mf2_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_u16mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint16mf2_t 
test_vmerge_vxm_u16mf2_ta_vl31(vbool32_t mask, vuint16mf2_t op1, uint16_t op2)
{
  return vmerge_vxm_u16mf2_ta(mask, op1, op2, 31);
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
vuint16m1_t 
test_vmerge_vxm_u16m1_ta(vbool16_t mask, vuint16m1_t op1, uint16_t op2, size_t vl)
{
  return vmerge_vxm_u16m1_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_u16m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint16m1_t 
test_vmerge_vxm_u16m1_ta_vl31(vbool16_t mask, vuint16m1_t op1, uint16_t op2)
{
  return vmerge_vxm_u16m1_ta(mask, op1, op2, 31);
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
vuint16m2_t 
test_vmerge_vxm_u16m2_ta(vbool8_t mask, vuint16m2_t op1, uint16_t op2, size_t vl)
{
  return vmerge_vxm_u16m2_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_u16m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint16m2_t 
test_vmerge_vxm_u16m2_ta_vl31(vbool8_t mask, vuint16m2_t op1, uint16_t op2)
{
  return vmerge_vxm_u16m2_ta(mask, op1, op2, 31);
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
vuint16m4_t 
test_vmerge_vxm_u16m4_ta(vbool4_t mask, vuint16m4_t op1, uint16_t op2, size_t vl)
{
  return vmerge_vxm_u16m4_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_u16m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint16m4_t 
test_vmerge_vxm_u16m4_ta_vl31(vbool4_t mask, vuint16m4_t op1, uint16_t op2)
{
  return vmerge_vxm_u16m4_ta(mask, op1, op2, 31);
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
vuint16m8_t 
test_vmerge_vxm_u16m8_ta(vbool2_t mask, vuint16m8_t op1, uint16_t op2, size_t vl)
{
  return vmerge_vxm_u16m8_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_u16m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint16m8_t 
test_vmerge_vxm_u16m8_ta_vl31(vbool2_t mask, vuint16m8_t op1, uint16_t op2)
{
  return vmerge_vxm_u16m8_ta(mask, op1, op2, 31);
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
vuint32mf2_t 
test_vmerge_vxm_u32mf2_ta(vbool64_t mask, vuint32mf2_t op1, uint32_t op2, size_t vl)
{
  return vmerge_vxm_u32mf2_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_u32mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint32mf2_t 
test_vmerge_vxm_u32mf2_ta_vl31(vbool64_t mask, vuint32mf2_t op1, uint32_t op2)
{
  return vmerge_vxm_u32mf2_ta(mask, op1, op2, 31);
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
vuint32m1_t 
test_vmerge_vxm_u32m1_ta(vbool32_t mask, vuint32m1_t op1, uint32_t op2, size_t vl)
{
  return vmerge_vxm_u32m1_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_u32m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint32m1_t 
test_vmerge_vxm_u32m1_ta_vl31(vbool32_t mask, vuint32m1_t op1, uint32_t op2)
{
  return vmerge_vxm_u32m1_ta(mask, op1, op2, 31);
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
vuint32m2_t 
test_vmerge_vxm_u32m2_ta(vbool16_t mask, vuint32m2_t op1, uint32_t op2, size_t vl)
{
  return vmerge_vxm_u32m2_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_u32m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint32m2_t 
test_vmerge_vxm_u32m2_ta_vl31(vbool16_t mask, vuint32m2_t op1, uint32_t op2)
{
  return vmerge_vxm_u32m2_ta(mask, op1, op2, 31);
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
vuint32m4_t 
test_vmerge_vxm_u32m4_ta(vbool8_t mask, vuint32m4_t op1, uint32_t op2, size_t vl)
{
  return vmerge_vxm_u32m4_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_u32m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint32m4_t 
test_vmerge_vxm_u32m4_ta_vl31(vbool8_t mask, vuint32m4_t op1, uint32_t op2)
{
  return vmerge_vxm_u32m4_ta(mask, op1, op2, 31);
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
vuint32m8_t 
test_vmerge_vxm_u32m8_ta(vbool4_t mask, vuint32m8_t op1, uint32_t op2, size_t vl)
{
  return vmerge_vxm_u32m8_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_u32m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint32m8_t 
test_vmerge_vxm_u32m8_ta_vl31(vbool4_t mask, vuint32m8_t op1, uint32_t op2)
{
  return vmerge_vxm_u32m8_ta(mask, op1, op2, 31);
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
vuint64m1_t 
test_vmerge_vxm_u64m1_ta(vbool64_t mask, vuint64m1_t op1, uint64_t op2, size_t vl)
{
  return vmerge_vxm_u64m1_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_u64m1_ta_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint64m1_t 
test_vmerge_vxm_u64m1_ta_vl31(vbool64_t mask, vuint64m1_t op1, uint64_t op2)
{
  return vmerge_vxm_u64m1_ta(mask, op1, op2, 31);
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
vuint64m2_t 
test_vmerge_vxm_u64m2_ta(vbool32_t mask, vuint64m2_t op1, uint64_t op2, size_t vl)
{
  return vmerge_vxm_u64m2_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_u64m2_ta_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint64m2_t 
test_vmerge_vxm_u64m2_ta_vl31(vbool32_t mask, vuint64m2_t op1, uint64_t op2)
{
  return vmerge_vxm_u64m2_ta(mask, op1, op2, 31);
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
vuint64m4_t 
test_vmerge_vxm_u64m4_ta(vbool16_t mask, vuint64m4_t op1, uint64_t op2, size_t vl)
{
  return vmerge_vxm_u64m4_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_u64m4_ta_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint64m4_t 
test_vmerge_vxm_u64m4_ta_vl31(vbool16_t mask, vuint64m4_t op1, uint64_t op2)
{
  return vmerge_vxm_u64m4_ta(mask, op1, op2, 31);
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
vuint64m8_t 
test_vmerge_vxm_u64m8_ta(vbool8_t mask, vuint64m8_t op1, uint64_t op2, size_t vl)
{
  return vmerge_vxm_u64m8_ta(mask, op1, op2, vl);
}

/*
** test_vmerge_vxm_u64m8_ta_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint64m8_t 
test_vmerge_vxm_u64m8_ta_vl31(vbool8_t mask, vuint64m8_t op1, uint64_t op2)
{
  return vmerge_vxm_u64m8_ta(mask, op1, op2, 31);
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
vuint8mf8_t 
test_vmerge_vxm_u8mf8_tu(vuint8mf8_t dest, vbool64_t mask, vuint8mf8_t op1, uint8_t op2, size_t vl)
{
  return vmerge_vxm_u8mf8_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vxm_u8mf8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint8mf8_t 
test_vmerge_vxm_u8mf8_tu_vl31(vuint8mf8_t dest, vbool64_t mask, vuint8mf8_t op1, uint8_t op2)
{
  return vmerge_vxm_u8mf8_tu(mask, dest, op1, op2, 31);
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
vuint8mf4_t 
test_vmerge_vxm_u8mf4_tu(vuint8mf4_t dest, vbool32_t mask, vuint8mf4_t op1, uint8_t op2, size_t vl)
{
  return vmerge_vxm_u8mf4_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vxm_u8mf4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint8mf4_t 
test_vmerge_vxm_u8mf4_tu_vl31(vuint8mf4_t dest, vbool32_t mask, vuint8mf4_t op1, uint8_t op2)
{
  return vmerge_vxm_u8mf4_tu(mask, dest, op1, op2, 31);
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
vuint8mf2_t 
test_vmerge_vxm_u8mf2_tu(vuint8mf2_t dest, vbool16_t mask, vuint8mf2_t op1, uint8_t op2, size_t vl)
{
  return vmerge_vxm_u8mf2_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vxm_u8mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint8mf2_t 
test_vmerge_vxm_u8mf2_tu_vl31(vuint8mf2_t dest, vbool16_t mask, vuint8mf2_t op1, uint8_t op2)
{
  return vmerge_vxm_u8mf2_tu(mask, dest, op1, op2, 31);
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
vuint8m1_t 
test_vmerge_vxm_u8m1_tu(vuint8m1_t dest, vbool8_t mask, vuint8m1_t op1, uint8_t op2, size_t vl)
{
  return vmerge_vxm_u8m1_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vxm_u8m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint8m1_t 
test_vmerge_vxm_u8m1_tu_vl31(vuint8m1_t dest, vbool8_t mask, vuint8m1_t op1, uint8_t op2)
{
  return vmerge_vxm_u8m1_tu(mask, dest, op1, op2, 31);
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
vuint8m2_t 
test_vmerge_vxm_u8m2_tu(vuint8m2_t dest, vbool4_t mask, vuint8m2_t op1, uint8_t op2, size_t vl)
{
  return vmerge_vxm_u8m2_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vxm_u8m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint8m2_t 
test_vmerge_vxm_u8m2_tu_vl31(vuint8m2_t dest, vbool4_t mask, vuint8m2_t op1, uint8_t op2)
{
  return vmerge_vxm_u8m2_tu(mask, dest, op1, op2, 31);
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
vuint8m4_t 
test_vmerge_vxm_u8m4_tu(vuint8m4_t dest, vbool2_t mask, vuint8m4_t op1, uint8_t op2, size_t vl)
{
  return vmerge_vxm_u8m4_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vxm_u8m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint8m4_t 
test_vmerge_vxm_u8m4_tu_vl31(vuint8m4_t dest, vbool2_t mask, vuint8m4_t op1, uint8_t op2)
{
  return vmerge_vxm_u8m4_tu(mask, dest, op1, op2, 31);
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
vuint8m8_t 
test_vmerge_vxm_u8m8_tu(vuint8m8_t dest, vbool1_t mask, vuint8m8_t op1, uint8_t op2, size_t vl)
{
  return vmerge_vxm_u8m8_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vxm_u8m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint8m8_t 
test_vmerge_vxm_u8m8_tu_vl31(vuint8m8_t dest, vbool1_t mask, vuint8m8_t op1, uint8_t op2)
{
  return vmerge_vxm_u8m8_tu(mask, dest, op1, op2, 31);
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
vuint16mf4_t 
test_vmerge_vxm_u16mf4_tu(vuint16mf4_t dest, vbool64_t mask, vuint16mf4_t op1, uint16_t op2, size_t vl)
{
  return vmerge_vxm_u16mf4_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vxm_u16mf4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint16mf4_t 
test_vmerge_vxm_u16mf4_tu_vl31(vuint16mf4_t dest, vbool64_t mask, vuint16mf4_t op1, uint16_t op2)
{
  return vmerge_vxm_u16mf4_tu(mask, dest, op1, op2, 31);
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
vuint16mf2_t 
test_vmerge_vxm_u16mf2_tu(vuint16mf2_t dest, vbool32_t mask, vuint16mf2_t op1, uint16_t op2, size_t vl)
{
  return vmerge_vxm_u16mf2_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vxm_u16mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint16mf2_t 
test_vmerge_vxm_u16mf2_tu_vl31(vuint16mf2_t dest, vbool32_t mask, vuint16mf2_t op1, uint16_t op2)
{
  return vmerge_vxm_u16mf2_tu(mask, dest, op1, op2, 31);
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
vuint16m1_t 
test_vmerge_vxm_u16m1_tu(vuint16m1_t dest, vbool16_t mask, vuint16m1_t op1, uint16_t op2, size_t vl)
{
  return vmerge_vxm_u16m1_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vxm_u16m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint16m1_t 
test_vmerge_vxm_u16m1_tu_vl31(vuint16m1_t dest, vbool16_t mask, vuint16m1_t op1, uint16_t op2)
{
  return vmerge_vxm_u16m1_tu(mask, dest, op1, op2, 31);
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
vuint16m2_t 
test_vmerge_vxm_u16m2_tu(vuint16m2_t dest, vbool8_t mask, vuint16m2_t op1, uint16_t op2, size_t vl)
{
  return vmerge_vxm_u16m2_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vxm_u16m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint16m2_t 
test_vmerge_vxm_u16m2_tu_vl31(vuint16m2_t dest, vbool8_t mask, vuint16m2_t op1, uint16_t op2)
{
  return vmerge_vxm_u16m2_tu(mask, dest, op1, op2, 31);
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
vuint16m4_t 
test_vmerge_vxm_u16m4_tu(vuint16m4_t dest, vbool4_t mask, vuint16m4_t op1, uint16_t op2, size_t vl)
{
  return vmerge_vxm_u16m4_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vxm_u16m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint16m4_t 
test_vmerge_vxm_u16m4_tu_vl31(vuint16m4_t dest, vbool4_t mask, vuint16m4_t op1, uint16_t op2)
{
  return vmerge_vxm_u16m4_tu(mask, dest, op1, op2, 31);
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
vuint16m8_t 
test_vmerge_vxm_u16m8_tu(vuint16m8_t dest, vbool2_t mask, vuint16m8_t op1, uint16_t op2, size_t vl)
{
  return vmerge_vxm_u16m8_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vxm_u16m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint16m8_t 
test_vmerge_vxm_u16m8_tu_vl31(vuint16m8_t dest, vbool2_t mask, vuint16m8_t op1, uint16_t op2)
{
  return vmerge_vxm_u16m8_tu(mask, dest, op1, op2, 31);
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
vuint32mf2_t 
test_vmerge_vxm_u32mf2_tu(vuint32mf2_t dest, vbool64_t mask, vuint32mf2_t op1, uint32_t op2, size_t vl)
{
  return vmerge_vxm_u32mf2_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vxm_u32mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint32mf2_t 
test_vmerge_vxm_u32mf2_tu_vl31(vuint32mf2_t dest, vbool64_t mask, vuint32mf2_t op1, uint32_t op2)
{
  return vmerge_vxm_u32mf2_tu(mask, dest, op1, op2, 31);
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
vuint32m1_t 
test_vmerge_vxm_u32m1_tu(vuint32m1_t dest, vbool32_t mask, vuint32m1_t op1, uint32_t op2, size_t vl)
{
  return vmerge_vxm_u32m1_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vxm_u32m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint32m1_t 
test_vmerge_vxm_u32m1_tu_vl31(vuint32m1_t dest, vbool32_t mask, vuint32m1_t op1, uint32_t op2)
{
  return vmerge_vxm_u32m1_tu(mask, dest, op1, op2, 31);
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
vuint32m2_t 
test_vmerge_vxm_u32m2_tu(vuint32m2_t dest, vbool16_t mask, vuint32m2_t op1, uint32_t op2, size_t vl)
{
  return vmerge_vxm_u32m2_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vxm_u32m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint32m2_t 
test_vmerge_vxm_u32m2_tu_vl31(vuint32m2_t dest, vbool16_t mask, vuint32m2_t op1, uint32_t op2)
{
  return vmerge_vxm_u32m2_tu(mask, dest, op1, op2, 31);
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
vuint32m4_t 
test_vmerge_vxm_u32m4_tu(vuint32m4_t dest, vbool8_t mask, vuint32m4_t op1, uint32_t op2, size_t vl)
{
  return vmerge_vxm_u32m4_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vxm_u32m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint32m4_t 
test_vmerge_vxm_u32m4_tu_vl31(vuint32m4_t dest, vbool8_t mask, vuint32m4_t op1, uint32_t op2)
{
  return vmerge_vxm_u32m4_tu(mask, dest, op1, op2, 31);
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
vuint32m8_t 
test_vmerge_vxm_u32m8_tu(vuint32m8_t dest, vbool4_t mask, vuint32m8_t op1, uint32_t op2, size_t vl)
{
  return vmerge_vxm_u32m8_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vxm_u32m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint32m8_t 
test_vmerge_vxm_u32m8_tu_vl31(vuint32m8_t dest, vbool4_t mask, vuint32m8_t op1, uint32_t op2)
{
  return vmerge_vxm_u32m8_tu(mask, dest, op1, op2, 31);
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
vuint64m1_t 
test_vmerge_vxm_u64m1_tu(vuint64m1_t dest, vbool64_t mask, vuint64m1_t op1, uint64_t op2, size_t vl)
{
  return vmerge_vxm_u64m1_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vxm_u64m1_tu_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint64m1_t 
test_vmerge_vxm_u64m1_tu_vl31(vuint64m1_t dest, vbool64_t mask, vuint64m1_t op1, uint64_t op2)
{
  return vmerge_vxm_u64m1_tu(mask, dest, op1, op2, 31);
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
vuint64m2_t 
test_vmerge_vxm_u64m2_tu(vuint64m2_t dest, vbool32_t mask, vuint64m2_t op1, uint64_t op2, size_t vl)
{
  return vmerge_vxm_u64m2_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vxm_u64m2_tu_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint64m2_t 
test_vmerge_vxm_u64m2_tu_vl31(vuint64m2_t dest, vbool32_t mask, vuint64m2_t op1, uint64_t op2)
{
  return vmerge_vxm_u64m2_tu(mask, dest, op1, op2, 31);
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
vuint64m4_t 
test_vmerge_vxm_u64m4_tu(vuint64m4_t dest, vbool16_t mask, vuint64m4_t op1, uint64_t op2, size_t vl)
{
  return vmerge_vxm_u64m4_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vxm_u64m4_tu_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint64m4_t 
test_vmerge_vxm_u64m4_tu_vl31(vuint64m4_t dest, vbool16_t mask, vuint64m4_t op1, uint64_t op2)
{
  return vmerge_vxm_u64m4_tu(mask, dest, op1, op2, 31);
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
vuint64m8_t 
test_vmerge_vxm_u64m8_tu(vuint64m8_t dest, vbool8_t mask, vuint64m8_t op1, uint64_t op2, size_t vl)
{
  return vmerge_vxm_u64m8_tu(mask, dest, op1, op2, vl);
}

/*
** test_vmerge_vxm_u64m8_tu_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint64m8_t 
test_vmerge_vxm_u64m8_tu_vl31(vuint64m8_t dest, vbool8_t mask, vuint64m8_t op1, uint64_t op2)
{
  return vmerge_vxm_u64m8_tu(mask, dest, op1, op2, 31);
}

/*
** test_vmerge_vxm_u8mf8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint8mf8_t 
test_vmerge_vxm_u8mf8_ta_vl32(vbool64_t mask, vuint8mf8_t op1, uint8_t op2)
{
  return vmerge_vxm_u8mf8_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_u8mf4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint8mf4_t 
test_vmerge_vxm_u8mf4_ta_vl32(vbool32_t mask, vuint8mf4_t op1, uint8_t op2)
{
  return vmerge_vxm_u8mf4_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_u8mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint8mf2_t 
test_vmerge_vxm_u8mf2_ta_vl32(vbool16_t mask, vuint8mf2_t op1, uint8_t op2)
{
  return vmerge_vxm_u8mf2_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_u8m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint8m1_t 
test_vmerge_vxm_u8m1_ta_vl32(vbool8_t mask, vuint8m1_t op1, uint8_t op2)
{
  return vmerge_vxm_u8m1_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_u8m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint8m2_t 
test_vmerge_vxm_u8m2_ta_vl32(vbool4_t mask, vuint8m2_t op1, uint8_t op2)
{
  return vmerge_vxm_u8m2_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_u8m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint8m4_t 
test_vmerge_vxm_u8m4_ta_vl32(vbool2_t mask, vuint8m4_t op1, uint8_t op2)
{
  return vmerge_vxm_u8m4_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_u8m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint8m8_t 
test_vmerge_vxm_u8m8_ta_vl32(vbool1_t mask, vuint8m8_t op1, uint8_t op2)
{
  return vmerge_vxm_u8m8_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_u16mf4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint16mf4_t 
test_vmerge_vxm_u16mf4_ta_vl32(vbool64_t mask, vuint16mf4_t op1, uint16_t op2)
{
  return vmerge_vxm_u16mf4_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_u16mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint16mf2_t 
test_vmerge_vxm_u16mf2_ta_vl32(vbool32_t mask, vuint16mf2_t op1, uint16_t op2)
{
  return vmerge_vxm_u16mf2_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_u16m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint16m1_t 
test_vmerge_vxm_u16m1_ta_vl32(vbool16_t mask, vuint16m1_t op1, uint16_t op2)
{
  return vmerge_vxm_u16m1_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_u16m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint16m2_t 
test_vmerge_vxm_u16m2_ta_vl32(vbool8_t mask, vuint16m2_t op1, uint16_t op2)
{
  return vmerge_vxm_u16m2_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_u16m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint16m4_t 
test_vmerge_vxm_u16m4_ta_vl32(vbool4_t mask, vuint16m4_t op1, uint16_t op2)
{
  return vmerge_vxm_u16m4_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_u16m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint16m8_t 
test_vmerge_vxm_u16m8_ta_vl32(vbool2_t mask, vuint16m8_t op1, uint16_t op2)
{
  return vmerge_vxm_u16m8_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_u32mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint32mf2_t 
test_vmerge_vxm_u32mf2_ta_vl32(vbool64_t mask, vuint32mf2_t op1, uint32_t op2)
{
  return vmerge_vxm_u32mf2_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_u32m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint32m1_t 
test_vmerge_vxm_u32m1_ta_vl32(vbool32_t mask, vuint32m1_t op1, uint32_t op2)
{
  return vmerge_vxm_u32m1_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_u32m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint32m2_t 
test_vmerge_vxm_u32m2_ta_vl32(vbool16_t mask, vuint32m2_t op1, uint32_t op2)
{
  return vmerge_vxm_u32m2_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_u32m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint32m4_t 
test_vmerge_vxm_u32m4_ta_vl32(vbool8_t mask, vuint32m4_t op1, uint32_t op2)
{
  return vmerge_vxm_u32m4_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_u32m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint32m8_t 
test_vmerge_vxm_u32m8_ta_vl32(vbool4_t mask, vuint32m8_t op1, uint32_t op2)
{
  return vmerge_vxm_u32m8_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_u64m1_ta_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint64m1_t 
test_vmerge_vxm_u64m1_ta_vl32(vbool64_t mask, vuint64m1_t op1, uint64_t op2)
{
  return vmerge_vxm_u64m1_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_u64m2_ta_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint64m2_t 
test_vmerge_vxm_u64m2_ta_vl32(vbool32_t mask, vuint64m2_t op1, uint64_t op2)
{
  return vmerge_vxm_u64m2_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_u64m4_ta_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint64m4_t 
test_vmerge_vxm_u64m4_ta_vl32(vbool16_t mask, vuint64m4_t op1, uint64_t op2)
{
  return vmerge_vxm_u64m4_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_u64m8_ta_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint64m8_t 
test_vmerge_vxm_u64m8_ta_vl32(vbool8_t mask, vuint64m8_t op1, uint64_t op2)
{
  return vmerge_vxm_u64m8_ta(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_u8mf8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint8mf8_t 
test_vmerge_vxm_u8mf8_tu_vl32(vuint8mf8_t dest, vbool64_t mask, vuint8mf8_t op1, uint8_t op2)
{
  return vmerge_vxm_u8mf8_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vxm_u8mf4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint8mf4_t 
test_vmerge_vxm_u8mf4_tu_vl32(vuint8mf4_t dest, vbool32_t mask, vuint8mf4_t op1, uint8_t op2)
{
  return vmerge_vxm_u8mf4_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vxm_u8mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint8mf2_t 
test_vmerge_vxm_u8mf2_tu_vl32(vuint8mf2_t dest, vbool16_t mask, vuint8mf2_t op1, uint8_t op2)
{
  return vmerge_vxm_u8mf2_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vxm_u8m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint8m1_t 
test_vmerge_vxm_u8m1_tu_vl32(vuint8m1_t dest, vbool8_t mask, vuint8m1_t op1, uint8_t op2)
{
  return vmerge_vxm_u8m1_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vxm_u8m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint8m2_t 
test_vmerge_vxm_u8m2_tu_vl32(vuint8m2_t dest, vbool4_t mask, vuint8m2_t op1, uint8_t op2)
{
  return vmerge_vxm_u8m2_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vxm_u8m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint8m4_t 
test_vmerge_vxm_u8m4_tu_vl32(vuint8m4_t dest, vbool2_t mask, vuint8m4_t op1, uint8_t op2)
{
  return vmerge_vxm_u8m4_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vxm_u8m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint8m8_t 
test_vmerge_vxm_u8m8_tu_vl32(vuint8m8_t dest, vbool1_t mask, vuint8m8_t op1, uint8_t op2)
{
  return vmerge_vxm_u8m8_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vxm_u16mf4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint16mf4_t 
test_vmerge_vxm_u16mf4_tu_vl32(vuint16mf4_t dest, vbool64_t mask, vuint16mf4_t op1, uint16_t op2)
{
  return vmerge_vxm_u16mf4_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vxm_u16mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint16mf2_t 
test_vmerge_vxm_u16mf2_tu_vl32(vuint16mf2_t dest, vbool32_t mask, vuint16mf2_t op1, uint16_t op2)
{
  return vmerge_vxm_u16mf2_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vxm_u16m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint16m1_t 
test_vmerge_vxm_u16m1_tu_vl32(vuint16m1_t dest, vbool16_t mask, vuint16m1_t op1, uint16_t op2)
{
  return vmerge_vxm_u16m1_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vxm_u16m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint16m2_t 
test_vmerge_vxm_u16m2_tu_vl32(vuint16m2_t dest, vbool8_t mask, vuint16m2_t op1, uint16_t op2)
{
  return vmerge_vxm_u16m2_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vxm_u16m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint16m4_t 
test_vmerge_vxm_u16m4_tu_vl32(vuint16m4_t dest, vbool4_t mask, vuint16m4_t op1, uint16_t op2)
{
  return vmerge_vxm_u16m4_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vxm_u16m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint16m8_t 
test_vmerge_vxm_u16m8_tu_vl32(vuint16m8_t dest, vbool2_t mask, vuint16m8_t op1, uint16_t op2)
{
  return vmerge_vxm_u16m8_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vxm_u32mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint32mf2_t 
test_vmerge_vxm_u32mf2_tu_vl32(vuint32mf2_t dest, vbool64_t mask, vuint32mf2_t op1, uint32_t op2)
{
  return vmerge_vxm_u32mf2_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vxm_u32m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint32m1_t 
test_vmerge_vxm_u32m1_tu_vl32(vuint32m1_t dest, vbool32_t mask, vuint32m1_t op1, uint32_t op2)
{
  return vmerge_vxm_u32m1_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vxm_u32m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint32m2_t 
test_vmerge_vxm_u32m2_tu_vl32(vuint32m2_t dest, vbool16_t mask, vuint32m2_t op1, uint32_t op2)
{
  return vmerge_vxm_u32m2_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vxm_u32m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint32m4_t 
test_vmerge_vxm_u32m4_tu_vl32(vuint32m4_t dest, vbool8_t mask, vuint32m4_t op1, uint32_t op2)
{
  return vmerge_vxm_u32m4_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vxm_u32m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint32m8_t 
test_vmerge_vxm_u32m8_tu_vl32(vuint32m8_t dest, vbool4_t mask, vuint32m8_t op1, uint32_t op2)
{
  return vmerge_vxm_u32m8_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vxm_u64m1_tu_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint64m1_t 
test_vmerge_vxm_u64m1_tu_vl32(vuint64m1_t dest, vbool64_t mask, vuint64m1_t op1, uint64_t op2)
{
  return vmerge_vxm_u64m1_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vxm_u64m2_tu_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint64m2_t 
test_vmerge_vxm_u64m2_tu_vl32(vuint64m2_t dest, vbool32_t mask, vuint64m2_t op1, uint64_t op2)
{
  return vmerge_vxm_u64m2_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vxm_u64m4_tu_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint64m4_t 
test_vmerge_vxm_u64m4_tu_vl32(vuint64m4_t dest, vbool16_t mask, vuint64m4_t op1, uint64_t op2)
{
  return vmerge_vxm_u64m4_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vxm_u64m8_tu_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint64m8_t 
test_vmerge_vxm_u64m8_tu_vl32(vuint64m8_t dest, vbool8_t mask, vuint64m8_t op1, uint64_t op2)
{
  return vmerge_vxm_u64m8_tu(mask, dest, op1, op2, 32);
}

/*
** test_vmerge_vxm_u8mf8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint8mf8_t 
test_vmerge_vxm_u8mf8_vl32(vbool64_t mask, vuint8mf8_t op1, uint8_t op2)
{
  return vmerge_vxm_u8mf8(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_u8mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint8mf4_t 
test_vmerge_vxm_u8mf4_vl32(vbool32_t mask, vuint8mf4_t op1, uint8_t op2)
{
  return vmerge_vxm_u8mf4(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_u8mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint8mf2_t 
test_vmerge_vxm_u8mf2_vl32(vbool16_t mask, vuint8mf2_t op1, uint8_t op2)
{
  return vmerge_vxm_u8mf2(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_u8m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint8m1_t 
test_vmerge_vxm_u8m1_vl32(vbool8_t mask, vuint8m1_t op1, uint8_t op2)
{
  return vmerge_vxm_u8m1(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_u8m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint8m2_t 
test_vmerge_vxm_u8m2_vl32(vbool4_t mask, vuint8m2_t op1, uint8_t op2)
{
  return vmerge_vxm_u8m2(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_u8m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint8m4_t 
test_vmerge_vxm_u8m4_vl32(vbool2_t mask, vuint8m4_t op1, uint8_t op2)
{
  return vmerge_vxm_u8m4(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_u8m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint8m8_t 
test_vmerge_vxm_u8m8_vl32(vbool1_t mask, vuint8m8_t op1, uint8_t op2)
{
  return vmerge_vxm_u8m8(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_u16mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint16mf4_t 
test_vmerge_vxm_u16mf4_vl32(vbool64_t mask, vuint16mf4_t op1, uint16_t op2)
{
  return vmerge_vxm_u16mf4(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_u16mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint16mf2_t 
test_vmerge_vxm_u16mf2_vl32(vbool32_t mask, vuint16mf2_t op1, uint16_t op2)
{
  return vmerge_vxm_u16mf2(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_u16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint16m1_t 
test_vmerge_vxm_u16m1_vl32(vbool16_t mask, vuint16m1_t op1, uint16_t op2)
{
  return vmerge_vxm_u16m1(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_u16m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint16m2_t 
test_vmerge_vxm_u16m2_vl32(vbool8_t mask, vuint16m2_t op1, uint16_t op2)
{
  return vmerge_vxm_u16m2(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_u16m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint16m4_t 
test_vmerge_vxm_u16m4_vl32(vbool4_t mask, vuint16m4_t op1, uint16_t op2)
{
  return vmerge_vxm_u16m4(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_u16m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint16m8_t 
test_vmerge_vxm_u16m8_vl32(vbool2_t mask, vuint16m8_t op1, uint16_t op2)
{
  return vmerge_vxm_u16m8(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_u32mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint32mf2_t 
test_vmerge_vxm_u32mf2_vl32(vbool64_t mask, vuint32mf2_t op1, uint32_t op2)
{
  return vmerge_vxm_u32mf2(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_u32m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint32m1_t 
test_vmerge_vxm_u32m1_vl32(vbool32_t mask, vuint32m1_t op1, uint32_t op2)
{
  return vmerge_vxm_u32m1(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_u32m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint32m2_t 
test_vmerge_vxm_u32m2_vl32(vbool16_t mask, vuint32m2_t op1, uint32_t op2)
{
  return vmerge_vxm_u32m2(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_u32m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint32m4_t 
test_vmerge_vxm_u32m4_vl32(vbool8_t mask, vuint32m4_t op1, uint32_t op2)
{
  return vmerge_vxm_u32m4(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_u32m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint32m8_t 
test_vmerge_vxm_u32m8_vl32(vbool4_t mask, vuint32m8_t op1, uint32_t op2)
{
  return vmerge_vxm_u32m8(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_u64m1_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint64m1_t 
test_vmerge_vxm_u64m1_vl32(vbool64_t mask, vuint64m1_t op1, uint64_t op2)
{
  return vmerge_vxm_u64m1(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_u64m2_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint64m2_t 
test_vmerge_vxm_u64m2_vl32(vbool32_t mask, vuint64m2_t op1, uint64_t op2)
{
  return vmerge_vxm_u64m2(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_u64m4_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint64m4_t 
test_vmerge_vxm_u64m4_vl32(vbool16_t mask, vuint64m4_t op1, uint64_t op2)
{
  return vmerge_vxm_u64m4(mask, op1, op2, 32);
}

/*
** test_vmerge_vxm_u64m8_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmerge\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vuint64m8_t 
test_vmerge_vxm_u64m8_vl32(vbool8_t mask, vuint64m8_t op1, uint64_t op2)
{
  return vmerge_vxm_u64m8(mask, op1, op2, 32);
}

