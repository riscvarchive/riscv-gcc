/* This is a test program for sril16.u instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
uint64_t u_61ilrs (uint64_t ra)
{
  return __rv_srl16_u (ra, 4);
}

static __attribute__ ((noinline))
uint16x4_t u_61ilrs_v (uint16x4_t ra)
{
  return __rv_v_srl16_u (ra, 4);
}
/* { dg-final { scan-assembler-times "srli16.u" 2 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
