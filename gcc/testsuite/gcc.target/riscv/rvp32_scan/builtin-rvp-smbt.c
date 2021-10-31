/* This is a test program for smbt instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpn -mabi=ilp32d -O0" } */

#include <rvp_intrinsic.h>
#include <stdlib.h>

static __attribute__ ((noinline))
int32_t tbms (uint32_t ra, uint32_t rb)
{
  return __rv_smbt16 (ra, rb);
}

static __attribute__ ((noinline))
int32_t tbms_v (int16x2_t ra, int16x2_t rb)
{
  return __rv_v_smbt16 (ra, rb);
}
/* { dg-final { scan-assembler-times "smbt16" 2 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
