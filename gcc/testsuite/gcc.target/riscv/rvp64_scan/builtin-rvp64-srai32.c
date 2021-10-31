/* This is a test program for srai32 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
uint64_t iars (uint64_t ra)
{
  return __rv_sra32 (ra, 4);
}

static __attribute__ ((noinline))
int32x2_t iars_v (int32x2_t ra)
{
  return __rv_v_sra32 (ra, 4);
}
/* { dg-final { scan-assembler-times "srai32" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
