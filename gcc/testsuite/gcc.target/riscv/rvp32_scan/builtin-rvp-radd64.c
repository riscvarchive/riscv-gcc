/* radd64 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for radd64 instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpn_zpsf -mabi=ilp32d -O0" } */

#include <rvp_intrinsic.h>
#include <stdlib.h>

static __attribute__ ((noinline))
int64_t ddar (int64_t ra, int64_t rb)
{
  return __rv_radd64 (ra, rb);
}
/* { dg-final { scan-assembler-times "radd64" 2 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
