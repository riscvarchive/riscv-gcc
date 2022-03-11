/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>


/*
** test_vfclass_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vfclass\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4_t 
test_vfclass_v_u16mf4(vfloat16mf4_t op1, size_t vl)
{
  return vfclass_v_u16mf4(op1, vl);
}

/*
** test_vfclass_v_u16mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vfclass\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4_t 
test_vfclass_v_u16mf4_vl31(vfloat16mf4_t op1)
{
  return vfclass_v_u16mf4(op1, 31);
}

/*
** test_vfclass_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vfclass\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2_t 
test_vfclass_v_u16mf2(vfloat16mf2_t op1, size_t vl)
{
  return vfclass_v_u16mf2(op1, vl);
}

/*
** test_vfclass_v_u16mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vfclass\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2_t 
test_vfclass_v_u16mf2_vl31(vfloat16mf2_t op1)
{
  return vfclass_v_u16mf2(op1, 31);
}

/*
** test_vfclass_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vfclass\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vfclass_v_u16m1(vfloat16m1_t op1, size_t vl)
{
  return vfclass_v_u16m1(op1, vl);
}

/*
** test_vfclass_v_u16m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vfclass\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vfclass_v_u16m1_vl31(vfloat16m1_t op1)
{
  return vfclass_v_u16m1(op1, 31);
}

/*
** test_vfclass_v_u16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vfclass\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m2_t 
test_vfclass_v_u16m2(vfloat16m2_t op1, size_t vl)
{
  return vfclass_v_u16m2(op1, vl);
}

/*
** test_vfclass_v_u16m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vfclass\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m2_t 
test_vfclass_v_u16m2_vl31(vfloat16m2_t op1)
{
  return vfclass_v_u16m2(op1, 31);
}

/*
** test_vfclass_v_u16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vfclass\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m4_t 
test_vfclass_v_u16m4(vfloat16m4_t op1, size_t vl)
{
  return vfclass_v_u16m4(op1, vl);
}

/*
** test_vfclass_v_u16m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vfclass\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m4_t 
test_vfclass_v_u16m4_vl31(vfloat16m4_t op1)
{
  return vfclass_v_u16m4(op1, 31);
}

/*
** test_vfclass_v_u16m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vfclass\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint16m8_t 
test_vfclass_v_u16m8(vfloat16m8_t op1, size_t vl)
{
  return vfclass_v_u16m8(op1, vl);
}

/*
** test_vfclass_v_u16m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vfclass\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint16m8_t 
test_vfclass_v_u16m8_vl31(vfloat16m8_t op1)
{
  return vfclass_v_u16m8(op1, 31);
}

/*
** test_vfclass_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vfclass\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2_t 
test_vfclass_v_u32mf2(vfloat32mf2_t op1, size_t vl)
{
  return vfclass_v_u32mf2(op1, vl);
}

/*
** test_vfclass_v_u32mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vfclass\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2_t 
test_vfclass_v_u32mf2_vl31(vfloat32mf2_t op1)
{
  return vfclass_v_u32mf2(op1, 31);
}

/*
** test_vfclass_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vfclass\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vfclass_v_u32m1(vfloat32m1_t op1, size_t vl)
{
  return vfclass_v_u32m1(op1, vl);
}

/*
** test_vfclass_v_u32m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vfclass\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vfclass_v_u32m1_vl31(vfloat32m1_t op1)
{
  return vfclass_v_u32m1(op1, 31);
}

/*
** test_vfclass_v_u32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vfclass\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m2_t 
test_vfclass_v_u32m2(vfloat32m2_t op1, size_t vl)
{
  return vfclass_v_u32m2(op1, vl);
}

/*
** test_vfclass_v_u32m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vfclass\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m2_t 
test_vfclass_v_u32m2_vl31(vfloat32m2_t op1)
{
  return vfclass_v_u32m2(op1, 31);
}

/*
** test_vfclass_v_u32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vfclass\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint32m4_t 
test_vfclass_v_u32m4(vfloat32m4_t op1, size_t vl)
{
  return vfclass_v_u32m4(op1, vl);
}

/*
** test_vfclass_v_u32m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vfclass\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint32m4_t 
test_vfclass_v_u32m4_vl31(vfloat32m4_t op1)
{
  return vfclass_v_u32m4(op1, 31);
}

/*
** test_vfclass_v_u32m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vfclass\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint32m8_t 
test_vfclass_v_u32m8(vfloat32m8_t op1, size_t vl)
{
  return vfclass_v_u32m8(op1, vl);
}

/*
** test_vfclass_v_u32m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vfclass\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint32m8_t 
test_vfclass_v_u32m8_vl31(vfloat32m8_t op1)
{
  return vfclass_v_u32m8(op1, 31);
}

/*
** test_vfclass_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vfclass\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vfclass_v_u64m1(vfloat64m1_t op1, size_t vl)
{
  return vfclass_v_u64m1(op1, vl);
}

/*
** test_vfclass_v_u64m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vfclass\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vfclass_v_u64m1_vl31(vfloat64m1_t op1)
{
  return vfclass_v_u64m1(op1, 31);
}

/*
** test_vfclass_v_u64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vfclass\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint64m2_t 
test_vfclass_v_u64m2(vfloat64m2_t op1, size_t vl)
{
  return vfclass_v_u64m2(op1, vl);
}

/*
** test_vfclass_v_u64m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vfclass\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint64m2_t 
test_vfclass_v_u64m2_vl31(vfloat64m2_t op1)
{
  return vfclass_v_u64m2(op1, 31);
}

/*
** test_vfclass_v_u64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vfclass\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint64m4_t 
test_vfclass_v_u64m4(vfloat64m4_t op1, size_t vl)
{
  return vfclass_v_u64m4(op1, vl);
}

/*
** test_vfclass_v_u64m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vfclass\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint64m4_t 
test_vfclass_v_u64m4_vl31(vfloat64m4_t op1)
{
  return vfclass_v_u64m4(op1, 31);
}

/*
** test_vfclass_v_u64m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vfclass\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint64m8_t 
test_vfclass_v_u64m8(vfloat64m8_t op1, size_t vl)
{
  return vfclass_v_u64m8(op1, vl);
}

/*
** test_vfclass_v_u64m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vfclass\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint64m8_t 
test_vfclass_v_u64m8_vl31(vfloat64m8_t op1)
{
  return vfclass_v_u64m8(op1, 31);
}

/*
** test_vfclass_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vfclass\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4_t 
test_vfclass_v_u16mf4_m(vbool64_t mask, vuint16mf4_t maskedoff, vfloat16mf4_t op1, size_t vl)
{
  return vfclass_v_u16mf4_m(mask, maskedoff, op1, vl);
}

/*
** test_vfclass_v_u16mf4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vfclass\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4_t 
test_vfclass_v_u16mf4_m_vl31(vbool64_t mask, vuint16mf4_t maskedoff, vfloat16mf4_t op1)
{
  return vfclass_v_u16mf4_m(mask, maskedoff, op1, 31);
}

/*
** test_vfclass_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vfclass\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2_t 
test_vfclass_v_u16mf2_m(vbool32_t mask, vuint16mf2_t maskedoff, vfloat16mf2_t op1, size_t vl)
{
  return vfclass_v_u16mf2_m(mask, maskedoff, op1, vl);
}

/*
** test_vfclass_v_u16mf2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vfclass\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2_t 
test_vfclass_v_u16mf2_m_vl31(vbool32_t mask, vuint16mf2_t maskedoff, vfloat16mf2_t op1)
{
  return vfclass_v_u16mf2_m(mask, maskedoff, op1, 31);
}

/*
** test_vfclass_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vfclass\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vfclass_v_u16m1_m(vbool16_t mask, vuint16m1_t maskedoff, vfloat16m1_t op1, size_t vl)
{
  return vfclass_v_u16m1_m(mask, maskedoff, op1, vl);
}

/*
** test_vfclass_v_u16m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vfclass\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vfclass_v_u16m1_m_vl31(vbool16_t mask, vuint16m1_t maskedoff, vfloat16m1_t op1)
{
  return vfclass_v_u16m1_m(mask, maskedoff, op1, 31);
}

/*
** test_vfclass_v_u16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vfclass\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m2_t 
test_vfclass_v_u16m2_m(vbool8_t mask, vuint16m2_t maskedoff, vfloat16m2_t op1, size_t vl)
{
  return vfclass_v_u16m2_m(mask, maskedoff, op1, vl);
}

/*
** test_vfclass_v_u16m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vfclass\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m2_t 
test_vfclass_v_u16m2_m_vl31(vbool8_t mask, vuint16m2_t maskedoff, vfloat16m2_t op1)
{
  return vfclass_v_u16m2_m(mask, maskedoff, op1, 31);
}

/*
** test_vfclass_v_u16m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vfclass\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m4_t 
test_vfclass_v_u16m4_m(vbool4_t mask, vuint16m4_t maskedoff, vfloat16m4_t op1, size_t vl)
{
  return vfclass_v_u16m4_m(mask, maskedoff, op1, vl);
}

/*
** test_vfclass_v_u16m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vfclass\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m4_t 
test_vfclass_v_u16m4_m_vl31(vbool4_t mask, vuint16m4_t maskedoff, vfloat16m4_t op1)
{
  return vfclass_v_u16m4_m(mask, maskedoff, op1, 31);
}

/*
** test_vfclass_v_u16m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*mu
**  ...
**	vfclass\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint16m8_t 
test_vfclass_v_u16m8_m(vbool2_t mask, vuint16m8_t maskedoff, vfloat16m8_t op1, size_t vl)
{
  return vfclass_v_u16m8_m(mask, maskedoff, op1, vl);
}

/*
** test_vfclass_v_u16m8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*mu
**  ...
**	vfclass\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint16m8_t 
test_vfclass_v_u16m8_m_vl31(vbool2_t mask, vuint16m8_t maskedoff, vfloat16m8_t op1)
{
  return vfclass_v_u16m8_m(mask, maskedoff, op1, 31);
}

/*
** test_vfclass_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vfclass\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2_t 
test_vfclass_v_u32mf2_m(vbool64_t mask, vuint32mf2_t maskedoff, vfloat32mf2_t op1, size_t vl)
{
  return vfclass_v_u32mf2_m(mask, maskedoff, op1, vl);
}

/*
** test_vfclass_v_u32mf2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vfclass\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2_t 
test_vfclass_v_u32mf2_m_vl31(vbool64_t mask, vuint32mf2_t maskedoff, vfloat32mf2_t op1)
{
  return vfclass_v_u32mf2_m(mask, maskedoff, op1, 31);
}

/*
** test_vfclass_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vfclass\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vfclass_v_u32m1_m(vbool32_t mask, vuint32m1_t maskedoff, vfloat32m1_t op1, size_t vl)
{
  return vfclass_v_u32m1_m(mask, maskedoff, op1, vl);
}

/*
** test_vfclass_v_u32m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vfclass\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vfclass_v_u32m1_m_vl31(vbool32_t mask, vuint32m1_t maskedoff, vfloat32m1_t op1)
{
  return vfclass_v_u32m1_m(mask, maskedoff, op1, 31);
}

/*
** test_vfclass_v_u32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vfclass\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m2_t 
test_vfclass_v_u32m2_m(vbool16_t mask, vuint32m2_t maskedoff, vfloat32m2_t op1, size_t vl)
{
  return vfclass_v_u32m2_m(mask, maskedoff, op1, vl);
}

/*
** test_vfclass_v_u32m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vfclass\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m2_t 
test_vfclass_v_u32m2_m_vl31(vbool16_t mask, vuint32m2_t maskedoff, vfloat32m2_t op1)
{
  return vfclass_v_u32m2_m(mask, maskedoff, op1, 31);
}

/*
** test_vfclass_v_u32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vfclass\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint32m4_t 
test_vfclass_v_u32m4_m(vbool8_t mask, vuint32m4_t maskedoff, vfloat32m4_t op1, size_t vl)
{
  return vfclass_v_u32m4_m(mask, maskedoff, op1, vl);
}

/*
** test_vfclass_v_u32m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vfclass\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint32m4_t 
test_vfclass_v_u32m4_m_vl31(vbool8_t mask, vuint32m4_t maskedoff, vfloat32m4_t op1)
{
  return vfclass_v_u32m4_m(mask, maskedoff, op1, 31);
}

/*
** test_vfclass_v_u32m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu
**  ...
**	vfclass\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint32m8_t 
test_vfclass_v_u32m8_m(vbool4_t mask, vuint32m8_t maskedoff, vfloat32m8_t op1, size_t vl)
{
  return vfclass_v_u32m8_m(mask, maskedoff, op1, vl);
}

/*
** test_vfclass_v_u32m8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*mu
**  ...
**	vfclass\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint32m8_t 
test_vfclass_v_u32m8_m_vl31(vbool4_t mask, vuint32m8_t maskedoff, vfloat32m8_t op1)
{
  return vfclass_v_u32m8_m(mask, maskedoff, op1, 31);
}

/*
** test_vfclass_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vfclass\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vfclass_v_u64m1_m(vbool64_t mask, vuint64m1_t maskedoff, vfloat64m1_t op1, size_t vl)
{
  return vfclass_v_u64m1_m(mask, maskedoff, op1, vl);
}

/*
** test_vfclass_v_u64m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vfclass\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vfclass_v_u64m1_m_vl31(vbool64_t mask, vuint64m1_t maskedoff, vfloat64m1_t op1)
{
  return vfclass_v_u64m1_m(mask, maskedoff, op1, 31);
}

/*
** test_vfclass_v_u64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vfclass\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint64m2_t 
test_vfclass_v_u64m2_m(vbool32_t mask, vuint64m2_t maskedoff, vfloat64m2_t op1, size_t vl)
{
  return vfclass_v_u64m2_m(mask, maskedoff, op1, vl);
}

/*
** test_vfclass_v_u64m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vfclass\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint64m2_t 
test_vfclass_v_u64m2_m_vl31(vbool32_t mask, vuint64m2_t maskedoff, vfloat64m2_t op1)
{
  return vfclass_v_u64m2_m(mask, maskedoff, op1, 31);
}

/*
** test_vfclass_v_u64m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vfclass\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint64m4_t 
test_vfclass_v_u64m4_m(vbool16_t mask, vuint64m4_t maskedoff, vfloat64m4_t op1, size_t vl)
{
  return vfclass_v_u64m4_m(mask, maskedoff, op1, vl);
}

/*
** test_vfclass_v_u64m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vfclass\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint64m4_t 
test_vfclass_v_u64m4_m_vl31(vbool16_t mask, vuint64m4_t maskedoff, vfloat64m4_t op1)
{
  return vfclass_v_u64m4_m(mask, maskedoff, op1, 31);
}

/*
** test_vfclass_v_u64m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu
**  ...
**	vfclass\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint64m8_t 
test_vfclass_v_u64m8_m(vbool8_t mask, vuint64m8_t maskedoff, vfloat64m8_t op1, size_t vl)
{
  return vfclass_v_u64m8_m(mask, maskedoff, op1, vl);
}

/*
** test_vfclass_v_u64m8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*mu
**  ...
**	vfclass\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint64m8_t 
test_vfclass_v_u64m8_m_vl31(vbool8_t mask, vuint64m8_t maskedoff, vfloat64m8_t op1)
{
  return vfclass_v_u64m8_m(mask, maskedoff, op1, 31);
}

/*
** test_vfclass_v_u16mf4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vfclass\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4_t 
test_vfclass_v_u16mf4_m_vl32(vbool64_t mask, vuint16mf4_t maskedoff, vfloat16mf4_t op1)
{
  return vfclass_v_u16mf4_m(mask, maskedoff, op1, 32);
}

/*
** test_vfclass_v_u16mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vfclass\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2_t 
test_vfclass_v_u16mf2_m_vl32(vbool32_t mask, vuint16mf2_t maskedoff, vfloat16mf2_t op1)
{
  return vfclass_v_u16mf2_m(mask, maskedoff, op1, 32);
}

/*
** test_vfclass_v_u16m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vfclass\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vfclass_v_u16m1_m_vl32(vbool16_t mask, vuint16m1_t maskedoff, vfloat16m1_t op1)
{
  return vfclass_v_u16m1_m(mask, maskedoff, op1, 32);
}

/*
** test_vfclass_v_u16m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vfclass\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m2_t 
test_vfclass_v_u16m2_m_vl32(vbool8_t mask, vuint16m2_t maskedoff, vfloat16m2_t op1)
{
  return vfclass_v_u16m2_m(mask, maskedoff, op1, 32);
}

/*
** test_vfclass_v_u16m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vfclass\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m4_t 
test_vfclass_v_u16m4_m_vl32(vbool4_t mask, vuint16m4_t maskedoff, vfloat16m4_t op1)
{
  return vfclass_v_u16m4_m(mask, maskedoff, op1, 32);
}

/*
** test_vfclass_v_u16m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*mu
**  ...
**	vfclass\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint16m8_t 
test_vfclass_v_u16m8_m_vl32(vbool2_t mask, vuint16m8_t maskedoff, vfloat16m8_t op1)
{
  return vfclass_v_u16m8_m(mask, maskedoff, op1, 32);
}

/*
** test_vfclass_v_u32mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vfclass\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2_t 
test_vfclass_v_u32mf2_m_vl32(vbool64_t mask, vuint32mf2_t maskedoff, vfloat32mf2_t op1)
{
  return vfclass_v_u32mf2_m(mask, maskedoff, op1, 32);
}

/*
** test_vfclass_v_u32m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vfclass\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vfclass_v_u32m1_m_vl32(vbool32_t mask, vuint32m1_t maskedoff, vfloat32m1_t op1)
{
  return vfclass_v_u32m1_m(mask, maskedoff, op1, 32);
}

/*
** test_vfclass_v_u32m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vfclass\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m2_t 
test_vfclass_v_u32m2_m_vl32(vbool16_t mask, vuint32m2_t maskedoff, vfloat32m2_t op1)
{
  return vfclass_v_u32m2_m(mask, maskedoff, op1, 32);
}

/*
** test_vfclass_v_u32m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vfclass\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint32m4_t 
test_vfclass_v_u32m4_m_vl32(vbool8_t mask, vuint32m4_t maskedoff, vfloat32m4_t op1)
{
  return vfclass_v_u32m4_m(mask, maskedoff, op1, 32);
}

/*
** test_vfclass_v_u32m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu
**  ...
**	vfclass\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint32m8_t 
test_vfclass_v_u32m8_m_vl32(vbool4_t mask, vuint32m8_t maskedoff, vfloat32m8_t op1)
{
  return vfclass_v_u32m8_m(mask, maskedoff, op1, 32);
}

/*
** test_vfclass_v_u64m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vfclass\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vfclass_v_u64m1_m_vl32(vbool64_t mask, vuint64m1_t maskedoff, vfloat64m1_t op1)
{
  return vfclass_v_u64m1_m(mask, maskedoff, op1, 32);
}

/*
** test_vfclass_v_u64m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vfclass\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint64m2_t 
test_vfclass_v_u64m2_m_vl32(vbool32_t mask, vuint64m2_t maskedoff, vfloat64m2_t op1)
{
  return vfclass_v_u64m2_m(mask, maskedoff, op1, 32);
}

/*
** test_vfclass_v_u64m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vfclass\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint64m4_t 
test_vfclass_v_u64m4_m_vl32(vbool16_t mask, vuint64m4_t maskedoff, vfloat64m4_t op1)
{
  return vfclass_v_u64m4_m(mask, maskedoff, op1, 32);
}

/*
** test_vfclass_v_u64m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu
**  ...
**	vfclass\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint64m8_t 
test_vfclass_v_u64m8_m_vl32(vbool8_t mask, vuint64m8_t maskedoff, vfloat64m8_t op1)
{
  return vfclass_v_u64m8_m(mask, maskedoff, op1, 32);
}

/*
** test_vfclass_v_u16mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vfclass\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4_t 
test_vfclass_v_u16mf4_vl32(vfloat16mf4_t op1)
{
  return vfclass_v_u16mf4(op1, 32);
}

/*
** test_vfclass_v_u16mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vfclass\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2_t 
test_vfclass_v_u16mf2_vl32(vfloat16mf2_t op1)
{
  return vfclass_v_u16mf2(op1, 32);
}

/*
** test_vfclass_v_u16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vfclass\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vfclass_v_u16m1_vl32(vfloat16m1_t op1)
{
  return vfclass_v_u16m1(op1, 32);
}

/*
** test_vfclass_v_u16m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vfclass\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m2_t 
test_vfclass_v_u16m2_vl32(vfloat16m2_t op1)
{
  return vfclass_v_u16m2(op1, 32);
}

/*
** test_vfclass_v_u16m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vfclass\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m4_t 
test_vfclass_v_u16m4_vl32(vfloat16m4_t op1)
{
  return vfclass_v_u16m4(op1, 32);
}

/*
** test_vfclass_v_u16m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vfclass\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint16m8_t 
test_vfclass_v_u16m8_vl32(vfloat16m8_t op1)
{
  return vfclass_v_u16m8(op1, 32);
}

/*
** test_vfclass_v_u32mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vfclass\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2_t 
test_vfclass_v_u32mf2_vl32(vfloat32mf2_t op1)
{
  return vfclass_v_u32mf2(op1, 32);
}

/*
** test_vfclass_v_u32m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vfclass\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vfclass_v_u32m1_vl32(vfloat32m1_t op1)
{
  return vfclass_v_u32m1(op1, 32);
}

/*
** test_vfclass_v_u32m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vfclass\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m2_t 
test_vfclass_v_u32m2_vl32(vfloat32m2_t op1)
{
  return vfclass_v_u32m2(op1, 32);
}

/*
** test_vfclass_v_u32m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vfclass\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint32m4_t 
test_vfclass_v_u32m4_vl32(vfloat32m4_t op1)
{
  return vfclass_v_u32m4(op1, 32);
}

/*
** test_vfclass_v_u32m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vfclass\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint32m8_t 
test_vfclass_v_u32m8_vl32(vfloat32m8_t op1)
{
  return vfclass_v_u32m8(op1, 32);
}

/*
** test_vfclass_v_u64m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vfclass\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vfclass_v_u64m1_vl32(vfloat64m1_t op1)
{
  return vfclass_v_u64m1(op1, 32);
}

/*
** test_vfclass_v_u64m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vfclass\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint64m2_t 
test_vfclass_v_u64m2_vl32(vfloat64m2_t op1)
{
  return vfclass_v_u64m2(op1, 32);
}

/*
** test_vfclass_v_u64m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vfclass\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint64m4_t 
test_vfclass_v_u64m4_vl32(vfloat64m4_t op1)
{
  return vfclass_v_u64m4(op1, 32);
}

/*
** test_vfclass_v_u64m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vfclass\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint64m8_t 
test_vfclass_v_u64m8_vl32(vfloat64m8_t op1)
{
  return vfclass_v_u64m8(op1, 32);
}

