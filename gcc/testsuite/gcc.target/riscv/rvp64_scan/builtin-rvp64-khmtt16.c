/* khmtt16 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for khmtt16 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
uint64_t ttmhk (uint64_t ra, uint64_t rb)
{
  return __rv_khmtt16 (ra, rb);
}

static __attribute__ ((noinline))
int32x2_t ttmhk_v (int16x4_t ra, int16x4_t rb)
{
  return __rv_v_khmtt16 (ra, rb);
}
/* { dg-final { scan-assembler-times "khmtt16" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
