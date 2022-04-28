/* kmmawt also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for kmmawt instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
int64_t twammk (int64_t rd, int64_t ra, uint64_t rb)
{
  return __rv_kmmawt (rd, ra, rb);
}

static __attribute__ ((noinline))
int32x2_t twammk_v (int32x2_t rd, int32x2_t ra, int16x4_t rb)
{
  return __rv_v_kmmawt (rd, ra, rb);
}
/* { dg-final { scan-assembler-times "kmmawt" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
