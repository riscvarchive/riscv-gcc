/* kabs16 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for kabs16 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
uint64_t sbak (uint64_t ra)
{
  return __rv_kabs16 (ra);
}

static __attribute__ ((noinline))
int16x4_t sbak_v (int16x4_t ra)
{
  return __rv_v_kabs16 (ra);
}
/* { dg-final { scan-assembler-times "kabs16" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
