/* smalxda also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for smalxda instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
int64_t adxlams (int64_t t, uint64_t a, uint64_t b)
{
  return __rv_smalxda (t, a, b);
}

static __attribute__ ((noinline))
int64_t adxlams_v (int64_t t, int16x4_t a, int16x4_t b)
{
  return __rv_v_smalxda (t, a, b);
}

/* { dg-final { scan-assembler-times "smalxda" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
