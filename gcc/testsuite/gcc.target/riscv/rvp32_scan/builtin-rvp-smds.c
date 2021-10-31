/* smds also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for smds instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpn -mabi=ilp32d -O0" } */

#include <rvp_intrinsic.h>
#include <stdlib.h>

static __attribute__ ((noinline))
int32_t sdms (uint32_t ra, uint32_t rb)
{
  return __rv_smds (ra, rb);
}

static __attribute__ ((noinline))
int32_t sdms_v (int16x2_t ra, int16x2_t rb)
{
  return __rv_v_smds (ra, rb);
}
/* { dg-final { scan-assembler-times "smds" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
