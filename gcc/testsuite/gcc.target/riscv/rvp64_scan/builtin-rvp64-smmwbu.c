/* This is a test program for smmwbu instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
int64_t ubwmms (int64_t ra, int64_t rb)
{
  return __rv_smmwb_u (ra, rb);
}

static __attribute__ ((noinline))
int32x2_t ubwmms_v (int32x2_t ra, int16x4_t rb)
{
  return __rv_v_smmwb_u (ra, rb);
}
/* { dg-final { scan-assembler-times "smmwb.u" 2 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
