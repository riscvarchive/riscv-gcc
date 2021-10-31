/* This is a test program for kslra32.u instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
uint64_t u23arlsk (uint64_t ra, uint32_t rb)
{
  return __rv_kslra32_u (ra, rb);
}

static __attribute__ ((noinline))
int32x2_t u23arlsk_v (int32x2_t ra, uint32_t rb)
{
  return __rv_v_kslra32_u (ra, rb);
}
/* { dg-final { scan-assembler-times "kslra32.u" 2 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
