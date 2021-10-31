/* ksub8 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for sub8 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
uint64_t busk (uint64_t ra, uint64_t rb)
{
  return __rv_ksub8 (ra, rb);
}

static __attribute__ ((noinline))
int8x8_t busk_v (int8x8_t ra, int8x8_t rb)
{
  return __rv_v_ksub8 (ra, rb);
}
/* { dg-final { scan-assembler-times "ksub8" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
