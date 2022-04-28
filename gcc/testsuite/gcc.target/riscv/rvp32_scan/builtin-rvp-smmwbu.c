/* This is a test program for smmwb.u instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpn -mabi=ilp32d -O0" } */

#include <rvp_intrinsic.h>
#include <stdlib.h>

static __attribute__ ((noinline))
int32_t u_bwmms (int32_t ra, uint32_t rb)
{
  return __rv_smmwb_u (ra, rb);
}

static __attribute__ ((noinline))
int32_t u_bwmms_v (int32_t ra, int16x2_t rb)
{
  return __rv_v_smmwb_u (ra, rb);
}
/* { dg-final { scan-assembler-times "smmwb.u" 2 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
