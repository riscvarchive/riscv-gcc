/* ursubw also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for ursubw instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsf -mabi=lp64d -O0" } */
#include <rvp_intrinsic.h>
#include <stdlib.h>
static __attribute__ ((noinline))
uint32_t wbusru (uint32_t ra, uint32_t rb)
{
  return __rv_ursubw (ra, rb);
}
/* { dg-final { scan-assembler-times "ursubw" 2 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
