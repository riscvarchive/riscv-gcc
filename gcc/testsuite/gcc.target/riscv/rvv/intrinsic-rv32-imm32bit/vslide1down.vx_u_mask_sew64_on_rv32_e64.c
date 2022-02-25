
/* { dg-do compile } */
/* { dg-additional-options "-std=c99 -pedantic-errors" } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv32*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vuint64m1_t 
test_vslide1down_vx_u64m1_m_0x7FFFFFFFull(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, size_t vl)
{
  return vslide1down_vx_u64m1_m(mask, maskedoff, op1, 0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vslide1down\.vv(?: test_vslide1down_vx_u64m1_m_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vslide1down\.vx(?: test_vslide1down_vx_u64m1_m_0x7FFFFFFFull )?} } } */

vuint64m1_t 
test_vslide1down_vx_u64m1_m_0xFFFFFFFF80000000ull(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, size_t vl)
{
  return vslide1down_vx_u64m1_m(mask, maskedoff, op1, 0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler-not {vslide1down\.vv(?: test_vslide1down_vx_u64m1_m_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vslide1down\.vx(?: test_vslide1down_vx_u64m1_m_0xFFFFFFFF80000000ull )?} } } */

vuint64m1_t 
test_vslide1down_vx_u64m1_m_0xFFFFFFFFFFFFFFFFull(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, size_t vl)
{
  return vslide1down_vx_u64m1_m(mask, maskedoff, op1, 0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vslide1down\.vv(?: test_vslide1down_vx_u64m1_m_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vslide1down\.vx(?: test_vslide1down_vx_u64m1_m_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m2_t 
test_vslide1down_vx_u64m2_m_0x7FFFFFFFull(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, size_t vl)
{
  return vslide1down_vx_u64m2_m(mask, maskedoff, op1, 0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vslide1down\.vv(?: test_vslide1down_vx_u64m2_m_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vslide1down\.vx(?: test_vslide1down_vx_u64m2_m_0x7FFFFFFFull )?} } } */

vuint64m2_t 
test_vslide1down_vx_u64m2_m_0xFFFFFFFF80000000ull(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, size_t vl)
{
  return vslide1down_vx_u64m2_m(mask, maskedoff, op1, 0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler-not {vslide1down\.vv(?: test_vslide1down_vx_u64m2_m_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vslide1down\.vx(?: test_vslide1down_vx_u64m2_m_0xFFFFFFFF80000000ull )?} } } */

vuint64m2_t 
test_vslide1down_vx_u64m2_m_0xFFFFFFFFFFFFFFFFull(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, size_t vl)
{
  return vslide1down_vx_u64m2_m(mask, maskedoff, op1, 0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vslide1down\.vv(?: test_vslide1down_vx_u64m2_m_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vslide1down\.vx(?: test_vslide1down_vx_u64m2_m_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m4_t 
test_vslide1down_vx_u64m4_m_0x7FFFFFFFull(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, size_t vl)
{
  return vslide1down_vx_u64m4_m(mask, maskedoff, op1, 0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vslide1down\.vv(?: test_vslide1down_vx_u64m4_m_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vslide1down\.vx(?: test_vslide1down_vx_u64m4_m_0x7FFFFFFFull )?} } } */

vuint64m4_t 
test_vslide1down_vx_u64m4_m_0xFFFFFFFF80000000ull(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, size_t vl)
{
  return vslide1down_vx_u64m4_m(mask, maskedoff, op1, 0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler-not {vslide1down\.vv(?: test_vslide1down_vx_u64m4_m_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vslide1down\.vx(?: test_vslide1down_vx_u64m4_m_0xFFFFFFFF80000000ull )?} } } */

vuint64m4_t 
test_vslide1down_vx_u64m4_m_0xFFFFFFFFFFFFFFFFull(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, size_t vl)
{
  return vslide1down_vx_u64m4_m(mask, maskedoff, op1, 0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vslide1down\.vv(?: test_vslide1down_vx_u64m4_m_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vslide1down\.vx(?: test_vslide1down_vx_u64m4_m_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m8_t 
test_vslide1down_vx_u64m8_m_0x7FFFFFFFull(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, size_t vl)
{
  return vslide1down_vx_u64m8_m(mask, maskedoff, op1, 0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vslide1down\.vv(?: test_vslide1down_vx_u64m8_m_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vslide1down\.vx(?: test_vslide1down_vx_u64m8_m_0x7FFFFFFFull )?} } } */

vuint64m8_t 
test_vslide1down_vx_u64m8_m_0xFFFFFFFF80000000ull(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, size_t vl)
{
  return vslide1down_vx_u64m8_m(mask, maskedoff, op1, 0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler-not {vslide1down\.vv(?: test_vslide1down_vx_u64m8_m_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vslide1down\.vx(?: test_vslide1down_vx_u64m8_m_0xFFFFFFFF80000000ull )?} } } */

vuint64m8_t 
test_vslide1down_vx_u64m8_m_0xFFFFFFFFFFFFFFFFull(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, size_t vl)
{
  return vslide1down_vx_u64m8_m(mask, maskedoff, op1, 0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vslide1down\.vv(?: test_vslide1down_vx_u64m8_m_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vslide1down\.vx(?: test_vslide1down_vx_u64m8_m_0xFFFFFFFFFFFFFFFFull )?} } } */
