/* This is a test program for smmwtu instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
int64_t utwmms (int64_t ra, int64_t rb)
{
  return __rv_smmwt_u (ra, rb);
}

static __attribute__ ((noinline))
int32x2_t utwmms_v (int32x2_t ra, int16x4_t rb)
{
  return __rv_v_smmwt_u (ra, rb);
}
/* { dg-final { scan-assembler-times "smmwt.u" 2 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
