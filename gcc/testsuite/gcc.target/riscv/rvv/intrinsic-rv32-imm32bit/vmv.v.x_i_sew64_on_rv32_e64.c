
/* { dg-do compile } */
/* { dg-additional-options "-std=c99 -pedantic-errors" } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv32*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vint64m1_t 
test_vmv_v_x_i64m1_0x7FFFFFFFll(size_t vl)
{
  return vmv_v_x_i64m1(0x7FFFFFFFll, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_i64m1_0x7FFFFFFFll )?} } } */

vint64m1_t 
test_vmv_v_x_i64m1_0xFFFFFFFF80000000ll(size_t vl)
{
  return vmv_v_x_i64m1(0xFFFFFFFF80000000ll, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_i64m1_0xFFFFFFFF80000000ll )?} } } */

vint64m1_t 
test_vmv_v_x_i64m1_0xFFFFFFFFFFFFFFFFll(size_t vl)
{
  return vmv_v_x_i64m1(0xFFFFFFFFFFFFFFFFll, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_i64m1_0xFFFFFFFFFFFFFFFFll )?} } } */

vint64m2_t 
test_vmv_v_x_i64m2_0x7FFFFFFFll(size_t vl)
{
  return vmv_v_x_i64m2(0x7FFFFFFFll, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_i64m2_0x7FFFFFFFll )?} } } */

vint64m2_t 
test_vmv_v_x_i64m2_0xFFFFFFFF80000000ll(size_t vl)
{
  return vmv_v_x_i64m2(0xFFFFFFFF80000000ll, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_i64m2_0xFFFFFFFF80000000ll )?} } } */

vint64m2_t 
test_vmv_v_x_i64m2_0xFFFFFFFFFFFFFFFFll(size_t vl)
{
  return vmv_v_x_i64m2(0xFFFFFFFFFFFFFFFFll, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_i64m2_0xFFFFFFFFFFFFFFFFll )?} } } */

vint64m4_t 
test_vmv_v_x_i64m4_0x7FFFFFFFll(size_t vl)
{
  return vmv_v_x_i64m4(0x7FFFFFFFll, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_i64m4_0x7FFFFFFFll )?} } } */

vint64m4_t 
test_vmv_v_x_i64m4_0xFFFFFFFF80000000ll(size_t vl)
{
  return vmv_v_x_i64m4(0xFFFFFFFF80000000ll, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_i64m4_0xFFFFFFFF80000000ll )?} } } */

vint64m4_t 
test_vmv_v_x_i64m4_0xFFFFFFFFFFFFFFFFll(size_t vl)
{
  return vmv_v_x_i64m4(0xFFFFFFFFFFFFFFFFll, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_i64m4_0xFFFFFFFFFFFFFFFFll )?} } } */

vint64m8_t 
test_vmv_v_x_i64m8_0x7FFFFFFFll(size_t vl)
{
  return vmv_v_x_i64m8(0x7FFFFFFFll, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_i64m8_0x7FFFFFFFll )?} } } */

vint64m8_t 
test_vmv_v_x_i64m8_0xFFFFFFFF80000000ll(size_t vl)
{
  return vmv_v_x_i64m8(0xFFFFFFFF80000000ll, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_i64m8_0xFFFFFFFF80000000ll )?} } } */

vint64m8_t 
test_vmv_v_x_i64m8_0xFFFFFFFFFFFFFFFFll(size_t vl)
{
  return vmv_v_x_i64m8(0xFFFFFFFFFFFFFFFFll, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_i64m8_0xFFFFFFFFFFFFFFFFll )?} } } */
