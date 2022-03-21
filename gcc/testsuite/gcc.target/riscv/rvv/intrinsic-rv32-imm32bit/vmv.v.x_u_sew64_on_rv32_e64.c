
/* { dg-do compile } */
/* { dg-additional-options "-std=c99 -pedantic-errors" } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv32*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vuint64m1_t 
test_vmv_v_x_u64m1_0x7FFFFFFFull(size_t vl)
{
  return vmv_v_x_u64m1(0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_u64m1_0x7FFFFFFFull )?} } } */

vuint64m1_t 
test_vmv_v_x_u64m1_0xFFFFFFFF80000000ull(size_t vl)
{
  return vmv_v_x_u64m1(0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_u64m1_0xFFFFFFFF80000000ull )?} } } */

vuint64m1_t 
test_vmv_v_x_u64m1_0xFFFFFFFFFFFFFFFFull(size_t vl)
{
  return vmv_v_x_u64m1(0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_u64m1_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m2_t 
test_vmv_v_x_u64m2_0x7FFFFFFFull(size_t vl)
{
  return vmv_v_x_u64m2(0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_u64m2_0x7FFFFFFFull )?} } } */

vuint64m2_t 
test_vmv_v_x_u64m2_0xFFFFFFFF80000000ull(size_t vl)
{
  return vmv_v_x_u64m2(0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_u64m2_0xFFFFFFFF80000000ull )?} } } */

vuint64m2_t 
test_vmv_v_x_u64m2_0xFFFFFFFFFFFFFFFFull(size_t vl)
{
  return vmv_v_x_u64m2(0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_u64m2_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m4_t 
test_vmv_v_x_u64m4_0x7FFFFFFFull(size_t vl)
{
  return vmv_v_x_u64m4(0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_u64m4_0x7FFFFFFFull )?} } } */

vuint64m4_t 
test_vmv_v_x_u64m4_0xFFFFFFFF80000000ull(size_t vl)
{
  return vmv_v_x_u64m4(0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_u64m4_0xFFFFFFFF80000000ull )?} } } */

vuint64m4_t 
test_vmv_v_x_u64m4_0xFFFFFFFFFFFFFFFFull(size_t vl)
{
  return vmv_v_x_u64m4(0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_u64m4_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m8_t 
test_vmv_v_x_u64m8_0x7FFFFFFFull(size_t vl)
{
  return vmv_v_x_u64m8(0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_u64m8_0x7FFFFFFFull )?} } } */

vuint64m8_t 
test_vmv_v_x_u64m8_0xFFFFFFFF80000000ull(size_t vl)
{
  return vmv_v_x_u64m8(0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_u64m8_0xFFFFFFFF80000000ull )?} } } */

vuint64m8_t 
test_vmv_v_x_u64m8_0xFFFFFFFFFFFFFFFFull(size_t vl)
{
  return vmv_v_x_u64m8(0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_u64m8_0xFFFFFFFFFFFFFFFFull )?} } } */
