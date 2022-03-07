
/* { dg-do compile } */
/* { dg-additional-options "-std=c99 -pedantic-errors" } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv32*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vbool64_t 
test_vmadc_vxm_u64m1_b64_0x7FFFFFFFull(vuint64m1_t op1, vbool64_t op3, size_t vl)
{
  return vmadc_vxm_u64m1_b64(op1, 0x7FFFFFFFull, op3, vl);
}
/* { dg-final { scan-assembler-not {vmadc\.vvm(?: test_vmadc_vxm_u64m1_b64_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmadc\.vxm(?: test_vmadc_vxm_u64m1_b64_0x7FFFFFFFull )?} } } */

vbool64_t 
test_vmadc_vxm_u64m1_b64_0xFFFFFFFF80000000ull(vuint64m1_t op1, vbool64_t op3, size_t vl)
{
  return vmadc_vxm_u64m1_b64(op1, 0xFFFFFFFF80000000ull, op3, vl);
}
/* { dg-final { scan-assembler-not {vmadc\.vvm(?: test_vmadc_vxm_u64m1_b64_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmadc\.vxm(?: test_vmadc_vxm_u64m1_b64_0xFFFFFFFF80000000ull )?} } } */

vbool64_t 
test_vmadc_vxm_u64m1_b64_0xFFFFFFFFFFFFFFFFull(vuint64m1_t op1, vbool64_t op3, size_t vl)
{
  return vmadc_vxm_u64m1_b64(op1, 0xFFFFFFFFFFFFFFFFull, op3, vl);
}
/* { dg-final { scan-assembler-not {vmadc\.vvm(?: test_vmadc_vxm_u64m1_b64_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmadc\.vxm(?: test_vmadc_vxm_u64m1_b64_0xFFFFFFFFFFFFFFFFull )?} } } */

vbool32_t 
test_vmadc_vxm_u64m2_b32_0x7FFFFFFFull(vuint64m2_t op1, vbool32_t op3, size_t vl)
{
  return vmadc_vxm_u64m2_b32(op1, 0x7FFFFFFFull, op3, vl);
}
/* { dg-final { scan-assembler-not {vmadc\.vvm(?: test_vmadc_vxm_u64m2_b32_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmadc\.vxm(?: test_vmadc_vxm_u64m2_b32_0x7FFFFFFFull )?} } } */

vbool32_t 
test_vmadc_vxm_u64m2_b32_0xFFFFFFFF80000000ull(vuint64m2_t op1, vbool32_t op3, size_t vl)
{
  return vmadc_vxm_u64m2_b32(op1, 0xFFFFFFFF80000000ull, op3, vl);
}
/* { dg-final { scan-assembler-not {vmadc\.vvm(?: test_vmadc_vxm_u64m2_b32_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmadc\.vxm(?: test_vmadc_vxm_u64m2_b32_0xFFFFFFFF80000000ull )?} } } */

vbool32_t 
test_vmadc_vxm_u64m2_b32_0xFFFFFFFFFFFFFFFFull(vuint64m2_t op1, vbool32_t op3, size_t vl)
{
  return vmadc_vxm_u64m2_b32(op1, 0xFFFFFFFFFFFFFFFFull, op3, vl);
}
/* { dg-final { scan-assembler-not {vmadc\.vvm(?: test_vmadc_vxm_u64m2_b32_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmadc\.vxm(?: test_vmadc_vxm_u64m2_b32_0xFFFFFFFFFFFFFFFFull )?} } } */

vbool16_t 
test_vmadc_vxm_u64m4_b16_0x7FFFFFFFull(vuint64m4_t op1, vbool16_t op3, size_t vl)
{
  return vmadc_vxm_u64m4_b16(op1, 0x7FFFFFFFull, op3, vl);
}
/* { dg-final { scan-assembler-not {vmadc\.vvm(?: test_vmadc_vxm_u64m4_b16_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmadc\.vxm(?: test_vmadc_vxm_u64m4_b16_0x7FFFFFFFull )?} } } */

vbool16_t 
test_vmadc_vxm_u64m4_b16_0xFFFFFFFF80000000ull(vuint64m4_t op1, vbool16_t op3, size_t vl)
{
  return vmadc_vxm_u64m4_b16(op1, 0xFFFFFFFF80000000ull, op3, vl);
}
/* { dg-final { scan-assembler-not {vmadc\.vvm(?: test_vmadc_vxm_u64m4_b16_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmadc\.vxm(?: test_vmadc_vxm_u64m4_b16_0xFFFFFFFF80000000ull )?} } } */

vbool16_t 
test_vmadc_vxm_u64m4_b16_0xFFFFFFFFFFFFFFFFull(vuint64m4_t op1, vbool16_t op3, size_t vl)
{
  return vmadc_vxm_u64m4_b16(op1, 0xFFFFFFFFFFFFFFFFull, op3, vl);
}
/* { dg-final { scan-assembler-not {vmadc\.vvm(?: test_vmadc_vxm_u64m4_b16_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmadc\.vxm(?: test_vmadc_vxm_u64m4_b16_0xFFFFFFFFFFFFFFFFull )?} } } */

vbool8_t 
test_vmadc_vxm_u64m8_b8_0x7FFFFFFFull(vuint64m8_t op1, vbool8_t op3, size_t vl)
{
  return vmadc_vxm_u64m8_b8(op1, 0x7FFFFFFFull, op3, vl);
}
/* { dg-final { scan-assembler-not {vmadc\.vvm(?: test_vmadc_vxm_u64m8_b8_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmadc\.vxm(?: test_vmadc_vxm_u64m8_b8_0x7FFFFFFFull )?} } } */

vbool8_t 
test_vmadc_vxm_u64m8_b8_0xFFFFFFFF80000000ull(vuint64m8_t op1, vbool8_t op3, size_t vl)
{
  return vmadc_vxm_u64m8_b8(op1, 0xFFFFFFFF80000000ull, op3, vl);
}
/* { dg-final { scan-assembler-not {vmadc\.vvm(?: test_vmadc_vxm_u64m8_b8_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmadc\.vxm(?: test_vmadc_vxm_u64m8_b8_0xFFFFFFFF80000000ull )?} } } */

vbool8_t 
test_vmadc_vxm_u64m8_b8_0xFFFFFFFFFFFFFFFFull(vuint64m8_t op1, vbool8_t op3, size_t vl)
{
  return vmadc_vxm_u64m8_b8(op1, 0xFFFFFFFFFFFFFFFFull, op3, vl);
}
/* { dg-final { scan-assembler-not {vmadc\.vvm(?: test_vmadc_vxm_u64m8_b8_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmadc\.vxm(?: test_vmadc_vxm_u64m8_b8_0xFFFFFFFFFFFFFFFFull )?} } } */
