/* This is a test program for srai16 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
uint64_t iars (uint64_t ra)
{
  return __rv_sra16 (ra, 4);
}

static __attribute__ ((noinline))
int16x4_t iars_v (int16x4_t ra)
{
  return __rv_v_sra16 (ra, 4);
}
/* { dg-final { scan-assembler-times "srai16" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
