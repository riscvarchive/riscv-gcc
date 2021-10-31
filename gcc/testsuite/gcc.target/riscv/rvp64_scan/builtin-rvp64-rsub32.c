/* rsub32 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for rsub32 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
uint64_t busr (uint64_t ra, uint64_t rb)
{
  return __rv_rsub32 (ra, rb);
}

static __attribute__ ((noinline))
int32x2_t busr_v (int32x2_t ra, int32x2_t rb)
{
  return __rv_v_rsub32 (ra, rb);
}
/* { dg-final { scan-assembler-times "rsub32" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
