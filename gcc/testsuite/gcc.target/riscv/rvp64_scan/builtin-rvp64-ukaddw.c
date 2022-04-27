/* ukaddw also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for ukaddw instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
int32_t wddak (int32_t ra, int32_t rb)
{
  return __rv_ukaddw (ra, rb);
}
/* { dg-final { scan-assembler-times "ukaddw" 2 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
