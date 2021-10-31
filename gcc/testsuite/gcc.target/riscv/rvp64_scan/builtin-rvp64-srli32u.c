/* This is a test program for srli32u instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
uint64_t u23ilrs (uint64_t ra)
{
  return __rv_srl32_u (ra, 4);
}

static __attribute__ ((noinline))
uint32x2_t u23ilrs_v (uint32x2_t ra)
{
  return __rv_v_srl32_u (ra, 4);
}
/* { dg-final { scan-assembler-times "srli32.u" 2 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
