/* uradd64 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for uradd64 instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpn_zpsf -mabi=ilp32d -O0" } */

#include <rvp_intrinsic.h>
#include <stdlib.h>

static __attribute__ ((noinline))
uint64_t ddaru (uint64_t ra, uint64_t rb)
{
  return __rv_uradd64 (ra, rb);
}
/* { dg-final { scan-assembler-times "uradd64" 2 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
