
/* { dg-do compile } */
/* { dg-additional-options "-std=c99 -pedantic-errors" } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv32*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vuint64m1_t 
test_vnmsub_vx_u64m1_0x7FFFFFFFull(vuint64m1_t dest, vuint64m1_t op2, size_t vl)
{
  return vnmsub_vx_u64m1(dest, 0x7FFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vnmsub\.vv(?: test_vnmsub_vx_u64m1_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vnmsub\.vx(?: test_vnmsub_vx_u64m1_0x7FFFFFFFull )?} } } */

vuint64m1_t 
test_vnmsub_vx_u64m1_0xFFFFFFFF80000000ull(vuint64m1_t dest, vuint64m1_t op2, size_t vl)
{
  return vnmsub_vx_u64m1(dest, 0xFFFFFFFF80000000ull, op2, vl);
}
/* { dg-final { scan-assembler-not {vnmsub\.vv(?: test_vnmsub_vx_u64m1_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vnmsub\.vx(?: test_vnmsub_vx_u64m1_0xFFFFFFFF80000000ull )?} } } */

vuint64m1_t 
test_vnmsub_vx_u64m1_0xFFFFFFFFFFFFFFFFull(vuint64m1_t dest, vuint64m1_t op2, size_t vl)
{
  return vnmsub_vx_u64m1(dest, 0xFFFFFFFFFFFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vnmsub\.vv(?: test_vnmsub_vx_u64m1_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vnmsub\.vx(?: test_vnmsub_vx_u64m1_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m2_t 
test_vnmsub_vx_u64m2_0x7FFFFFFFull(vuint64m2_t dest, vuint64m2_t op2, size_t vl)
{
  return vnmsub_vx_u64m2(dest, 0x7FFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vnmsub\.vv(?: test_vnmsub_vx_u64m2_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vnmsub\.vx(?: test_vnmsub_vx_u64m2_0x7FFFFFFFull )?} } } */

vuint64m2_t 
test_vnmsub_vx_u64m2_0xFFFFFFFF80000000ull(vuint64m2_t dest, vuint64m2_t op2, size_t vl)
{
  return vnmsub_vx_u64m2(dest, 0xFFFFFFFF80000000ull, op2, vl);
}
/* { dg-final { scan-assembler-not {vnmsub\.vv(?: test_vnmsub_vx_u64m2_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vnmsub\.vx(?: test_vnmsub_vx_u64m2_0xFFFFFFFF80000000ull )?} } } */

vuint64m2_t 
test_vnmsub_vx_u64m2_0xFFFFFFFFFFFFFFFFull(vuint64m2_t dest, vuint64m2_t op2, size_t vl)
{
  return vnmsub_vx_u64m2(dest, 0xFFFFFFFFFFFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vnmsub\.vv(?: test_vnmsub_vx_u64m2_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vnmsub\.vx(?: test_vnmsub_vx_u64m2_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m4_t 
test_vnmsub_vx_u64m4_0x7FFFFFFFull(vuint64m4_t dest, vuint64m4_t op2, size_t vl)
{
  return vnmsub_vx_u64m4(dest, 0x7FFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vnmsub\.vv(?: test_vnmsub_vx_u64m4_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vnmsub\.vx(?: test_vnmsub_vx_u64m4_0x7FFFFFFFull )?} } } */

vuint64m4_t 
test_vnmsub_vx_u64m4_0xFFFFFFFF80000000ull(vuint64m4_t dest, vuint64m4_t op2, size_t vl)
{
  return vnmsub_vx_u64m4(dest, 0xFFFFFFFF80000000ull, op2, vl);
}
/* { dg-final { scan-assembler-not {vnmsub\.vv(?: test_vnmsub_vx_u64m4_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vnmsub\.vx(?: test_vnmsub_vx_u64m4_0xFFFFFFFF80000000ull )?} } } */

vuint64m4_t 
test_vnmsub_vx_u64m4_0xFFFFFFFFFFFFFFFFull(vuint64m4_t dest, vuint64m4_t op2, size_t vl)
{
  return vnmsub_vx_u64m4(dest, 0xFFFFFFFFFFFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vnmsub\.vv(?: test_vnmsub_vx_u64m4_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vnmsub\.vx(?: test_vnmsub_vx_u64m4_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m8_t 
test_vnmsub_vx_u64m8_0x7FFFFFFFull(vuint64m8_t dest, vuint64m8_t op2, size_t vl)
{
  return vnmsub_vx_u64m8(dest, 0x7FFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vnmsub\.vv(?: test_vnmsub_vx_u64m8_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vnmsub\.vx(?: test_vnmsub_vx_u64m8_0x7FFFFFFFull )?} } } */

vuint64m8_t 
test_vnmsub_vx_u64m8_0xFFFFFFFF80000000ull(vuint64m8_t dest, vuint64m8_t op2, size_t vl)
{
  return vnmsub_vx_u64m8(dest, 0xFFFFFFFF80000000ull, op2, vl);
}
/* { dg-final { scan-assembler-not {vnmsub\.vv(?: test_vnmsub_vx_u64m8_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vnmsub\.vx(?: test_vnmsub_vx_u64m8_0xFFFFFFFF80000000ull )?} } } */

vuint64m8_t 
test_vnmsub_vx_u64m8_0xFFFFFFFFFFFFFFFFull(vuint64m8_t dest, vuint64m8_t op2, size_t vl)
{
  return vnmsub_vx_u64m8(dest, 0xFFFFFFFFFFFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vnmsub\.vv(?: test_vnmsub_vx_u64m8_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vnmsub\.vx(?: test_vnmsub_vx_u64m8_0xFFFFFFFFFFFFFFFFull )?} } } */
