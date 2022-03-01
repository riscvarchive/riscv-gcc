
/* { dg-do compile } */
/* { dg-additional-options "-std=c99 -pedantic-errors" } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv32*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vbool64_t 
test_vmseq_vx_i64m1_b64_0x7FFFFFFFll(vint64m1_t op1, size_t vl)
{
  return vmseq_vx_i64m1_b64(op1, 0x7FFFFFFFll, vl);
}
/* { dg-final { scan-assembler-not {vmseq\.vv(?: test_vmseq_vx_i64m1_b64_0x7FFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmseq\.vx(?: test_vmseq_vx_i64m1_b64_0x7FFFFFFFll )?} } } */

vbool64_t 
test_vmseq_vx_i64m1_b64_0xFFFFFFFF80000000ll(vint64m1_t op1, size_t vl)
{
  return vmseq_vx_i64m1_b64(op1, 0xFFFFFFFF80000000ll, vl);
}
/* { dg-final { scan-assembler-not {vmseq\.vv(?: test_vmseq_vx_i64m1_b64_0xFFFFFFFF80000000ll )?} } } */
/* { dg-final { scan-assembler {vmseq\.vx(?: test_vmseq_vx_i64m1_b64_0xFFFFFFFF80000000ll )?} } } */

vbool64_t 
test_vmseq_vx_i64m1_b64_0xFFFFFFFFFFFFFFFFll(vint64m1_t op1, size_t vl)
{
  return vmseq_vx_i64m1_b64(op1, 0xFFFFFFFFFFFFFFFFll, vl);
}
/* { dg-final { scan-assembler-not {vmseq\.vv(?: test_vmseq_vx_i64m1_b64_0xFFFFFFFFFFFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmseq\.vx(?: test_vmseq_vx_i64m1_b64_0xFFFFFFFFFFFFFFFFll )?} } } */

vbool32_t 
test_vmseq_vx_i64m2_b32_0x7FFFFFFFll(vint64m2_t op1, size_t vl)
{
  return vmseq_vx_i64m2_b32(op1, 0x7FFFFFFFll, vl);
}
/* { dg-final { scan-assembler-not {vmseq\.vv(?: test_vmseq_vx_i64m2_b32_0x7FFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmseq\.vx(?: test_vmseq_vx_i64m2_b32_0x7FFFFFFFll )?} } } */

vbool32_t 
test_vmseq_vx_i64m2_b32_0xFFFFFFFF80000000ll(vint64m2_t op1, size_t vl)
{
  return vmseq_vx_i64m2_b32(op1, 0xFFFFFFFF80000000ll, vl);
}
/* { dg-final { scan-assembler-not {vmseq\.vv(?: test_vmseq_vx_i64m2_b32_0xFFFFFFFF80000000ll )?} } } */
/* { dg-final { scan-assembler {vmseq\.vx(?: test_vmseq_vx_i64m2_b32_0xFFFFFFFF80000000ll )?} } } */

vbool32_t 
test_vmseq_vx_i64m2_b32_0xFFFFFFFFFFFFFFFFll(vint64m2_t op1, size_t vl)
{
  return vmseq_vx_i64m2_b32(op1, 0xFFFFFFFFFFFFFFFFll, vl);
}
/* { dg-final { scan-assembler-not {vmseq\.vv(?: test_vmseq_vx_i64m2_b32_0xFFFFFFFFFFFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmseq\.vx(?: test_vmseq_vx_i64m2_b32_0xFFFFFFFFFFFFFFFFll )?} } } */

vbool16_t 
test_vmseq_vx_i64m4_b16_0x7FFFFFFFll(vint64m4_t op1, size_t vl)
{
  return vmseq_vx_i64m4_b16(op1, 0x7FFFFFFFll, vl);
}
/* { dg-final { scan-assembler-not {vmseq\.vv(?: test_vmseq_vx_i64m4_b16_0x7FFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmseq\.vx(?: test_vmseq_vx_i64m4_b16_0x7FFFFFFFll )?} } } */

vbool16_t 
test_vmseq_vx_i64m4_b16_0xFFFFFFFF80000000ll(vint64m4_t op1, size_t vl)
{
  return vmseq_vx_i64m4_b16(op1, 0xFFFFFFFF80000000ll, vl);
}
/* { dg-final { scan-assembler-not {vmseq\.vv(?: test_vmseq_vx_i64m4_b16_0xFFFFFFFF80000000ll )?} } } */
/* { dg-final { scan-assembler {vmseq\.vx(?: test_vmseq_vx_i64m4_b16_0xFFFFFFFF80000000ll )?} } } */

vbool16_t 
test_vmseq_vx_i64m4_b16_0xFFFFFFFFFFFFFFFFll(vint64m4_t op1, size_t vl)
{
  return vmseq_vx_i64m4_b16(op1, 0xFFFFFFFFFFFFFFFFll, vl);
}
/* { dg-final { scan-assembler-not {vmseq\.vv(?: test_vmseq_vx_i64m4_b16_0xFFFFFFFFFFFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmseq\.vx(?: test_vmseq_vx_i64m4_b16_0xFFFFFFFFFFFFFFFFll )?} } } */

vbool8_t 
test_vmseq_vx_i64m8_b8_0x7FFFFFFFll(vint64m8_t op1, size_t vl)
{
  return vmseq_vx_i64m8_b8(op1, 0x7FFFFFFFll, vl);
}
/* { dg-final { scan-assembler-not {vmseq\.vv(?: test_vmseq_vx_i64m8_b8_0x7FFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmseq\.vx(?: test_vmseq_vx_i64m8_b8_0x7FFFFFFFll )?} } } */

vbool8_t 
test_vmseq_vx_i64m8_b8_0xFFFFFFFF80000000ll(vint64m8_t op1, size_t vl)
{
  return vmseq_vx_i64m8_b8(op1, 0xFFFFFFFF80000000ll, vl);
}
/* { dg-final { scan-assembler-not {vmseq\.vv(?: test_vmseq_vx_i64m8_b8_0xFFFFFFFF80000000ll )?} } } */
/* { dg-final { scan-assembler {vmseq\.vx(?: test_vmseq_vx_i64m8_b8_0xFFFFFFFF80000000ll )?} } } */

vbool8_t 
test_vmseq_vx_i64m8_b8_0xFFFFFFFFFFFFFFFFll(vint64m8_t op1, size_t vl)
{
  return vmseq_vx_i64m8_b8(op1, 0xFFFFFFFFFFFFFFFFll, vl);
}
/* { dg-final { scan-assembler-not {vmseq\.vv(?: test_vmseq_vx_i64m8_b8_0xFFFFFFFFFFFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmseq\.vx(?: test_vmseq_vx_i64m8_b8_0xFFFFFFFFFFFFFFFFll )?} } } */
