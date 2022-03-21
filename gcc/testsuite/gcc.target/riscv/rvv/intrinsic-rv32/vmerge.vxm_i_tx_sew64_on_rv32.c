
/* { dg-do compile } */
/* { dg-additional-options "-std=c99 -pedantic-errors" } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv32*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vint64m1_t 
test_vmerge_vxm_i64m1_ta(vbool64_t mask, vint64m1_t op1, int64_t op2, size_t vl)
{
  return vmerge_vxm_i64m1_ta(mask, op1, op2, vl);
}
/* { dg-final { scan-assembler {vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0(?: test_vmerge_vxm_i64m1_ta )?} } } */

vint64m2_t 
test_vmerge_vxm_i64m2_ta(vbool32_t mask, vint64m2_t op1, int64_t op2, size_t vl)
{
  return vmerge_vxm_i64m2_ta(mask, op1, op2, vl);
}
/* { dg-final { scan-assembler {vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0(?: test_vmerge_vxm_i64m2_ta )?} } } */

vint64m4_t 
test_vmerge_vxm_i64m4_ta(vbool16_t mask, vint64m4_t op1, int64_t op2, size_t vl)
{
  return vmerge_vxm_i64m4_ta(mask, op1, op2, vl);
}
/* { dg-final { scan-assembler {vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0(?: test_vmerge_vxm_i64m4_ta )?} } } */

vint64m8_t 
test_vmerge_vxm_i64m8_ta(vbool8_t mask, vint64m8_t op1, int64_t op2, size_t vl)
{
  return vmerge_vxm_i64m8_ta(mask, op1, op2, vl);
}
/* { dg-final { scan-assembler {vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0(?: test_vmerge_vxm_i64m8_ta )?} } } */

vint64m1_t 
test_vmerge_vxm_i64m1_tu(vint64m1_t dest, vbool64_t mask, vint64m1_t op1, int64_t op2, size_t vl)
{
  return vmerge_vxm_i64m1_tu(mask, dest, op1, op2, vl);
}
/* { dg-final { scan-assembler {vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0(?: test_vmerge_vxm_i64m1_tu )?} } } */

vint64m2_t 
test_vmerge_vxm_i64m2_tu(vint64m2_t dest, vbool32_t mask, vint64m2_t op1, int64_t op2, size_t vl)
{
  return vmerge_vxm_i64m2_tu(mask, dest, op1, op2, vl);
}
/* { dg-final { scan-assembler {vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0(?: test_vmerge_vxm_i64m2_tu )?} } } */

vint64m4_t 
test_vmerge_vxm_i64m4_tu(vint64m4_t dest, vbool16_t mask, vint64m4_t op1, int64_t op2, size_t vl)
{
  return vmerge_vxm_i64m4_tu(mask, dest, op1, op2, vl);
}
/* { dg-final { scan-assembler {vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0(?: test_vmerge_vxm_i64m4_tu )?} } } */

vint64m8_t 
test_vmerge_vxm_i64m8_tu(vint64m8_t dest, vbool8_t mask, vint64m8_t op1, int64_t op2, size_t vl)
{
  return vmerge_vxm_i64m8_tu(mask, dest, op1, op2, vl);
}
/* { dg-final { scan-assembler {vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0(?: test_vmerge_vxm_i64m8_tu )?} } } */
