
/* { dg-do compile } */
/* { dg-additional-options "-std=c99 -pedantic-errors" } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv32*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vint64m1_t 
test_vsmul_vx_i64m1(vint64m1_t op1, int64_t op2, size_t vl)
{
  return vsmul_vx_i64m1(op1, op2, vl);
}
/* { dg-final { scan-assembler {vsmul\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])(?: test_vsmul_vx_i64m1 )?} } } */
/* { dg-final { scan-assembler-not {vsmul\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?: test_vsmul_vx_i64m1 )?} } } */

vint64m2_t 
test_vsmul_vx_i64m2(vint64m2_t op1, int64_t op2, size_t vl)
{
  return vsmul_vx_i64m2(op1, op2, vl);
}
/* { dg-final { scan-assembler {vsmul\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)(?: test_vsmul_vx_i64m2 )?} } } */
/* { dg-final { scan-assembler-not {vsmul\.vx\s+(?:v[02468]|v[1-2][02468]|v30),(?: test_vsmul_vx_i64m2 )?} } } */

vint64m4_t 
test_vsmul_vx_i64m4(vint64m4_t op1, int64_t op2, size_t vl)
{
  return vsmul_vx_i64m4(op1, op2, vl);
}
/* { dg-final { scan-assembler {vsmul\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])(?: test_vsmul_vx_i64m4 )?} } } */
/* { dg-final { scan-assembler-not {vsmul\.vx\s+(?:v[048]|v1[26]|v2[048]),(?: test_vsmul_vx_i64m4 )?} } } */

vint64m8_t 
test_vsmul_vx_i64m8(vint64m8_t op1, int64_t op2, size_t vl)
{
  return vsmul_vx_i64m8(op1, op2, vl);
}
/* { dg-final { scan-assembler {vsmul\.vv\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)(?: test_vsmul_vx_i64m8 )?} } } */
/* { dg-final { scan-assembler-not {vsmul\.vx\s+(?:v[08]|v16|v24),(?: test_vsmul_vx_i64m8 )?} } } */
