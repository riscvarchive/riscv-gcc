/* This is a test program for swap16 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
uint64_t paws (uint64_t a)
{
  return __rv_swap16 (a);
}

static __attribute__ ((noinline))
uint16x4_t paws_v (uint16x4_t a)
{
  return __rv_v_swap16 (a);
}
/* { dg-final { scan-assembler-times "pkbt16" 2 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
