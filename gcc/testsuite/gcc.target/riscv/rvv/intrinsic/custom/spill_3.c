/* { dg-do compile } */
/* { dg-additional-options "-O3" } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */

#include <stddef.h>
#include <riscv_vector.h>

/*
** foo1:
**	vsetvli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),zero,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**	vle32.v\s+v8,\(a0\)
**  vle32.v\s+v9,\(a1\)
**  ret
*/
vfloat32mf2x2_t
foo1 (vfloat32mf2_t *v0,vfloat32mf2_t *v1)
{
  vfloat32mf2_t merge0 = *(vfloat32mf2_t*)v0;
  vfloat32mf2_t merge1 = *(vfloat32mf2_t*)v1;
  vfloat32mf2x2_t merge = {.val[0] = merge0, .val[1] = merge1};
  return merge;
}

/*
** foo2:
**  vl1re32.v\s+v8,0\(a0\)
**	vl1re32.v\s+v9,0\(a1\)
**  ret
*/
vfloat32m1x2_t
foo2 (vfloat32m1_t *v0,vfloat32m1_t *v1)
{
  vfloat32m1_t merge0 = *(vfloat32m1_t*)v0;
  vfloat32m1_t merge1 = *(vfloat32m1_t*)v1;
  vfloat32m1x2_t merge = {.val[0] = merge0, .val[1] = merge1};
  return merge;
}