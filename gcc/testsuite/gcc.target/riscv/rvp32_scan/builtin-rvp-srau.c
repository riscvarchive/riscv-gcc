/* This is a test program for sra.u instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpn -mabi=ilp32d -O0" } */

#include <rvp_intrinsic.h>
#include <stdlib.h>

static __attribute__ ((noinline))
int uars (int ra, uint32_t rb)
{
  return __rv_sra_u (ra, rb);
}
/* { dg-final { scan-assembler-times "sra.u" 1 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
