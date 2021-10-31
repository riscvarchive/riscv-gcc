/* This is a test program for kslra16 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
uint64_t u61arlsk (uint64_t ra, int32_t rb)
{
  return __rv_kslra16_u (ra, rb);
}

static __attribute__ ((noinline))
int16x4_t u61arlsk_v (int16x4_t ra, int32_t rb)
{
  return __rv_v_kslra16_u (ra, rb);
}
/* { dg-final { scan-assembler-times "kslra16.u" 2 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
