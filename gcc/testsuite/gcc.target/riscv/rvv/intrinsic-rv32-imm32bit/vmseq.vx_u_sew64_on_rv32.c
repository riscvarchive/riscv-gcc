
/* { dg-do compile } */
/* { dg-additional-options "-std=c99 -pedantic-errors" } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv32*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vbool64_t 
test_vmseq_vx_u64m1_b64_0x7FFFFFFFull(vuint64m1_t op1, size_t vl)
{
  return vmseq_vx_u64m1_b64(op1, 0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmseq\.vv(?: test_vmseq_vx_u64m1_b64_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmseq\.vx(?: test_vmseq_vx_u64m1_b64_0x7FFFFFFFull )?} } } */

vbool64_t 
test_vmseq_vx_u64m1_b64_0xFFFFFFFF80000000ull(vuint64m1_t op1, size_t vl)
{
  return vmseq_vx_u64m1_b64(op1, 0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler-not {vmseq\.vv(?: test_vmseq_vx_u64m1_b64_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmseq\.vx(?: test_vmseq_vx_u64m1_b64_0xFFFFFFFF80000000ull )?} } } */

vbool64_t 
test_vmseq_vx_u64m1_b64_0xFFFFFFFFFFFFFFFFull(vuint64m1_t op1, size_t vl)
{
  return vmseq_vx_u64m1_b64(op1, 0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmseq\.vv(?: test_vmseq_vx_u64m1_b64_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmseq\.vx(?: test_vmseq_vx_u64m1_b64_0xFFFFFFFFFFFFFFFFull )?} } } */

vbool32_t 
test_vmseq_vx_u64m2_b32_0x7FFFFFFFull(vuint64m2_t op1, size_t vl)
{
  return vmseq_vx_u64m2_b32(op1, 0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmseq\.vv(?: test_vmseq_vx_u64m2_b32_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmseq\.vx(?: test_vmseq_vx_u64m2_b32_0x7FFFFFFFull )?} } } */

vbool32_t 
test_vmseq_vx_u64m2_b32_0xFFFFFFFF80000000ull(vuint64m2_t op1, size_t vl)
{
  return vmseq_vx_u64m2_b32(op1, 0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler-not {vmseq\.vv(?: test_vmseq_vx_u64m2_b32_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmseq\.vx(?: test_vmseq_vx_u64m2_b32_0xFFFFFFFF80000000ull )?} } } */

vbool32_t 
test_vmseq_vx_u64m2_b32_0xFFFFFFFFFFFFFFFFull(vuint64m2_t op1, size_t vl)
{
  return vmseq_vx_u64m2_b32(op1, 0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmseq\.vv(?: test_vmseq_vx_u64m2_b32_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmseq\.vx(?: test_vmseq_vx_u64m2_b32_0xFFFFFFFFFFFFFFFFull )?} } } */

vbool16_t 
test_vmseq_vx_u64m4_b16_0x7FFFFFFFull(vuint64m4_t op1, size_t vl)
{
  return vmseq_vx_u64m4_b16(op1, 0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmseq\.vv(?: test_vmseq_vx_u64m4_b16_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmseq\.vx(?: test_vmseq_vx_u64m4_b16_0x7FFFFFFFull )?} } } */

vbool16_t 
test_vmseq_vx_u64m4_b16_0xFFFFFFFF80000000ull(vuint64m4_t op1, size_t vl)
{
  return vmseq_vx_u64m4_b16(op1, 0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler-not {vmseq\.vv(?: test_vmseq_vx_u64m4_b16_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmseq\.vx(?: test_vmseq_vx_u64m4_b16_0xFFFFFFFF80000000ull )?} } } */

vbool16_t 
test_vmseq_vx_u64m4_b16_0xFFFFFFFFFFFFFFFFull(vuint64m4_t op1, size_t vl)
{
  return vmseq_vx_u64m4_b16(op1, 0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmseq\.vv(?: test_vmseq_vx_u64m4_b16_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmseq\.vx(?: test_vmseq_vx_u64m4_b16_0xFFFFFFFFFFFFFFFFull )?} } } */

vbool8_t 
test_vmseq_vx_u64m8_b8_0x7FFFFFFFull(vuint64m8_t op1, size_t vl)
{
  return vmseq_vx_u64m8_b8(op1, 0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmseq\.vv(?: test_vmseq_vx_u64m8_b8_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmseq\.vx(?: test_vmseq_vx_u64m8_b8_0x7FFFFFFFull )?} } } */

vbool8_t 
test_vmseq_vx_u64m8_b8_0xFFFFFFFF80000000ull(vuint64m8_t op1, size_t vl)
{
  return vmseq_vx_u64m8_b8(op1, 0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler-not {vmseq\.vv(?: test_vmseq_vx_u64m8_b8_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmseq\.vx(?: test_vmseq_vx_u64m8_b8_0xFFFFFFFF80000000ull )?} } } */

vbool8_t 
test_vmseq_vx_u64m8_b8_0xFFFFFFFFFFFFFFFFull(vuint64m8_t op1, size_t vl)
{
  return vmseq_vx_u64m8_b8(op1, 0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmseq\.vv(?: test_vmseq_vx_u64m8_b8_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmseq\.vx(?: test_vmseq_vx_u64m8_b8_0xFFFFFFFFFFFFFFFFull )?} } } */
