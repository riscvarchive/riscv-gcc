/* kabs32 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for kabs32 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
uint64_t sbak (uint64_t ra)
{
  return __rv_kabs32 (ra);
}

static __attribute__ ((noinline))
int32x2_t sbak_v (int32x2_t ra)
{
  return __rv_v_kabs32 (ra);
}
/* { dg-final { scan-assembler-times "kabs32" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
