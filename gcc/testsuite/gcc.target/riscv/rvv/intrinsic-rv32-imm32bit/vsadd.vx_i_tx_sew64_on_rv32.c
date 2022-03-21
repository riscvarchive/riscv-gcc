
/* { dg-do compile } */
/* { dg-additional-options "-std=c99 -pedantic-errors" } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv32*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vint64m1_t 
test_vsadd_vx_i64m1_ta_0x7FFFFFFFll(vint64m1_t op1, size_t vl)
{
  return vsadd_vx_i64m1_ta(op1, 0x7FFFFFFFll, vl);
}
/* { dg-final { scan-assembler-not {vsadd\.vv(?: test_vsadd_vx_i64m1_ta_0x7FFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vsadd\.vx(?: test_vsadd_vx_i64m1_ta_0x7FFFFFFFll )?} } } */

vint64m1_t 
test_vsadd_vx_i64m1_ta_0xFFFFFFFF80000000ll(vint64m1_t op1, size_t vl)
{
  return vsadd_vx_i64m1_ta(op1, 0xFFFFFFFF80000000ll, vl);
}
/* { dg-final { scan-assembler-not {vsadd\.vv(?: test_vsadd_vx_i64m1_ta_0xFFFFFFFF80000000ll )?} } } */
/* { dg-final { scan-assembler {vsadd\.vx(?: test_vsadd_vx_i64m1_ta_0xFFFFFFFF80000000ll )?} } } */

vint64m1_t 
test_vsadd_vx_i64m1_ta_0xFFFFFFFFFFFFFFFFll(vint64m1_t op1, size_t vl)
{
  return vsadd_vx_i64m1_ta(op1, 0xFFFFFFFFFFFFFFFFll, vl);
}
/* { dg-final { scan-assembler-not {vsadd\.vv(?: test_vsadd_vx_i64m1_ta_0xFFFFFFFFFFFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vsadd\.vx(?: test_vsadd_vx_i64m1_ta_0xFFFFFFFFFFFFFFFFll )?} } } */

vint64m2_t 
test_vsadd_vx_i64m2_ta_0x7FFFFFFFll(vint64m2_t op1, size_t vl)
{
  return vsadd_vx_i64m2_ta(op1, 0x7FFFFFFFll, vl);
}
/* { dg-final { scan-assembler-not {vsadd\.vv(?: test_vsadd_vx_i64m2_ta_0x7FFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vsadd\.vx(?: test_vsadd_vx_i64m2_ta_0x7FFFFFFFll )?} } } */

vint64m2_t 
test_vsadd_vx_i64m2_ta_0xFFFFFFFF80000000ll(vint64m2_t op1, size_t vl)
{
  return vsadd_vx_i64m2_ta(op1, 0xFFFFFFFF80000000ll, vl);
}
/* { dg-final { scan-assembler-not {vsadd\.vv(?: test_vsadd_vx_i64m2_ta_0xFFFFFFFF80000000ll )?} } } */
/* { dg-final { scan-assembler {vsadd\.vx(?: test_vsadd_vx_i64m2_ta_0xFFFFFFFF80000000ll )?} } } */

vint64m2_t 
test_vsadd_vx_i64m2_ta_0xFFFFFFFFFFFFFFFFll(vint64m2_t op1, size_t vl)
{
  return vsadd_vx_i64m2_ta(op1, 0xFFFFFFFFFFFFFFFFll, vl);
}
/* { dg-final { scan-assembler-not {vsadd\.vv(?: test_vsadd_vx_i64m2_ta_0xFFFFFFFFFFFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vsadd\.vx(?: test_vsadd_vx_i64m2_ta_0xFFFFFFFFFFFFFFFFll )?} } } */

vint64m4_t 
test_vsadd_vx_i64m4_ta_0x7FFFFFFFll(vint64m4_t op1, size_t vl)
{
  return vsadd_vx_i64m4_ta(op1, 0x7FFFFFFFll, vl);
}
/* { dg-final { scan-assembler-not {vsadd\.vv(?: test_vsadd_vx_i64m4_ta_0x7FFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vsadd\.vx(?: test_vsadd_vx_i64m4_ta_0x7FFFFFFFll )?} } } */

vint64m4_t 
test_vsadd_vx_i64m4_ta_0xFFFFFFFF80000000ll(vint64m4_t op1, size_t vl)
{
  return vsadd_vx_i64m4_ta(op1, 0xFFFFFFFF80000000ll, vl);
}
/* { dg-final { scan-assembler-not {vsadd\.vv(?: test_vsadd_vx_i64m4_ta_0xFFFFFFFF80000000ll )?} } } */
/* { dg-final { scan-assembler {vsadd\.vx(?: test_vsadd_vx_i64m4_ta_0xFFFFFFFF80000000ll )?} } } */

