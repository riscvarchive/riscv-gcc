/* smulx8 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for smulx8 instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpn_zpsf -mabi=ilp32d -O0" } */

#include <rvp_intrinsic.h>
#include <stdlib.h>

static __attribute__ ((noinline))
uint64_t xlums (uint32_t ra, uint32_t rb)
{
  return __rv_smulx8 (ra, rb);
}

static __attribute__ ((noinline))
int16x4_t xlums_v (int8x4_t ra, int8x4_t rb)
{
  return __rv_v_smulx8 (ra, rb);
}
/* { dg-final { scan-assembler-times "smulx8" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
