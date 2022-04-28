/* uclip32 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add8 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
uint64_t pilcu (int64_t ra)
{
  return __rv_uclip32 (ra, 5);
}
/* { dg-final { scan-assembler-times "uclip32" 2 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