vint64m4_t 
test_vsadd_vx_i64m4_ta_0xFFFFFFFFFFFFFFFFll(vint64m4_t op1, size_t vl)
{
  return vsadd_vx_i64m4_ta(op1, 0xFFFFFFFFFFFFFFFFll, vl);
}
/* { dg-final { scan-assembler-not {vsadd\.vv(?: test_vsadd_vx_i64m4_ta_0xFFFFFFFFFFFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vsadd\.vx(?: test_vsadd_vx_i64m4_ta_0xFFFFFFFFFFFFFFFFll )?} } } */

vint64m8_t 
test_vsadd_vx_i64m8_ta_0x7FFFFFFFll(vint64m8_t op1, size_t vl)
{
  return vsadd_vx_i64m8_ta(op1, 0x7FFFFFFFll, vl);
}
/* { dg-final { scan-assembler-not {vsadd\.vv(?: test_vsadd_vx_i64m8_ta_0x7FFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vsadd\.vx(?: test_vsadd_vx_i64m8_ta_0x7FFFFFFFll )?} } } */

vint64m8_t 
test_vsadd_vx_i64m8_ta_0xFFFFFFFF80000000ll(vint64m8_t op1, size_t vl)
{
  return vsadd_vx_i64m8_ta(op1, 0xFFFFFFFF80000000ll, vl);
}
/* { dg-final { scan-assembler-not {vsadd\.vv(?: test_vsadd_vx_i64m8_ta_0xFFFFFFFF80000000ll )?} } } */
/* { dg-final { scan-assembler {vsadd\.vx(?: test_vsadd_vx_i64m8_ta_0xFFFFFFFF80000000ll )?} } } */

vint64m8_t 
test_vsadd_vx_i64m8_ta_0xFFFFFFFFFFFFFFFFll(vint64m8_t op1, size_t vl)
{
  return vsadd_vx_i64m8_ta(op1, 0xFFFFFFFFFFFFFFFFll, vl);
}
/* { dg-final { scan-assembler-not {vsadd\.vv(?: test_vsadd_vx_i64m8_ta_0xFFFFFFFFFFFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vsadd\.vx(?: test_vsadd_vx_i64m8_ta_0xFFFFFFFFFFFFFFFFll )?} } } */

vint64m1_t 
test_vsadd_vx_i64m1_tu_0x7FFFFFFFll(vint64m1_t dest, vint64m1_t op1, size_t vl)
{
  return vsadd_vx_i64m1_tu(dest, op1, 0x7FFFFFFFll, vl);
}
/* { dg-final { scan-assembler-not {vsadd\.vv(?: test_vsadd_vx_i64m1_tu_0x7FFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vsadd\.vx(?: test_vsadd_vx_i64m1_tu_0x7FFFFFFFll )?} } } */

vint64m1_t 
test_vsadd_vx_i64m1_tu_0xFFFFFFFF80000000ll(vint64m1_t dest, vint64m1_t op1, size_t vl)
{
  return vsadd_vx_i64m1_tu(dest, op1, 0xFFFFFFFF80000000ll, vl);
}
/* { dg-final { scan-assembler-not {vsadd\.vv(?: test_vsadd_vx_i64m1_tu_0xFFFFFFFF80000000ll )?} } } */
/* { dg-final { scan-assembler {vsadd\.vx(?: test_vsadd_vx_i64m1_tu_0xFFFFFFFF80000000ll )?} } } */

vint64m1_t 
test_vsadd_vx_i64m1_tu_0xFFFFFFFFFFFFFFFFll(vint64m1_t dest, vint64m1_t op1, size_t vl)
{
  return vsadd_vx_i64m1_tu(dest, op1, 0xFFFFFFFFFFFFFFFFll, vl);
}
/* { dg-final { scan-assembler-not {vsadd\.vv(?: test_vsadd_vx_i64m1_tu_0xFFFFFFFFFFFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vsadd\.vx(?: test_vsadd_vx_i64m1_tu_0xFFFFFFFFFFFFFFFFll )?} } } */

vint64m2_t 
test_vsadd_vx_i64m2_tu_0x7FFFFFFFll(vint64m2_t dest, vint64m2_t op1, size_t vl)
{
  return vsadd_vx_i64m2_tu(dest, op1, 0x7FFFFFFFll, vl);
}
/* { dg-final { scan-assembler-not {vsadd\.vv(?: test_vsadd_vx_i64m2_tu_0x7FFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vsadd\.vx(?: test_vsadd_vx_i64m2_tu_0x7FFFFFFFll )?} } } */

