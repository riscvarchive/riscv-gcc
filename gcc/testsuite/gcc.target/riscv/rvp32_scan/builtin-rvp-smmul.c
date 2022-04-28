/* This is a test program for smmul instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpn -mabi=ilp32d -O0" } */

#include <rvp_intrinsic.h>
#include <stdlib.h>

static __attribute__ ((noinline))
int32_t lumms (int32_t ra, int32_t rb)
{
  return __rv_smmul (ra, rb);
}
/* { dg-final { scan-assembler-times "mulh" 1 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
