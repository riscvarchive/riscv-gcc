/* smax16 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for smax16 instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpn -mabi=ilp32d -O0" } */

#include <rvp_intrinsic.h>
#include <stdlib.h>

static __attribute__ ((noinline))
uint32_t xams (uint32_t ra, uint32_t rb)
{
  return __rv_smax16 (ra, rb);
}

static __attribute__ ((noinline))
int16x2_t xams_v (int16x2_t ra, int16x2_t rb)
{
  return __rv_v_smax16 (ra, rb);
}
/* { dg-final { scan-assembler-times "smax16" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
