/* smsr64 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for smsr64 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
int64_t rsms (int64_t rd, int64_t ra, int64_t rb)
{
  return __rv_smsr64 (rd, ra, rb);
}
/* { dg-final { scan-assembler-times "smsr64" 2 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
