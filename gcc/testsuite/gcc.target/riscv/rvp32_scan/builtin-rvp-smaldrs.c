/* smaldrs also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for smaldrs instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpn_zpsf -mabi=ilp32d -O0" } */

#include <rvp_intrinsic.h>
#include <stdlib.h>

static __attribute__ ((noinline))
int64_t srdlams (int64_t t, uint32_t a, uint32_t b)
{
  return __rv_smaldrs (t, a, b);
}

static __attribute__ ((noinline))
int64_t srdlams_v (int64_t t, int16x2_t a, int16x2_t b)
{
  return __rv_v_smaldrs (t, a, b);
}

/* { dg-final { scan-assembler-times "smaldrs" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
