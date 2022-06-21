/* { dg-do compile } */
/* { dg-additional-options "-O3" } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */
/* { dg-final { check-function-bodies "**" "" } } */

#include "riscv_vector.h"

/*
** foo1:
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\(a0\)
**	vsext\.vf2\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  vse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\(a1\)
**  ret
*/
void foo1 (const int16_t* a, int32_t* b, size_t vl) {
  vint16mf4_t vec_src1 = vle16_v_i16mf4 (a, vl);
  vint32mf2_t vec_src2 = vsext_vf2_i32mf2 (vec_src1, vl);
  vse32_v_i32mf2 (b, vec_src2, vl);
}

/*
** foo2:
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\(a0\)
**	vzext\.vf2\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  vse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\(a1\)
**  ret
*/
void foo2 (const uint16_t* a, uint32_t* b, size_t vl) {
  vuint16mf4_t vec_src1 = vle16_v_u16mf4 (a, vl);
  vuint32mf2_t vec_src2 = vzext_vf2_u32mf2 (vec_src1, vl);
  vse32_v_u32mf2 (b, vec_src2, vl);
}