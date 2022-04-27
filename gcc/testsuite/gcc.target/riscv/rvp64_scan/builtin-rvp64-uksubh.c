/* uksubh also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for uksubh instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
uint32_t hbusk (uint16_t ra, uint16_t rb)
{
  return __rv_uksubh (ra, rb);
}
/* { dg-final { scan-assembler-times "uksubh" 2 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
