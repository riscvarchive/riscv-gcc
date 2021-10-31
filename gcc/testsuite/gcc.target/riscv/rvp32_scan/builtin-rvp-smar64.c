/* smar64 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for smar64 instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpn_zpsf -mabi=ilp32d -O0" } */

#include <rvp_intrinsic.h>
#include <stdlib.h>

static __attribute__ ((noinline))
int64_t rams (int64_t t, int a, int b)
{
  return __rv_smar64 (t, a, b);
}
/* { dg-final { scan-assembler-times "smar64" 2 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
