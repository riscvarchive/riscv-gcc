/* kmxda also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for kmxda instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
int64_t adxmk (uint64_t ra, uint64_t rb)
{
  return __rv_kmxda (ra, rb);
}

static __attribute__ ((noinline))
int32x2_t adxmk_v (int16x4_t ra, int16x4_t rb)
{
  return __rv_v_kmxda (ra, rb);
}
/* { dg-final { scan-assembler-times "kmxda" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
