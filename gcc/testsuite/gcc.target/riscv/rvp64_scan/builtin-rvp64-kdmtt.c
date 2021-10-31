/* kdmtt also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for kdmtt instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
int32_t ttmdk (uint32_t ra, uint32_t rb)
{
  return __rv_kdmtt (ra, rb);
}

static __attribute__ ((noinline))
int32_t ttmdk_v (int16x2_t ra, int16x2_t rb)
{
  return __rv_v_kdmtt (ra, rb);
}
/* { dg-final { scan-assembler-times "kdmtt" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
