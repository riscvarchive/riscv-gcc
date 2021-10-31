/* This is a test program for kmmawb.u instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
int64_t ubwammk (int64_t rd, int64_t ra, uint64_t rb)
{
  return __rv_kmmawb_u (rd, ra, rb);
}

static __attribute__ ((noinline))
int32x2_t ubwammk_v (int32x2_t rd, int32x2_t ra, int16x4_t rb)
{
  return __rv_v_kmmawb_u (rd, ra, rb);
}
/* { dg-final { scan-assembler-times "kmmawb.u" 2 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
