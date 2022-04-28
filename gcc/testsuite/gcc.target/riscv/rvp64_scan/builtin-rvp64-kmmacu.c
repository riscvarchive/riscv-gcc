/* This is a test program for kmmacu instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
int64_t ucammk (int64_t rd, int64_t ra, int64_t rb)
{
  return __rv_kmmac_u (rd, ra, rb);
}

static __attribute__ ((noinline))
int32x2_t ucammk2 (int32x2_t rd, int32x2_t ra, int32x2_t rb)
{
  return __rv_v_kmmac_u (rd, ra, rb);
}
/* { dg-final { scan-assembler-times "kmmac.u" 2 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
