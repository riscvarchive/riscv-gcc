
/* { dg-do compile } */
/* { dg-additional-options "-std=c99 -pedantic-errors" } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv32*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vint64m1_t 
test_vnmsac_vx_i64m1_m(vbool64_t mask, vint64m1_t dest, int64_t op1, vint64m1_t op2, size_t vl)
{
  return vnmsac_vx_i64m1_m(mask, dest, op1, op2, vl);
}
/* { dg-final { scan-assembler {vnmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t(?: test_vnmsac_vx_i64m1_m )?} } } */
/* { dg-final { scan-assembler-not {vnmsac\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?: test_vnmsac_vx_i64m1_m )?} } } */

vint64m2_t 
test_vnmsac_vx_i64m2_m(vbool32_t mask, vint64m2_t dest, int64_t op1, vint64m2_t op2, size_t vl)
{
  return vnmsac_vx_i64m2_m(mask, dest, op1, op2, vl);
}
/* { dg-final { scan-assembler {vnmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t(?: test_vnmsac_vx_i64m2_m )?} } } */
/* { dg-final { scan-assembler-not {vnmsac\.vx\s+(?:v[02468]|v[1-2][02468]|v30),(?: test_vnmsac_vx_i64m2_m )?} } } */

vint64m4_t 
test_vnmsac_vx_i64m4_m(vbool16_t mask, vint64m4_t dest, int64_t op1, vint64m4_t op2, size_t vl)
{
  return vnmsac_vx_i64m4_m(mask, dest, op1, op2, vl);
}
/* { dg-final { scan-assembler {vnmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t(?: test_vnmsac_vx_i64m4_m )?} } } */
/* { dg-final { scan-assembler-not {vnmsac\.vx\s+(?:v[048]|v1[26]|v2[048]),(?: test_vnmsac_vx_i64m4_m )?} } } */

vint64m8_t 
test_vnmsac_vx_i64m8_m(vbool8_t mask, vint64m8_t dest, int64_t op1, vint64m8_t op2, size_t vl)
{
  return vnmsac_vx_i64m8_m(mask, dest, op1, op2, vl);
}
/* { dg-final { scan-assembler {vnmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t(?: test_vnmsac_vx_i64m8_m )?} } } */
/* { dg-final { scan-assembler-not {vnmsac\.vx\s+(?:v[08]|v16|v24),(?: test_vnmsac_vx_i64m8_m )?} } } */
