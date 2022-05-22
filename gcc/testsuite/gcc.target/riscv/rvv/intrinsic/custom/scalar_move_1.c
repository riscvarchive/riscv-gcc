/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-additional-options "-O3" } */
/* { dg-final { check-function-bodies "**" "" } } */

#include <riscv_vector.h>

/*
** test_scalar_move_op:
**  vsetivli\s+zero,2,\s*e8,\s*mf8,\s*t[au],\s*mu
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  vsetvli\s+zero,\s*zero,\s*e8,\s*mf8,\s*t[au],\s*mu
**  vmv\.s\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  vse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ret
*/
void 
test_scalar_move_op (int8_t *base, int8_t *out, int8_t op1)
{
  vint8mf8_t v = vle8_v_i8mf8 (base,2);
  v = vmv_s_x_i8mf8 (v, op1, 1);
  vse8_v_i8mf8 (base,v,2);
} 