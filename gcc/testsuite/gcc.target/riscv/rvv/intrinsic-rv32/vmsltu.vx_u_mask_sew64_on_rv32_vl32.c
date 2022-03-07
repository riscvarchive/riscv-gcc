
/* { dg-do compile } */
/* { dg-additional-options "-std=c99 -pedantic-errors" } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv32*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vbool64_t 
test_vmsltu_vx_u64m1_b64_m_vl32(vbool64_t mask, vbool64_t maskedoff, vuint64m1_t op1, uint64_t op2)
{
  return vmsltu_vx_u64m1_b64_m(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler {vmsltu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t(?: test_vmsltu_vx_u64m1_b64_m_vl32 )?} } } */
/* { dg-final { scan-assembler-not {vmsltu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?: test_vmsltu_vx_u64m1_b64_m_vl32 )?} } } */

vbool32_t 
test_vmsltu_vx_u64m2_b32_m_vl32(vbool32_t mask, vbool32_t maskedoff, vuint64m2_t op1, uint64_t op2)
{
  return vmsltu_vx_u64m2_b32_m(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler {vmsltu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t(?: test_vmsltu_vx_u64m2_b32_m_vl32 )?} } } */
/* { dg-final { scan-assembler-not {vmsltu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?: test_vmsltu_vx_u64m2_b32_m_vl32 )?} } } */

vbool16_t 
test_vmsltu_vx_u64m4_b16_m_vl32(vbool16_t mask, vbool16_t maskedoff, vuint64m4_t op1, uint64_t op2)
{
  return vmsltu_vx_u64m4_b16_m(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler {vmsltu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t(?: test_vmsltu_vx_u64m4_b16_m_vl32 )?} } } */
/* { dg-final { scan-assembler-not {vmsltu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?: test_vmsltu_vx_u64m4_b16_m_vl32 )?} } } */

vbool8_t 
test_vmsltu_vx_u64m8_b8_m_vl32(vbool8_t mask, vbool8_t maskedoff, vuint64m8_t op1, uint64_t op2)
{
  return vmsltu_vx_u64m8_b8_m(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler {vmsltu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t(?: test_vmsltu_vx_u64m8_b8_m_vl32 )?} } } */
/* { dg-final { scan-assembler-not {vmsltu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?: test_vmsltu_vx_u64m8_b8_m_vl32 )?} } } */
