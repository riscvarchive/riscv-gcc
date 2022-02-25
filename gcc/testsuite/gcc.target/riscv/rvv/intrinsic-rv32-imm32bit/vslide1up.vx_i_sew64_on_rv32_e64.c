
/* { dg-do compile } */
/* { dg-additional-options "-std=c99 -pedantic-errors" } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv32*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vint64m1_t 
test_vslide1up_vx_i64m1_0x7FFFFFFFll(vint64m1_t op1, size_t vl)
{
  return vslide1up_vx_i64m1(op1, 0x7FFFFFFFll, vl);
}
/* { dg-final { scan-assembler-not {vslide1up\.vv(?: test_vslide1up_vx_i64m1_0x7FFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vslide1up\.vx(?: test_vslide1up_vx_i64m1_0x7FFFFFFFll )?} } } */

vint64m1_t 
test_vslide1up_vx_i64m1_0xFFFFFFFF80000000ll(vint64m1_t op1, size_t vl)
{
  return vslide1up_vx_i64m1(op1, 0xFFFFFFFF80000000ll, vl);
}
/* { dg-final { scan-assembler-not {vslide1up\.vv(?: test_vslide1up_vx_i64m1_0xFFFFFFFF80000000ll )?} } } */
/* { dg-final { scan-assembler {vslide1up\.vx(?: test_vslide1up_vx_i64m1_0xFFFFFFFF80000000ll )?} } } */

vint64m1_t 
test_vslide1up_vx_i64m1_0xFFFFFFFFFFFFFFFFll(vint64m1_t op1, size_t vl)
{
  return vslide1up_vx_i64m1(op1, 0xFFFFFFFFFFFFFFFFll, vl);
}
/* { dg-final { scan-assembler-not {vslide1up\.vv(?: test_vslide1up_vx_i64m1_0xFFFFFFFFFFFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vslide1up\.vx(?: test_vslide1up_vx_i64m1_0xFFFFFFFFFFFFFFFFll )?} } } */

vint64m2_t 
test_vslide1up_vx_i64m2_0x7FFFFFFFll(vint64m2_t op1, size_t vl)
{
  return vslide1up_vx_i64m2(op1, 0x7FFFFFFFll, vl);
}
/* { dg-final { scan-assembler-not {vslide1up\.vv(?: test_vslide1up_vx_i64m2_0x7FFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vslide1up\.vx(?: test_vslide1up_vx_i64m2_0x7FFFFFFFll )?} } } */

vint64m2_t 
test_vslide1up_vx_i64m2_0xFFFFFFFF80000000ll(vint64m2_t op1, size_t vl)
{
  return vslide1up_vx_i64m2(op1, 0xFFFFFFFF80000000ll, vl);
}
/* { dg-final { scan-assembler-not {vslide1up\.vv(?: test_vslide1up_vx_i64m2_0xFFFFFFFF80000000ll )?} } } */
/* { dg-final { scan-assembler {vslide1up\.vx(?: test_vslide1up_vx_i64m2_0xFFFFFFFF80000000ll )?} } } */

vint64m2_t 
test_vslide1up_vx_i64m2_0xFFFFFFFFFFFFFFFFll(vint64m2_t op1, size_t vl)
{
  return vslide1up_vx_i64m2(op1, 0xFFFFFFFFFFFFFFFFll, vl);
}
/* { dg-final { scan-assembler-not {vslide1up\.vv(?: test_vslide1up_vx_i64m2_0xFFFFFFFFFFFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vslide1up\.vx(?: test_vslide1up_vx_i64m2_0xFFFFFFFFFFFFFFFFll )?} } } */

vint64m4_t 
test_vslide1up_vx_i64m4_0x7FFFFFFFll(vint64m4_t op1, size_t vl)
{
  return vslide1up_vx_i64m4(op1, 0x7FFFFFFFll, vl);
}
/* { dg-final { scan-assembler-not {vslide1up\.vv(?: test_vslide1up_vx_i64m4_0x7FFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vslide1up\.vx(?: test_vslide1up_vx_i64m4_0x7FFFFFFFll )?} } } */

vint64m4_t 
test_vslide1up_vx_i64m4_0xFFFFFFFF80000000ll(vint64m4_t op1, size_t vl)
{
  return vslide1up_vx_i64m4(op1, 0xFFFFFFFF80000000ll, vl);
}
/* { dg-final { scan-assembler-not {vslide1up\.vv(?: test_vslide1up_vx_i64m4_0xFFFFFFFF80000000ll )?} } } */
/* { dg-final { scan-assembler {vslide1up\.vx(?: test_vslide1up_vx_i64m4_0xFFFFFFFF80000000ll )?} } } */

vint64m4_t 
test_vslide1up_vx_i64m4_0xFFFFFFFFFFFFFFFFll(vint64m4_t op1, size_t vl)
{
  return vslide1up_vx_i64m4(op1, 0xFFFFFFFFFFFFFFFFll, vl);
}
/* { dg-final { scan-assembler-not {vslide1up\.vv(?: test_vslide1up_vx_i64m4_0xFFFFFFFFFFFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vslide1up\.vx(?: test_vslide1up_vx_i64m4_0xFFFFFFFFFFFFFFFFll )?} } } */

vint64m8_t 
test_vslide1up_vx_i64m8_0x7FFFFFFFll(vint64m8_t op1, size_t vl)
{
  return vslide1up_vx_i64m8(op1, 0x7FFFFFFFll, vl);
}
/* { dg-final { scan-assembler-not {vslide1up\.vv(?: test_vslide1up_vx_i64m8_0x7FFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vslide1up\.vx(?: test_vslide1up_vx_i64m8_0x7FFFFFFFll )?} } } */

vint64m8_t 
test_vslide1up_vx_i64m8_0xFFFFFFFF80000000ll(vint64m8_t op1, size_t vl)
{
  return vslide1up_vx_i64m8(op1, 0xFFFFFFFF80000000ll, vl);
}
/* { dg-final { scan-assembler-not {vslide1up\.vv(?: test_vslide1up_vx_i64m8_0xFFFFFFFF80000000ll )?} } } */
/* { dg-final { scan-assembler {vslide1up\.vx(?: test_vslide1up_vx_i64m8_0xFFFFFFFF80000000ll )?} } } */

vint64m8_t 
test_vslide1up_vx_i64m8_0xFFFFFFFFFFFFFFFFll(vint64m8_t op1, size_t vl)
{
  return vslide1up_vx_i64m8(op1, 0xFFFFFFFFFFFFFFFFll, vl);
}
/* { dg-final { scan-assembler-not {vslide1up\.vv(?: test_vslide1up_vx_i64m8_0xFFFFFFFFFFFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vslide1up\.vx(?: test_vslide1up_vx_i64m8_0xFFFFFFFFFFFFFFFFll )?} } } */
