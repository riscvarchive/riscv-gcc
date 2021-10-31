/* smin32 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for smin32 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
uint64_t nims (uint64_t ra, uint64_t rb)
{
  return __rv_smin32 (ra, rb);
}

static __attribute__ ((noinline))
int32x2_t nims_v (int32x2_t ra, int32x2_t rb)
{
  return __rv_v_smin32 (ra, rb);
}
/* { dg-final { scan-assembler-times "smin32" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
