
/* { dg-do compile } */
/* { dg-additional-options "-std=c99 -pedantic-errors" } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv32*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vuint64m1_t 
test_vmerge_vxm_u64m1_ta_0x7FFFFFFFull(vbool64_t mask, vuint64m1_t op1, size_t vl)
{
  return vmerge_vxm_u64m1_ta(mask, op1, 0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmerge\.vvm(?: test_vmerge_vxm_u64m1_ta_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmerge\.vxm(?: test_vmerge_vxm_u64m1_ta_0x7FFFFFFFull )?} } } */

vuint64m1_t 
test_vmerge_vxm_u64m1_ta_0xFFFFFFFF80000000ull(vbool64_t mask, vuint64m1_t op1, size_t vl)
{
  return vmerge_vxm_u64m1_ta(mask, op1, 0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler-not {vmerge\.vvm(?: test_vmerge_vxm_u64m1_ta_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmerge\.vxm(?: test_vmerge_vxm_u64m1_ta_0xFFFFFFFF80000000ull )?} } } */

vuint64m1_t 
test_vmerge_vxm_u64m1_ta_0xFFFFFFFFFFFFFFFFull(vbool64_t mask, vuint64m1_t op1, size_t vl)
{
  return vmerge_vxm_u64m1_ta(mask, op1, 0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmerge\.vvm(?: test_vmerge_vxm_u64m1_ta_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmerge\.vxm(?: test_vmerge_vxm_u64m1_ta_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m2_t 
test_vmerge_vxm_u64m2_ta_0x7FFFFFFFull(vbool32_t mask, vuint64m2_t op1, size_t vl)
{
  return vmerge_vxm_u64m2_ta(mask, op1, 0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmerge\.vvm(?: test_vmerge_vxm_u64m2_ta_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmerge\.vxm(?: test_vmerge_vxm_u64m2_ta_0x7FFFFFFFull )?} } } */

vuint64m2_t 
test_vmerge_vxm_u64m2_ta_0xFFFFFFFF80000000ull(vbool32_t mask, vuint64m2_t op1, size_t vl)
{
  return vmerge_vxm_u64m2_ta(mask, op1, 0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler-not {vmerge\.vvm(?: test_vmerge_vxm_u64m2_ta_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmerge\.vxm(?: test_vmerge_vxm_u64m2_ta_0xFFFFFFFF80000000ull )?} } } */

vuint64m2_t 
test_vmerge_vxm_u64m2_ta_0xFFFFFFFFFFFFFFFFull(vbool32_t mask, vuint64m2_t op1, size_t vl)
{
  return vmerge_vxm_u64m2_ta(mask, op1, 0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmerge\.vvm(?: test_vmerge_vxm_u64m2_ta_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmerge\.vxm(?: test_vmerge_vxm_u64m2_ta_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m4_t 
test_vmerge_vxm_u64m4_ta_0x7FFFFFFFull(vbool16_t mask, vuint64m4_t op1, size_t vl)
{
  return vmerge_vxm_u64m4_ta(mask, op1, 0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmerge\.vvm(?: test_vmerge_vxm_u64m4_ta_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmerge\.vxm(?: test_vmerge_vxm_u64m4_ta_0x7FFFFFFFull )?} } } */

vuint64m4_t 
test_vmerge_vxm_u64m4_ta_0xFFFFFFFF80000000ull(vbool16_t mask, vuint64m4_t op1, size_t vl)
{
  return vmerge_vxm_u64m4_ta(mask, op1, 0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler-not {vmerge\.vvm(?: test_vmerge_vxm_u64m4_ta_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmerge\.vxm(?: test_vmerge_vxm_u64m4_ta_0xFFFFFFFF80000000ull )?} } } */

vuint64m4_t 
test_vmerge_vxm_u64m4_ta_0xFFFFFFFFFFFFFFFFull(vbool16_t mask, vuint64m4_t op1, size_t vl)
{
  return vmerge_vxm_u64m4_ta(mask, op1, 0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmerge\.vvm(?: test_vmerge_vxm_u64m4_ta_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmerge\.vxm(?: test_vmerge_vxm_u64m4_ta_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m8_t 
test_vmerge_vxm_u64m8_ta_0x7FFFFFFFull(vbool8_t mask, vuint64m8_t op1, size_t vl)
{
  return vmerge_vxm_u64m8_ta(mask, op1, 0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmerge\.vvm(?: test_vmerge_vxm_u64m8_ta_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmerge\.vxm(?: test_vmerge_vxm_u64m8_ta_0x7FFFFFFFull )?} } } */

vuint64m8_t 
test_vmerge_vxm_u64m8_ta_0xFFFFFFFF80000000ull(vbool8_t mask, vuint64m8_t op1, size_t vl)
{
  return vmerge_vxm_u64m8_ta(mask, op1, 0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler-not {vmerge\.vvm(?: test_vmerge_vxm_u64m8_ta_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmerge\.vxm(?: test_vmerge_vxm_u64m8_ta_0xFFFFFFFF80000000ull )?} } } */

vuint64m8_t 
test_vmerge_vxm_u64m8_ta_0xFFFFFFFFFFFFFFFFull(vbool8_t mask, vuint64m8_t op1, size_t vl)
{
  return vmerge_vxm_u64m8_ta(mask, op1, 0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmerge\.vvm(?: test_vmerge_vxm_u64m8_ta_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmerge\.vxm(?: test_vmerge_vxm_u64m8_ta_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m1_t 
test_vmerge_vxm_u64m1_tu_0x7FFFFFFFull(vuint64m1_t dest, vbool64_t mask, vuint64m1_t op1, size_t vl)
{
  return vmerge_vxm_u64m1_tu(mask, dest, op1, 0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmerge\.vvm(?: test_vmerge_vxm_u64m1_tu_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmerge\.vxm(?: test_vmerge_vxm_u64m1_tu_0x7FFFFFFFull )?} } } */

vuint64m1_t 
test_vmerge_vxm_u64m1_tu_0xFFFFFFFF80000000ull(vuint64m1_t dest, vbool64_t mask, vuint64m1_t op1, size_t vl)
{
  return vmerge_vxm_u64m1_tu(mask, dest, op1, 0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler-not {vmerge\.vvm(?: test_vmerge_vxm_u64m1_tu_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmerge\.vxm(?: test_vmerge_vxm_u64m1_tu_0xFFFFFFFF80000000ull )?} } } */

vuint64m1_t 
test_vmerge_vxm_u64m1_tu_0xFFFFFFFFFFFFFFFFull(vuint64m1_t dest, vbool64_t mask, vuint64m1_t op1, size_t vl)
{
  return vmerge_vxm_u64m1_tu(mask, dest, op1, 0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmerge\.vvm(?: test_vmerge_vxm_u64m1_tu_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmerge\.vxm(?: test_vmerge_vxm_u64m1_tu_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m2_t 
test_vmerge_vxm_u64m2_tu_0x7FFFFFFFull(vuint64m2_t dest, vbool32_t mask, vuint64m2_t op1, size_t vl)
{
  return vmerge_vxm_u64m2_tu(mask, dest, op1, 0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmerge\.vvm(?: test_vmerge_vxm_u64m2_tu_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmerge\.vxm(?: test_vmerge_vxm_u64m2_tu_0x7FFFFFFFull )?} } } */

vuint64m2_t 
test_vmerge_vxm_u64m2_tu_0xFFFFFFFF80000000ull(vuint64m2_t dest, vbool32_t mask, vuint64m2_t op1, size_t vl)
{
  return vmerge_vxm_u64m2_tu(mask, dest, op1, 0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler-not {vmerge\.vvm(?: test_vmerge_vxm_u64m2_tu_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmerge\.vxm(?: test_vmerge_vxm_u64m2_tu_0xFFFFFFFF80000000ull )?} } } */

vuint64m2_t 
test_vmerge_vxm_u64m2_tu_0xFFFFFFFFFFFFFFFFull(vuint64m2_t dest, vbool32_t mask, vuint64m2_t op1, size_t vl)
{
  return vmerge_vxm_u64m2_tu(mask, dest, op1, 0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmerge\.vvm(?: test_vmerge_vxm_u64m2_tu_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmerge\.vxm(?: test_vmerge_vxm_u64m2_tu_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m4_t 
test_vmerge_vxm_u64m4_tu_0x7FFFFFFFull(vuint64m4_t dest, vbool16_t mask, vuint64m4_t op1, size_t vl)
{
  return vmerge_vxm_u64m4_tu(mask, dest, op1, 0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmerge\.vvm(?: test_vmerge_vxm_u64m4_tu_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmerge\.vxm(?: test_vmerge_vxm_u64m4_tu_0x7FFFFFFFull )?} } } */

vuint64m4_t 
test_vmerge_vxm_u64m4_tu_0xFFFFFFFF80000000ull(vuint64m4_t dest, vbool16_t mask, vuint64m4_t op1, size_t vl)
{
  return vmerge_vxm_u64m4_tu(mask, dest, op1, 0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler-not {vmerge\.vvm(?: test_vmerge_vxm_u64m4_tu_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmerge\.vxm(?: test_vmerge_vxm_u64m4_tu_0xFFFFFFFF80000000ull )?} } } */

vuint64m4_t 
test_vmerge_vxm_u64m4_tu_0xFFFFFFFFFFFFFFFFull(vuint64m4_t dest, vbool16_t mask, vuint64m4_t op1, size_t vl)
{
  return vmerge_vxm_u64m4_tu(mask, dest, op1, 0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmerge\.vvm(?: test_vmerge_vxm_u64m4_tu_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmerge\.vxm(?: test_vmerge_vxm_u64m4_tu_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m8_t 
test_vmerge_vxm_u64m8_tu_0x7FFFFFFFull(vuint64m8_t dest, vbool8_t mask, vuint64m8_t op1, size_t vl)
{
  return vmerge_vxm_u64m8_tu(mask, dest, op1, 0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmerge\.vvm(?: test_vmerge_vxm_u64m8_tu_0x7FFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmerge\.vxm(?: test_vmerge_vxm_u64m8_tu_0x7FFFFFFFull )?} } } */

vuint64m8_t 
test_vmerge_vxm_u64m8_tu_0xFFFFFFFF80000000ull(vuint64m8_t dest, vbool8_t mask, vuint64m8_t op1, size_t vl)
{
  return vmerge_vxm_u64m8_tu(mask, dest, op1, 0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler-not {vmerge\.vvm(?: test_vmerge_vxm_u64m8_tu_0xFFFFFFFF80000000ull )?} } } */
/* { dg-final { scan-assembler {vmerge\.vxm(?: test_vmerge_vxm_u64m8_tu_0xFFFFFFFF80000000ull )?} } } */

vuint64m8_t 
test_vmerge_vxm_u64m8_tu_0xFFFFFFFFFFFFFFFFull(vuint64m8_t dest, vbool8_t mask, vuint64m8_t op1, size_t vl)
{
  return vmerge_vxm_u64m8_tu(mask, dest, op1, 0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler-not {vmerge\.vvm(?: test_vmerge_vxm_u64m8_tu_0xFFFFFFFFFFFFFFFFull )?} } } */
/* { dg-final { scan-assembler {vmerge\.vxm(?: test_vmerge_vxm_u64m8_tu_0xFFFFFFFFFFFFFFFFull )?} } } */
