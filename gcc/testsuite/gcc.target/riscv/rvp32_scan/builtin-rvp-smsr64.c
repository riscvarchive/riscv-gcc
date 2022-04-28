/* smsr64 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for smsr64 instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpn_zpsf -mabi=ilp32d -O2" } */

#include <rvp_intrinsic.h>
#include <stdlib.h>

int64_t rsms (int64_t t, int a, int b)
{
  return __rv_smsr64 (t, a, b);
}

int64_t test_autogen(int64_t t, int32_t a, int32_t b) {
  return t - (int64_t)a * (int64_t)b;
}

/* { dg-final { scan-assembler-times "smsr64" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
