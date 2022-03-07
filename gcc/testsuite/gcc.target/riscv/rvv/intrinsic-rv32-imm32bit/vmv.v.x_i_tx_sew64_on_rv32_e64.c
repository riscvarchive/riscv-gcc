
/* { dg-do compile } */
/* { dg-additional-options "-std=c99 -pedantic-errors" } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv32*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vint64m1_t 
test_vmv_v_x_i64m1_ta_0x7FFFFFFFll(size_t vl)
{
  return vmv_v_x_i64m1_ta(0x7FFFFFFFll, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_i64m1_ta_0x7FFFFFFFll )?} } } */

vint64m1_t 
test_vmv_v_x_i64m1_ta_0xFFFFFFFF80000000ll(size_t vl)
{
  return vmv_v_x_i64m1_ta(0xFFFFFFFF80000000ll, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_i64m1_ta_0xFFFFFFFF80000000ll )?} } } */

vint64m1_t 
test_vmv_v_x_i64m1_ta_0xFFFFFFFFFFFFFFFFll(size_t vl)
{
  return vmv_v_x_i64m1_ta(0xFFFFFFFFFFFFFFFFll, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_i64m1_ta_0xFFFFFFFFFFFFFFFFll )?} } } */

vint64m2_t 
test_vmv_v_x_i64m2_ta_0x7FFFFFFFll(size_t vl)
{
  return vmv_v_x_i64m2_ta(0x7FFFFFFFll, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_i64m2_ta_0x7FFFFFFFll )?} } } */

vint64m2_t 
test_vmv_v_x_i64m2_ta_0xFFFFFFFF80000000ll(size_t vl)
{
  return vmv_v_x_i64m2_ta(0xFFFFFFFF80000000ll, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_i64m2_ta_0xFFFFFFFF80000000ll )?} } } */

vint64m2_t 
test_vmv_v_x_i64m2_ta_0xFFFFFFFFFFFFFFFFll(size_t vl)
{
  return vmv_v_x_i64m2_ta(0xFFFFFFFFFFFFFFFFll, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_i64m2_ta_0xFFFFFFFFFFFFFFFFll )?} } } */

vint64m4_t 
test_vmv_v_x_i64m4_ta_0x7FFFFFFFll(size_t vl)
{
  return vmv_v_x_i64m4_ta(0x7FFFFFFFll, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_i64m4_ta_0x7FFFFFFFll )?} } } */

vint64m4_t 
test_vmv_v_x_i64m4_ta_0xFFFFFFFF80000000ll(size_t vl)
{
  return vmv_v_x_i64m4_ta(0xFFFFFFFF80000000ll, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_i64m4_ta_0xFFFFFFFF80000000ll )?} } } */

vint64m4_t 
test_vmv_v_x_i64m4_ta_0xFFFFFFFFFFFFFFFFll(size_t vl)
{
  return vmv_v_x_i64m4_ta(0xFFFFFFFFFFFFFFFFll, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_i64m4_ta_0xFFFFFFFFFFFFFFFFll )?} } } */

vint64m8_t 
test_vmv_v_x_i64m8_ta_0x7FFFFFFFll(size_t vl)
{
  return vmv_v_x_i64m8_ta(0x7FFFFFFFll, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_i64m8_ta_0x7FFFFFFFll )?} } } */

vint64m8_t 
test_vmv_v_x_i64m8_ta_0xFFFFFFFF80000000ll(size_t vl)
{
  return vmv_v_x_i64m8_ta(0xFFFFFFFF80000000ll, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_i64m8_ta_0xFFFFFFFF80000000ll )?} } } */

vint64m8_t 
test_vmv_v_x_i64m8_ta_0xFFFFFFFFFFFFFFFFll(size_t vl)
{
  return vmv_v_x_i64m8_ta(0xFFFFFFFFFFFFFFFFll, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_i64m8_ta_0xFFFFFFFFFFFFFFFFll )?} } } */

