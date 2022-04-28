/* smalda also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for smalda instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpn_zpsf -mabi=ilp32d -O0" } */

#include <rvp_intrinsic.h>
#include <stdlib.h>

static __attribute__ ((noinline))
int64_t adlams (int64_t t, uint32_t a, uint32_t b)
{
  return __rv_smalda (t, a, b);
}

static __attribute__ ((noinline))
int64_t adlams_v (int64_t t, int16x2_t a, int16x2_t b)
{
  return __rv_v_smalda (t, a, b);
}

/* { dg-final { scan-assembler-times "smalda" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
