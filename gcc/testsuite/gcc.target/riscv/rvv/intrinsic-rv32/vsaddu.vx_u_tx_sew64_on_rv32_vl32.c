
/* { dg-do compile } */
/* { dg-additional-options "-std=c99 -pedantic-errors" } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv32*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vuint64m1_t 
test_vsaddu_vx_u64m1_ta_vl32(vuint64m1_t op1, uint64_t op2)
{
  return vsaddu_vx_u64m1_ta(op1, op2, 32);
}
/* { dg-final { scan-assembler {vsaddu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])(?: test_vsaddu_vx_u64m1_ta_vl32 )?} } } */
/* { dg-final { scan-assembler-not {vsaddu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?: test_vsaddu_vx_u64m1_ta_vl32 )?} } } */

vuint64m2_t 
test_vsaddu_vx_u64m2_ta_vl32(vuint64m2_t op1, uint64_t op2)
{
  return vsaddu_vx_u64m2_ta(op1, op2, 32);
}
/* { dg-final { scan-assembler {vsaddu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)(?: test_vsaddu_vx_u64m2_ta_vl32 )?} } } */
/* { dg-final { scan-assembler-not {vsaddu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),(?: test_vsaddu_vx_u64m2_ta_vl32 )?} } } */

vuint64m4_t 
test_vsaddu_vx_u64m4_ta_vl32(vuint64m4_t op1, uint64_t op2)
{
  return vsaddu_vx_u64m4_ta(op1, op2, 32);
}
/* { dg-final { scan-assembler {vsaddu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])(?: test_vsaddu_vx_u64m4_ta_vl32 )?} } } */
/* { dg-final { scan-assembler-not {vsaddu\.vx\s+(?:v[048]|v1[26]|v2[048]),(?: test_vsaddu_vx_u64m4_ta_vl32 )?} } } */

vuint64m8_t 
test_vsaddu_vx_u64m8_ta_vl32(vuint64m8_t op1, uint64_t op2)
{
  return vsaddu_vx_u64m8_ta(op1, op2, 32);
}
/* { dg-final { scan-assembler {vsaddu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)(?: test_vsaddu_vx_u64m8_ta_vl32 )?} } } */
/* { dg-final { scan-assembler-not {vsaddu\.vx\s+(?:v[08]|v16|v24),(?: test_vsaddu_vx_u64m8_ta_vl32 )?} } } */

vuint64m1_t 
test_vsaddu_vx_u64m1_tu_vl32(vuint64m1_t dest, vuint64m1_t op1, uint64_t op2)
{
  return vsaddu_vx_u64m1_tu(dest, op1, op2, 32);
}
/* { dg-final { scan-assembler {vsaddu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])(?: test_vsaddu_vx_u64m1_tu_vl32 )?} } } */
/* { dg-final { scan-assembler-not {vsaddu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?: test_vsaddu_vx_u64m1_tu_vl32 )?} } } */

vuint64m2_t 
test_vsaddu_vx_u64m2_tu_vl32(vuint64m2_t dest, vuint64m2_t op1, uint64_t op2)
{
  return vsaddu_vx_u64m2_tu(dest, op1, op2, 32);
}
/* { dg-final { scan-assembler {vsaddu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)(?: test_vsaddu_vx_u64m2_tu_vl32 )?} } } */
/* { dg-final { scan-assembler-not {vsaddu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),(?: test_vsaddu_vx_u64m2_tu_vl32 )?} } } */

vuint64m4_t 
test_vsaddu_vx_u64m4_tu_vl32(vuint64m4_t dest, vuint64m4_t op1, uint64_t op2)
{
  return vsaddu_vx_u64m4_tu(dest, op1, op2, 32);
}
/* { dg-final { scan-assembler {vsaddu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])(?: test_vsaddu_vx_u64m4_tu_vl32 )?} } } */
/* { dg-final { scan-assembler-not {vsaddu\.vx\s+(?:v[048]|v1[26]|v2[048]),(?: test_vsaddu_vx_u64m4_tu_vl32 )?} } } */

vuint64m8_t 
test_vsaddu_vx_u64m8_tu_vl32(vuint64m8_t dest, vuint64m8_t op1, uint64_t op2)
{
  return vsaddu_vx_u64m8_tu(dest, op1, op2, 32);
}
/* { dg-final { scan-assembler {vsaddu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)(?: test_vsaddu_vx_u64m8_tu_vl32 )?} } } */
/* { dg-final { scan-assembler-not {vsaddu\.vx\s+(?:v[08]|v16|v24),(?: test_vsaddu_vx_u64m8_tu_vl32 )?} } } */
