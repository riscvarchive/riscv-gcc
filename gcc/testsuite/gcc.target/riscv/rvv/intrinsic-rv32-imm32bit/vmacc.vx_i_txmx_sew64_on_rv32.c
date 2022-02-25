
/* { dg-do compile } */
/* { dg-additional-options "-std=c99 -pedantic-errors" } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv32*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vint64m1_t 
test_vmacc_vx_i64m1_tama_0x7FFFFFFFll(vbool64_t mask, vint64m1_t dest, vint64m1_t op2, size_t vl)
{
  return vmacc_vx_i64m1_tama(mask, dest, 0x7FFFFFFFll, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_i64m1_tama_0x7FFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_i64m1_tama_0x7FFFFFFFll )?} } } */

vint64m1_t 
test_vmacc_vx_i64m1_tama_0xFFFFFFFF80000000ll(vbool64_t mask, vint64m1_t dest, vint64m1_t op2, size_t vl)
{
  return vmacc_vx_i64m1_tama(mask, dest, 0xFFFFFFFF80000000ll, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_i64m1_tama_0xFFFFFFFF80000000ll )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_i64m1_tama_0xFFFFFFFF80000000ll )?} } } */

vint64m1_t 
test_vmacc_vx_i64m1_tama_0xFFFFFFFFFFFFFFFFll(vbool64_t mask, vint64m1_t dest, vint64m1_t op2, size_t vl)
{
  return vmacc_vx_i64m1_tama(mask, dest, 0xFFFFFFFFFFFFFFFFll, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_i64m1_tama_0xFFFFFFFFFFFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_i64m1_tama_0xFFFFFFFFFFFFFFFFll )?} } } */

vint64m2_t 
test_vmacc_vx_i64m2_tama_0x7FFFFFFFll(vbool32_t mask, vint64m2_t dest, vint64m2_t op2, size_t vl)
{
  return vmacc_vx_i64m2_tama(mask, dest, 0x7FFFFFFFll, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_i64m2_tama_0x7FFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_i64m2_tama_0x7FFFFFFFll )?} } } */

vint64m2_t 
test_vmacc_vx_i64m2_tama_0xFFFFFFFF80000000ll(vbool32_t mask, vint64m2_t dest, vint64m2_t op2, size_t vl)
{
  return vmacc_vx_i64m2_tama(mask, dest, 0xFFFFFFFF80000000ll, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_i64m2_tama_0xFFFFFFFF80000000ll )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_i64m2_tama_0xFFFFFFFF80000000ll )?} } } */

vint64m2_t 
test_vmacc_vx_i64m2_tama_0xFFFFFFFFFFFFFFFFll(vbool32_t mask, vint64m2_t dest, vint64m2_t op2, size_t vl)
{
  return vmacc_vx_i64m2_tama(mask, dest, 0xFFFFFFFFFFFFFFFFll, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_i64m2_tama_0xFFFFFFFFFFFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_i64m2_tama_0xFFFFFFFFFFFFFFFFll )?} } } */

vint64m4_t 
test_vmacc_vx_i64m4_tama_0x7FFFFFFFll(vbool16_t mask, vint64m4_t dest, vint64m4_t op2, size_t vl)
{
  return vmacc_vx_i64m4_tama(mask, dest, 0x7FFFFFFFll, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_i64m4_tama_0x7FFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_i64m4_tama_0x7FFFFFFFll )?} } } */

vint64m4_t 
test_vmacc_vx_i64m4_tama_0xFFFFFFFF80000000ll(vbool16_t mask, vint64m4_t dest, vint64m4_t op2, size_t vl)
{
  return vmacc_vx_i64m4_tama(mask, dest, 0xFFFFFFFF80000000ll, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_i64m4_tama_0xFFFFFFFF80000000ll )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_i64m4_tama_0xFFFFFFFF80000000ll )?} } } */

vint64m4_t 
test_vmacc_vx_i64m4_tama_0xFFFFFFFFFFFFFFFFll(vbool16_t mask, vint64m4_t dest, vint64m4_t op2, size_t vl)
{
  return vmacc_vx_i64m4_tama(mask, dest, 0xFFFFFFFFFFFFFFFFll, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_i64m4_tama_0xFFFFFFFFFFFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_i64m4_tama_0xFFFFFFFFFFFFFFFFll )?} } } */

