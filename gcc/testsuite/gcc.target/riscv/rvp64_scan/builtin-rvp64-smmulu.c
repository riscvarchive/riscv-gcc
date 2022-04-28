/* This is a test program for smmul.u instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
int64_t u_lumms (int64_t ra, int64_t rb)
{
  return __rv_smmul_u (ra, rb);
}
/* { dg-final { scan-assembler-times "smmul.u" 1 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
