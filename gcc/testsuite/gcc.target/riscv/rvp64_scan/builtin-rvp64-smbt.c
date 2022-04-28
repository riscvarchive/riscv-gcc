/* This is a test program for smbt instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
int64_t tbms (uint64_t ra, uint64_t rb)
{
  return __rv_smbt16 (ra, rb);
}

static __attribute__ ((noinline))
int32x2_t tbms_v (int16x4_t ra, int16x4_t rb)
{
  return __rv_v_smbt16 (ra, rb);
}
/* { dg-final { scan-assembler-times "smbt16" 2 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
