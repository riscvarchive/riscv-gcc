
/* { dg-do compile } */
/* { dg-additional-options "-std=c99 -pedantic-errors" } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv32*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vuint64m1_t 
test_vmacc_vx_u64m1_tama_0x7FFFFFFFull(vbool64_t mask, vuint64m1_t dest, vuint64m1_t op2, size_t vl)
{
  return vmacc_vx_u64m1_tama(mask, dest, 0x7FFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m1_tama_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m1_tama_0x7FFFFFFFull )?} } } */

vuint64m1_t 
test_vmacc_vx_u64m1_tama_0xFFFFFFFF80000000ull(vbool64_t mask, vuint64m1_t dest, vuint64m1_t op2, size_t vl)
{
  return vmacc_vx_u64m1_tama(mask, dest, 0xFFFFFFFF80000000ull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m1_tama_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m1_tama_0xFFFFFFFF80000000ull )?} } } */

vuint64m1_t 
test_vmacc_vx_u64m1_tama_0xFFFFFFFFFFFFFFFFull(vbool64_t mask, vuint64m1_t dest, vuint64m1_t op2, size_t vl)
{
  return vmacc_vx_u64m1_tama(mask, dest, 0xFFFFFFFFFFFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m1_tama_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m1_tama_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m2_t 
test_vmacc_vx_u64m2_tama_0x7FFFFFFFull(vbool32_t mask, vuint64m2_t dest, vuint64m2_t op2, size_t vl)
{
  return vmacc_vx_u64m2_tama(mask, dest, 0x7FFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m2_tama_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m2_tama_0x7FFFFFFFull )?} } } */

vuint64m2_t 
test_vmacc_vx_u64m2_tama_0xFFFFFFFF80000000ull(vbool32_t mask, vuint64m2_t dest, vuint64m2_t op2, size_t vl)
{
  return vmacc_vx_u64m2_tama(mask, dest, 0xFFFFFFFF80000000ull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m2_tama_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m2_tama_0xFFFFFFFF80000000ull )?} } } */

vuint64m2_t 
test_vmacc_vx_u64m2_tama_0xFFFFFFFFFFFFFFFFull(vbool32_t mask, vuint64m2_t dest, vuint64m2_t op2, size_t vl)
{
  return vmacc_vx_u64m2_tama(mask, dest, 0xFFFFFFFFFFFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m2_tama_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m2_tama_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m4_t 
test_vmacc_vx_u64m4_tama_0x7FFFFFFFull(vbool16_t mask, vuint64m4_t dest, vuint64m4_t op2, size_t vl)
{
  return vmacc_vx_u64m4_tama(mask, dest, 0x7FFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m4_tama_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m4_tama_0x7FFFFFFFull )?} } } */

vuint64m4_t 
test_vmacc_vx_u64m4_tama_0xFFFFFFFF80000000ull(vbool16_t mask, vuint64m4_t dest, vuint64m4_t op2, size_t vl)
{
  return vmacc_vx_u64m4_tama(mask, dest, 0xFFFFFFFF80000000ull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m4_tama_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m4_tama_0xFFFFFFFF80000000ull )?} } } */

vuint64m4_t 
test_vmacc_vx_u64m4_tama_0xFFFFFFFFFFFFFFFFull(vbool16_t mask, vuint64m4_t dest, vuint64m4_t op2, size_t vl)
{
  return vmacc_vx_u64m4_tama(mask, dest, 0xFFFFFFFFFFFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m4_tama_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m4_tama_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m8_t 
test_vmacc_vx_u64m8_tama_0x7FFFFFFFull(vbool8_t mask, vuint64m8_t dest, vuint64m8_t op2, size_t vl)
{
  return vmacc_vx_u64m8_tama(mask, dest, 0x7FFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m8_tama_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m8_tama_0x7FFFFFFFull )?} } } */

vuint64m8_t 
test_vmacc_vx_u64m8_tama_0xFFFFFFFF80000000ull(vbool8_t mask, vuint64m8_t dest, vuint64m8_t op2, size_t vl)
{
  return vmacc_vx_u64m8_tama(mask, dest, 0xFFFFFFFF80000000ull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m8_tama_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m8_tama_0xFFFFFFFF80000000ull )?} } } */

