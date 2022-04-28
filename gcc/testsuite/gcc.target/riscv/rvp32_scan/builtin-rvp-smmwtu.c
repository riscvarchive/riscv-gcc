/* This is a test program for smmwt.u instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpn -mabi=ilp32d -O0" } */

#include <rvp_intrinsic.h>
#include <stdlib.h>

static __attribute__ ((noinline))
int32_t u_twmms (int32_t ra, uint32_t rb)
{
  return __rv_smmwt_u (ra, rb);
}

static __attribute__ ((noinline))
int32_t u_twmms_v (int32_t ra, int16x2_t rb)
{
  return __rv_v_smmwt_u (ra, rb);
}
/* { dg-final { scan-assembler-times "smmwt.u" 2 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