vint64m8_t 
test_vmacc_vx_i64m8_tama_0x7FFFFFFFll(vbool8_t mask, vint64m8_t dest, vint64m8_t op2, size_t vl)
{
  return vmacc_vx_i64m8_tama(mask, dest, 0x7FFFFFFFll, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_i64m8_tama_0x7FFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_i64m8_tama_0x7FFFFFFFll )?} } } */

vint64m8_t 
test_vmacc_vx_i64m8_tama_0xFFFFFFFF80000000ll(vbool8_t mask, vint64m8_t dest, vint64m8_t op2, size_t vl)
{
  return vmacc_vx_i64m8_tama(mask, dest, 0xFFFFFFFF80000000ll, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_i64m8_tama_0xFFFFFFFF80000000ll )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_i64m8_tama_0xFFFFFFFF80000000ll )?} } } */

vint64m8_t 
test_vmacc_vx_i64m8_tama_0xFFFFFFFFFFFFFFFFll(vbool8_t mask, vint64m8_t dest, vint64m8_t op2, size_t vl)
{
  return vmacc_vx_i64m8_tama(mask, dest, 0xFFFFFFFFFFFFFFFFll, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_i64m8_tama_0xFFFFFFFFFFFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_i64m8_tama_0xFFFFFFFFFFFFFFFFll )?} } } */

vint64m1_t 
test_vmacc_vx_i64m1_tamu_0x7FFFFFFFll(vbool64_t mask, vint64m1_t dest, vint64m1_t op2, size_t vl)
{
  return vmacc_vx_i64m1_tamu(mask, dest, 0x7FFFFFFFll, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_i64m1_tamu_0x7FFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_i64m1_tamu_0x7FFFFFFFll )?} } } */

vint64m1_t 
test_vmacc_vx_i64m1_tamu_0xFFFFFFFF80000000ll(vbool64_t mask, vint64m1_t dest, vint64m1_t op2, size_t vl)
{
  return vmacc_vx_i64m1_tamu(mask, dest, 0xFFFFFFFF80000000ll, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_i64m1_tamu_0xFFFFFFFF80000000ll )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_i64m1_tamu_0xFFFFFFFF80000000ll )?} } } */

vint64m1_t 
test_vmacc_vx_i64m1_tamu_0xFFFFFFFFFFFFFFFFll(vbool64_t mask, vint64m1_t dest, vint64m1_t op2, size_t vl)
{
  return vmacc_vx_i64m1_tamu(mask, dest, 0xFFFFFFFFFFFFFFFFll, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_i64m1_tamu_0xFFFFFFFFFFFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_i64m1_tamu_0xFFFFFFFFFFFFFFFFll )?} } } */

vint64m2_t 
test_vmacc_vx_i64m2_tamu_0x7FFFFFFFll(vbool32_t mask, vint64m2_t dest, vint64m2_t op2, size_t vl)
{
  return vmacc_vx_i64m2_tamu(mask, dest, 0x7FFFFFFFll, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_i64m2_tamu_0x7FFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_i64m2_tamu_0x7FFFFFFFll )?} } } */

vint64m2_t 
test_vmacc_vx_i64m2_tamu_0xFFFFFFFF80000000ll(vbool32_t mask, vint64m2_t dest, vint64m2_t op2, size_t vl)
{
  return vmacc_vx_i64m2_tamu(mask, dest, 0xFFFFFFFF80000000ll, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_i64m2_tamu_0xFFFFFFFF80000000ll )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_i64m2_tamu_0xFFFFFFFF80000000ll )?} } } */

vint64m2_t 
test_vmacc_vx_i64m2_tamu_0xFFFFFFFFFFFFFFFFll(vbool32_t mask, vint64m2_t dest, vint64m2_t op2, size_t vl)
{
  return vmacc_vx_i64m2_tamu(mask, dest, 0xFFFFFFFFFFFFFFFFll, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_i64m2_tamu_0xFFFFFFFFFFFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_i64m2_tamu_0xFFFFFFFFFFFFFFFFll )?} } } */

vint64m4_t 
test_vmacc_vx_i64m4_tamu_0x7FFFFFFFll(vbool16_t mask, vint64m4_t dest, vint64m4_t op2, size_t vl)
{
  return vmacc_vx_i64m4_tamu(mask, dest, 0x7FFFFFFFll, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_i64m4_tamu_0x7FFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_i64m4_tamu_0x7FFFFFFFll )?} } } */

