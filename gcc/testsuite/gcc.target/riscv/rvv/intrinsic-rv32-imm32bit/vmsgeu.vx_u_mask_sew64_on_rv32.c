
/* { dg-do compile } */
/* { dg-additional-options "-std=c99 -pedantic-errors" } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv32*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vbool64_t 
test_vmsgeu_vx_u64m1_b64_m_0x7FFFFFFFull(vbool64_t mask, vbool64_t maskedoff, vuint64m1_t op1, size_t vl)
{
  return vmsgeu_vx_u64m1_b64_m(mask, maskedoff, op1, 0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmsgeu\.vv(?: test_vmsgeu_vx_u64m1_b64_m_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmsgeu\.vx(?: test_vmsgeu_vx_u64m1_b64_m_0x7FFFFFFFull )?} } } */

vbool64_t 
test_vmsgeu_vx_u64m1_b64_m_0xFFFFFFFF80000000ull(vbool64_t mask, vbool64_t maskedoff, vuint64m1_t op1, size_t vl)
{
  return vmsgeu_vx_u64m1_b64_m(mask, maskedoff, op1, 0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler-not {vmsgeu\.vv(?: test_vmsgeu_vx_u64m1_b64_m_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmsgeu\.vx(?: test_vmsgeu_vx_u64m1_b64_m_0xFFFFFFFF80000000ull )?} } } */

vbool64_t 
test_vmsgeu_vx_u64m1_b64_m_0xFFFFFFFFFFFFFFFFull(vbool64_t mask, vbool64_t maskedoff, vuint64m1_t op1, size_t vl)
{
  return vmsgeu_vx_u64m1_b64_m(mask, maskedoff, op1, 0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmsgeu\.vv(?: test_vmsgeu_vx_u64m1_b64_m_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmsgeu\.vx(?: test_vmsgeu_vx_u64m1_b64_m_0xFFFFFFFFFFFFFFFFull )?} } } */

vbool32_t 
test_vmsgeu_vx_u64m2_b32_m_0x7FFFFFFFull(vbool32_t mask, vbool32_t maskedoff, vuint64m2_t op1, size_t vl)
{
  return vmsgeu_vx_u64m2_b32_m(mask, maskedoff, op1, 0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmsgeu\.vv(?: test_vmsgeu_vx_u64m2_b32_m_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmsgeu\.vx(?: test_vmsgeu_vx_u64m2_b32_m_0x7FFFFFFFull )?} } } */

vbool32_t 
test_vmsgeu_vx_u64m2_b32_m_0xFFFFFFFF80000000ull(vbool32_t mask, vbool32_t maskedoff, vuint64m2_t op1, size_t vl)
{
  return vmsgeu_vx_u64m2_b32_m(mask, maskedoff, op1, 0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler-not {vmsgeu\.vv(?: test_vmsgeu_vx_u64m2_b32_m_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmsgeu\.vx(?: test_vmsgeu_vx_u64m2_b32_m_0xFFFFFFFF80000000ull )?} } } */

vbool32_t 
test_vmsgeu_vx_u64m2_b32_m_0xFFFFFFFFFFFFFFFFull(vbool32_t mask, vbool32_t maskedoff, vuint64m2_t op1, size_t vl)
{
  return vmsgeu_vx_u64m2_b32_m(mask, maskedoff, op1, 0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmsgeu\.vv(?: test_vmsgeu_vx_u64m2_b32_m_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmsgeu\.vx(?: test_vmsgeu_vx_u64m2_b32_m_0xFFFFFFFFFFFFFFFFull )?} } } */

vbool16_t 
test_vmsgeu_vx_u64m4_b16_m_0x7FFFFFFFull(vbool16_t mask, vbool16_t maskedoff, vuint64m4_t op1, size_t vl)
{
  return vmsgeu_vx_u64m4_b16_m(mask, maskedoff, op1, 0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmsgeu\.vv(?: test_vmsgeu_vx_u64m4_b16_m_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmsgeu\.vx(?: test_vmsgeu_vx_u64m4_b16_m_0x7FFFFFFFull )?} } } */

vbool16_t 
test_vmsgeu_vx_u64m4_b16_m_0xFFFFFFFF80000000ull(vbool16_t mask, vbool16_t maskedoff, vuint64m4_t op1, size_t vl)
{
  return vmsgeu_vx_u64m4_b16_m(mask, maskedoff, op1, 0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler-not {vmsgeu\.vv(?: test_vmsgeu_vx_u64m4_b16_m_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmsgeu\.vx(?: test_vmsgeu_vx_u64m4_b16_m_0xFFFFFFFF80000000ull )?} } } */

vbool16_t 
test_vmsgeu_vx_u64m4_b16_m_0xFFFFFFFFFFFFFFFFull(vbool16_t mask, vbool16_t maskedoff, vuint64m4_t op1, size_t vl)
{
  return vmsgeu_vx_u64m4_b16_m(mask, maskedoff, op1, 0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmsgeu\.vv(?: test_vmsgeu_vx_u64m4_b16_m_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmsgeu\.vx(?: test_vmsgeu_vx_u64m4_b16_m_0xFFFFFFFFFFFFFFFFull )?} } } */

vbool8_t 
test_vmsgeu_vx_u64m8_b8_m_0x7FFFFFFFull(vbool8_t mask, vbool8_t maskedoff, vuint64m8_t op1, size_t vl)
{
  return vmsgeu_vx_u64m8_b8_m(mask, maskedoff, op1, 0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmsgeu\.vv(?: test_vmsgeu_vx_u64m8_b8_m_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmsgeu\.vx(?: test_vmsgeu_vx_u64m8_b8_m_0x7FFFFFFFull )?} } } */

vbool8_t 
test_vmsgeu_vx_u64m8_b8_m_0xFFFFFFFF80000000ull(vbool8_t mask, vbool8_t maskedoff, vuint64m8_t op1, size_t vl)
{
  return vmsgeu_vx_u64m8_b8_m(mask, maskedoff, op1, 0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler-not {vmsgeu\.vv(?: test_vmsgeu_vx_u64m8_b8_m_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmsgeu\.vx(?: test_vmsgeu_vx_u64m8_b8_m_0xFFFFFFFF80000000ull )?} } } */

vbool8_t 
test_vmsgeu_vx_u64m8_b8_m_0xFFFFFFFFFFFFFFFFull(vbool8_t mask, vbool8_t maskedoff, vuint64m8_t op1, size_t vl)
{
  return vmsgeu_vx_u64m8_b8_m(mask, maskedoff, op1, 0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmsgeu\.vv(?: test_vmsgeu_vx_u64m8_b8_m_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmsgeu\.vx(?: test_vmsgeu_vx_u64m8_b8_m_0xFFFFFFFFFFFFFFFFull )?} } } */
