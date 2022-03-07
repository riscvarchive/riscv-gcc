
/* { dg-do compile } */
/* { dg-additional-options "-std=c99 -pedantic-errors" } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv32*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vuint64m1_t 
test_vmacc_vx_u64m1_ta_0x7FFFFFFFull(vuint64m1_t dest, vuint64m1_t op2, size_t vl)
{
  return vmacc_vx_u64m1_ta(dest, 0x7FFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m1_ta_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m1_ta_0x7FFFFFFFull )?} } } */

vuint64m1_t 
test_vmacc_vx_u64m1_ta_0xFFFFFFFF80000000ull(vuint64m1_t dest, vuint64m1_t op2, size_t vl)
{
  return vmacc_vx_u64m1_ta(dest, 0xFFFFFFFF80000000ull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m1_ta_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m1_ta_0xFFFFFFFF80000000ull )?} } } */

vuint64m1_t 
test_vmacc_vx_u64m1_ta_0xFFFFFFFFFFFFFFFFull(vuint64m1_t dest, vuint64m1_t op2, size_t vl)
{
  return vmacc_vx_u64m1_ta(dest, 0xFFFFFFFFFFFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m1_ta_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m1_ta_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m2_t 
test_vmacc_vx_u64m2_ta_0x7FFFFFFFull(vuint64m2_t dest, vuint64m2_t op2, size_t vl)
{
  return vmacc_vx_u64m2_ta(dest, 0x7FFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m2_ta_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m2_ta_0x7FFFFFFFull )?} } } */

vuint64m2_t 
test_vmacc_vx_u64m2_ta_0xFFFFFFFF80000000ull(vuint64m2_t dest, vuint64m2_t op2, size_t vl)
{
  return vmacc_vx_u64m2_ta(dest, 0xFFFFFFFF80000000ull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m2_ta_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m2_ta_0xFFFFFFFF80000000ull )?} } } */

vuint64m2_t 
test_vmacc_vx_u64m2_ta_0xFFFFFFFFFFFFFFFFull(vuint64m2_t dest, vuint64m2_t op2, size_t vl)
{
  return vmacc_vx_u64m2_ta(dest, 0xFFFFFFFFFFFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m2_ta_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m2_ta_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m4_t 
test_vmacc_vx_u64m4_ta_0x7FFFFFFFull(vuint64m4_t dest, vuint64m4_t op2, size_t vl)
{
  return vmacc_vx_u64m4_ta(dest, 0x7FFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m4_ta_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m4_ta_0x7FFFFFFFull )?} } } */

vuint64m4_t 
test_vmacc_vx_u64m4_ta_0xFFFFFFFF80000000ull(vuint64m4_t dest, vuint64m4_t op2, size_t vl)
{
  return vmacc_vx_u64m4_ta(dest, 0xFFFFFFFF80000000ull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m4_ta_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m4_ta_0xFFFFFFFF80000000ull )?} } } */

vuint64m4_t 
test_vmacc_vx_u64m4_ta_0xFFFFFFFFFFFFFFFFull(vuint64m4_t dest, vuint64m4_t op2, size_t vl)
{
  return vmacc_vx_u64m4_ta(dest, 0xFFFFFFFFFFFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m4_ta_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m4_ta_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m8_t 
test_vmacc_vx_u64m8_ta_0x7FFFFFFFull(vuint64m8_t dest, vuint64m8_t op2, size_t vl)
{
  return vmacc_vx_u64m8_ta(dest, 0x7FFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m8_ta_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m8_ta_0x7FFFFFFFull )?} } } */

vuint64m8_t 
test_vmacc_vx_u64m8_ta_0xFFFFFFFF80000000ull(vuint64m8_t dest, vuint64m8_t op2, size_t vl)
{
  return vmacc_vx_u64m8_ta(dest, 0xFFFFFFFF80000000ull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m8_ta_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m8_ta_0xFFFFFFFF80000000ull )?} } } */

vuint64m8_t 
test_vmacc_vx_u64m8_ta_0xFFFFFFFFFFFFFFFFull(vuint64m8_t dest, vuint64m8_t op2, size_t vl)
{
  return vmacc_vx_u64m8_ta(dest, 0xFFFFFFFFFFFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m8_ta_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m8_ta_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m1_t 
test_vmacc_vx_u64m1_tu_0x7FFFFFFFull(vuint64m1_t dest, vuint64m1_t op2, size_t vl)
{
  return vmacc_vx_u64m1_tu(dest, 0x7FFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m1_tu_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m1_tu_0x7FFFFFFFull )?} } } */