vuint64m8_t 
test_vmacc_vx_u64m8_tama_0xFFFFFFFFFFFFFFFFull(vbool8_t mask, vuint64m8_t dest, vuint64m8_t op2, size_t vl)
{
  return vmacc_vx_u64m8_tama(mask, dest, 0xFFFFFFFFFFFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m8_tama_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m8_tama_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m1_t 
test_vmacc_vx_u64m1_tamu_0x7FFFFFFFull(vbool64_t mask, vuint64m1_t dest, vuint64m1_t op2, size_t vl)
{
  return vmacc_vx_u64m1_tamu(mask, dest, 0x7FFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m1_tamu_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m1_tamu_0x7FFFFFFFull )?} } } */

vuint64m1_t 
test_vmacc_vx_u64m1_tamu_0xFFFFFFFF80000000ull(vbool64_t mask, vuint64m1_t dest, vuint64m1_t op2, size_t vl)
{
  return vmacc_vx_u64m1_tamu(mask, dest, 0xFFFFFFFF80000000ull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m1_tamu_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m1_tamu_0xFFFFFFFF80000000ull )?} } } */

vuint64m1_t 
test_vmacc_vx_u64m1_tamu_0xFFFFFFFFFFFFFFFFull(vbool64_t mask, vuint64m1_t dest, vuint64m1_t op2, size_t vl)
{
  return vmacc_vx_u64m1_tamu(mask, dest, 0xFFFFFFFFFFFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m1_tamu_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m1_tamu_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m2_t 
test_vmacc_vx_u64m2_tamu_0x7FFFFFFFull(vbool32_t mask, vuint64m2_t dest, vuint64m2_t op2, size_t vl)
{
  return vmacc_vx_u64m2_tamu(mask, dest, 0x7FFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m2_tamu_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m2_tamu_0x7FFFFFFFull )?} } } */

vuint64m2_t 
test_vmacc_vx_u64m2_tamu_0xFFFFFFFF80000000ull(vbool32_t mask, vuint64m2_t dest, vuint64m2_t op2, size_t vl)
{
  return vmacc_vx_u64m2_tamu(mask, dest, 0xFFFFFFFF80000000ull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m2_tamu_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m2_tamu_0xFFFFFFFF80000000ull )?} } } */

vuint64m2_t 
test_vmacc_vx_u64m2_tamu_0xFFFFFFFFFFFFFFFFull(vbool32_t mask, vuint64m2_t dest, vuint64m2_t op2, size_t vl)
{
  return vmacc_vx_u64m2_tamu(mask, dest, 0xFFFFFFFFFFFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m2_tamu_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m2_tamu_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m4_t 
test_vmacc_vx_u64m4_tamu_0x7FFFFFFFull(vbool16_t mask, vuint64m4_t dest, vuint64m4_t op2, size_t vl)
{
  return vmacc_vx_u64m4_tamu(mask, dest, 0x7FFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m4_tamu_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m4_tamu_0x7FFFFFFFull )?} } } */

vuint64m4_t 
test_vmacc_vx_u64m4_tamu_0xFFFFFFFF80000000ull(vbool16_t mask, vuint64m4_t dest, vuint64m4_t op2, size_t vl)
{
  return vmacc_vx_u64m4_tamu(mask, dest, 0xFFFFFFFF80000000ull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m4_tamu_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m4_tamu_0xFFFFFFFF80000000ull )?} } } */

vuint64m4_t 
test_vmacc_vx_u64m4_tamu_0xFFFFFFFFFFFFFFFFull(vbool16_t mask, vuint64m4_t dest, vuint64m4_t op2, size_t vl)
{
  return vmacc_vx_u64m4_tamu(mask, dest, 0xFFFFFFFFFFFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m4_tamu_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m4_tamu_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m8_t 
test_vmacc_vx_u64m8_tamu_0x7FFFFFFFull(vbool8_t mask, vuint64m8_t dest, vuint64m8_t op2, size_t vl)
{
  return vmacc_vx_u64m8_tamu(mask, dest, 0x7FFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m8_tamu_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m8_tamu_0x7FFFFFFFull )?} } } */

vuint64m8_t 
test_vmacc_vx_u64m8_tamu_0xFFFFFFFF80000000ull(vbool8_t mask, vuint64m8_t dest, vuint64m8_t op2, size_t vl)
{
  return vmacc_vx_u64m8_tamu(mask, dest, 0xFFFFFFFF80000000ull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m8_tamu_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m8_tamu_0xFFFFFFFF80000000ull )?} } } */

vuint64m8_t 
test_vmacc_vx_u64m8_tamu_0xFFFFFFFFFFFFFFFFull(vbool8_t mask, vuint64m8_t dest, vuint64m8_t op2, size_t vl)
{
  return vmacc_vx_u64m8_tamu(mask, dest, 0xFFFFFFFFFFFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m8_tamu_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m8_tamu_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m1_t 
test_vmacc_vx_u64m1_tuma_0x7FFFFFFFull(vbool64_t mask, vuint64m1_t dest, vuint64m1_t op2, size_t vl)
{
  return vmacc_vx_u64m1_tuma(mask, dest, 0x7FFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m1_tuma_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m1_tuma_0x7FFFFFFFull )?} } } */

