/* smul16 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for smul16 instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpn_zpsf -mabi=ilp32d -O0" } */

#include <rvp_intrinsic.h>
#include <stdlib.h>

static __attribute__ ((noinline))
uint64_t lums (uint32_t ra, uint32_t rb)
{
  return __rv_smul16 (ra, rb);
}

static __attribute__ ((noinline))
int32x2_t lums_v (int16x2_t ra, int16x2_t rb)
{
  return __rv_v_smul16 (ra, rb);
}
/* { dg-final { scan-assembler-times "smul16" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
