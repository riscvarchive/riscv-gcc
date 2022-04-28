/* This is a test program for smbb instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
int64_t bbms (uint64_t ra, uint64_t rb)
{
  return __rv_smbb16 (ra, rb);
}

static __attribute__ ((noinline))
int32x2_t bbms_v (int16x4_t ra, int16x4_t rb)
{
  return __rv_v_smbb16 (ra, rb);
}
/* { dg-final { scan-assembler-times "smbb16" 2 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
