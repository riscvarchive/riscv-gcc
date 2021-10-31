/* radd8 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for radd8 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
uint64_t ddar (uint64_t ra, uint64_t rb)
{
  return __rv_radd8 (ra, rb);
}

static __attribute__ ((noinline))
int8x8_t ddar_v (int8x8_t ra, int8x8_t rb)
{
  return __rv_v_radd8 (ra, rb);
}
/* { dg-final { scan-assembler-times "radd8" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
