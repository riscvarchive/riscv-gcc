/* This is a test program for srai16 instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpn -mabi=ilp32d -O0" } */

#include <rvp_intrinsic.h>
#include <stdlib.h>

static __attribute__ ((noinline))
uint32_t iars (uint32_t ra)
{
  return __rv_sra16 (ra, 4);
}

static __attribute__ ((noinline))
int16x2_t iars_v (int16x2_t ra)
{
  return __rv_v_sra16 (ra, 4);
}
/* { dg-final { scan-assembler-times "srai16" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
