/* crsa16 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for crsa16 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
uint64_t asrc (uint64_t ra, uint64_t rb)
{
  return __rv_crsa16 (ra, rb);
}

static __attribute__ ((noinline))
uint16x4_t asrcu_v (uint16x4_t ra, uint16x4_t rb)
{
  return __rv_v_ucrsa16 (ra, rb);
}

static __attribute__ ((noinline))
int16x4_t asrcs_v (int16x4_t ra, int16x4_t rb)
{
  return __rv_v_scrsa16 (ra, rb);
}
/* { dg-final { scan-assembler-times "crsa16" 4 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