vint64m1_t 
test_vmv_v_x_i64m1_tu_0x7FFFFFFFll(vint64m1_t dest, size_t vl)
{
  return vmv_v_x_i64m1_tu(dest, 0x7FFFFFFFll, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_i64m1_tu_0x7FFFFFFFll )?} } } */

vint64m1_t 
test_vmv_v_x_i64m1_tu_0xFFFFFFFF80000000ll(vint64m1_t dest, size_t vl)
{
  return vmv_v_x_i64m1_tu(dest, 0xFFFFFFFF80000000ll, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_i64m1_tu_0xFFFFFFFF80000000ll )?} } } */

vint64m1_t 
test_vmv_v_x_i64m1_tu_0xFFFFFFFFFFFFFFFFll(vint64m1_t dest, size_t vl)
{
  return vmv_v_x_i64m1_tu(dest, 0xFFFFFFFFFFFFFFFFll, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_i64m1_tu_0xFFFFFFFFFFFFFFFFll )?} } } */

vint64m2_t 
test_vmv_v_x_i64m2_tu_0x7FFFFFFFll(vint64m2_t dest, size_t vl)
{
  return vmv_v_x_i64m2_tu(dest, 0x7FFFFFFFll, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_i64m2_tu_0x7FFFFFFFll )?} } } */

vint64m2_t 
test_vmv_v_x_i64m2_tu_0xFFFFFFFF80000000ll(vint64m2_t dest, size_t vl)
{
  return vmv_v_x_i64m2_tu(dest, 0xFFFFFFFF80000000ll, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_i64m2_tu_0xFFFFFFFF80000000ll )?} } } */

vint64m2_t 
test_vmv_v_x_i64m2_tu_0xFFFFFFFFFFFFFFFFll(vint64m2_t dest, size_t vl)
{
  return vmv_v_x_i64m2_tu(dest, 0xFFFFFFFFFFFFFFFFll, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_i64m2_tu_0xFFFFFFFFFFFFFFFFll )?} } } */

vint64m4_t 
test_vmv_v_x_i64m4_tu_0x7FFFFFFFll(vint64m4_t dest, size_t vl)
{
  return vmv_v_x_i64m4_tu(dest, 0x7FFFFFFFll, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_i64m4_tu_0x7FFFFFFFll )?} } } */

vint64m4_t 
test_vmv_v_x_i64m4_tu_0xFFFFFFFF80000000ll(vint64m4_t dest, size_t vl)
{
  return vmv_v_x_i64m4_tu(dest, 0xFFFFFFFF80000000ll, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_i64m4_tu_0xFFFFFFFF80000000ll )?} } } */

vint64m4_t 
test_vmv_v_x_i64m4_tu_0xFFFFFFFFFFFFFFFFll(vint64m4_t dest, size_t vl)
{
  return vmv_v_x_i64m4_tu(dest, 0xFFFFFFFFFFFFFFFFll, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_i64m4_tu_0xFFFFFFFFFFFFFFFFll )?} } } */

vint64m8_t 
test_vmv_v_x_i64m8_tu_0x7FFFFFFFll(vint64m8_t dest, size_t vl)
{
  return vmv_v_x_i64m8_tu(dest, 0x7FFFFFFFll, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_i64m8_tu_0x7FFFFFFFll )?} } } */

vint64m8_t 
test_vmv_v_x_i64m8_tu_0xFFFFFFFF80000000ll(vint64m8_t dest, size_t vl)
{
  return vmv_v_x_i64m8_tu(dest, 0xFFFFFFFF80000000ll, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_i64m8_tu_0xFFFFFFFF80000000ll )?} } } */

vint64m8_t 
test_vmv_v_x_i64m8_tu_0xFFFFFFFFFFFFFFFFll(vint64m8_t dest, size_t vl)
{
  return vmv_v_x_i64m8_tu(dest, 0xFFFFFFFFFFFFFFFFll, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_i64m8_tu_0xFFFFFFFFFFFFFFFFll )?} } } */
