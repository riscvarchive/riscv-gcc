/* This is a test program for ksll instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
int32_t llsk (int32_t ra, uint32_t rb)
{
  return __rv_ksllw (ra, rb);
}
/* { dg-final { scan-assembler-times "ksllw" 1 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