vuint64m1_t 
test_vmacc_vx_u64m1_tuma_0xFFFFFFFF80000000ull(vbool64_t mask, vuint64m1_t dest, vuint64m1_t op2, size_t vl)
{
  return vmacc_vx_u64m1_tuma(mask, dest, 0xFFFFFFFF80000000ull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m1_tuma_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m1_tuma_0xFFFFFFFF80000000ull )?} } } */

vuint64m1_t 
test_vmacc_vx_u64m1_tuma_0xFFFFFFFFFFFFFFFFull(vbool64_t mask, vuint64m1_t dest, vuint64m1_t op2, size_t vl)
{
  return vmacc_vx_u64m1_tuma(mask, dest, 0xFFFFFFFFFFFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m1_tuma_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m1_tuma_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m2_t 
test_vmacc_vx_u64m2_tuma_0x7FFFFFFFull(vbool32_t mask, vuint64m2_t dest, vuint64m2_t op2, size_t vl)
{
  return vmacc_vx_u64m2_tuma(mask, dest, 0x7FFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m2_tuma_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m2_tuma_0x7FFFFFFFull )?} } } */

vuint64m2_t 
test_vmacc_vx_u64m2_tuma_0xFFFFFFFF80000000ull(vbool32_t mask, vuint64m2_t dest, vuint64m2_t op2, size_t vl)
{
  return vmacc_vx_u64m2_tuma(mask, dest, 0xFFFFFFFF80000000ull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m2_tuma_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m2_tuma_0xFFFFFFFF80000000ull )?} } } */

vuint64m2_t 
test_vmacc_vx_u64m2_tuma_0xFFFFFFFFFFFFFFFFull(vbool32_t mask, vuint64m2_t dest, vuint64m2_t op2, size_t vl)
{
  return vmacc_vx_u64m2_tuma(mask, dest, 0xFFFFFFFFFFFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m2_tuma_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m2_tuma_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m4_t 
test_vmacc_vx_u64m4_tuma_0x7FFFFFFFull(vbool16_t mask, vuint64m4_t dest, vuint64m4_t op2, size_t vl)
{
  return vmacc_vx_u64m4_tuma(mask, dest, 0x7FFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m4_tuma_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m4_tuma_0x7FFFFFFFull )?} } } */

vuint64m4_t 
test_vmacc_vx_u64m4_tuma_0xFFFFFFFF80000000ull(vbool16_t mask, vuint64m4_t dest, vuint64m4_t op2, size_t vl)
{
  return vmacc_vx_u64m4_tuma(mask, dest, 0xFFFFFFFF80000000ull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m4_tuma_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m4_tuma_0xFFFFFFFF80000000ull )?} } } */

vuint64m4_t 
test_vmacc_vx_u64m4_tuma_0xFFFFFFFFFFFFFFFFull(vbool16_t mask, vuint64m4_t dest, vuint64m4_t op2, size_t vl)
{
  return vmacc_vx_u64m4_tuma(mask, dest, 0xFFFFFFFFFFFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m4_tuma_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m4_tuma_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m8_t 
test_vmacc_vx_u64m8_tuma_0x7FFFFFFFull(vbool8_t mask, vuint64m8_t dest, vuint64m8_t op2, size_t vl)
{
  return vmacc_vx_u64m8_tuma(mask, dest, 0x7FFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m8_tuma_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m8_tuma_0x7FFFFFFFull )?} } } */

vuint64m8_t 
test_vmacc_vx_u64m8_tuma_0xFFFFFFFF80000000ull(vbool8_t mask, vuint64m8_t dest, vuint64m8_t op2, size_t vl)
{
  return vmacc_vx_u64m8_tuma(mask, dest, 0xFFFFFFFF80000000ull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m8_tuma_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m8_tuma_0xFFFFFFFF80000000ull )?} } } */

vuint64m8_t 
test_vmacc_vx_u64m8_tuma_0xFFFFFFFFFFFFFFFFull(vbool8_t mask, vuint64m8_t dest, vuint64m8_t op2, size_t vl)
{
  return vmacc_vx_u64m8_tuma(mask, dest, 0xFFFFFFFFFFFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m8_tuma_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m8_tuma_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m1_t 
test_vmacc_vx_u64m1_tumu_0x7FFFFFFFull(vbool64_t mask, vuint64m1_t dest, vuint64m1_t op2, size_t vl)
{
  return vmacc_vx_u64m1_tumu(mask, dest, 0x7FFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m1_tumu_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m1_tumu_0x7FFFFFFFull )?} } } */

