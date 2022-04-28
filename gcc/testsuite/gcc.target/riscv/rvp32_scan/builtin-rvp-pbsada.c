/* pbsada also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for pbsada instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpn -mabi=ilp32d -O0" } */

#include <rvp_intrinsic.h>
#include <stdlib.h>

static __attribute__ ((noinline))
uint32_t adasbp (uint32_t ra, uint32_t rb, uint32_t rc)
{
  return __rv_pbsada (ra, rb, rc);
}
/* { dg-final { scan-assembler-times "pbsada" 2 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
