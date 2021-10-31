/* This is a test program for sra.u instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
int64_t uars (int64_t ra, uint32_t rb)
{
  return __rv_sra_u (ra, rb);
}
/* { dg-final { scan-assembler-times "sra.u" 1 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
