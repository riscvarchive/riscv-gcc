/* This is a test program for slli32 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
uint64_t ills (uint64_t ra)
{
  return __rv_sll32 (ra, 4);
}

static __attribute__ ((noinline))
uint32x2_t ills_v (uint32x2_t ra)
{
  return __rv_v_sll32 (ra, 4);
}
/* { dg-final { scan-assembler-times "slli32" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
