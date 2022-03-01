
/* { dg-do compile } */
/* { dg-additional-options "-std=c99 -pedantic-errors" } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv32*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vint64m1_t 
test_vadc_vxm_i64m1_0x7FFFFFFFll(vint64m1_t op1, vbool64_t op3, size_t vl)
{
  return vadc_vxm_i64m1(op1, 0x7FFFFFFFll, op3, vl);
}
/* { dg-final { scan-assembler-not {vadc\.vvm(?: test_vadc_vxm_i64m1_0x7FFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vadc\.vxm(?: test_vadc_vxm_i64m1_0x7FFFFFFFll )?} } } */

vint64m1_t 
test_vadc_vxm_i64m1_0xFFFFFFFF80000000ll(vint64m1_t op1, vbool64_t op3, size_t vl)
{
  return vadc_vxm_i64m1(op1, 0xFFFFFFFF80000000ll, op3, vl);
}
/* { dg-final { scan-assembler-not {vadc\.vvm(?: test_vadc_vxm_i64m1_0xFFFFFFFF80000000ll )?} } } */
/* { dg-final { scan-assembler {vadc\.vxm(?: test_vadc_vxm_i64m1_0xFFFFFFFF80000000ll )?} } } */

vint64m1_t 
test_vadc_vxm_i64m1_0xFFFFFFFFFFFFFFFFll(vint64m1_t op1, vbool64_t op3, size_t vl)
{
  return vadc_vxm_i64m1(op1, 0xFFFFFFFFFFFFFFFFll, op3, vl);
}
/* { dg-final { scan-assembler-not {vadc\.vvm(?: test_vadc_vxm_i64m1_0xFFFFFFFFFFFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vadc\.vxm(?: test_vadc_vxm_i64m1_0xFFFFFFFFFFFFFFFFll )?} } } */

vint64m2_t 
test_vadc_vxm_i64m2_0x7FFFFFFFll(vint64m2_t op1, vbool32_t op3, size_t vl)
{
  return vadc_vxm_i64m2(op1, 0x7FFFFFFFll, op3, vl);
}
/* { dg-final { scan-assembler-not {vadc\.vvm(?: test_vadc_vxm_i64m2_0x7FFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vadc\.vxm(?: test_vadc_vxm_i64m2_0x7FFFFFFFll )?} } } */

vint64m2_t 
test_vadc_vxm_i64m2_0xFFFFFFFF80000000ll(vint64m2_t op1, vbool32_t op3, size_t vl)
{
  return vadc_vxm_i64m2(op1, 0xFFFFFFFF80000000ll, op3, vl);
}
/* { dg-final { scan-assembler-not {vadc\.vvm(?: test_vadc_vxm_i64m2_0xFFFFFFFF80000000ll )?} } } */
/* { dg-final { scan-assembler {vadc\.vxm(?: test_vadc_vxm_i64m2_0xFFFFFFFF80000000ll )?} } } */

vint64m2_t 
test_vadc_vxm_i64m2_0xFFFFFFFFFFFFFFFFll(vint64m2_t op1, vbool32_t op3, size_t vl)
{
  return vadc_vxm_i64m2(op1, 0xFFFFFFFFFFFFFFFFll, op3, vl);
}
/* { dg-final { scan-assembler-not {vadc\.vvm(?: test_vadc_vxm_i64m2_0xFFFFFFFFFFFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vadc\.vxm(?: test_vadc_vxm_i64m2_0xFFFFFFFFFFFFFFFFll )?} } } */

vint64m4_t 
test_vadc_vxm_i64m4_0x7FFFFFFFll(vint64m4_t op1, vbool16_t op3, size_t vl)
{
  return vadc_vxm_i64m4(op1, 0x7FFFFFFFll, op3, vl);
}
/* { dg-final { scan-assembler-not {vadc\.vvm(?: test_vadc_vxm_i64m4_0x7FFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vadc\.vxm(?: test_vadc_vxm_i64m4_0x7FFFFFFFll )?} } } */

vint64m4_t 
test_vadc_vxm_i64m4_0xFFFFFFFF80000000ll(vint64m4_t op1, vbool16_t op3, size_t vl)
{
  return vadc_vxm_i64m4(op1, 0xFFFFFFFF80000000ll, op3, vl);
}
/* { dg-final { scan-assembler-not {vadc\.vvm(?: test_vadc_vxm_i64m4_0xFFFFFFFF80000000ll )?} } } */
/* { dg-final { scan-assembler {vadc\.vxm(?: test_vadc_vxm_i64m4_0xFFFFFFFF80000000ll )?} } } */

vint64m4_t 
test_vadc_vxm_i64m4_0xFFFFFFFFFFFFFFFFll(vint64m4_t op1, vbool16_t op3, size_t vl)
{
  return vadc_vxm_i64m4(op1, 0xFFFFFFFFFFFFFFFFll, op3, vl);
}
/* { dg-final { scan-assembler-not {vadc\.vvm(?: test_vadc_vxm_i64m4_0xFFFFFFFFFFFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vadc\.vxm(?: test_vadc_vxm_i64m4_0xFFFFFFFFFFFFFFFFll )?} } } */

vint64m8_t 
test_vadc_vxm_i64m8_0x7FFFFFFFll(vint64m8_t op1, vbool8_t op3, size_t vl)
{
  return vadc_vxm_i64m8(op1, 0x7FFFFFFFll, op3, vl);
}
/* { dg-final { scan-assembler-not {vadc\.vvm(?: test_vadc_vxm_i64m8_0x7FFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vadc\.vxm(?: test_vadc_vxm_i64m8_0x7FFFFFFFll )?} } } */

vint64m8_t 
test_vadc_vxm_i64m8_0xFFFFFFFF80000000ll(vint64m8_t op1, vbool8_t op3, size_t vl)
{
  return vadc_vxm_i64m8(op1, 0xFFFFFFFF80000000ll, op3, vl);
}
/* { dg-final { scan-assembler-not {vadc\.vvm(?: test_vadc_vxm_i64m8_0xFFFFFFFF80000000ll )?} } } */
/* { dg-final { scan-assembler {vadc\.vxm(?: test_vadc_vxm_i64m8_0xFFFFFFFF80000000ll )?} } } */

vint64m8_t 
test_vadc_vxm_i64m8_0xFFFFFFFFFFFFFFFFll(vint64m8_t op1, vbool8_t op3, size_t vl)
{
  return vadc_vxm_i64m8(op1, 0xFFFFFFFFFFFFFFFFll, op3, vl);
}
/* { dg-final { scan-assembler-not {vadc\.vvm(?: test_vadc_vxm_i64m8_0xFFFFFFFFFFFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vadc\.vxm(?: test_vadc_vxm_i64m8_0xFFFFFFFFFFFFFFFFll )?} } } */
