/* khmtt also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for khmtt instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
int64_t ttmhk (uint32_t ra, uint32_t rb)
{
  return __rv_khmtt (ra, rb);
}

static __attribute__ ((noinline))
int64_t ttmhk_v (int16x2_t ra, int16x2_t rb)
{
  return __rv_v_khmtt (ra, rb);
}
/* { dg-final { scan-assembler-times "khmtt" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
