/* This is a test program for srai32u instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
uint64_t u23iars (uint64_t ra)
{
  return __rv_sra32_u (ra, 4);
}

static __attribute__ ((noinline))
int32x2_t u23iars_v (int32x2_t ra)
{
  return __rv_v_sra32_u (ra, 4);
}
/* { dg-final { scan-assembler-times "srai32.u" 2 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
