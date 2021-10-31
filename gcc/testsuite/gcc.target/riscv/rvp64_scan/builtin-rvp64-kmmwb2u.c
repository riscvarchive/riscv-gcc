/* This is a test program for kmmwb2u instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
int64_t u2bwmmk (int64_t ra, int64_t rb)
{
  return __rv_kmmwb2_u (ra, rb);
}

static __attribute__ ((noinline))
int32x2_t u2bwmmk_v (int32x2_t ra, int16x4_t rb)
{
  return __rv_v_kmmwb2_u (ra, rb);
}
/* { dg-final { scan-assembler-times "kmmwb2.u" 2 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
