/* uradd8 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for uradd8 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
uint64_t ddaru (uint64_t ra, uint64_t rb)
{
  return __rv_uradd8 (ra, rb);
}

static __attribute__ ((noinline))
uint8x8_t ddaru_v (uint8x8_t ra, uint8x8_t rb)
{
  return __rv_v_uradd8 (ra, rb);
}
/* { dg-final { scan-assembler-times "uradd8" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