vuint64m1_t 
test_vmacc_vx_u64m1_tumu_0xFFFFFFFF80000000ull(vbool64_t mask, vuint64m1_t dest, vuint64m1_t op2, size_t vl)
{
  return vmacc_vx_u64m1_tumu(mask, dest, 0xFFFFFFFF80000000ull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m1_tumu_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m1_tumu_0xFFFFFFFF80000000ull )?} } } */

vuint64m1_t 
test_vmacc_vx_u64m1_tumu_0xFFFFFFFFFFFFFFFFull(vbool64_t mask, vuint64m1_t dest, vuint64m1_t op2, size_t vl)
{
  return vmacc_vx_u64m1_tumu(mask, dest, 0xFFFFFFFFFFFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m1_tumu_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m1_tumu_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m2_t 
test_vmacc_vx_u64m2_tumu_0x7FFFFFFFull(vbool32_t mask, vuint64m2_t dest, vuint64m2_t op2, size_t vl)
{
  return vmacc_vx_u64m2_tumu(mask, dest, 0x7FFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m2_tumu_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m2_tumu_0x7FFFFFFFull )?} } } */

vuint64m2_t 
test_vmacc_vx_u64m2_tumu_0xFFFFFFFF80000000ull(vbool32_t mask, vuint64m2_t dest, vuint64m2_t op2, size_t vl)
{
  return vmacc_vx_u64m2_tumu(mask, dest, 0xFFFFFFFF80000000ull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m2_tumu_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m2_tumu_0xFFFFFFFF80000000ull )?} } } */

vuint64m2_t 
test_vmacc_vx_u64m2_tumu_0xFFFFFFFFFFFFFFFFull(vbool32_t mask, vuint64m2_t dest, vuint64m2_t op2, size_t vl)
{
  return vmacc_vx_u64m2_tumu(mask, dest, 0xFFFFFFFFFFFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m2_tumu_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m2_tumu_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m4_t 
test_vmacc_vx_u64m4_tumu_0x7FFFFFFFull(vbool16_t mask, vuint64m4_t dest, vuint64m4_t op2, size_t vl)
{
  return vmacc_vx_u64m4_tumu(mask, dest, 0x7FFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m4_tumu_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m4_tumu_0x7FFFFFFFull )?} } } */

vuint64m4_t 
test_vmacc_vx_u64m4_tumu_0xFFFFFFFF80000000ull(vbool16_t mask, vuint64m4_t dest, vuint64m4_t op2, size_t vl)
{
  return vmacc_vx_u64m4_tumu(mask, dest, 0xFFFFFFFF80000000ull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m4_tumu_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m4_tumu_0xFFFFFFFF80000000ull )?} } } */

vuint64m4_t 
test_vmacc_vx_u64m4_tumu_0xFFFFFFFFFFFFFFFFull(vbool16_t mask, vuint64m4_t dest, vuint64m4_t op2, size_t vl)
{
  return vmacc_vx_u64m4_tumu(mask, dest, 0xFFFFFFFFFFFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m4_tumu_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m4_tumu_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m8_t 
test_vmacc_vx_u64m8_tumu_0x7FFFFFFFull(vbool8_t mask, vuint64m8_t dest, vuint64m8_t op2, size_t vl)
{
  return vmacc_vx_u64m8_tumu(mask, dest, 0x7FFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m8_tumu_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m8_tumu_0x7FFFFFFFull )?} } } */

vuint64m8_t 
test_vmacc_vx_u64m8_tumu_0xFFFFFFFF80000000ull(vbool8_t mask, vuint64m8_t dest, vuint64m8_t op2, size_t vl)
{
  return vmacc_vx_u64m8_tumu(mask, dest, 0xFFFFFFFF80000000ull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m8_tumu_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m8_tumu_0xFFFFFFFF80000000ull )?} } } */

vuint64m8_t 
test_vmacc_vx_u64m8_tumu_0xFFFFFFFFFFFFFFFFull(vbool8_t mask, vuint64m8_t dest, vuint64m8_t op2, size_t vl)
{
  return vmacc_vx_u64m8_tumu(mask, dest, 0xFFFFFFFFFFFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m8_tumu_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m8_tumu_0xFFFFFFFFFFFFFFFFull )?} } } */