vint64m4_t 
test_vmacc_vx_i64m4_tamu_0xFFFFFFFF80000000ll(vbool16_t mask, vint64m4_t dest, vint64m4_t op2, size_t vl)
{
  return vmacc_vx_i64m4_tamu(mask, dest, 0xFFFFFFFF80000000ll, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_i64m4_tamu_0xFFFFFFFF80000000ll )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_i64m4_tamu_0xFFFFFFFF80000000ll )?} } } */

vint64m4_t 
test_vmacc_vx_i64m4_tamu_0xFFFFFFFFFFFFFFFFll(vbool16_t mask, vint64m4_t dest, vint64m4_t op2, size_t vl)
{
  return vmacc_vx_i64m4_tamu(mask, dest, 0xFFFFFFFFFFFFFFFFll, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_i64m4_tamu_0xFFFFFFFFFFFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_i64m4_tamu_0xFFFFFFFFFFFFFFFFll )?} } } */

vint64m8_t 
test_vmacc_vx_i64m8_tamu_0x7FFFFFFFll(vbool8_t mask, vint64m8_t dest, vint64m8_t op2, size_t vl)
{
  return vmacc_vx_i64m8_tamu(mask, dest, 0x7FFFFFFFll, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_i64m8_tamu_0x7FFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_i64m8_tamu_0x7FFFFFFFll )?} } } */

vint64m8_t 
test_vmacc_vx_i64m8_tamu_0xFFFFFFFF80000000ll(vbool8_t mask, vint64m8_t dest, vint64m8_t op2, size_t vl)
{
  return vmacc_vx_i64m8_tamu(mask, dest, 0xFFFFFFFF80000000ll, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_i64m8_tamu_0xFFFFFFFF80000000ll )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_i64m8_tamu_0xFFFFFFFF80000000ll )?} } } */

vint64m8_t 
test_vmacc_vx_i64m8_tamu_0xFFFFFFFFFFFFFFFFll(vbool8_t mask, vint64m8_t dest, vint64m8_t op2, size_t vl)
{
  return vmacc_vx_i64m8_tamu(mask, dest, 0xFFFFFFFFFFFFFFFFll, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_i64m8_tamu_0xFFFFFFFFFFFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_i64m8_tamu_0xFFFFFFFFFFFFFFFFll )?} } } */

vint64m1_t 
test_vmacc_vx_i64m1_tuma_0x7FFFFFFFll(vbool64_t mask, vint64m1_t dest, vint64m1_t op2, size_t vl)
{
  return vmacc_vx_i64m1_tuma(mask, dest, 0x7FFFFFFFll, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_i64m1_tuma_0x7FFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_i64m1_tuma_0x7FFFFFFFll )?} } } */

vint64m1_t 
test_vmacc_vx_i64m1_tuma_0xFFFFFFFF80000000ll(vbool64_t mask, vint64m1_t dest, vint64m1_t op2, size_t vl)
{
  return vmacc_vx_i64m1_tuma(mask, dest, 0xFFFFFFFF80000000ll, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_i64m1_tuma_0xFFFFFFFF80000000ll )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_i64m1_tuma_0xFFFFFFFF80000000ll )?} } } */

vint64m1_t 
test_vmacc_vx_i64m1_tuma_0xFFFFFFFFFFFFFFFFll(vbool64_t mask, vint64m1_t dest, vint64m1_t op2, size_t vl)
{
  return vmacc_vx_i64m1_tuma(mask, dest, 0xFFFFFFFFFFFFFFFFll, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_i64m1_tuma_0xFFFFFFFFFFFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_i64m1_tuma_0xFFFFFFFFFFFFFFFFll )?} } } */

vint64m2_t 
test_vmacc_vx_i64m2_tuma_0x7FFFFFFFll(vbool32_t mask, vint64m2_t dest, vint64m2_t op2, size_t vl)
{
  return vmacc_vx_i64m2_tuma(mask, dest, 0x7FFFFFFFll, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_i64m2_tuma_0x7FFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_i64m2_tuma_0x7FFFFFFFll )?} } } */

vint64m2_t 
test_vmacc_vx_i64m2_tuma_0xFFFFFFFF80000000ll(vbool32_t mask, vint64m2_t dest, vint64m2_t op2, size_t vl)
{
  return vmacc_vx_i64m2_tuma(mask, dest, 0xFFFFFFFF80000000ll, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_i64m2_tuma_0xFFFFFFFF80000000ll )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_i64m2_tuma_0xFFFFFFFF80000000ll )?} } } */