vint64m2_t 
test_vsadd_vx_i64m2_tu_0xFFFFFFFF80000000ll(vint64m2_t dest, vint64m2_t op1, size_t vl)
{
  return vsadd_vx_i64m2_tu(dest, op1, 0xFFFFFFFF80000000ll, vl);
}
/* { dg-final { scan-assembler-not {vsadd\.vv(?: test_vsadd_vx_i64m2_tu_0xFFFFFFFF80000000ll )?} } } */
/* { dg-final { scan-assembler {vsadd\.vx(?: test_vsadd_vx_i64m2_tu_0xFFFFFFFF80000000ll )?} } } */

vint64m2_t 
test_vsadd_vx_i64m2_tu_0xFFFFFFFFFFFFFFFFll(vint64m2_t dest, vint64m2_t op1, size_t vl)
{
  return vsadd_vx_i64m2_tu(dest, op1, 0xFFFFFFFFFFFFFFFFll, vl);
}
/* { dg-final { scan-assembler-not {vsadd\.vv(?: test_vsadd_vx_i64m2_tu_0xFFFFFFFFFFFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vsadd\.vx(?: test_vsadd_vx_i64m2_tu_0xFFFFFFFFFFFFFFFFll )?} } } */

vint64m4_t 
test_vsadd_vx_i64m4_tu_0x7FFFFFFFll(vint64m4_t dest, vint64m4_t op1, size_t vl)
{
  return vsadd_vx_i64m4_tu(dest, op1, 0x7FFFFFFFll, vl);
}
/* { dg-final { scan-assembler-not {vsadd\.vv(?: test_vsadd_vx_i64m4_tu_0x7FFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vsadd\.vx(?: test_vsadd_vx_i64m4_tu_0x7FFFFFFFll )?} } } */

vint64m4_t 
test_vsadd_vx_i64m4_tu_0xFFFFFFFF80000000ll(vint64m4_t dest, vint64m4_t op1, size_t vl)
{
  return vsadd_vx_i64m4_tu(dest, op1, 0xFFFFFFFF80000000ll, vl);
}
/* { dg-final { scan-assembler-not {vsadd\.vv(?: test_vsadd_vx_i64m4_tu_0xFFFFFFFF80000000ll )?} } } */
/* { dg-final { scan-assembler {vsadd\.vx(?: test_vsadd_vx_i64m4_tu_0xFFFFFFFF80000000ll )?} } } */

vint64m4_t 
test_vsadd_vx_i64m4_tu_0xFFFFFFFFFFFFFFFFll(vint64m4_t dest, vint64m4_t op1, size_t vl)
{
  return vsadd_vx_i64m4_tu(dest, op1, 0xFFFFFFFFFFFFFFFFll, vl);
}
/* { dg-final { scan-assembler-not {vsadd\.vv(?: test_vsadd_vx_i64m4_tu_0xFFFFFFFFFFFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vsadd\.vx(?: test_vsadd_vx_i64m4_tu_0xFFFFFFFFFFFFFFFFll )?} } } */

vint64m8_t 
test_vsadd_vx_i64m8_tu_0x7FFFFFFFll(vint64m8_t dest, vint64m8_t op1, size_t vl)
{
  return vsadd_vx_i64m8_tu(dest, op1, 0x7FFFFFFFll, vl);
}
/* { dg-final { scan-assembler-not {vsadd\.vv(?: test_vsadd_vx_i64m8_tu_0x7FFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vsadd\.vx(?: test_vsadd_vx_i64m8_tu_0x7FFFFFFFll )?} } } */

vint64m8_t 
test_vsadd_vx_i64m8_tu_0xFFFFFFFF80000000ll(vint64m8_t dest, vint64m8_t op1, size_t vl)
{
  return vsadd_vx_i64m8_tu(dest, op1, 0xFFFFFFFF80000000ll, vl);
}
/* { dg-final { scan-assembler-not {vsadd\.vv(?: test_vsadd_vx_i64m8_tu_0xFFFFFFFF80000000ll )?} } } */
/* { dg-final { scan-assembler {vsadd\.vx(?: test_vsadd_vx_i64m8_tu_0xFFFFFFFF80000000ll )?} } } */

vint64m8_t 
test_vsadd_vx_i64m8_tu_0xFFFFFFFFFFFFFFFFll(vint64m8_t dest, vint64m8_t op1, size_t vl)
{
  return vsadd_vx_i64m8_tu(dest, op1, 0xFFFFFFFFFFFFFFFFll, vl);
}
/* { dg-final { scan-assembler-not {vsadd\.vv(?: test_vsadd_vx_i64m8_tu_0xFFFFFFFFFFFFFFFFll )?} } } */
/* { dg-final { scan-assembler {vsadd\.vx(?: test_vsadd_vx_i64m8_tu_0xFFFFFFFFFFFFFFFFll )?} } } */
