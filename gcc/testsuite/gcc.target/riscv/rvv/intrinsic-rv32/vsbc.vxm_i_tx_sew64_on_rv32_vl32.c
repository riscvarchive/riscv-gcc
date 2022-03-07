
/* { dg-do compile } */
/* { dg-additional-options "-std=c99 -pedantic-errors" } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv32*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vint64m1_t 
test_vsbc_vxm_i64m1_ta_vl32(vint64m1_t op1, int64_t op2, vbool64_t op3)
{
  return vsbc_vxm_i64m1_ta(op1, op2, op3, 32);
}
/* { dg-final { scan-assembler {vsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0(?: test_vsbc_vxm_i64m1_ta_vl32 )?} } } */
/* { dg-final { scan-assembler-not {vsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?: test_vsbc_vxm_i64m1_ta_vl32 )?} } } */

vint64m2_t 
test_vsbc_vxm_i64m2_ta_vl32(vint64m2_t op1, int64_t op2, vbool32_t op3)
{
  return vsbc_vxm_i64m2_ta(op1, op2, op3, 32);
}
/* { dg-final { scan-assembler {vsbc\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0(?: test_vsbc_vxm_i64m2_ta_vl32 )?} } } */
/* { dg-final { scan-assembler-not {vsbc\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),(?: test_vsbc_vxm_i64m2_ta_vl32 )?} } } */

vint64m4_t 
test_vsbc_vxm_i64m4_ta_vl32(vint64m4_t op1, int64_t op2, vbool16_t op3)
{
  return vsbc_vxm_i64m4_ta(op1, op2, op3, 32);
}
/* { dg-final { scan-assembler {vsbc\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0(?: test_vsbc_vxm_i64m4_ta_vl32 )?} } } */
/* { dg-final { scan-assembler-not {vsbc\.vxm\s+(?:v[048]|v1[26]|v2[048]),(?: test_vsbc_vxm_i64m4_ta_vl32 )?} } } */

vint64m8_t 
test_vsbc_vxm_i64m8_ta_vl32(vint64m8_t op1, int64_t op2, vbool8_t op3)
{
  return vsbc_vxm_i64m8_ta(op1, op2, op3, 32);
}
/* { dg-final { scan-assembler {vsbc\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0(?: test_vsbc_vxm_i64m8_ta_vl32 )?} } } */
/* { dg-final { scan-assembler-not {vsbc\.vxm\s+(?:v[08]|v16|v24),(?: test_vsbc_vxm_i64m8_ta_vl32 )?} } } */

vint64m1_t 
test_vsbc_vxm_i64m1_tu_vl32(vint64m1_t dest, vint64m1_t op1, int64_t op2, vbool64_t op3)
{
  return vsbc_vxm_i64m1_tu(dest, op1, op2, op3, 32);
}
/* { dg-final { scan-assembler {vsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0(?: test_vsbc_vxm_i64m1_tu_vl32 )?} } } */
/* { dg-final { scan-assembler-not {vsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?: test_vsbc_vxm_i64m1_tu_vl32 )?} } } */

vint64m2_t 
test_vsbc_vxm_i64m2_tu_vl32(vint64m2_t dest, vint64m2_t op1, int64_t op2, vbool32_t op3)
{
  return vsbc_vxm_i64m2_tu(dest, op1, op2, op3, 32);
}
/* { dg-final { scan-assembler {vsbc\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0(?: test_vsbc_vxm_i64m2_tu_vl32 )?} } } */
/* { dg-final { scan-assembler-not {vsbc\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),(?: test_vsbc_vxm_i64m2_tu_vl32 )?} } } */

vint64m4_t 
test_vsbc_vxm_i64m4_tu_vl32(vint64m4_t dest, vint64m4_t op1, int64_t op2, vbool16_t op3)
{
  return vsbc_vxm_i64m4_tu(dest, op1, op2, op3, 32);
}
/* { dg-final { scan-assembler {vsbc\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0(?: test_vsbc_vxm_i64m4_tu_vl32 )?} } } */
/* { dg-final { scan-assembler-not {vsbc\.vxm\s+(?:v[048]|v1[26]|v2[048]),(?: test_vsbc_vxm_i64m4_tu_vl32 )?} } } */

vint64m8_t 
test_vsbc_vxm_i64m8_tu_vl32(vint64m8_t dest, vint64m8_t op1, int64_t op2, vbool8_t op3)
{
  return vsbc_vxm_i64m8_tu(dest, op1, op2, op3, 32);
}
/* { dg-final { scan-assembler {vsbc\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0(?: test_vsbc_vxm_i64m8_tu_vl32 )?} } } */
/* { dg-final { scan-assembler-not {vsbc\.vxm\s+(?:v[08]|v16|v24),(?: test_vsbc_vxm_i64m8_tu_vl32 )?} } } */