vuint64m1_t 
test_vmacc_vx_u64m1_tu_0xFFFFFFFF80000000ull(vuint64m1_t dest, vuint64m1_t op2, size_t vl)
{
  return vmacc_vx_u64m1_tu(dest, 0xFFFFFFFF80000000ull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m1_tu_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m1_tu_0xFFFFFFFF80000000ull )?} } } */

vuint64m1_t 
test_vmacc_vx_u64m1_tu_0xFFFFFFFFFFFFFFFFull(vuint64m1_t dest, vuint64m1_t op2, size_t vl)
{
  return vmacc_vx_u64m1_tu(dest, 0xFFFFFFFFFFFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m1_tu_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m1_tu_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m2_t 
test_vmacc_vx_u64m2_tu_0x7FFFFFFFull(vuint64m2_t dest, vuint64m2_t op2, size_t vl)
{
  return vmacc_vx_u64m2_tu(dest, 0x7FFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m2_tu_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m2_tu_0x7FFFFFFFull )?} } } */

vuint64m2_t 
test_vmacc_vx_u64m2_tu_0xFFFFFFFF80000000ull(vuint64m2_t dest, vuint64m2_t op2, size_t vl)
{
  return vmacc_vx_u64m2_tu(dest, 0xFFFFFFFF80000000ull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m2_tu_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m2_tu_0xFFFFFFFF80000000ull )?} } } */

vuint64m2_t 
test_vmacc_vx_u64m2_tu_0xFFFFFFFFFFFFFFFFull(vuint64m2_t dest, vuint64m2_t op2, size_t vl)
{
  return vmacc_vx_u64m2_tu(dest, 0xFFFFFFFFFFFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m2_tu_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m2_tu_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m4_t 
test_vmacc_vx_u64m4_tu_0x7FFFFFFFull(vuint64m4_t dest, vuint64m4_t op2, size_t vl)
{
  return vmacc_vx_u64m4_tu(dest, 0x7FFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m4_tu_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m4_tu_0x7FFFFFFFull )?} } } */

vuint64m4_t 
test_vmacc_vx_u64m4_tu_0xFFFFFFFF80000000ull(vuint64m4_t dest, vuint64m4_t op2, size_t vl)
{
  return vmacc_vx_u64m4_tu(dest, 0xFFFFFFFF80000000ull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m4_tu_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m4_tu_0xFFFFFFFF80000000ull )?} } } */

vuint64m4_t 
test_vmacc_vx_u64m4_tu_0xFFFFFFFFFFFFFFFFull(vuint64m4_t dest, vuint64m4_t op2, size_t vl)
{
  return vmacc_vx_u64m4_tu(dest, 0xFFFFFFFFFFFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m4_tu_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m4_tu_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m8_t 
test_vmacc_vx_u64m8_tu_0x7FFFFFFFull(vuint64m8_t dest, vuint64m8_t op2, size_t vl)
{
  return vmacc_vx_u64m8_tu(dest, 0x7FFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m8_tu_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m8_tu_0x7FFFFFFFull )?} } } */

vuint64m8_t 
test_vmacc_vx_u64m8_tu_0xFFFFFFFF80000000ull(vuint64m8_t dest, vuint64m8_t op2, size_t vl)
{
  return vmacc_vx_u64m8_tu(dest, 0xFFFFFFFF80000000ull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m8_tu_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m8_tu_0xFFFFFFFF80000000ull )?} } } */

vuint64m8_t 
test_vmacc_vx_u64m8_tu_0xFFFFFFFFFFFFFFFFull(vuint64m8_t dest, vuint64m8_t op2, size_t vl)
{
  return vmacc_vx_u64m8_tu(dest, 0xFFFFFFFFFFFFFFFFull, op2, vl);
}
/* { dg-final { scan-assembler-not {vmacc\.vv(?: test_vmacc_vx_u64m8_tu_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmacc\.vx(?: test_vmacc_vx_u64m8_tu_0xFFFFFFFFFFFFFFFFull )?} } } */
