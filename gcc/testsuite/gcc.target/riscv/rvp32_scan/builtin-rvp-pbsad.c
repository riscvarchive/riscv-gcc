/* pbsad also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for pbsad instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpn -mabi=ilp32d -O0" } */

#include <rvp_intrinsic.h>
#include <stdlib.h>

static __attribute__ ((noinline))
uint32_t dasbp (uint32_t ra, uint32_t rb)
{
  return __rv_pbsad (ra, rb);
}
/* { dg-final { scan-assembler-times "pbsad" 2 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
