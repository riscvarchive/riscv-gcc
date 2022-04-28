/* kmads also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for kmads instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
int64_t sdamk (uint64_t rd, uint64_t ra, uint64_t rb)
{
  return __rv_kmads (rd, ra, rb);
}

static __attribute__ ((noinline))
int32x2_t sdamk_v (int32x2_t rd, int16x4_t ra, int16x4_t rb)
{
  return __rv_v_kmads (rd, ra, rb);
}
/* { dg-final { scan-assembler-times "kmads" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
