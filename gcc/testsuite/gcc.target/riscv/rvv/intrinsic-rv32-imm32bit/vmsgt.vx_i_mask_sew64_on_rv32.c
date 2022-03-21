
/* { dg-do compile } */
/* { dg-additional-options "-std=c99 -pedantic-errors" } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv32*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vbool64_t 
test_vmsgt_vx_i64m1_b64_m_0x7FFFFFFFll(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1, size_t vl)
{
  return vmsgt_vx_i64m1_b64_m(mask, maskedoff, op1, 0x7FFFFFFFll, vl);
}
/* { dg-final { scan-assembler-not {vmsgt\.vv(?: test_vmsgt_vx_i64m1_b64_m_0x7FFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmsgt\.vx(?: test_vmsgt_vx_i64m1_b64_m_0x7FFFFFFFll )?} } } */

vbool64_t 
test_vmsgt_vx_i64m1_b64_m_0xFFFFFFFF80000000ll(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1, size_t vl)
{
  return vmsgt_vx_i64m1_b64_m(mask, maskedoff, op1, 0xFFFFFFFF80000000ll, vl);
}
/* { dg-final { scan-assembler-not {vmsgt\.vv(?: test_vmsgt_vx_i64m1_b64_m_0xFFFFFFFF80000000ll )?} } } */
/* { dg-final { scan-assembler {vmsgt\.vx(?: test_vmsgt_vx_i64m1_b64_m_0xFFFFFFFF80000000ll )?} } } */

vbool64_t 
test_vmsgt_vx_i64m1_b64_m_0xFFFFFFFFFFFFFFFFll(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1, size_t vl)
{
  return vmsgt_vx_i64m1_b64_m(mask, maskedoff, op1, 0xFFFFFFFFFFFFFFFFll, vl);
}
/* { dg-final { scan-assembler-not {vmsgt\.vv(?: test_vmsgt_vx_i64m1_b64_m_0xFFFFFFFFFFFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmsgt\.vx(?: test_vmsgt_vx_i64m1_b64_m_0xFFFFFFFFFFFFFFFFll )?} } } */

vbool32_t 
test_vmsgt_vx_i64m2_b32_m_0x7FFFFFFFll(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1, size_t vl)
{
  return vmsgt_vx_i64m2_b32_m(mask, maskedoff, op1, 0x7FFFFFFFll, vl);
}
/* { dg-final { scan-assembler-not {vmsgt\.vv(?: test_vmsgt_vx_i64m2_b32_m_0x7FFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmsgt\.vx(?: test_vmsgt_vx_i64m2_b32_m_0x7FFFFFFFll )?} } } */

vbool32_t 
test_vmsgt_vx_i64m2_b32_m_0xFFFFFFFF80000000ll(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1, size_t vl)
{
  return vmsgt_vx_i64m2_b32_m(mask, maskedoff, op1, 0xFFFFFFFF80000000ll, vl);
}
/* { dg-final { scan-assembler-not {vmsgt\.vv(?: test_vmsgt_vx_i64m2_b32_m_0xFFFFFFFF80000000ll )?} } } */
/* { dg-final { scan-assembler {vmsgt\.vx(?: test_vmsgt_vx_i64m2_b32_m_0xFFFFFFFF80000000ll )?} } } */

vbool32_t 
test_vmsgt_vx_i64m2_b32_m_0xFFFFFFFFFFFFFFFFll(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1, size_t vl)
{
  return vmsgt_vx_i64m2_b32_m(mask, maskedoff, op1, 0xFFFFFFFFFFFFFFFFll, vl);
}
/* { dg-final { scan-assembler-not {vmsgt\.vv(?: test_vmsgt_vx_i64m2_b32_m_0xFFFFFFFFFFFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmsgt\.vx(?: test_vmsgt_vx_i64m2_b32_m_0xFFFFFFFFFFFFFFFFll )?} } } */

vbool16_t 
test_vmsgt_vx_i64m4_b16_m_0x7FFFFFFFll(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1, size_t vl)
{
  return vmsgt_vx_i64m4_b16_m(mask, maskedoff, op1, 0x7FFFFFFFll, vl);
}
/* { dg-final { scan-assembler-not {vmsgt\.vv(?: test_vmsgt_vx_i64m4_b16_m_0x7FFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmsgt\.vx(?: test_vmsgt_vx_i64m4_b16_m_0x7FFFFFFFll )?} } } */

vbool16_t 
test_vmsgt_vx_i64m4_b16_m_0xFFFFFFFF80000000ll(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1, size_t vl)
{
  return vmsgt_vx_i64m4_b16_m(mask, maskedoff, op1, 0xFFFFFFFF80000000ll, vl);
}
/* { dg-final { scan-assembler-not {vmsgt\.vv(?: test_vmsgt_vx_i64m4_b16_m_0xFFFFFFFF80000000ll )?} } } */
/* { dg-final { scan-assembler {vmsgt\.vx(?: test_vmsgt_vx_i64m4_b16_m_0xFFFFFFFF80000000ll )?} } } */

vbool16_t 
test_vmsgt_vx_i64m4_b16_m_0xFFFFFFFFFFFFFFFFll(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1, size_t vl)
{
  return vmsgt_vx_i64m4_b16_m(mask, maskedoff, op1, 0xFFFFFFFFFFFFFFFFll, vl);
}
/* { dg-final { scan-assembler-not {vmsgt\.vv(?: test_vmsgt_vx_i64m4_b16_m_0xFFFFFFFFFFFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmsgt\.vx(?: test_vmsgt_vx_i64m4_b16_m_0xFFFFFFFFFFFFFFFFll )?} } } */

vbool8_t 
test_vmsgt_vx_i64m8_b8_m_0x7FFFFFFFll(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1, size_t vl)
{
  return vmsgt_vx_i64m8_b8_m(mask, maskedoff, op1, 0x7FFFFFFFll, vl);
}
/* { dg-final { scan-assembler-not {vmsgt\.vv(?: test_vmsgt_vx_i64m8_b8_m_0x7FFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmsgt\.vx(?: test_vmsgt_vx_i64m8_b8_m_0x7FFFFFFFll )?} } } */

vbool8_t 
test_vmsgt_vx_i64m8_b8_m_0xFFFFFFFF80000000ll(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1, size_t vl)
{
  return vmsgt_vx_i64m8_b8_m(mask, maskedoff, op1, 0xFFFFFFFF80000000ll, vl);
}
/* { dg-final { scan-assembler-not {vmsgt\.vv(?: test_vmsgt_vx_i64m8_b8_m_0xFFFFFFFF80000000ll )?} } } */
/* { dg-final { scan-assembler {vmsgt\.vx(?: test_vmsgt_vx_i64m8_b8_m_0xFFFFFFFF80000000ll )?} } } */

vbool8_t 
test_vmsgt_vx_i64m8_b8_m_0xFFFFFFFFFFFFFFFFll(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1, size_t vl)
{
  return vmsgt_vx_i64m8_b8_m(mask, maskedoff, op1, 0xFFFFFFFFFFFFFFFFll, vl);
}
/* { dg-final { scan-assembler-not {vmsgt\.vv(?: test_vmsgt_vx_i64m8_b8_m_0xFFFFFFFFFFFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmsgt\.vx(?: test_vmsgt_vx_i64m8_b8_m_0xFFFFFFFFFFFFFFFFll )?} } } */
