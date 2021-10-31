/* crsa32 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for crsa32 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
uint64_t asrc (uint64_t ra, uint64_t rb)
{
  return __rv_crsa32 (ra, rb);
}

static __attribute__ ((noinline))
uint32x2_t asrcu_v (uint32x2_t ra, uint32x2_t rb)
{
  return __rv_v_ucrsa32 (ra, rb);
}

static __attribute__ ((noinline))
int32x2_t asrcs_v (int32x2_t ra, int32x2_t rb)
{
  return __rv_v_scrsa32 (ra, rb);
}
/* { dg-final { scan-assembler-times "crsa32" 4 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
