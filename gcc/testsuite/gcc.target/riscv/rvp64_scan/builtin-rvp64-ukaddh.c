/* ukaddh also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for ukaddh instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
uint32_t hddak (uint16_t ra, uint16_t rb)
{
  return __rv_ukaddh (ra, rb);
}
/* { dg-final { scan-assembler-times "ukaddh" 2 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
