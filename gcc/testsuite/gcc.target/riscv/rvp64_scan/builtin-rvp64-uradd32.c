/* uradd32 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for uradd32 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
uint64_t ddaru (uint64_t ra, uint64_t rb)
{
  return __rv_uradd32 (ra, rb);
}

static __attribute__ ((noinline))
uint32x2_t ddaru_v (uint32x2_t ra, uint32x2_t rb)
{
  return __rv_v_uradd32 (ra, rb);
}
/* { dg-final { scan-assembler-times "uradd32" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
