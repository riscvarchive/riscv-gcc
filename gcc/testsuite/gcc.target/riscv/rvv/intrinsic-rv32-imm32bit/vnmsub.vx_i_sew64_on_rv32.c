
/* { dg-do compile } */
/* { dg-additional-options "-std=c99 -pedantic-errors" } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv32*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vint64m1_t 
test_vnmsub_vx_i64m1_0x7FFFFFFFll(vint64m1_t dest, vint64m1_t op2, size_t vl)
{
  return vnmsub_vx_i64m1(dest, 0x7FFFFFFFll, op2, vl);
}
/* { dg-final { scan-assembler-not {vnmsub\.vv(?: test_vnmsub_vx_i64m1_0x7FFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vnmsub\.vx(?: test_vnmsub_vx_i64m1_0x7FFFFFFFll )?} } } */

vint64m1_t 
test_vnmsub_vx_i64m1_0xFFFFFFFF80000000ll(vint64m1_t dest, vint64m1_t op2, size_t vl)
{
  return vnmsub_vx_i64m1(dest, 0xFFFFFFFF80000000ll, op2, vl);
}
/* { dg-final { scan-assembler-not {vnmsub\.vv(?: test_vnmsub_vx_i64m1_0xFFFFFFFF80000000ll )?} } } */
/* { dg-final { scan-assembler {vnmsub\.vx(?: test_vnmsub_vx_i64m1_0xFFFFFFFF80000000ll )?} } } */

vint64m1_t 
test_vnmsub_vx_i64m1_0xFFFFFFFFFFFFFFFFll(vint64m1_t dest, vint64m1_t op2, size_t vl)
{
  return vnmsub_vx_i64m1(dest, 0xFFFFFFFFFFFFFFFFll, op2, vl);
}
/* { dg-final { scan-assembler-not {vnmsub\.vv(?: test_vnmsub_vx_i64m1_0xFFFFFFFFFFFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vnmsub\.vx(?: test_vnmsub_vx_i64m1_0xFFFFFFFFFFFFFFFFll )?} } } */

vint64m2_t 
test_vnmsub_vx_i64m2_0x7FFFFFFFll(vint64m2_t dest, vint64m2_t op2, size_t vl)
{
  return vnmsub_vx_i64m2(dest, 0x7FFFFFFFll, op2, vl);
}
/* { dg-final { scan-assembler-not {vnmsub\.vv(?: test_vnmsub_vx_i64m2_0x7FFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vnmsub\.vx(?: test_vnmsub_vx_i64m2_0x7FFFFFFFll )?} } } */

vint64m2_t 
test_vnmsub_vx_i64m2_0xFFFFFFFF80000000ll(vint64m2_t dest, vint64m2_t op2, size_t vl)
{
  return vnmsub_vx_i64m2(dest, 0xFFFFFFFF80000000ll, op2, vl);
}
/* { dg-final { scan-assembler-not {vnmsub\.vv(?: test_vnmsub_vx_i64m2_0xFFFFFFFF80000000ll )?} } } */
/* { dg-final { scan-assembler {vnmsub\.vx(?: test_vnmsub_vx_i64m2_0xFFFFFFFF80000000ll )?} } } */

vint64m2_t 
test_vnmsub_vx_i64m2_0xFFFFFFFFFFFFFFFFll(vint64m2_t dest, vint64m2_t op2, size_t vl)
{
  return vnmsub_vx_i64m2(dest, 0xFFFFFFFFFFFFFFFFll, op2, vl);
}
/* { dg-final { scan-assembler-not {vnmsub\.vv(?: test_vnmsub_vx_i64m2_0xFFFFFFFFFFFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vnmsub\.vx(?: test_vnmsub_vx_i64m2_0xFFFFFFFFFFFFFFFFll )?} } } */

vint64m4_t 
test_vnmsub_vx_i64m4_0x7FFFFFFFll(vint64m4_t dest, vint64m4_t op2, size_t vl)
{
  return vnmsub_vx_i64m4(dest, 0x7FFFFFFFll, op2, vl);
}
/* { dg-final { scan-assembler-not {vnmsub\.vv(?: test_vnmsub_vx_i64m4_0x7FFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vnmsub\.vx(?: test_vnmsub_vx_i64m4_0x7FFFFFFFll )?} } } */

vint64m4_t 
test_vnmsub_vx_i64m4_0xFFFFFFFF80000000ll(vint64m4_t dest, vint64m4_t op2, size_t vl)
{
  return vnmsub_vx_i64m4(dest, 0xFFFFFFFF80000000ll, op2, vl);
}
/* { dg-final { scan-assembler-not {vnmsub\.vv(?: test_vnmsub_vx_i64m4_0xFFFFFFFF80000000ll )?} } } */
/* { dg-final { scan-assembler {vnmsub\.vx(?: test_vnmsub_vx_i64m4_0xFFFFFFFF80000000ll )?} } } */

vint64m4_t 
test_vnmsub_vx_i64m4_0xFFFFFFFFFFFFFFFFll(vint64m4_t dest, vint64m4_t op2, size_t vl)
{
  return vnmsub_vx_i64m4(dest, 0xFFFFFFFFFFFFFFFFll, op2, vl);
}
/* { dg-final { scan-assembler-not {vnmsub\.vv(?: test_vnmsub_vx_i64m4_0xFFFFFFFFFFFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vnmsub\.vx(?: test_vnmsub_vx_i64m4_0xFFFFFFFFFFFFFFFFll )?} } } */

vint64m8_t 
test_vnmsub_vx_i64m8_0x7FFFFFFFll(vint64m8_t dest, vint64m8_t op2, size_t vl)
{
  return vnmsub_vx_i64m8(dest, 0x7FFFFFFFll, op2, vl);
}
/* { dg-final { scan-assembler-not {vnmsub\.vv(?: test_vnmsub_vx_i64m8_0x7FFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vnmsub\.vx(?: test_vnmsub_vx_i64m8_0x7FFFFFFFll )?} } } */

vint64m8_t 
test_vnmsub_vx_i64m8_0xFFFFFFFF80000000ll(vint64m8_t dest, vint64m8_t op2, size_t vl)
{
  return vnmsub_vx_i64m8(dest, 0xFFFFFFFF80000000ll, op2, vl);
}
/* { dg-final { scan-assembler-not {vnmsub\.vv(?: test_vnmsub_vx_i64m8_0xFFFFFFFF80000000ll )?} } } */
/* { dg-final { scan-assembler {vnmsub\.vx(?: test_vnmsub_vx_i64m8_0xFFFFFFFF80000000ll )?} } } */

vint64m8_t 
test_vnmsub_vx_i64m8_0xFFFFFFFFFFFFFFFFll(vint64m8_t dest, vint64m8_t op2, size_t vl)
{
  return vnmsub_vx_i64m8(dest, 0xFFFFFFFFFFFFFFFFll, op2, vl);
}
/* { dg-final { scan-assembler-not {vnmsub\.vv(?: test_vnmsub_vx_i64m8_0xFFFFFFFFFFFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vnmsub\.vx(?: test_vnmsub_vx_i64m8_0xFFFFFFFFFFFFFFFFll )?} } } */
