/* kmmwt2 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for kmmwt2 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
int64_t twmmk (int64_t ra, uint64_t rb)
{
  return __rv_kmmwt2 (ra, rb);
}

static __attribute__ ((noinline))
int32x2_t twmmk_v (int32x2_t ra, int16x4_t rb)
{
  return __rv_v_kmmwt2 (ra, rb);
}
/* { dg-final { scan-assembler-times "kmmwt2" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
