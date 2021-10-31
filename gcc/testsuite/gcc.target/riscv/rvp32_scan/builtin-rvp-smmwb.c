/* smmwb also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for smmwb instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpn -mabi=ilp32d -O0" } */

#include <rvp_intrinsic.h>
#include <stdlib.h>

static __attribute__ ((noinline))
int32_t bwmms (int32_t ra, uint32_t rb)
{
  return __rv_smmwb (ra, rb);
}

static __attribute__ ((noinline))
int32_t bwmms_v (int32_t ra, int16x2_t rb)
{
  return __rv_v_smmwb (ra, rb);
}
/* { dg-final { scan-assembler-times "smmwb" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