vint64m2_t 
test_vmacc_vx_i64m2_tuma_0xFFFFFFFFFFFFFFFFll(vbool32_t mask, vint64m2_t dest, vint64m2_t op2, size_t vl)
{
  return vmacc_vx_i64m2_tuma(mask, dest, 0xFFFFFFFFFFFFFFFFll, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_i64m2_tuma_0xFFFFFFFFFFFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_i64m2_tuma_0xFFFFFFFFFFFFFFFFll )?} } } */

vint64m4_t 
test_vmacc_vx_i64m4_tuma_0x7FFFFFFFll(vbool16_t mask, vint64m4_t dest, vint64m4_t op2, size_t vl)
{
  return vmacc_vx_i64m4_tuma(mask, dest, 0x7FFFFFFFll, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_i64m4_tuma_0x7FFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_i64m4_tuma_0x7FFFFFFFll )?} } } */

vint64m4_t 
test_vmacc_vx_i64m4_tuma_0xFFFFFFFF80000000ll(vbool16_t mask, vint64m4_t dest, vint64m4_t op2, size_t vl)
{
  return vmacc_vx_i64m4_tuma(mask, dest, 0xFFFFFFFF80000000ll, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_i64m4_tuma_0xFFFFFFFF80000000ll )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_i64m4_tuma_0xFFFFFFFF80000000ll )?} } } */

vint64m4_t 
test_vmacc_vx_i64m4_tuma_0xFFFFFFFFFFFFFFFFll(vbool16_t mask, vint64m4_t dest, vint64m4_t op2, size_t vl)
{
  return vmacc_vx_i64m4_tuma(mask, dest, 0xFFFFFFFFFFFFFFFFll, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_i64m4_tuma_0xFFFFFFFFFFFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_i64m4_tuma_0xFFFFFFFFFFFFFFFFll )?} } } */

vint64m8_t 
test_vmacc_vx_i64m8_tuma_0x7FFFFFFFll(vbool8_t mask, vint64m8_t dest, vint64m8_t op2, size_t vl)
{
  return vmacc_vx_i64m8_tuma(mask, dest, 0x7FFFFFFFll, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_i64m8_tuma_0x7FFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_i64m8_tuma_0x7FFFFFFFll )?} } } */

vint64m8_t 
test_vmacc_vx_i64m8_tuma_0xFFFFFFFF80000000ll(vbool8_t mask, vint64m8_t dest, vint64m8_t op2, size_t vl)
{
  return vmacc_vx_i64m8_tuma(mask, dest, 0xFFFFFFFF80000000ll, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_i64m8_tuma_0xFFFFFFFF80000000ll )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_i64m8_tuma_0xFFFFFFFF80000000ll )?} } } */

vint64m8_t 
test_vmacc_vx_i64m8_tuma_0xFFFFFFFFFFFFFFFFll(vbool8_t mask, vint64m8_t dest, vint64m8_t op2, size_t vl)
{
  return vmacc_vx_i64m8_tuma(mask, dest, 0xFFFFFFFFFFFFFFFFll, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_i64m8_tuma_0xFFFFFFFFFFFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_i64m8_tuma_0xFFFFFFFFFFFFFFFFll )?} } } */

vint64m1_t 
test_vmacc_vx_i64m1_tumu_0x7FFFFFFFll(vbool64_t mask, vint64m1_t dest, vint64m1_t op2, size_t vl)
{
  return vmacc_vx_i64m1_tumu(mask, dest, 0x7FFFFFFFll, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_i64m1_tumu_0x7FFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_i64m1_tumu_0x7FFFFFFFll )?} } } */

vint64m1_t 
test_vmacc_vx_i64m1_tumu_0xFFFFFFFF80000000ll(vbool64_t mask, vint64m1_t dest, vint64m1_t op2, size_t vl)
{
  return vmacc_vx_i64m1_tumu(mask, dest, 0xFFFFFFFF80000000ll, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_i64m1_tumu_0xFFFFFFFF80000000ll )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_i64m1_tumu_0xFFFFFFFF80000000ll )?} } } */

