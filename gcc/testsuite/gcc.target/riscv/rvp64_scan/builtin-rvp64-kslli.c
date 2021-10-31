/* This is a test program for kslli instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
int32_t illsk (int32_t ra)
{
  return __rv_ksllw (ra, 8);
}
/* { dg-final { scan-assembler-times "kslliw" 1 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
