/* umsr64 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for umsr64 instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpn_zpsf -mabi=ilp32d -O0" } */

#include <rvp_intrinsic.h>
#include <stdlib.h>

uint64_t rsmu (uint64_t t, unsigned int a, unsigned int b)
{
  return __rv_umsr64 (t, a, b);
}

uint64_t test_autogen(uint64_t t, uint32_t a, uint32_t b) {
  return t - (uint64_t)a * (uint64_t)b;
}

/* { dg-final { scan-assembler-times "umsr64" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
