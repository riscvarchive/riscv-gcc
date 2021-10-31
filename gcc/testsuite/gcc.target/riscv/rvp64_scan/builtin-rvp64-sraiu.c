/* This is a test program for srai.u instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
int64_t uiars (int64_t ra)
{
  return __rv_sra_u (ra, 8);
}
/* { dg-final { scan-assembler-times "srai.u" 1 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
