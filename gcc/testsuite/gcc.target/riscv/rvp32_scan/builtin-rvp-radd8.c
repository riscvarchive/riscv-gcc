/* radd8 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for radd8 instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpn -mabi=ilp32d -O0" } */

#include <rvp_intrinsic.h>
#include <stdlib.h>

static __attribute__ ((noinline))
uint32_t ddar (uint32_t ra, uint32_t rb)
{
  return __rv_radd8 (ra, rb);
}

static __attribute__ ((noinline))
int8x4_t ddar_v (int8x4_t ra, int8x4_t rb)
{
  return __rv_v_radd8 (ra, rb);
}
/* { dg-final { scan-assembler-times "radd8" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
