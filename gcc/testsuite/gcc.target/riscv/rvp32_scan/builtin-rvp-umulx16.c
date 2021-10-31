/* umulx16 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for umulx16 instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpn_zpsf -mabi=ilp32d -O0" } */

#include <rvp_intrinsic.h>
#include <stdlib.h>

static __attribute__ ((noinline))
uint64_t xlumu (uint32_t ra, uint32_t rb)
{
  return __rv_umulx16 (ra, rb);
}

static __attribute__ ((noinline))
uint32x2_t xlumu_v (uint16x2_t ra, uint16x2_t rb)
{
  return __rv_v_umulx16 (ra, rb);
}
/* { dg-final { scan-assembler-times "umulx16" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
