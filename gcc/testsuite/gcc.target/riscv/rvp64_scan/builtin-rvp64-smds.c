/* smds also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for smds instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
int64_t sdms (uint64_t ra, uint64_t rb)
{
  return __rv_smds (ra, rb);
}

static __attribute__ ((noinline))
int32x2_t sdms_v (int16x4_t ra, int16x4_t rb)
{
  return __rv_v_smds (ra, rb);
}
/* { dg-final { scan-assembler-times "smds" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
