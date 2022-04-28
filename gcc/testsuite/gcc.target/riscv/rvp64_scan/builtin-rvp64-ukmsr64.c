/* ukmsr64 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for ukmsr64 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
uint64_t rsmku (uint64_t rd, uint64_t ra, uint64_t rb)
{
  return __rv_ukmsr64 (rd, ra, rb);
}
/* { dg-final { scan-assembler-times "ukmsr64" 2 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
