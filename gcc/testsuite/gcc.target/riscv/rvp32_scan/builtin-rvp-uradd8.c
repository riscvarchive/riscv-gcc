/* uradd8 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for uradd8 instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpn -mabi=ilp32d -O0" } */

#include <rvp_intrinsic.h>
#include <stdlib.h>

static __attribute__ ((noinline))
uint32_t ddaru (uint32_t ra, uint32_t rb)
{
  return __rv_uradd8 (ra, rb);
}

static __attribute__ ((noinline))
uint8x4_t ddaru_v (uint8x4_t ra, uint8x4_t rb)
{
  return __rv_v_uradd8 (ra, rb);
}
/* { dg-final { scan-assembler-times "uradd8" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
