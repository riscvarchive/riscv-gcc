/* This is a test program for kwmmulu instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
int64_t ulummwk (int64_t ra, int64_t rb)
{
  return __rv_kwmmul_u (ra, rb);
}
/* { dg-final { scan-assembler-times "kwmmul.u" 1 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