vint64m1_t 
test_vmacc_vx_i64m1_tumu_0xFFFFFFFFFFFFFFFFll(vbool64_t mask, vint64m1_t dest, vint64m1_t op2, size_t vl)
{
  return vmacc_vx_i64m1_tumu(mask, dest, 0xFFFFFFFFFFFFFFFFll, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_i64m1_tumu_0xFFFFFFFFFFFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_i64m1_tumu_0xFFFFFFFFFFFFFFFFll )?} } } */

vint64m2_t 
test_vmacc_vx_i64m2_tumu_0x7FFFFFFFll(vbool32_t mask, vint64m2_t dest, vint64m2_t op2, size_t vl)
{
  return vmacc_vx_i64m2_tumu(mask, dest, 0x7FFFFFFFll, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_i64m2_tumu_0x7FFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_i64m2_tumu_0x7FFFFFFFll )?} } } */

vint64m2_t 
test_vmacc_vx_i64m2_tumu_0xFFFFFFFF80000000ll(vbool32_t mask, vint64m2_t dest, vint64m2_t op2, size_t vl)
{
  return vmacc_vx_i64m2_tumu(mask, dest, 0xFFFFFFFF80000000ll, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_i64m2_tumu_0xFFFFFFFF80000000ll )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_i64m2_tumu_0xFFFFFFFF80000000ll )?} } } */

vint64m2_t 
test_vmacc_vx_i64m2_tumu_0xFFFFFFFFFFFFFFFFll(vbool32_t mask, vint64m2_t dest, vint64m2_t op2, size_t vl)
{
  return vmacc_vx_i64m2_tumu(mask, dest, 0xFFFFFFFFFFFFFFFFll, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_i64m2_tumu_0xFFFFFFFFFFFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_i64m2_tumu_0xFFFFFFFFFFFFFFFFll )?} } } */

vint64m4_t 
test_vmacc_vx_i64m4_tumu_0x7FFFFFFFll(vbool16_t mask, vint64m4_t dest, vint64m4_t op2, size_t vl)
{
  return vmacc_vx_i64m4_tumu(mask, dest, 0x7FFFFFFFll, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_i64m4_tumu_0x7FFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_i64m4_tumu_0x7FFFFFFFll )?} } } */

vint64m4_t 
test_vmacc_vx_i64m4_tumu_0xFFFFFFFF80000000ll(vbool16_t mask, vint64m4_t dest, vint64m4_t op2, size_t vl)
{
  return vmacc_vx_i64m4_tumu(mask, dest, 0xFFFFFFFF80000000ll, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_i64m4_tumu_0xFFFFFFFF80000000ll )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_i64m4_tumu_0xFFFFFFFF80000000ll )?} } } */

vint64m4_t 
test_vmacc_vx_i64m4_tumu_0xFFFFFFFFFFFFFFFFll(vbool16_t mask, vint64m4_t dest, vint64m4_t op2, size_t vl)
{
  return vmacc_vx_i64m4_tumu(mask, dest, 0xFFFFFFFFFFFFFFFFll, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_i64m4_tumu_0xFFFFFFFFFFFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_i64m4_tumu_0xFFFFFFFFFFFFFFFFll )?} } } */

vint64m8_t 
test_vmacc_vx_i64m8_tumu_0x7FFFFFFFll(vbool8_t mask, vint64m8_t dest, vint64m8_t op2, size_t vl)
{
  return vmacc_vx_i64m8_tumu(mask, dest, 0x7FFFFFFFll, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_i64m8_tumu_0x7FFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_i64m8_tumu_0x7FFFFFFFll )?} } } */

vint64m8_t 
test_vmacc_vx_i64m8_tumu_0xFFFFFFFF80000000ll(vbool8_t mask, vint64m8_t dest, vint64m8_t op2, size_t vl)
{
  return vmacc_vx_i64m8_tumu(mask, dest, 0xFFFFFFFF80000000ll, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_i64m8_tumu_0xFFFFFFFF80000000ll )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_i64m8_tumu_0xFFFFFFFF80000000ll )?} } } */

vint64m8_t 
test_vmacc_vx_i64m8_tumu_0xFFFFFFFFFFFFFFFFll(vbool8_t mask, vint64m8_t dest, vint64m8_t op2, size_t vl)
{
  return vmacc_vx_i64m8_tumu(mask, dest, 0xFFFFFFFFFFFFFFFFll, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_i64m8_tumu_0xFFFFFFFFFFFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_i64m8_tumu_0xFFFFFFFFFFFFFFFFll )?} } } */
