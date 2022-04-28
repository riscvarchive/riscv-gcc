/* This is a test program for smbb instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpn -mabi=ilp32d -O0" } */

#include <rvp_intrinsic.h>
#include <stdlib.h>

static __attribute__ ((noinline))
int32_t bbms (uint32_t ra, uint32_t rb)
{
  return __rv_smbb16 (ra, rb);
}

static __attribute__ ((noinline))
int bbms_v (int16x2_t ra, int16x2_t rb)
{
  return __rv_v_smbb16 (ra, rb);
}
/* { dg-final { scan-assembler-times "smbb16" 2 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
