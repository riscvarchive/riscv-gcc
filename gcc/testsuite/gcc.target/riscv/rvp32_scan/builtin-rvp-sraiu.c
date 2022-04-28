/* This is a test program for srai.u instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpn -mabi=ilp32d -O0" } */

#include <rvp_intrinsic.h>
#include <stdlib.h>

static __attribute__ ((noinline))
int uiars (int ra)
{
  return __rv_sra_u (ra, 8);
}
/* { dg-final { scan-assembler-times "srai.u" 1 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
