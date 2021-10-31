/* kabs8 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for kabs8 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
uint64_t sbak (uint64_t ra)
{
  return __rv_kabs8 (ra);
}

static __attribute__ ((noinline))
int8x8_t sbak_v (int8x8_t ra)
{
  return __rv_v_kabs8 (ra);
}
/* { dg-final { scan-assembler-times "kabs8" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
