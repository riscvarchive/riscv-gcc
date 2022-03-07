
/* { dg-do compile } */
/* { dg-additional-options "-std=c99 -pedantic-errors" } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv32*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vint64m1_t 
test_vmulhsu_vx_i64m1_ta_0x7FFFFFFFull(vint64m1_t op1, size_t vl)
{
  return vmulhsu_vx_i64m1_ta(op1, 0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmulhsu\.vv(?: test_vmulhsu_vx_i64m1_ta_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmulhsu\.vx(?: test_vmulhsu_vx_i64m1_ta_0x7FFFFFFFull )?} } } */

vint64m1_t 
test_vmulhsu_vx_i64m1_ta_0xFFFFFFFF80000000ull(vint64m1_t op1, size_t vl)
{
  return vmulhsu_vx_i64m1_ta(op1, 0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler-not {vmulhsu\.vv(?: test_vmulhsu_vx_i64m1_ta_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmulhsu\.vx(?: test_vmulhsu_vx_i64m1_ta_0xFFFFFFFF80000000ull )?} } } */

vint64m1_t 
test_vmulhsu_vx_i64m1_ta_0xFFFFFFFFFFFFFFFFull(vint64m1_t op1, size_t vl)
{
  return vmulhsu_vx_i64m1_ta(op1, 0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmulhsu\.vv(?: test_vmulhsu_vx_i64m1_ta_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmulhsu\.vx(?: test_vmulhsu_vx_i64m1_ta_0xFFFFFFFFFFFFFFFFull )?} } } */

vint64m2_t 
test_vmulhsu_vx_i64m2_ta_0x7FFFFFFFull(vint64m2_t op1, size_t vl)
{
  return vmulhsu_vx_i64m2_ta(op1, 0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmulhsu\.vv(?: test_vmulhsu_vx_i64m2_ta_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmulhsu\.vx(?: test_vmulhsu_vx_i64m2_ta_0x7FFFFFFFull )?} } } */

vint64m2_t 
test_vmulhsu_vx_i64m2_ta_0xFFFFFFFF80000000ull(vint64m2_t op1, size_t vl)
{
  return vmulhsu_vx_i64m2_ta(op1, 0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler-not {vmulhsu\.vv(?: test_vmulhsu_vx_i64m2_ta_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmulhsu\.vx(?: test_vmulhsu_vx_i64m2_ta_0xFFFFFFFF80000000ull )?} } } */

vint64m2_t 
test_vmulhsu_vx_i64m2_ta_0xFFFFFFFFFFFFFFFFull(vint64m2_t op1, size_t vl)
{
  return vmulhsu_vx_i64m2_ta(op1, 0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmulhsu\.vv(?: test_vmulhsu_vx_i64m2_ta_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmulhsu\.vx(?: test_vmulhsu_vx_i64m2_ta_0xFFFFFFFFFFFFFFFFull )?} } } */

vint64m4_t 
test_vmulhsu_vx_i64m4_ta_0x7FFFFFFFull(vint64m4_t op1, size_t vl)
{
  return vmulhsu_vx_i64m4_ta(op1, 0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmulhsu\.vv(?: test_vmulhsu_vx_i64m4_ta_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmulhsu\.vx(?: test_vmulhsu_vx_i64m4_ta_0x7FFFFFFFull )?} } } */

vint64m4_t 
test_vmulhsu_vx_i64m4_ta_0xFFFFFFFF80000000ull(vint64m4_t op1, size_t vl)
{
  return vmulhsu_vx_i64m4_ta(op1, 0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler-not {vmulhsu\.vv(?: test_vmulhsu_vx_i64m4_ta_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmulhsu\.vx(?: test_vmulhsu_vx_i64m4_ta_0xFFFFFFFF80000000ull )?} } } */

vint64m4_t 
test_vmulhsu_vx_i64m4_ta_0xFFFFFFFFFFFFFFFFull(vint64m4_t op1, size_t vl)
{
  return vmulhsu_vx_i64m4_ta(op1, 0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmulhsu\.vv(?: test_vmulhsu_vx_i64m4_ta_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmulhsu\.vx(?: test_vmulhsu_vx_i64m4_ta_0xFFFFFFFFFFFFFFFFull )?} } } */

vint64m8_t 
test_vmulhsu_vx_i64m8_ta_0x7FFFFFFFull(vint64m8_t op1, size_t vl)
{
  return vmulhsu_vx_i64m8_ta(op1, 0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmulhsu\.vv(?: test_vmulhsu_vx_i64m8_ta_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmulhsu\.vx(?: test_vmulhsu_vx_i64m8_ta_0x7FFFFFFFull )?} } } */

vint64m8_t 
test_vmulhsu_vx_i64m8_ta_0xFFFFFFFF80000000ull(vint64m8_t op1, size_t vl)
{
  return vmulhsu_vx_i64m8_ta(op1, 0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler-not {vmulhsu\.vv(?: test_vmulhsu_vx_i64m8_ta_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmulhsu\.vx(?: test_vmulhsu_vx_i64m8_ta_0xFFFFFFFF80000000ull )?} } } */

vint64m8_t 
test_vmulhsu_vx_i64m8_ta_0xFFFFFFFFFFFFFFFFull(vint64m8_t op1, size_t vl)
{
  return vmulhsu_vx_i64m8_ta(op1, 0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmulhsu\.vv(?: test_vmulhsu_vx_i64m8_ta_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmulhsu\.vx(?: test_vmulhsu_vx_i64m8_ta_0xFFFFFFFFFFFFFFFFull )?} } } */

vint64m1_t 
test_vmulhsu_vx_i64m1_tu_0x7FFFFFFFull(vint64m1_t dest, vint64m1_t op1, size_t vl)
{
  return vmulhsu_vx_i64m1_tu(dest, op1, 0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmulhsu\.vv(?: test_vmulhsu_vx_i64m1_tu_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmulhsu\.vx(?: test_vmulhsu_vx_i64m1_tu_0x7FFFFFFFull )?} } } */

vint64m1_t 
test_vmulhsu_vx_i64m1_tu_0xFFFFFFFF80000000ull(vint64m1_t dest, vint64m1_t op1, size_t vl)
{
  return vmulhsu_vx_i64m1_tu(dest, op1, 0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler-not {vmulhsu\.vv(?: test_vmulhsu_vx_i64m1_tu_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmulhsu\.vx(?: test_vmulhsu_vx_i64m1_tu_0xFFFFFFFF80000000ull )?} } } */

vint64m1_t 
test_vmulhsu_vx_i64m1_tu_0xFFFFFFFFFFFFFFFFull(vint64m1_t dest, vint64m1_t op1, size_t vl)
{
  return vmulhsu_vx_i64m1_tu(dest, op1, 0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmulhsu\.vv(?: test_vmulhsu_vx_i64m1_tu_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmulhsu\.vx(?: test_vmulhsu_vx_i64m1_tu_0xFFFFFFFFFFFFFFFFull )?} } } */

vint64m2_t 
test_vmulhsu_vx_i64m2_tu_0x7FFFFFFFull(vint64m2_t dest, vint64m2_t op1, size_t vl)
{
  return vmulhsu_vx_i64m2_tu(dest, op1, 0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmulhsu\.vv(?: test_vmulhsu_vx_i64m2_tu_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmulhsu\.vx(?: test_vmulhsu_vx_i64m2_tu_0x7FFFFFFFull )?} } } */

vint64m2_t 
test_vmulhsu_vx_i64m2_tu_0xFFFFFFFF80000000ull(vint64m2_t dest, vint64m2_t op1, size_t vl)
{
  return vmulhsu_vx_i64m2_tu(dest, op1, 0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler-not {vmulhsu\.vv(?: test_vmulhsu_vx_i64m2_tu_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmulhsu\.vx(?: test_vmulhsu_vx_i64m2_tu_0xFFFFFFFF80000000ull )?} } } */

vint64m2_t 
test_vmulhsu_vx_i64m2_tu_0xFFFFFFFFFFFFFFFFull(vint64m2_t dest, vint64m2_t op1, size_t vl)
{
  return vmulhsu_vx_i64m2_tu(dest, op1, 0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmulhsu\.vv(?: test_vmulhsu_vx_i64m2_tu_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmulhsu\.vx(?: test_vmulhsu_vx_i64m2_tu_0xFFFFFFFFFFFFFFFFull )?} } } */

vint64m4_t 
test_vmulhsu_vx_i64m4_tu_0x7FFFFFFFull(vint64m4_t dest, vint64m4_t op1, size_t vl)
{
  return vmulhsu_vx_i64m4_tu(dest, op1, 0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmulhsu\.vv(?: test_vmulhsu_vx_i64m4_tu_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmulhsu\.vx(?: test_vmulhsu_vx_i64m4_tu_0x7FFFFFFFull )?} } } */

vint64m4_t 
test_vmulhsu_vx_i64m4_tu_0xFFFFFFFF80000000ull(vint64m4_t dest, vint64m4_t op1, size_t vl)
{
  return vmulhsu_vx_i64m4_tu(dest, op1, 0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler-not {vmulhsu\.vv(?: test_vmulhsu_vx_i64m4_tu_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmulhsu\.vx(?: test_vmulhsu_vx_i64m4_tu_0xFFFFFFFF80000000ull )?} } } */

vint64m4_t 
test_vmulhsu_vx_i64m4_tu_0xFFFFFFFFFFFFFFFFull(vint64m4_t dest, vint64m4_t op1, size_t vl)
{
  return vmulhsu_vx_i64m4_tu(dest, op1, 0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmulhsu\.vv(?: test_vmulhsu_vx_i64m4_tu_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmulhsu\.vx(?: test_vmulhsu_vx_i64m4_tu_0xFFFFFFFFFFFFFFFFull )?} } } */

vint64m8_t 
test_vmulhsu_vx_i64m8_tu_0x7FFFFFFFull(vint64m8_t dest, vint64m8_t op1, size_t vl)
{
  return vmulhsu_vx_i64m8_tu(dest, op1, 0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmulhsu\.vv(?: test_vmulhsu_vx_i64m8_tu_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmulhsu\.vx(?: test_vmulhsu_vx_i64m8_tu_0x7FFFFFFFull )?} } } */

vint64m8_t 
test_vmulhsu_vx_i64m8_tu_0xFFFFFFFF80000000ull(vint64m8_t dest, vint64m8_t op1, size_t vl)
{
  return vmulhsu_vx_i64m8_tu(dest, op1, 0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler-not {vmulhsu\.vv(?: test_vmulhsu_vx_i64m8_tu_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmulhsu\.vx(?: test_vmulhsu_vx_i64m8_tu_0xFFFFFFFF80000000ull )?} } } */

vint64m8_t 
test_vmulhsu_vx_i64m8_tu_0xFFFFFFFFFFFFFFFFull(vint64m8_t dest, vint64m8_t op1, size_t vl)
{
  return vmulhsu_vx_i64m8_tu(dest, op1, 0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmulhsu\.vv(?: test_vmulhsu_vx_i64m8_tu_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmulhsu\.vx(?: test_vmulhsu_vx_i64m8_tu_0xFFFFFFFFFFFFFFFFull )?} } } */
