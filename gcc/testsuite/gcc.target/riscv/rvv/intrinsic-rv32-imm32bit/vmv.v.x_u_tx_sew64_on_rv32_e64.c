
/* { dg-do compile } */
/* { dg-additional-options "-std=c99 -pedantic-errors" } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv32*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vuint64m1_t 
test_vmv_v_x_u64m1_ta_0x7FFFFFFFull(size_t vl)
{
  return vmv_v_x_u64m1_ta(0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_u64m1_ta_0x7FFFFFFFull )?} } } */

vuint64m1_t 
test_vmv_v_x_u64m1_ta_0xFFFFFFFF80000000ull(size_t vl)
{
  return vmv_v_x_u64m1_ta(0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_u64m1_ta_0xFFFFFFFF80000000ull )?} } } */

vuint64m1_t 
test_vmv_v_x_u64m1_ta_0xFFFFFFFFFFFFFFFFull(size_t vl)
{
  return vmv_v_x_u64m1_ta(0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_u64m1_ta_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m2_t 
test_vmv_v_x_u64m2_ta_0x7FFFFFFFull(size_t vl)
{
  return vmv_v_x_u64m2_ta(0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_u64m2_ta_0x7FFFFFFFull )?} } } */

vuint64m2_t 
test_vmv_v_x_u64m2_ta_0xFFFFFFFF80000000ull(size_t vl)
{
  return vmv_v_x_u64m2_ta(0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_u64m2_ta_0xFFFFFFFF80000000ull )?} } } */

vuint64m2_t 
test_vmv_v_x_u64m2_ta_0xFFFFFFFFFFFFFFFFull(size_t vl)
{
  return vmv_v_x_u64m2_ta(0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_u64m2_ta_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m4_t 
test_vmv_v_x_u64m4_ta_0x7FFFFFFFull(size_t vl)
{
  return vmv_v_x_u64m4_ta(0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_u64m4_ta_0x7FFFFFFFull )?} } } */

vuint64m4_t 
test_vmv_v_x_u64m4_ta_0xFFFFFFFF80000000ull(size_t vl)
{
  return vmv_v_x_u64m4_ta(0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_u64m4_ta_0xFFFFFFFF80000000ull )?} } } */

vuint64m4_t 
test_vmv_v_x_u64m4_ta_0xFFFFFFFFFFFFFFFFull(size_t vl)
{
  return vmv_v_x_u64m4_ta(0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_u64m4_ta_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m8_t 
test_vmv_v_x_u64m8_ta_0x7FFFFFFFull(size_t vl)
{
  return vmv_v_x_u64m8_ta(0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_u64m8_ta_0x7FFFFFFFull )?} } } */

vuint64m8_t 
test_vmv_v_x_u64m8_ta_0xFFFFFFFF80000000ull(size_t vl)
{
  return vmv_v_x_u64m8_ta(0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_u64m8_ta_0xFFFFFFFF80000000ull )?} } } */

vuint64m8_t 
test_vmv_v_x_u64m8_ta_0xFFFFFFFFFFFFFFFFull(size_t vl)
{
  return vmv_v_x_u64m8_ta(0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_u64m8_ta_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m1_t 
test_vmv_v_x_u64m1_tu_0x7FFFFFFFull(vuint64m1_t dest, size_t vl)
{
  return vmv_v_x_u64m1_tu(dest, 0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_u64m1_tu_0x7FFFFFFFull )?} } } */

vuint64m1_t 
test_vmv_v_x_u64m1_tu_0xFFFFFFFF80000000ull(vuint64m1_t dest, size_t vl)
{
  return vmv_v_x_u64m1_tu(dest, 0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_u64m1_tu_0xFFFFFFFF80000000ull )?} } } */

vuint64m1_t 
test_vmv_v_x_u64m1_tu_0xFFFFFFFFFFFFFFFFull(vuint64m1_t dest, size_t vl)
{
  return vmv_v_x_u64m1_tu(dest, 0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_u64m1_tu_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m2_t 
test_vmv_v_x_u64m2_tu_0x7FFFFFFFull(vuint64m2_t dest, size_t vl)
{
  return vmv_v_x_u64m2_tu(dest, 0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_u64m2_tu_0x7FFFFFFFull )?} } } */

vuint64m2_t 
test_vmv_v_x_u64m2_tu_0xFFFFFFFF80000000ull(vuint64m2_t dest, size_t vl)
{
  return vmv_v_x_u64m2_tu(dest, 0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_u64m2_tu_0xFFFFFFFF80000000ull )?} } } */

vuint64m2_t 
test_vmv_v_x_u64m2_tu_0xFFFFFFFFFFFFFFFFull(vuint64m2_t dest, size_t vl)
{
  return vmv_v_x_u64m2_tu(dest, 0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_u64m2_tu_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m4_t 
test_vmv_v_x_u64m4_tu_0x7FFFFFFFull(vuint64m4_t dest, size_t vl)
{
  return vmv_v_x_u64m4_tu(dest, 0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_u64m4_tu_0x7FFFFFFFull )?} } } */

vuint64m4_t 
test_vmv_v_x_u64m4_tu_0xFFFFFFFF80000000ull(vuint64m4_t dest, size_t vl)
{
  return vmv_v_x_u64m4_tu(dest, 0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_u64m4_tu_0xFFFFFFFF80000000ull )?} } } */

vuint64m4_t 
test_vmv_v_x_u64m4_tu_0xFFFFFFFFFFFFFFFFull(vuint64m4_t dest, size_t vl)
{
  return vmv_v_x_u64m4_tu(dest, 0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_u64m4_tu_0xFFFFFFFFFFFFFFFFull )?} } } */

vuint64m8_t 
test_vmv_v_x_u64m8_tu_0x7FFFFFFFull(vuint64m8_t dest, size_t vl)
{
  return vmv_v_x_u64m8_tu(dest, 0x7FFFFFFFull, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_u64m8_tu_0x7FFFFFFFull )?} } } */

vuint64m8_t 
test_vmv_v_x_u64m8_tu_0xFFFFFFFF80000000ull(vuint64m8_t dest, size_t vl)
{
  return vmv_v_x_u64m8_tu(dest, 0xFFFFFFFF80000000ull, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_u64m8_tu_0xFFFFFFFF80000000ull )?} } } */

vuint64m8_t 
test_vmv_v_x_u64m8_tu_0xFFFFFFFFFFFFFFFFull(vuint64m8_t dest, size_t vl)
{
  return vmv_v_x_u64m8_tu(dest, 0xFFFFFFFFFFFFFFFFull, vl);
}
/* { dg-final { scan-assembler {vmv\.v\.x(?: test_vmv_v_x_u64m8_tu_0xFFFFFFFFFFFFFFFFull )?} } } */
