
/* { dg-do compile } */
/* { dg-additional-options "-std=c99 -pedantic-errors" } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv32*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vint64m1_t 
test_vmulh_vx_i64m1_m_0x7FFFFFFFll(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, size_t vl)
{
  return vmulh_vx_i64m1_m(mask, maskedoff, op1, 0x7FFFFFFFll, vl);
}
/* { dg-final { scan-assembler-not {vmulh\.vv(?: test_vmulh_vx_i64m1_m_0x7FFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmulh\.vx(?: test_vmulh_vx_i64m1_m_0x7FFFFFFFll )?} } } */

vint64m1_t 
test_vmulh_vx_i64m1_m_0xFFFFFFFF80000000ll(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, size_t vl)
{
  return vmulh_vx_i64m1_m(mask, maskedoff, op1, 0xFFFFFFFF80000000ll, vl);
}
/* { dg-final { scan-assembler-not {vmulh\.vv(?: test_vmulh_vx_i64m1_m_0xFFFFFFFF80000000ll )?} } } */
/* { dg-final { scan-assembler {vmulh\.vx(?: test_vmulh_vx_i64m1_m_0xFFFFFFFF80000000ll )?} } } */

vint64m1_t 
test_vmulh_vx_i64m1_m_0xFFFFFFFFFFFFFFFFll(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, size_t vl)
{
  return vmulh_vx_i64m1_m(mask, maskedoff, op1, 0xFFFFFFFFFFFFFFFFll, vl);
}
/* { dg-final { scan-assembler-not {vmulh\.vv(?: test_vmulh_vx_i64m1_m_0xFFFFFFFFFFFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmulh\.vx(?: test_vmulh_vx_i64m1_m_0xFFFFFFFFFFFFFFFFll )?} } } */

vint64m2_t 
test_vmulh_vx_i64m2_m_0x7FFFFFFFll(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, size_t vl)
{
  return vmulh_vx_i64m2_m(mask, maskedoff, op1, 0x7FFFFFFFll, vl);
}
/* { dg-final { scan-assembler-not {vmulh\.vv(?: test_vmulh_vx_i64m2_m_0x7FFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmulh\.vx(?: test_vmulh_vx_i64m2_m_0x7FFFFFFFll )?} } } */

vint64m2_t 
test_vmulh_vx_i64m2_m_0xFFFFFFFF80000000ll(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, size_t vl)
{
  return vmulh_vx_i64m2_m(mask, maskedoff, op1, 0xFFFFFFFF80000000ll, vl);
}
/* { dg-final { scan-assembler-not {vmulh\.vv(?: test_vmulh_vx_i64m2_m_0xFFFFFFFF80000000ll )?} } } */
/* { dg-final { scan-assembler {vmulh\.vx(?: test_vmulh_vx_i64m2_m_0xFFFFFFFF80000000ll )?} } } */

vint64m2_t 
test_vmulh_vx_i64m2_m_0xFFFFFFFFFFFFFFFFll(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, size_t vl)
{
  return vmulh_vx_i64m2_m(mask, maskedoff, op1, 0xFFFFFFFFFFFFFFFFll, vl);
}
/* { dg-final { scan-assembler-not {vmulh\.vv(?: test_vmulh_vx_i64m2_m_0xFFFFFFFFFFFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmulh\.vx(?: test_vmulh_vx_i64m2_m_0xFFFFFFFFFFFFFFFFll )?} } } */

vint64m4_t 
test_vmulh_vx_i64m4_m_0x7FFFFFFFll(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, size_t vl)
{
  return vmulh_vx_i64m4_m(mask, maskedoff, op1, 0x7FFFFFFFll, vl);
}
/* { dg-final { scan-assembler-not {vmulh\.vv(?: test_vmulh_vx_i64m4_m_0x7FFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmulh\.vx(?: test_vmulh_vx_i64m4_m_0x7FFFFFFFll )?} } } */

vint64m4_t 
test_vmulh_vx_i64m4_m_0xFFFFFFFF80000000ll(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, size_t vl)
{
  return vmulh_vx_i64m4_m(mask, maskedoff, op1, 0xFFFFFFFF80000000ll, vl);
}
/* { dg-final { scan-assembler-not {vmulh\.vv(?: test_vmulh_vx_i64m4_m_0xFFFFFFFF80000000ll )?} } } */
/* { dg-final { scan-assembler {vmulh\.vx(?: test_vmulh_vx_i64m4_m_0xFFFFFFFF80000000ll )?} } } */

vint64m4_t 
test_vmulh_vx_i64m4_m_0xFFFFFFFFFFFFFFFFll(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, size_t vl)
{
  return vmulh_vx_i64m4_m(mask, maskedoff, op1, 0xFFFFFFFFFFFFFFFFll, vl);
}
/* { dg-final { scan-assembler-not {vmulh\.vv(?: test_vmulh_vx_i64m4_m_0xFFFFFFFFFFFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmulh\.vx(?: test_vmulh_vx_i64m4_m_0xFFFFFFFFFFFFFFFFll )?} } } */

vint64m8_t 
test_vmulh_vx_i64m8_m_0x7FFFFFFFll(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, size_t vl)
{
  return vmulh_vx_i64m8_m(mask, maskedoff, op1, 0x7FFFFFFFll, vl);
}
/* { dg-final { scan-assembler-not {vmulh\.vv(?: test_vmulh_vx_i64m8_m_0x7FFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmulh\.vx(?: test_vmulh_vx_i64m8_m_0x7FFFFFFFll )?} } } */

vint64m8_t 
test_vmulh_vx_i64m8_m_0xFFFFFFFF80000000ll(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, size_t vl)
{
  return vmulh_vx_i64m8_m(mask, maskedoff, op1, 0xFFFFFFFF80000000ll, vl);
}
/* { dg-final { scan-assembler-not {vmulh\.vv(?: test_vmulh_vx_i64m8_m_0xFFFFFFFF80000000ll )?} } } */
/* { dg-final { scan-assembler {vmulh\.vx(?: test_vmulh_vx_i64m8_m_0xFFFFFFFF80000000ll )?} } } */

vint64m8_t 
test_vmulh_vx_i64m8_m_0xFFFFFFFFFFFFFFFFll(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, size_t vl)
{
  return vmulh_vx_i64m8_m(mask, maskedoff, op1, 0xFFFFFFFFFFFFFFFFll, vl);
}
/* { dg-final { scan-assembler-not {vmulh\.vv(?: test_vmulh_vx_i64m8_m_0xFFFFFFFFFFFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmulh\.vx(?: test_vmulh_vx_i64m8_m_0xFFFFFFFFFFFFFFFFll )?} } } */
