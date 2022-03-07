
/* { dg-do compile } */
/* { dg-additional-options "-std=c99 -pedantic-errors" } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv32*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vuint64m1_t 
test_vsub_vx_u64m1_0x7FFFFFFFull(vuint64m1_t op1, size_t vl)
{
  return vsub_vx_u64m1(op1, 0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vsub\.vv(?: test_vsub_vx_u64m1_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vsub\.vx(?: test_vsub_vx_u64m1_0x7FFFFFFFull )?} } } */

vuint64m1_t 
test_vsub_vx_u64m1_0xFFFFFFFF80000000ull(vuint64m1_t op1, size_t vl)
{
  return vsub_vx_u64m1(op1, 0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler-not {vsub\.vv(?: test_vsub_vx_u64m1_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vsub\.vx(?: test_vsub_vx_u64m1_0xFFFFFFFF80000000ull )?} } } */

vuint64m1_t 
test_vsub_vx_u64m1_0xFFFFFFFFFFFFFFFFull(vuint64m1_t op1, size_t vl)
{
  return vsub_vx_u64m1(op1, 0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vsub\.vv(?: test_vsub_vx_u64m1_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vsub\.vx(?: test_vsub_vx_u64m1_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m2_t 
test_vsub_vx_u64m2_0x7FFFFFFFull(vuint64m2_t op1, size_t vl)
{
  return vsub_vx_u64m2(op1, 0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vsub\.vv(?: test_vsub_vx_u64m2_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vsub\.vx(?: test_vsub_vx_u64m2_0x7FFFFFFFull )?} } } */

vuint64m2_t 
test_vsub_vx_u64m2_0xFFFFFFFF80000000ull(vuint64m2_t op1, size_t vl)
{
  return vsub_vx_u64m2(op1, 0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler-not {vsub\.vv(?: test_vsub_vx_u64m2_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vsub\.vx(?: test_vsub_vx_u64m2_0xFFFFFFFF80000000ull )?} } } */

vuint64m2_t 
test_vsub_vx_u64m2_0xFFFFFFFFFFFFFFFFull(vuint64m2_t op1, size_t vl)
{
  return vsub_vx_u64m2(op1, 0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vsub\.vv(?: test_vsub_vx_u64m2_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vsub\.vx(?: test_vsub_vx_u64m2_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m4_t 
test_vsub_vx_u64m4_0x7FFFFFFFull(vuint64m4_t op1, size_t vl)
{
  return vsub_vx_u64m4(op1, 0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vsub\.vv(?: test_vsub_vx_u64m4_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vsub\.vx(?: test_vsub_vx_u64m4_0x7FFFFFFFull )?} } } */

vuint64m4_t 
test_vsub_vx_u64m4_0xFFFFFFFF80000000ull(vuint64m4_t op1, size_t vl)
{
  return vsub_vx_u64m4(op1, 0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler-not {vsub\.vv(?: test_vsub_vx_u64m4_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vsub\.vx(?: test_vsub_vx_u64m4_0xFFFFFFFF80000000ull )?} } } */

vuint64m4_t 
test_vsub_vx_u64m4_0xFFFFFFFFFFFFFFFFull(vuint64m4_t op1, size_t vl)
{
  return vsub_vx_u64m4(op1, 0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vsub\.vv(?: test_vsub_vx_u64m4_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vsub\.vx(?: test_vsub_vx_u64m4_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m8_t 
test_vsub_vx_u64m8_0x7FFFFFFFull(vuint64m8_t op1, size_t vl)
{
  return vsub_vx_u64m8(op1, 0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vsub\.vv(?: test_vsub_vx_u64m8_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vsub\.vx(?: test_vsub_vx_u64m8_0x7FFFFFFFull )?} } } */

vuint64m8_t 
test_vsub_vx_u64m8_0xFFFFFFFF80000000ull(vuint64m8_t op1, size_t vl)
{
  return vsub_vx_u64m8(op1, 0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler-not {vsub\.vv(?: test_vsub_vx_u64m8_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vsub\.vx(?: test_vsub_vx_u64m8_0xFFFFFFFF80000000ull )?} } } */

vuint64m8_t 
test_vsub_vx_u64m8_0xFFFFFFFFFFFFFFFFull(vuint64m8_t op1, size_t vl)
{
  return vsub_vx_u64m8(op1, 0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vsub\.vv(?: test_vsub_vx_u64m8_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vsub\.vx(?: test_vsub_vx_u64m8_0xFFFFFFFFFFFFFFFFull )?} } } */
