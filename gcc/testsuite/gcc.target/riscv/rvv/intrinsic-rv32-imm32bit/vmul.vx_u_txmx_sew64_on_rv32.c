
/* { dg-do compile } */
/* { dg-additional-options "-std=c99 -pedantic-errors" } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv32*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vuint64m1_t 
test_vmul_vx_u64m1_tama_0x7FFFFFFFull(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, size_t vl)
{
  return vmul_vx_u64m1_tama(mask, op1, 0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmul\.vv(?: test_vmul_vx_u64m1_tama_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmul\.vx(?: test_vmul_vx_u64m1_tama_0x7FFFFFFFull )?} } } */

vuint64m1_t 
test_vmul_vx_u64m1_tama_0xFFFFFFFF80000000ull(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, size_t vl)
{
  return vmul_vx_u64m1_tama(mask, op1, 0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler-not {vmul\.vv(?: test_vmul_vx_u64m1_tama_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmul\.vx(?: test_vmul_vx_u64m1_tama_0xFFFFFFFF80000000ull )?} } } */

vuint64m1_t 
test_vmul_vx_u64m1_tama_0xFFFFFFFFFFFFFFFFull(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, size_t vl)
{
  return vmul_vx_u64m1_tama(mask, op1, 0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmul\.vv(?: test_vmul_vx_u64m1_tama_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmul\.vx(?: test_vmul_vx_u64m1_tama_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m2_t 
test_vmul_vx_u64m2_tama_0x7FFFFFFFull(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, size_t vl)
{
  return vmul_vx_u64m2_tama(mask, op1, 0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmul\.vv(?: test_vmul_vx_u64m2_tama_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmul\.vx(?: test_vmul_vx_u64m2_tama_0x7FFFFFFFull )?} } } */

vuint64m2_t 
test_vmul_vx_u64m2_tama_0xFFFFFFFF80000000ull(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, size_t vl)
{
  return vmul_vx_u64m2_tama(mask, op1, 0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler-not {vmul\.vv(?: test_vmul_vx_u64m2_tama_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmul\.vx(?: test_vmul_vx_u64m2_tama_0xFFFFFFFF80000000ull )?} } } */

vuint64m2_t 
test_vmul_vx_u64m2_tama_0xFFFFFFFFFFFFFFFFull(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, size_t vl)
{
  return vmul_vx_u64m2_tama(mask, op1, 0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmul\.vv(?: test_vmul_vx_u64m2_tama_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmul\.vx(?: test_vmul_vx_u64m2_tama_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m4_t 
test_vmul_vx_u64m4_tama_0x7FFFFFFFull(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, size_t vl)
{
  return vmul_vx_u64m4_tama(mask, op1, 0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmul\.vv(?: test_vmul_vx_u64m4_tama_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmul\.vx(?: test_vmul_vx_u64m4_tama_0x7FFFFFFFull )?} } } */

vuint64m4_t 
test_vmul_vx_u64m4_tama_0xFFFFFFFF80000000ull(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, size_t vl)
{
  return vmul_vx_u64m4_tama(mask, op1, 0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler-not {vmul\.vv(?: test_vmul_vx_u64m4_tama_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmul\.vx(?: test_vmul_vx_u64m4_tama_0xFFFFFFFF80000000ull )?} } } */

vuint64m4_t 
test_vmul_vx_u64m4_tama_0xFFFFFFFFFFFFFFFFull(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, size_t vl)
{
  return vmul_vx_u64m4_tama(mask, op1, 0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmul\.vv(?: test_vmul_vx_u64m4_tama_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmul\.vx(?: test_vmul_vx_u64m4_tama_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m8_t 
test_vmul_vx_u64m8_tama_0x7FFFFFFFull(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, size_t vl)
{
  return vmul_vx_u64m8_tama(mask, op1, 0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmul\.vv(?: test_vmul_vx_u64m8_tama_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmul\.vx(?: test_vmul_vx_u64m8_tama_0x7FFFFFFFull )?} } } */

vuint64m8_t 
test_vmul_vx_u64m8_tama_0xFFFFFFFF80000000ull(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, size_t vl)
{
  return vmul_vx_u64m8_tama(mask, op1, 0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler-not {vmul\.vv(?: test_vmul_vx_u64m8_tama_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmul\.vx(?: test_vmul_vx_u64m8_tama_0xFFFFFFFF80000000ull )?} } } */

vuint64m8_t 
test_vmul_vx_u64m8_tama_0xFFFFFFFFFFFFFFFFull(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, size_t vl)
{
  return vmul_vx_u64m8_tama(mask, op1, 0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmul\.vv(?: test_vmul_vx_u64m8_tama_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmul\.vx(?: test_vmul_vx_u64m8_tama_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m1_t 
test_vmul_vx_u64m1_tamu_0x7FFFFFFFull(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, size_t vl)
{
  return vmul_vx_u64m1_tamu(mask, maskedoff, op1, 0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmul\.vv(?: test_vmul_vx_u64m1_tamu_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmul\.vx(?: test_vmul_vx_u64m1_tamu_0x7FFFFFFFull )?} } } */

vuint64m1_t 
test_vmul_vx_u64m1_tamu_0xFFFFFFFF80000000ull(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, size_t vl)
{
  return vmul_vx_u64m1_tamu(mask, maskedoff, op1, 0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler-not {vmul\.vv(?: test_vmul_vx_u64m1_tamu_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmul\.vx(?: test_vmul_vx_u64m1_tamu_0xFFFFFFFF80000000ull )?} } } */

vuint64m1_t 
test_vmul_vx_u64m1_tamu_0xFFFFFFFFFFFFFFFFull(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, size_t vl)
{
  return vmul_vx_u64m1_tamu(mask, maskedoff, op1, 0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmul\.vv(?: test_vmul_vx_u64m1_tamu_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmul\.vx(?: test_vmul_vx_u64m1_tamu_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m2_t 
test_vmul_vx_u64m2_tamu_0x7FFFFFFFull(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, size_t vl)
{
  return vmul_vx_u64m2_tamu(mask, maskedoff, op1, 0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmul\.vv(?: test_vmul_vx_u64m2_tamu_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmul\.vx(?: test_vmul_vx_u64m2_tamu_0x7FFFFFFFull )?} } } */

vuint64m2_t 
test_vmul_vx_u64m2_tamu_0xFFFFFFFF80000000ull(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, size_t vl)
{
  return vmul_vx_u64m2_tamu(mask, maskedoff, op1, 0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler-not {vmul\.vv(?: test_vmul_vx_u64m2_tamu_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmul\.vx(?: test_vmul_vx_u64m2_tamu_0xFFFFFFFF80000000ull )?} } } */

vuint64m2_t 
test_vmul_vx_u64m2_tamu_0xFFFFFFFFFFFFFFFFull(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, size_t vl)
{
  return vmul_vx_u64m2_tamu(mask, maskedoff, op1, 0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmul\.vv(?: test_vmul_vx_u64m2_tamu_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmul\.vx(?: test_vmul_vx_u64m2_tamu_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m4_t 
test_vmul_vx_u64m4_tamu_0x7FFFFFFFull(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, size_t vl)
{
  return vmul_vx_u64m4_tamu(mask, maskedoff, op1, 0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmul\.vv(?: test_vmul_vx_u64m4_tamu_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmul\.vx(?: test_vmul_vx_u64m4_tamu_0x7FFFFFFFull )?} } } */

vuint64m4_t 
test_vmul_vx_u64m4_tamu_0xFFFFFFFF80000000ull(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, size_t vl)
{
  return vmul_vx_u64m4_tamu(mask, maskedoff, op1, 0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler-not {vmul\.vv(?: test_vmul_vx_u64m4_tamu_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmul\.vx(?: test_vmul_vx_u64m4_tamu_0xFFFFFFFF80000000ull )?} } } */

vuint64m4_t 
test_vmul_vx_u64m4_tamu_0xFFFFFFFFFFFFFFFFull(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, size_t vl)
{
  return vmul_vx_u64m4_tamu(mask, maskedoff, op1, 0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmul\.vv(?: test_vmul_vx_u64m4_tamu_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmul\.vx(?: test_vmul_vx_u64m4_tamu_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m8_t 
test_vmul_vx_u64m8_tamu_0x7FFFFFFFull(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, size_t vl)
{
  return vmul_vx_u64m8_tamu(mask, maskedoff, op1, 0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmul\.vv(?: test_vmul_vx_u64m8_tamu_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmul\.vx(?: test_vmul_vx_u64m8_tamu_0x7FFFFFFFull )?} } } */

vuint64m8_t 
test_vmul_vx_u64m8_tamu_0xFFFFFFFF80000000ull(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, size_t vl)
{
  return vmul_vx_u64m8_tamu(mask, maskedoff, op1, 0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler-not {vmul\.vv(?: test_vmul_vx_u64m8_tamu_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmul\.vx(?: test_vmul_vx_u64m8_tamu_0xFFFFFFFF80000000ull )?} } } */

vuint64m8_t 
test_vmul_vx_u64m8_tamu_0xFFFFFFFFFFFFFFFFull(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, size_t vl)
{
  return vmul_vx_u64m8_tamu(mask, maskedoff, op1, 0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmul\.vv(?: test_vmul_vx_u64m8_tamu_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmul\.vx(?: test_vmul_vx_u64m8_tamu_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m1_t 
test_vmul_vx_u64m1_tuma_0x7FFFFFFFull(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, size_t vl)
{
  return vmul_vx_u64m1_tuma(mask, maskedoff, op1, 0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmul\.vv(?: test_vmul_vx_u64m1_tuma_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmul\.vx(?: test_vmul_vx_u64m1_tuma_0x7FFFFFFFull )?} } } */

vuint64m1_t 
test_vmul_vx_u64m1_tuma_0xFFFFFFFF80000000ull(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, size_t vl)
{
  return vmul_vx_u64m1_tuma(mask, maskedoff, op1, 0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler-not {vmul\.vv(?: test_vmul_vx_u64m1_tuma_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmul\.vx(?: test_vmul_vx_u64m1_tuma_0xFFFFFFFF80000000ull )?} } } */

vuint64m1_t 
test_vmul_vx_u64m1_tuma_0xFFFFFFFFFFFFFFFFull(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, size_t vl)
{
  return vmul_vx_u64m1_tuma(mask, maskedoff, op1, 0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmul\.vv(?: test_vmul_vx_u64m1_tuma_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmul\.vx(?: test_vmul_vx_u64m1_tuma_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m2_t 
test_vmul_vx_u64m2_tuma_0x7FFFFFFFull(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, size_t vl)
{
  return vmul_vx_u64m2_tuma(mask, maskedoff, op1, 0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmul\.vv(?: test_vmul_vx_u64m2_tuma_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmul\.vx(?: test_vmul_vx_u64m2_tuma_0x7FFFFFFFull )?} } } */

vuint64m2_t 
test_vmul_vx_u64m2_tuma_0xFFFFFFFF80000000ull(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, size_t vl)
{
  return vmul_vx_u64m2_tuma(mask, maskedoff, op1, 0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler-not {vmul\.vv(?: test_vmul_vx_u64m2_tuma_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmul\.vx(?: test_vmul_vx_u64m2_tuma_0xFFFFFFFF80000000ull )?} } } */

vuint64m2_t 
test_vmul_vx_u64m2_tuma_0xFFFFFFFFFFFFFFFFull(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, size_t vl)
{
  return vmul_vx_u64m2_tuma(mask, maskedoff, op1, 0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmul\.vv(?: test_vmul_vx_u64m2_tuma_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmul\.vx(?: test_vmul_vx_u64m2_tuma_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m4_t 
test_vmul_vx_u64m4_tuma_0x7FFFFFFFull(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, size_t vl)
{
  return vmul_vx_u64m4_tuma(mask, maskedoff, op1, 0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmul\.vv(?: test_vmul_vx_u64m4_tuma_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmul\.vx(?: test_vmul_vx_u64m4_tuma_0x7FFFFFFFull )?} } } */

vuint64m4_t 
test_vmul_vx_u64m4_tuma_0xFFFFFFFF80000000ull(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, size_t vl)
{
  return vmul_vx_u64m4_tuma(mask, maskedoff, op1, 0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler-not {vmul\.vv(?: test_vmul_vx_u64m4_tuma_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmul\.vx(?: test_vmul_vx_u64m4_tuma_0xFFFFFFFF80000000ull )?} } } */

vuint64m4_t 
test_vmul_vx_u64m4_tuma_0xFFFFFFFFFFFFFFFFull(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, size_t vl)
{
  return vmul_vx_u64m4_tuma(mask, maskedoff, op1, 0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmul\.vv(?: test_vmul_vx_u64m4_tuma_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmul\.vx(?: test_vmul_vx_u64m4_tuma_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m8_t 
test_vmul_vx_u64m8_tuma_0x7FFFFFFFull(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, size_t vl)
{
  return vmul_vx_u64m8_tuma(mask, maskedoff, op1, 0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmul\.vv(?: test_vmul_vx_u64m8_tuma_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmul\.vx(?: test_vmul_vx_u64m8_tuma_0x7FFFFFFFull )?} } } */

vuint64m8_t 
test_vmul_vx_u64m8_tuma_0xFFFFFFFF80000000ull(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, size_t vl)
{
  return vmul_vx_u64m8_tuma(mask, maskedoff, op1, 0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler-not {vmul\.vv(?: test_vmul_vx_u64m8_tuma_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmul\.vx(?: test_vmul_vx_u64m8_tuma_0xFFFFFFFF80000000ull )?} } } */

vuint64m8_t 
test_vmul_vx_u64m8_tuma_0xFFFFFFFFFFFFFFFFull(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, size_t vl)
{
  return vmul_vx_u64m8_tuma(mask, maskedoff, op1, 0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmul\.vv(?: test_vmul_vx_u64m8_tuma_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmul\.vx(?: test_vmul_vx_u64m8_tuma_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m1_t 
test_vmul_vx_u64m1_tumu_0x7FFFFFFFull(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, size_t vl)
{
  return vmul_vx_u64m1_tumu(mask, maskedoff, op1, 0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmul\.vv(?: test_vmul_vx_u64m1_tumu_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmul\.vx(?: test_vmul_vx_u64m1_tumu_0x7FFFFFFFull )?} } } */

vuint64m1_t 
test_vmul_vx_u64m1_tumu_0xFFFFFFFF80000000ull(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, size_t vl)
{
  return vmul_vx_u64m1_tumu(mask, maskedoff, op1, 0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler-not {vmul\.vv(?: test_vmul_vx_u64m1_tumu_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmul\.vx(?: test_vmul_vx_u64m1_tumu_0xFFFFFFFF80000000ull )?} } } */

vuint64m1_t 
test_vmul_vx_u64m1_tumu_0xFFFFFFFFFFFFFFFFull(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, size_t vl)
{
  return vmul_vx_u64m1_tumu(mask, maskedoff, op1, 0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmul\.vv(?: test_vmul_vx_u64m1_tumu_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmul\.vx(?: test_vmul_vx_u64m1_tumu_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m2_t 
test_vmul_vx_u64m2_tumu_0x7FFFFFFFull(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, size_t vl)
{
  return vmul_vx_u64m2_tumu(mask, maskedoff, op1, 0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmul\.vv(?: test_vmul_vx_u64m2_tumu_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmul\.vx(?: test_vmul_vx_u64m2_tumu_0x7FFFFFFFull )?} } } */

vuint64m2_t 
test_vmul_vx_u64m2_tumu_0xFFFFFFFF80000000ull(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, size_t vl)
{
  return vmul_vx_u64m2_tumu(mask, maskedoff, op1, 0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler-not {vmul\.vv(?: test_vmul_vx_u64m2_tumu_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmul\.vx(?: test_vmul_vx_u64m2_tumu_0xFFFFFFFF80000000ull )?} } } */

vuint64m2_t 
test_vmul_vx_u64m2_tumu_0xFFFFFFFFFFFFFFFFull(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, size_t vl)
{
  return vmul_vx_u64m2_tumu(mask, maskedoff, op1, 0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmul\.vv(?: test_vmul_vx_u64m2_tumu_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmul\.vx(?: test_vmul_vx_u64m2_tumu_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m4_t 
test_vmul_vx_u64m4_tumu_0x7FFFFFFFull(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, size_t vl)
{
  return vmul_vx_u64m4_tumu(mask, maskedoff, op1, 0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmul\.vv(?: test_vmul_vx_u64m4_tumu_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmul\.vx(?: test_vmul_vx_u64m4_tumu_0x7FFFFFFFull )?} } } */

vuint64m4_t 
test_vmul_vx_u64m4_tumu_0xFFFFFFFF80000000ull(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, size_t vl)
{
  return vmul_vx_u64m4_tumu(mask, maskedoff, op1, 0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler-not {vmul\.vv(?: test_vmul_vx_u64m4_tumu_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmul\.vx(?: test_vmul_vx_u64m4_tumu_0xFFFFFFFF80000000ull )?} } } */

vuint64m4_t 
test_vmul_vx_u64m4_tumu_0xFFFFFFFFFFFFFFFFull(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, size_t vl)
{
  return vmul_vx_u64m4_tumu(mask, maskedoff, op1, 0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmul\.vv(?: test_vmul_vx_u64m4_tumu_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmul\.vx(?: test_vmul_vx_u64m4_tumu_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m8_t 
test_vmul_vx_u64m8_tumu_0x7FFFFFFFull(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, size_t vl)
{
  return vmul_vx_u64m8_tumu(mask, maskedoff, op1, 0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmul\.vv(?: test_vmul_vx_u64m8_tumu_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmul\.vx(?: test_vmul_vx_u64m8_tumu_0x7FFFFFFFull )?} } } */

vuint64m8_t 
test_vmul_vx_u64m8_tumu_0xFFFFFFFF80000000ull(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, size_t vl)
{
  return vmul_vx_u64m8_tumu(mask, maskedoff, op1, 0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler-not {vmul\.vv(?: test_vmul_vx_u64m8_tumu_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmul\.vx(?: test_vmul_vx_u64m8_tumu_0xFFFFFFFF80000000ull )?} } } */

vuint64m8_t 
test_vmul_vx_u64m8_tumu_0xFFFFFFFFFFFFFFFFull(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, size_t vl)
{
  return vmul_vx_u64m8_tumu(mask, maskedoff, op1, 0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmul\.vv(?: test_vmul_vx_u64m8_tumu_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmul\.vx(?: test_vmul_vx_u64m8_tumu_0xFFFFFFFFFFFFFFFFull )?} } } */
